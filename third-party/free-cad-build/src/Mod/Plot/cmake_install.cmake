# Install script for directory: /home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Plot/plotAxes" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotAxes/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotAxes/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotAxes/TaskPanel.ui"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Plot/plotLabels" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotLabels/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotLabels/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotLabels/TaskPanel.ui"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Plot/plotPositions" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotPositions/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotPositions/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotPositions/TaskPanel.ui"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Plot/plotSave" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotSave/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotSave/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotSave/TaskPanel.ui"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Plot/plotSeries" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotSeries/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotSeries/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotSeries/TaskPanel.ui"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Plot/plotUtils" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotUtils/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/plotUtils/Paths.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Plot" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/Plot.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/InitGui.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/PlotGui.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Plot/Plot_rc.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

