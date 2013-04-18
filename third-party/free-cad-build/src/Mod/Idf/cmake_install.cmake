# Install script for directory: /home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Idf/Idflibs" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/License.txt"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/0603_SMD.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/0805_SMD.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/1206_SMD.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/1210_SMD.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/1812_SMD.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/2225_SMD.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/2512_SMD.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/CAP_50SGV_8_10.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/EPL22_6_16.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/footprints_models.csv"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/I22_2_5_16.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/I22_2_5_16withEPL22_6_16.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/MSOP_10.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/RLF_12545.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/RLF_7030.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/SMB_DO_214AA.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/SMC_DO_214AB.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/SOD_323.igs"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/SOD_323.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/SOD_523.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/SOT23.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/SOT404.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/SOT428_DPAK.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/SOT_323_3.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/SOT_96.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/TCMT1107_4.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/TSM_103_01_L_DV_A.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/TSM_104_01_L_DV_A.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/TSS0P_8.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/VC0603_SMD.stp"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/RLF_12545.igs"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/SOT23.igs"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/lib/SOT404.igs"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Idf" TYPE FILE FILES
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/Init.py"
    "/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Idf/Idf.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

