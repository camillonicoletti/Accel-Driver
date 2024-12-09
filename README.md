# LIS3DSH Driver Project

This is the initial project for new SWD members to get familiar with the development process and tools. 
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

Note: you can use the file search feature of Visual Studio Code to quickly navigate to a particular file: `CTRL + P` and type the name of the file.


## Repository Structure

The repository is structured as follows:

| Path              | Description                              |
| ----------------- | ---------------------------------------- |
| `.vscode/`        | Visual Studio Code configuration files   |
| `libs/boardcore/` | The boardcore library as a git submodule |
| `src/`            | The source code of the driver            |
| `CMakeLists.txt`  | The CMake configuration file             |


## Prerequisites

The following tools are required to build the project:
- **Miosix Toolchain**: The toolchain is used to compile the project. The toolchain can be downloaded from the [Miosix website](https://miosix.org/wiki/index.php?title=Quick_start).
- **CMake**: The project uses CMake as the build system. CMake can be installed using the package manager of the host system, visit the [CMake website](https://cmake.org/download/) for more informations.
- **Ninja** (optional): Ninja can be used as the build system instead of the default make. Ninja can be installed using the package manager of the host system, visit the [Ninja website](https://ninja-build.org/) for more informations.

Windows users can use the [Windows Subsystem for Linux](https://docs.microsoft.com/en-us/windows/wsl/install) to install the required tools and work on the project via the VSCode Remote - WSL extension, or install the tools directly on Windows with `winget`.


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

Once the project is built and flashed to the development board, you can use the serial monitor to view the output of the project. On linux, you can use `minicom` or `screen` to connect to the serial port. On Windows, use the `Serial Monitor` extension in Visual Studio Code. The baud rate for the serial port is set to `19200`.


### Available SBS Commands

SBS is a simple script around the CMake build system that provides a simple interface to build and run the project. The following commands are available:

- **Build the project**
    ```bash
    ./sbs -b <target>
    ```
- **Flash & run the project on the development board**
    ```bash
    ./sbs -f <target>
    ```
- **Clean the project build files**
    ```bash
    ./sbs -c
    ```
- **Format and lint the source code**
    ```bash
    ./sbs -e
    ```


## Development Process

You are required to create a new class that implements the `Sensor` interface defined in the `Sensor.h` file of the `boardcore` library. The class should be named `LIS3DSH` and should be placed in the `src/` directory of the project.

The `Sensor` class is templated on the data type that the sensor will return. In this case, the sensor will return acceleration values in three dimensions, so the `Sensor` class should be defined as follows:
```cpp
class LIS3DSH : public Sensor<AccelerometerData>
{
    // Class implementation
};
```
If you are not familiar with templates in C++, you can read the [C++ Templates Tutorial](https://cplusplus.com/doc/oldtutorial/templates/), or any other online resource of your choice.

You may create additional files in the `src/` directory if needed. The SBS build system will automatically pick up and build all the source files in the `src/` directory.
