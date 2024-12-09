# LIS3DSH Driver Project

The project is to develop a driver for the LIS3DSH accelerometer sensor.

The datasheet of the sensor can be found on the STMicroelectronics website: [LIS3DSH Datasheet](https://www.st.com/resource/en/datasheet/lis3dsh.pdf).


## Project Description

The LIS3DSH is a 3-axis accelerometer sensor that can be used to measure acceleration in three dimensions. The sensor communicates with the host microcontroller using the SPI protocol.  
The goal of the project is to develop a driver for the LIS3DSH sensor that can be used to read the acceleration values from the sensor. 
The driver should implement the `Sensor` interface defined in the `boardcore` library for the sensor to be compatible with the boardcore framework.
The driver will use the SPI peripheral of the microcontroller to communicate with the sensor.

The boardcore library provides the following classes and interfaces that can be used to develop the driver:
- `Sensor`: The `Sensor` interface defines the methods that a sensor driver should implement. It can be found in the `Sensor.h` file of the `boardcore` library.
- `AccelerometerData`: The `AccelerometerData` class is a data structure that holds the acceleration values in three dimensions. It can be found in the `SensorData.h` file of the `boardcore` library.
- `SPIBus`: The `SPIBus` class provides an abstraction for the SPI bus. It can be found in the `SPIBus.h` file of the `boardcore` library.
- `SPITransaction`: The `SPITransaction` class provides an abstraction for an SPI transaction. It can be found in the `SPITransaction.h` file of the `boardcore` library.
- `GpioPin`: The `GpioPin` class provides an abstraction for a GPIO pin. It can be found in the `gpio.h` file of the `miosix` kernel.


## Repository Structure

The repository is structured as follows:

| Path              | Description                              |
| ----------------- | ---------------------------------------- |
| `.vscode/`        | Visual Studio Code configuration files   |
| `libs/boardcore/` | The boardcore library as a git submodule |
| `src/`            | The source code of the driver            |
| `CMakeLists.txt`  | The CMake configuration file             |

