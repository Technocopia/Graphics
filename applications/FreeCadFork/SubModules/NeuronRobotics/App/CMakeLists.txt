
include_directories(
    ${Boost_INCLUDE_DIRS}
    ${OCC_INCLUDE_DIR}
    ${PYTHON_INCLUDE_PATH}
    ${ZLIB_INCLUDE_DIR}
    ${XERCESC_INCLUDE_DIR}
)

set(NeuronRobotics_LIBS
    FreeCADApp
)

SET(NeuronRobotics_SRCS
    AppNeuronRobotics.cpp
    AppNeuronRoboticsPy.cpp
    PreCompiled.cpp
    PreCompiled.h
)

add_library(NeuronRobotics SHARED ${NeuronRobotics_SRCS})
target_link_libraries(NeuronRobotics ${NeuronRobotics_LIBS})


fc_target_copy_resource(NeuronRobotics 
    ${CMAKE_SOURCE_DIR}/src/Mod/NeuronRobotics
    ${CMAKE_BINARY_DIR}/Mod/NeuronRobotics
    Init.py)

if(MSVC)
    set_target_properties(NeuronRobotics PROPERTIES SUFFIX ".pyd")
    set_target_properties(NeuronRobotics PROPERTIES DEBUG_OUTPUT_NAME "NeuronRobotics_d")
    set_target_properties(NeuronRobotics PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NeuronRobotics)
    set_target_properties(NeuronRobotics PROPERTIES PREFIX "../")
elseif(MINGW)
    set_target_properties(NeuronRobotics PROPERTIES SUFFIX ".pyd")
    set_target_properties(NeuronRobotics PROPERTIES DEBUG_OUTPUT_NAME "NeuronRobotics_d")
    set_target_properties(NeuronRobotics PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NeuronRobotics)
    set_target_properties(NeuronRobotics PROPERTIES PREFIX "")
else(MSVC)
    set_target_properties(NeuronRobotics PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NeuronRobotics)
    set_target_properties(NeuronRobotics PROPERTIES PREFIX "")
    set_target_properties(Fem PROPERTIES INSTALL_RPATH ${INSTALL_RPATH})
endif(MSVC)

install(TARGETS NeuronRobotics DESTINATION lib)
