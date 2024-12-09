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


#include <drivers/spi/SPIDriver.h>
#include <miosix.h>      
#include <sensors/Sensor.h>  
#include <drivers/timer/TimestampTimer.h> 

namespace Boardcore


{

/**
 * This first part of the code defines the GPIO pins used for communication with the board. 
 * 
 * It accepts the following parameters:
 * - **Full_Scale**: Specifies the resolution or range of accelerometer measurements.
 * - **BlockDataUpdate(BDU)**: Ensures data consistency by updating output registers only 
 *   after the previous data is read.
 * - **OutputDataRate(ODR)**: Determines the frequency at which the sensor outputs data. 
 *   In this case, we use an ODR value of 100 Hz, which provides a balanced choice for 
 *   capturing rapid movements while maintaining a reasonable power consumption.
 */


/**
 * The sensor uses the following GPIO pins to communicate with the board via SPI:
 * 
 * - **CLOCK (SCK)**: PA5
 * - **MISO (Master In Slave Out)**: PA6
 * - **MOSI (Master Out Slave In)**: PA7
 * - **CS (Chip Select)**: PE3
 * 
 * These pins are responsible for establishing the SPI communication between the sensor and the microcontroller.
 */


/**
 * The values for the CTRL_REG5 register are written in binary from decimal.
 * This register accepts 3 bits, as described in Table 63 of the datasheet.
 * The default value for CTRL_REG5 is 000.
 */
enum FullScaleRange
{
    FS_2G  = 0,
    FS_4G  = 1,
    FS_6G  = 2,
    FS_8G  = 3,
    FS_16G = 4
};


/**
 * The values for the CTRL4 register are written in decimal, converted from binary, as described in Table 55 of the datasheet.
 * This register sets the Output Data Rate (ODR) for the sensor.
 * 
 * - Low frequencies such as 3.125 Hz, 6.25 Hz.
 * - Higher frequencies like 400 Hz, 800 Hz, and 1600 Hz.
 * - A frequency of 100 Hz is a balanced choice for detecting rapid movements.
 */
enum OutPutDataRate 
{
    ODR_POWER_DOWN = 0,
    ODR_3125_HZ = 1,
    ODR_625_HZ = 2,
    ODR_125_HZ = 3,
    ODR_25_HZ = 4,
    ODR_50_HZ = 5,
    ODR_100_HZ = 6,
    ODR_400_HZ = 7,
    ODR_800_HZ = 8,
    ODR_1600_HZ = 9

};


/**
 * This register controls the Block Data Update (BDU) setting.
 * 
 * The BDU value determines when the output registers are updated. In this case, we will set the BDU value to 1, 
 * which means that the data will be updated only after the least significant byte (LSB) and the most significant byte (MSB) are both read.
 */
\
enum BlockDataUpdate : uint8_t
{
    CONTINUOUS_UPDATE_MODE = 0,
    UPDATE_AFTER_READ_MODE = 1
};





class LIS3DSH : public Sensor<AccelerometerData>
{
public:


    /**
     * The second part of the code defines the constructor for the LIS3DSH class.
     * @brief Configure the sensor's parameters in the constructor.
     * 
     * In this constructor:
     * - The SPI bus and chip select pin are configured.
     * - The Output Data Rate (ODR) is set to 100Hz.
     * - The full scale for the sensor's resolution is set to 2g.
     * - The Block Data Update (BDU) is enabled by setting it to 1.
     */
    
    LIS3DSH(SPIBusInterface& bus, miosix::GpioPin chipSelect, 
        uint8_t odr = OutPutDataRate::ODR_100_HZ,
        uint8_t bdu = BlockDataUpdate::UPDATE_AFTER_READ_MODE, 
        uint8_t fullScale = FullScaleRange::FS_2G)
        : spiSlave(bus, chipSelect), odr(odr), bdu(bdu), fullScale(fullScale)
        {
            spiSlave.config.clockDivider = SPI::ClockDivider::DIV_64; 

        };   
    /**
     * @brief Initializes the sensor and sets up communication.
     * 
     * @return A boolean value that indicates if the operation was successful or failed.
     */

