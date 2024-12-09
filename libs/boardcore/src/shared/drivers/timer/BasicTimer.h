/* Copyright (c) 2021 Skyward Experimental Rocketry
 * Author: Alberto Nidasio
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

#include <utils/ClockUtils.h>

#include "TimerUtils.h"

namespace Boardcore
{

/**
 * @brief Driver for STM32 basic timers.
 *
 * This driver applies to the whole STM32F4xx family.
 *
 * Basic timers main features are:
 * - 16bit auto-reload upcounter
 * - 16bit programmable prescaler used to divide (also "on the fly") the counter
 * clock frequency by any factor between 1 and 65536
 * - Interrupt/DMA generation on the update event
 *
 * TIM6 and TIM7 are basic timers.
 *
 * You can use any other timer as a basic timer. However TIM9 to TIM 14 can't
 * generate DMA requests.
 *
 * The main block of the programmable timer is a 16-bit upcounter which is
 * incremented every clock cycle, the clock frequency can be divided by a 16-bit
 * prescaler and the counter resets when it reaches the auto-reload value.
 *
 * Every time the counter reaches the auto-reload value, an UPDATE EVENT (UEV)
 * is fired and the counter is reset to 0. You can also generate the UEV by
 * software.
 *
 * The counter is working only when the prescaler is active, thus receiving the
 * clock signal.
 *
 * The auto-reload register can be preloaded, meaning that there you can use a
 * preload register which acts as a buffer. If enabled, when you change the
 * auto-reload register, its content is transferred into the shadow register
 * (they became active) at each UEV, otherwise the new value takes effect
 * immediately.
 *
 * You can change on the fly the prescaler value as well as the auto-reload
 * register and the counter.
 *
 * When the UEV occurs, all the registers are updated and the update flag is
 * set:
 * - The buffer of the prescaler is reloaded with the preload value (PSC)
 * - The auto-reload shadow register is updated with the preload value (ARR)
 *
 * The clock source is provided by the internal clock source.
 * For STM32F4s they are:
 * - APB1: TIM2-7/12-15
 * - APB2: TIM1/8-11
 */
class BasicTimer
{
public:
    /**
     * @brief Create a BasicTimer object. Note that this does not resets the
     * timer configuration but automatically enables the timer peripheral clock.
     */
    explicit BasicTimer(TIM_TypeDef *timer);

    /**
     * @brief Disables the peripheral clock.
     */
    ~BasicTimer();

    TIM_TypeDef *getTimer();

    uint8_t getTimerNumber();

    /**
     * @brief Resets the timer configuration to the default state.
     *
     * This means that:
     * - Auto reload register is not buffered, thus when you modify its value it
     * is taken into effect immediately
     * - One pulse mode disabled
     * - UEV and UG can trigger interrupt and DMA
     * - UEV generation (UG) is enabled
     * - The counter is disabled
     * - Master mode reset
     * - Interrupt and DMA request generation disabled
     * - Counter and prescaler set to 0
     * - Auto reload register set to 65535 (2^16-1)
     */
    virtual void reset();

    virtual void enable();

    virtual void disable();

    virtual bool isEnabled() final;

    /**
     * @brief The auto reload register is buffered.
     *
     * This means that the shadow register is used and the auto reload value
     * will became active at the next UEV.
     */
    virtual void enableAutoReloadPreload() final;

    /**
     * @brief Tha auto reload register is not buffered.
     *
     * This means that when you change the auto-reload register, its value is
     * taken into account immediately.
     */
    virtual void disableAutoReloadPreload() final;

    /**
     * @brief When enabled, the UEV is generated by the counter overflow and
     * software UEV generation.
     */
    virtual void enableUpdateEventGeneration() final;

    /**
     * @brief The UEV is disabled.
     *
     * However the generateUpdate() function still works.
     */
    virtual void disableUpdateEventGeneration() final;

    /**
     * @brief Re-initializes the timer counter and generate an update of the
     * registers (the prescaler is cleared too).
     */
    virtual void generateUpdate() final;

    uint16_t readCounter();

    void setCounter(uint16_t counterValue);

    virtual uint16_t readPrescaler() final;

    /**
     * @brief Updated the prescaler value.
     *
     * Keep in mind that the new prescaler value is taken into account only at
     * the next update event. If you need to change it immediately you need to
     * call generateUpdate() and make sure that UEV generation is enabled (which
     * is by default).
     */
    virtual void setPrescaler(uint16_t prescalerValue) final;

    virtual int getFrequency() final;

    /**
     * @brief Allows to set directly the frequency of the timer's clock.
     *
     * @param frequency Target frequency for the timer's clock.
     */
    virtual void setFrequency(int frequency) final;

    uint16_t readAutoReloadRegister();

    void setAutoReloadRegister(uint16_t autoReloadValue);

    virtual void enableUpdateInterrupt() final;

    virtual void disableUpdateInterrupt() final;

    virtual void enableUpdateDMARequest() final;

    virtual void disableUpdateDMARequest() final;

    virtual void enableOnePulseMode() final;

    virtual void disableOnePulseMode() final;

