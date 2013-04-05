
include_directories(
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_CURRENT_BINARY_DIR}
    ${Boost_INCLUDE_DIRS}
    ${COIN3D_INCLUDE_DIR}
    ${QT_INCLUDE_DIR}
    ${ZLIB_INCLUDE_DIR}
    ${SOQT_INCLUDE_DIR}
    ${PYTHON_INCLUDE_PATH}
    ${XERCESC_INCLUDE_DIR}
)

set(NeuronRoboticsGui_LIBS
    NeuronRobotics
    FreeCADGui
)

qt4_add_resources(NeuronRobotics_QRC_SRCS Resources/NeuronRobotics.qrc)

SET(NeuronRoboticsGui_SRCS
    ${NeuronRobotics_QRC_SRCS}
    AppNeuronRoboticsGui.cpp
    AppNeuronRoboticsGuiPy.cpp
    Command.cpp
    PreCompiled.cpp
    PreCompiled.h
    Workbench.cpp
    Workbench.h
)

add_library(NeuronRoboticsGui SHARED ${NeuronRoboticsGui_SRCS})
target_link_libraries(NeuronRoboticsGui ${NeuronRoboticsGui_LIBS})

fc_target_copy_resource(NeuronRoboticsGui 
    ${CMAKE_SOURCE_DIR}/src/Mod/NeuronRobotics
    ${CMAKE_BINARY_DIR}/Mod/NeuronRobotics
    InitGui.py)

if(MSVC)
    set_target_properties(NeuronRoboticsGui PROPERTIES SUFFIX ".pyd")
    set_target_properties(NeuronRoboticsGui PROPERTIES DEBUG_OUTPUT_NAME "NeuronRoboticsGui_d")
    set_target_properties(NeuronRoboticsGui PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NeuronRobotics)
    set_target_properties(NeuronRoboticsGui PROPERTIES PREFIX "../")
elseif(MINGW)
    set_target_properties(NeuronRoboticsGui PROPERTIES SUFFIX ".pyd")
    set_target_properties(NeuronRoboticsGui PROPERTIES DEBUG_OUTPUT_NAME "NeuronRoboticsGui_d")
    set_target_properties(NeuronRoboticsGui PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NeuronRobotics)
    set_target_properties(NeuronRoboticsGui PROPERTIES PREFIX "")
else(MSVC)
    set_target_properties(NeuronRoboticsGui PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NeuronRobotics)
    set_target_properties(NeuronRoboticsGui PROPERTIES PREFIX "")
    set_target_properties(Fem PROPERTIES INSTALL_RPATH ${INSTALL_RPATH})
endif(MSVC)

install(TARGETS NeuronRoboticsGui DESTINATION lib)