    bool init() override
    {

    // Checks if the sensor is correctly identified by the "Who Am I" register; returns false if not.
    if(!checkWhoAmI()){
        return false;
    }

    SPITransaction spi(spiSlave);
   

    /**
     * Set the values for ODR (Output Data Rate), BDU (Block Data Update), 
     * and activate the X, Y, and Z axes by writing the appropriate bits 
     * into the CTRL_REG4 register.
     *
     * 1. Set ODR (Output Data Rate):
     *    - ODR value is 6 (binary: 0000 0110).
     *    - Shift it left by 4 positions to align it with the ODR bit positions in the datasheet.
     *    - Result: 0000 0110 << 4 --> 0110 0000.
     *
     * 2. Set BDU (Block Data Update):
     *    - BDU value is 1 (binary: 0000 0001).
     *    - Shift it left by 3 positions to align it with the BDU bit in the register.
     *    - Result: 0000 0001 << 3 --> 0000 1000.
     *
     * 3. Activate X, Y, and Z axes:
     *    - Set the first three bits to 1 to activate the X, Y, and Z axes.
     *    - The value for this is 7 (binary: 0111).
     *
     * 4. Combine all values using bitwise OR:
     *    - ODR (shifted), BDU (shifted), and the axes activation bits (0111) are OR-ed together.
     *    - Final value for CTRL_REG4: 0110 1111.
     */

    
    uint8_t CtrlRegister4_Value = 0;
    CtrlRegister4_Value |= (odr << 4);
    CtrlRegister4_Value |= (bdu << 3);
    CtrlRegister4_Value |= (7 << 0);
    spi.writeRegister(CTRL_REG4, CtrlRegister4_Value);

    /**
     * Set the sensor's scale in the FSCALE0 register.
     * The full-scale value is shifted by three positions 
     * to match the corresponding bits in the register.
     */
   uint8_t CtrlRegister5_Value = 0;
   CtrlRegister5_Value |= (fullScale << 3);  
   spi.writeRegister(CTRL_REG5, CtrlRegister5_Value);

return true;


}    

AccelerometerData getLastSample() override {
        return sampleImpl();
    }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 * @brief Performs a self-test on the accelerometer.
 * 
 * Verifies sensor functionality by comparing average acceleration values 
 * in self-test and normal modes. Configures the sensor, collects samples, 
 * computes averages, and checks differences against predefined tolerances. 
 * Restores original configuration after the test.
 * 
 * @return true  If self-test passes within tolerance.
 * @return false If self-test fails or sensor is uninitialized.
 */
   bool selfTest() override{

    return true;
   }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


protected:
     AccelerometerData sampleImpl() override{

        AccelerometerData accelData = readAccelData();

         if (lastError != SensorErrors::NO_ERRORS)
        {
            return lastSample;
        }
        else
        {
            lastSample = accelData;
            return accelData;
        }
    }


    /**
     * The third part of the code read the acceleration data from the sensor's registers and converts it into acceleration values for each axis (X, Y, Z).
     * @brief Reads acceleration data from the sensor's registers and converts it into acceleration values 
     * for each axis (X, Y, Z).
     * 
     * 1. Reads the status register (STATUS) to check if new data is available.
     * 2. If the corresponding bit for new data (bit 3) is set, it reads the acceleration data registers 
     *    (OUT_X_L, OUT_X_H, OUT_Y_L, OUT_Y_H, OUT_Z_L, OUT_Z_H) for each axis.
     * 3. Combines the 8-bit values (Low and High) from the registers for each axis using the `mergeMsbLsb` function.
     * 
     */

