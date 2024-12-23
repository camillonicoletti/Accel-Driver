# Install script for directory: /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "arm-miosix-eabi-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/unsupported/Eigen" TYPE FILE FILES
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/AdolcForward"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/AlignedVector3"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/ArpackSupport"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/AutoDiff"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/BVH"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/EulerAngles"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/FFT"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/IterativeSolvers"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/KroneckerProduct"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/LevenbergMarquardt"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/MatrixFunctions"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/MoreVectorization"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/MPRealSupport"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/NonLinearOptimization"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/NumericalDiff"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/OpenGLSupport"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/Polynomials"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/Skyline"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/SparseExtra"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/SpecialFunctions"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/Splines"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/unsupported/Eigen" TYPE DIRECTORY FILES "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/eigen/unsupported/Eigen/src" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/eigen/unsupported/Eigen/CXX11/cmake_install.cmake")

endif()

