# Install script for directory: /home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Start/StartPage" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/StartPage.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/__init__.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Start/StartPage" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/ArchDesign.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/DefaultWorkbench.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/LoadDrawingExample.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/LoadPartDesignExample.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/LoadRobotExample.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/LoadSchenkel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/LoadMRU0.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/LoadMRU1.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/LoadMRU2.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/LoadArchExample.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/Mesh.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/PartDesign.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/Background.jpg"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/FreeCAD.png"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/PartDesign.png"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/ArchDesign.png"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/Mesh.png"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/Complete.png"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/PartDesignExample.png"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/ArchExample.png"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/web.png"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/blank.png"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/complete.jpg"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/Ship.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/Ship.png"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Start/StartPage/ShipExample.png"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

