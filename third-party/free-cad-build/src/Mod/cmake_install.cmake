# Install script for directory: /home/hpham/the-technocopia-project/third-party/free-cad/src/Mod

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Points/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Complete/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Test/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Image/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Mesh/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Part/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/PartDesign/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Raytracing/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Drawing/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Sketcher/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Robot/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Machining_Distortion/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/ReverseEngineering/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/MeshPart/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Draft/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Web/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Start/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Idf/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Import/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Inspection/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Arch/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Assembly/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Fem/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Ship/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/OpenSCAD/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/Plot/cmake_install.cmake")
  INCLUDE("/home/hpham/the-technocopia-project/third-party/free-cad-build/src/Mod/NR_GUI/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

