# Install script for directory: /home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD/ply" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/ply/lex.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/ply/README"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/ply/yacc.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/ply/__init__.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/Init.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/InitGui.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/OpenSCAD_rc.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/OpenSCAD2Dgeom.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/OpenSCADFeatures.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/OpenSCADUtils.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/OpenSCADCommands.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/exportCSG.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/importCSG.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/tokrules.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/colorcodeshapes.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/expandplacements.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/OpenSCAD/replaceobj.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

