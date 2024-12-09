# Install script for directory: /Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/Catch2

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/Catch2/CMakeFiles/Catch2.dir/install-cxx-module-bmi-Release.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Catch2/Catch2Targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Catch2/Catch2Targets.cmake"
         "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/Catch2/CMakeFiles/Export/fdf7af8c87c731050acff3e2de49ed47/Catch2Targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Catch2/Catch2Targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Catch2/Catch2Targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Catch2" TYPE FILE FILES "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/Catch2/CMakeFiles/Export/fdf7af8c87c731050acff3e2de49ed47/Catch2Targets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/Catch2/single_include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Catch2" TYPE FILE FILES
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/Catch2/Catch2Config.cmake"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/Catch2/Catch2ConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/Catch2" TYPE DIRECTORY FILES "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/Catch2/docs/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Catch2" TYPE FILE FILES
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/Catch2/contrib/ParseAndAddCatchTests.cmake"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/Catch2/contrib/Catch.cmake"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/Catch2/contrib/CatchAddTests.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Catch2" TYPE FILE FILES
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/Catch2/contrib/gdbinit"
    "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/libs/boardcore/libs/Catch2/contrib/lldbinit"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkgconfig" TYPE FILE FILES "/Users/admin/Desktop/SKYWARD/vscode-skyword-project/accel-driver-project/build/libs/boardcore/libs/Catch2/catch2.pc")
endif()