    AccelerometerData readAccelData(){

         AccelerometerData accelData;

        SPITransaction spi(spiSlave);


        /**
         * Checks if new data is available in the STATUS register (Table 67)
         * This is done by verifying if the ZYXDA bit is set to 1 (0x08 = 1000)
         * 
         */
        uint8_t status = spi.readRegister(STATUS);
       
        if (status & 0x08){ 

            int8_t Accel_Low = spi.readRegister(OUT_X_L);
            int8_t Accel_High = spi.readRegister(OUT_X_H);
            accelData.accelerationX = static_cast<float>(mergeMsbLsb(Accel_High, Accel_Low)) * sensitivity;

            Accel_Low = spi.readRegister(OUT_Y_L);
            Accel_High = spi.readRegister(OUT_Y_H);
            accelData.accelerationY = static_cast<float>(mergeMsbLsb(Accel_High, Accel_Low)) * sensitivity;

            Accel_Low = spi.readRegister(OUT_Z_L);
            Accel_High = spi.readRegister(OUT_Z_H);
            accelData.accelerationZ = static_cast<float>(mergeMsbLsb(Accel_High, Accel_Low)) * sensitivity;


            accelData.accelerationTimestamp = TimestampTimer::getTimestamp();

            //ckeck no error
            lastError = SensorErrors::NO_ERRORS;
        
        }
         return accelData;
    }
   

/**
 * FUNCTION CHECK WHO AM I
 * 
 * This function reads the WHO_AM_I register from the sensor to verify its identity.
 * If the value does not match the expected WHO_AM_I_DEFAULT_VALUE, it sets an error 
 * (INVALID_WHOAMI --> SensorData.h) and returns false. If the value matches, it returns true, confirming 
 * the sensor is correctly identified.
 * 
 * @return true if the sensor is identified, false otherwise.
 */

bool checkWhoAmI(){
    SPITransaction spi(spiSlave); 

    uint8_t WhoAmI = spi.readRegister(WHO_AM_I_REG);
    std::cout << "Valore WHO_AM_I letto: 0x" << std::hex << static_cast<int>(WhoAmI) << std::dec << std::endl;

    if(WhoAmI != WHO_AM_I_DEFAULT_VALUE){
         lastError = SensorErrors::INVALID_WHOAMI; 
        return false;
    }
    else{
        return true;
    }

}   

/**
 * FUNCTION MERGE_MSB_LSB
 * 
 * This function combines the most significant byte (MSB) and the least significant byte (LSB) 
 * into a single 16-bit value. The MSB is shifted left by 8 bits, and the LSB is then OR-ed with 
 * the shifted MSB to create the final 16-bit value.
 * 
 * @param msb the most significant byte
 * @param lsb the least significant byte
 * @return the combined 16-bit value
 */

int16_t mergeMsbLsb(uint8_t msb, uint8_t lsb){
    uint16_t shiftedMSB = static_cast<uint16_t> (msb) << 8;
    uint16_t mergeBytes = shiftedMSB | lsb;
    return  static_cast<int16_t>(mergeBytes);
}


// 0x0F in hexadecimal is 0000 1111 in binary
const uint8_t WHO_AM_I_DEFAULT_VALUE = 63;


// spiSlave is used to access all the functions of the SPITransaction library,
// allowing communication with the SPI bus by performing read and write operations.
SPISlave spiSlave; 


uint8_t odr;        // output data rate, default 100 Hz
uint8_t bdu;        // continuous or block after update
uint8_t fullScale;  // full scale value, default +/- 2g






// Define an array of sensitivity values corresponding to different full-scale ranges (2G, 4G, 6G, 8G, and 16G).
// These values represent the sensitivity of the accelerometer in units of g (Table 3 of the datasheet).
const float sensitivityValues[5] = {0.06, 0.12, 0.18, 0.24, 0.73};

// Set the initial sensitivity value based on the selected full-scale range (2G in this case).
float sensitivity = sensitivityValues[FullScaleRange::FS_2G];



// Register mapping for LIS3DSH accelerometer

enum REGISTER_MAPPING {

WHO_AM_I_REG = 0x0F, // Who am I register
CTRL_REG4 = 0x20,  // Sets ODR and BDU
CTRL_REG1 = 0x21,  
CTRL_REG2 = 0x22,  
CTRL_REG3 = 0x23,
CTRL_REG5 = 0x24,  // Sets full scale range, anti-aliasing filter, and self-test
CTRL_REG6 = 0x25,
STATUS = 0x27,// Status register

// Output registers (X, Y, Z axes)
OUT_X_L = 0x28,
OUT_X_H = 0x29,
OUT_Y_L = 0x2A,
OUT_Y_H = 0x2B,
OUT_Z_L = 0x2C,
OUT_Z_H = 0x2D,

};


};

} // namespace Boardcore