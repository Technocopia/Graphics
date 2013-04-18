# Install script for directory: /home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftlibs" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/draftlibs/dxfColorMap.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/draftlibs/dxfImportObjects.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/draftlibs/dxfLibrary.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/draftlibs/dxfReader.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/draftlibs/__init__.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/Init.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/InitGui.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/Draft.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/DraftTools.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/DraftGui.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/DraftSnap.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/DraftTrackers.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/DraftVecUtils.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/DraftGeomUtils.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/WorkingPlane.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/importDXF.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/importOCA.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/importSVG.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/importAirfoilDAT.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/macros.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Draft/Draft_rc.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

