# LIS3DSH Driver Project
**Developing a Driver for 3-Axis Accelerometer Integration**

This project aims to develop a driver for the LIS3DSH accelerometer sensor.

This driver facilitates the use of the LIS3DSH accelerometer in embedded systems, enabling precise motion tracking and orientation detection for a wide range of applications.

The LIS3DSH is a 3-axis accelerometer that measures acceleration in three dimensions and communicates with a host microcontroller via the SPI protocol. The driver will integrate with the boardcore framework, implementing its standard Sensor interface, to ensure compatibility and reusability.

The datasheet of the sensor can be found on the STMicroelectronics website: [LIS3DSH Datasheet](https://www.st.com/resource/en/datasheet/lis3dsh.pdf).
 
## Project Goals

The objective is to create a robust and efficient driver capable of:
- Reading acceleration values from the LIS3DSH sensor.
- Implementing the Sensor interface defined in the boardcore library.
- Utilizing the SPI peripheral for communication between the microcontroller and the sensor.


## Key Components

The following classes and interfaces from the boardcore library will be used to develop the driver:
- `Sensor`: Defines the methods that any sensor driver should implement (found in Sensor.h).
- `AccelerometerData`: A data structure for storing acceleration values in three dimensions (found in SensorData.h).
- `SPIBus`: Provides an abstraction for SPI bus communication (found in SPIBus.h).
- `SPITransaction`: Abstracts an individual SPI transaction (found in SPITransaction.h).
- `GpioPin`: Abstracts GPIO pin handling (available in the gpio.h file of the miosix kernel).


## Repository Structure

The repository is structured as follows:

| Path              | Description                              |
| ----------------- | ---------------------------------------- |
| `.vscode/`        | Visual Studio Code configuration files   |
| `libs/boardcore/` | The boardcore library as a git submodule |
| `src/`            | The source code of the driver            |
| `CMakeLists.txt`  | The CMake configuration file             |




## Setup and Configuration

1. Clone the repository
2. Initialize the boardcore submodule
    ```bash
    git submodule update --init --recursive
    ```
3. Build the project with SBS
    ```bash
    ./sbs -b main
    ```
4. Connect the development board and run the project
    ```bash
    ./sbs -f main
    ```

Once the project is built and flashed to the development board, you can use the serial monitor to view the output of the project. On linux, you can use `minicom` or `screen` to connect to the serial port. On Windows, use the `Serial Monitor` extension in Visual Studio Code. Ensure the baud rate (default: `19200`) matches the configuration in your microcontroller's firmware to establish a successful serial connection.



