/* Copyright (c) 2024 Skyward Experimental Rocketry
 * Author: Camillo Nicoletti
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

#include <iostream>
#include <miosix.h>
#include "LIS3DSH.h" // Include the library for the LIS3DSH sensor

// SPI pin configuration using miosix::Gpio
typedef miosix::Gpio<GPIOA_BASE, 5> SCK;  // SPI1_SCK
typedef miosix::Gpio<GPIOA_BASE, 6> MISO; // SPI1_MISO
typedef miosix::Gpio<GPIOA_BASE, 7> MOSI; // SPI1_MOSI
typedef miosix::Gpio<GPIOE_BASE, 3> CS;   // Chip Select

int main() {

    // Configure SPI pins
    SCK::mode(miosix::Mode::ALTERNATE); // Alternate mode for clock
    SCK::alternateFunction(5);
    MISO::mode(miosix::Mode::ALTERNATE); // Alternate mode for MISO
    MISO::alternateFunction(5);
    MOSI::mode(miosix::Mode::ALTERNATE); // Alternate mode for MOSI
    MOSI::alternateFunction(5);
    CS::mode(miosix::Mode::OUTPUT);    // Output mode for Chip Select
    CS::high();                          // Set CS high initially

    std::cout << "SPI pins configured correctly" << std::endl;

    // Create an instance of SPIBusInterface
    Boardcore::SPIBus spi(SPI1);

    std::cout << "SPI initialized correctly" << std::endl;

    // Initialize the LIS3DSH sensor with optional parameters
    Boardcore::LIS3DSH sensor(
        spi,           // SPI interface
        CS::getPin(),  // Chip Select as miosix::GpioPin
        Boardcore::OutPutDataRate::ODR_100_HZ, // Output Data Rate
        Boardcore::BlockDataUpdate::UPDATE_AFTER_READ_MODE, // Block Data Update mode
        Boardcore::FullScaleRange::FS_2G        // Full scale range (2G, 4G, 8G, etc.)
    );

    std::cout << "LIS3DSH sensor configured" << std::endl;

    // Check if the sensor initialization was successful
    if (!sensor.init()) {
        std::cout << "Error initializing the LIS3DSH sensor" << std::endl;
        return 1;
    }

    std::cout << "LIS3DSH sensor initialized correctly" << std::endl;

    // Loop to acquire data from the sensor
    while (true) {
        // Acquire data from the sensor
        auto sample = sensor.getLastSample();

        // Print acceleration data
        std::cout << "X: " << sample.accelerationX 
                  << " Y: " << sample.accelerationY
                  << " Z: " << sample.accelerationZ << std::endl;

        // Pause for 200ms
        miosix::Thread::sleep(200);
    }

    return 0;
}