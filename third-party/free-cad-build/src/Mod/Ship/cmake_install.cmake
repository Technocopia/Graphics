# Install script for directory: /home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship/resources/icons" TYPE FILE FILES "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/resources/icons/Ico.xpm")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship/resources/examples" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/resources/examples/s60.fcstd"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/resources/examples/s60_katamaran.fcstd"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/resources/examples/wigley.fcstd"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/resources/examples/wigley_katamaran.fcstd"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship/shipLoadExample" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipLoadExample/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipLoadExample/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipLoadExample/TaskPanel.ui"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship/shipCreateShip" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipCreateShip/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipCreateShip/Preview.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipCreateShip/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipCreateShip/TaskPanel.ui"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship/shipOutlineDraw" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipOutlineDraw/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipOutlineDraw/Plot.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipOutlineDraw/Preview.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipOutlineDraw/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipOutlineDraw/TaskPanel.ui"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship/shipAreasCurve" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipAreasCurve/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipAreasCurve/PlotAux.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipAreasCurve/Preview.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipAreasCurve/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipAreasCurve/TaskPanel.ui"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship/shipHydrostatics" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipHydrostatics/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipHydrostatics/PlotAux.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipHydrostatics/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipHydrostatics/TaskPanel.ui"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipHydrostatics/Tools.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship/shipUtils" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipUtils/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipUtils/Math.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/shipUtils/Paths.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship/tankWeights" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/tankWeights/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/tankWeights/Preview.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/tankWeights/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/tankWeights/TaskPanel.ui"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship/tankCreateTank" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/tankCreateTank/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/tankCreateTank/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/tankCreateTank/TaskPanel.ui"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship/tankGZ" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/tankGZ/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/tankGZ/PlotAux.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/tankGZ/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/tankGZ/TaskPanel.ui"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship/simCreate" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simCreate/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simCreate/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simCreate/TaskPanel.ui"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship/simRun" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simRun/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simRun/Simulation.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simRun/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simRun/TaskPanel.ui"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simRun/clSim/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simRun/clSim/initialization.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simRun/clSim/Utils.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simRun/Sim/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simRun/Sim/initialization.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simRun/Sim/matrixGen.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simRun/Sim/computeSources.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simRun/Sim/fsEvolution.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship/simPost" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simPost/__init__.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simPost/TaskPanel.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/simPost/TaskPanel.ui"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Ship" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/InitGui.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/ShipGui.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/Instance.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/SimInstance.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/TankInstance.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Ship/Ship_rc.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

