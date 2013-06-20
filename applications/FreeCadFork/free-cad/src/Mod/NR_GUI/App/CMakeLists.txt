
include_directories(
    ${Boost_INCLUDE_DIRS}
    ${OCC_INCLUDE_DIR}
    ${PYTHON_INCLUDE_PATH}
    ${ZLIB_INCLUDE_DIR}
    ${XERCESC_INCLUDE_DIR}
)

set(NR_GUI_LIBS
    FreeCADApp
)

SET(NR_GUI_SRCS
    AppNR_GUI.cpp
    AppNR_GUIPy.cpp
    PreCompiled.cpp
    PreCompiled.h
)

add_library(NR_GUI SHARED ${NR_GUI_SRCS})
target_link_libraries(NR_GUI ${NR_GUI_LIBS})


fc_target_copy_resource(NR_GUI 
    ${CMAKE_SOURCE_DIR}/src/Mod/NR_GUI
    ${CMAKE_BINARY_DIR}/Mod/NR_GUI
    Init.py)

if(MSVC)
    set_target_properties(NR_GUI PROPERTIES SUFFIX ".pyd")
    set_target_properties(NR_GUI PROPERTIES DEBUG_OUTPUT_NAME "NR_GUI_d")
    set_target_properties(NR_GUI PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NR_GUI)
    set_target_properties(NR_GUI PROPERTIES PREFIX "../")
elseif(MINGW)
    set_target_properties(NR_GUI PROPERTIES SUFFIX ".pyd")
    set_target_properties(NR_GUI PROPERTIES DEBUG_OUTPUT_NAME "NR_GUI_d")
    set_target_properties(NR_GUI PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NR_GUI)
    set_target_properties(NR_GUI PROPERTIES PREFIX "")
else(MSVC)
    set_target_properties(NR_GUI PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NR_GUI)
    set_target_properties(NR_GUI PROPERTIES PREFIX "")
    set_target_properties(Fem PROPERTIES INSTALL_RPATH ${INSTALL_RPATH})
endif(MSVC)

install(TARGETS NR_GUI DESTINATION lib)
