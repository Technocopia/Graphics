# Install script for directory: /home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Arch" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/Init.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/InitGui.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/ArchComponent.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/ArchCell.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/ArchWall.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/importIFC.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/ifcReader.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/Arch_rc.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/Arch.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/ArchBuilding.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/ArchFloor.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/ArchSite.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/ArchStructure.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/ArchCommands.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/ArchSectionPlane.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/importDAE.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/importOBJ.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/ArchWindow.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/ArchAxis.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/ArchVRM.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Arch/ArchRoof.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

