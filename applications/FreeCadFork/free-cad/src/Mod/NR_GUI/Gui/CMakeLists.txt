
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

set(NR_GUIGui_LIBS
    NR_GUI
    FreeCADGui
)

qt4_add_resources(NR_GUI_QRC_SRCS Resources/NR_GUI.qrc)

SET(NR_GUIGui_SRCS
    ${NR_GUI_QRC_SRCS}
    AppNR_GUIGui.cpp
    AppNR_GUIGuiPy.cpp
    Command.cpp
    PreCompiled.cpp
    PreCompiled.h
    Workbench.cpp
    Workbench.h
)

add_library(NR_GUIGui SHARED ${NR_GUIGui_SRCS})
target_link_libraries(NR_GUIGui ${NR_GUIGui_LIBS})

fc_target_copy_resource(NR_GUIGui 
    ${CMAKE_SOURCE_DIR}/src/Mod/NR_GUI
    ${CMAKE_BINARY_DIR}/Mod/NR_GUI
    InitGui.py)

if(MSVC)
    set_target_properties(NR_GUIGui PROPERTIES SUFFIX ".pyd")
    set_target_properties(NR_GUIGui PROPERTIES DEBUG_OUTPUT_NAME "NR_GUIGui_d")
    set_target_properties(NR_GUIGui PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NR_GUI)
    set_target_properties(NR_GUIGui PROPERTIES PREFIX "../")
elseif(MINGW)
    set_target_properties(NR_GUIGui PROPERTIES SUFFIX ".pyd")
    set_target_properties(NR_GUIGui PROPERTIES DEBUG_OUTPUT_NAME "NR_GUIGui_d")
    set_target_properties(NR_GUIGui PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NR_GUI)
    set_target_properties(NR_GUIGui PROPERTIES PREFIX "")
else(MSVC)
    set_target_properties(NR_GUIGui PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NR_GUI)
    set_target_properties(NR_GUIGui PROPERTIES PREFIX "")
    set_target_properties(Fem PROPERTIES INSTALL_RPATH ${INSTALL_RPATH})
endif(MSVC)

install(TARGETS NR_GUIGui DESTINATION lib)