    virtual void enableUGInterruptAndDMA() final;

    virtual void disableUGInterruptAndDMA() final;

    virtual void setMasterMode(TimerUtils::MasterMode masterMode);

    static void clearUpdateInterruptFlag(TIM_TypeDef *timer);

protected:
    TIM_TypeDef *timer;
};

inline BasicTimer::BasicTimer(TIM_TypeDef *timer) : timer(timer)
{
    ClockUtils::enablePeripheralClock(timer);
}

inline BasicTimer::~BasicTimer() { ClockUtils::disablePeripheralClock(timer); }

inline TIM_TypeDef *BasicTimer::getTimer() { return timer; }

inline uint8_t BasicTimer::getTimerNumber()
{
    if (timer == TIM1)
        return 1;
    else if (timer == TIM2)
        return 2;
    else if (timer == TIM3)
        return 3;
    else if (timer == TIM4)
        return 4;
    else if (timer == TIM5)
        return 5;
    else if (timer == TIM6)
        return 6;
    else if (timer == TIM7)
        return 7;
    else if (timer == TIM8)
        return 8;
    else if (timer == TIM9)
        return 9;
    else if (timer == TIM10)
        return 10;
    else if (timer == TIM11)
        return 11;
    else if (timer == TIM12)
        return 12;
    else if (timer == TIM13)
        return 13;
    else if (timer == TIM14)
        return 14;
    else
        return 0;
}

inline void BasicTimer::reset()
{
    timer->CR1  = 0;
    timer->CR2  = 0;
    timer->DIER = 0;
    timer->CNT  = 0;
    timer->PSC  = 0;
    timer->ARR  = 0xFFFF;
}

inline void BasicTimer::enable() { timer->CR1 |= TIM_CR1_CEN; }

inline void BasicTimer::disable() { timer->CR1 &= ~TIM_CR1_CEN; }

inline bool BasicTimer::isEnabled() { return timer->CR1 & TIM_CR1_CEN; }

inline void BasicTimer::enableAutoReloadPreload()
{
    timer->CR1 |= TIM_CR1_ARPE;
}

inline void BasicTimer::disableAutoReloadPreload()
{
    timer->CR1 &= ~TIM_CR1_ARPE;
}

inline void BasicTimer::enableUpdateEventGeneration()
{
    timer->CR1 &= ~TIM_CR1_UDIS;
}

inline void BasicTimer::disableUpdateEventGeneration()
{
    timer->CR1 |= TIM_CR1_UDIS;
}

inline void BasicTimer::generateUpdate() { timer->EGR |= TIM_EGR_UG; }

inline uint16_t BasicTimer::readCounter() { return timer->CNT; }

inline void BasicTimer::setCounter(uint16_t counterValue)
{
    timer->CNT = counterValue;
}

inline uint16_t BasicTimer::readPrescaler() { return timer->PSC; }

inline void BasicTimer::setPrescaler(uint16_t prescalerValue)
{
    timer->PSC = prescalerValue;
}

inline int BasicTimer::getFrequency()
{
    return TimerUtils::getFrequency(timer);
}

inline void BasicTimer::setFrequency(int frequency)
{
    setPrescaler(TimerUtils::computePrescalerValue(timer, frequency));
}

inline uint16_t BasicTimer::readAutoReloadRegister() { return timer->ARR; }

inline void BasicTimer::setAutoReloadRegister(uint16_t autoReloadValue)
{
    timer->ARR = autoReloadValue;
}

inline void BasicTimer::enableUpdateInterrupt() { timer->DIER |= TIM_DIER_UIE; }

inline void BasicTimer::disableUpdateInterrupt()
{
    timer->DIER &= ~TIM_DIER_UIE;
}

inline void BasicTimer::enableUpdateDMARequest()
{
    timer->DIER |= TIM_DIER_UDE;
}

inline void BasicTimer::disableUpdateDMARequest()
{
    timer->DIER &= ~TIM_DIER_UDE;
}

inline void BasicTimer::enableOnePulseMode() { timer->CR1 |= TIM_CR1_OPM; }

inline void BasicTimer::disableOnePulseMode() { timer->CR1 &= ~TIM_CR1_OPM; }

inline void BasicTimer::enableUGInterruptAndDMA()
{
    timer->CR1 &= ~TIM_CR1_URS;
}

inline void BasicTimer::disableUGInterruptAndDMA()
{
    timer->CR1 |= TIM_CR1_URS;
}

inline void BasicTimer::setMasterMode(TimerUtils::MasterMode masterMode)
{
    // Only RESET, ENABLE, UPDATE are available on basic timers
    if (masterMode > TimerUtils::MasterMode::UPDATE)
        return;

    // First clear the configuration
    timer->CR2 &= ~TIM_CR2_MMS;

    // Set the new value
    timer->CR2 |= static_cast<uint32_t>(masterMode);
}

inline void BasicTimer::clearUpdateInterruptFlag(TIM_TypeDef *timer)
{
    timer->SR &= ~TIM_SR_UIF;
}

}  // namespace Boardcore