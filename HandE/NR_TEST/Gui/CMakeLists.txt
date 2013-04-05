
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

set(NR_TESTGui_LIBS
    NR_TEST
    FreeCADGui
)

qt4_add_resources(NR_TEST_QRC_SRCS Resources/NR_TEST.qrc)

SET(NR_TESTGui_SRCS
    ${NR_TEST_QRC_SRCS}
    AppNR_TESTGui.cpp
    AppNR_TESTGuiPy.cpp
    Command.cpp
    PreCompiled.cpp
    PreCompiled.h
    Workbench.cpp
    Workbench.h
)

add_library(NR_TESTGui SHARED ${NR_TESTGui_SRCS})
target_link_libraries(NR_TESTGui ${NR_TESTGui_LIBS})

fc_target_copy_resource(NR_TESTGui 
    ${CMAKE_SOURCE_DIR}/src/Mod/NR_TEST
    ${CMAKE_BINARY_DIR}/Mod/NR_TEST
    InitGui.py)

if(MSVC)
    set_target_properties(NR_TESTGui PROPERTIES SUFFIX ".pyd")
    set_target_properties(NR_TESTGui PROPERTIES DEBUG_OUTPUT_NAME "NR_TESTGui_d")
    set_target_properties(NR_TESTGui PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NR_TEST)
    set_target_properties(NR_TESTGui PROPERTIES PREFIX "../")
elseif(MINGW)
    set_target_properties(NR_TESTGui PROPERTIES SUFFIX ".pyd")
    set_target_properties(NR_TESTGui PROPERTIES DEBUG_OUTPUT_NAME "NR_TESTGui_d")
    set_target_properties(NR_TESTGui PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NR_TEST)
    set_target_properties(NR_TESTGui PROPERTIES PREFIX "")
else(MSVC)
    set_target_properties(NR_TESTGui PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NR_TEST)
    set_target_properties(NR_TESTGui PROPERTIES PREFIX "")
    set_target_properties(Fem PROPERTIES INSTALL_RPATH ${INSTALL_RPATH})
endif(MSVC)

install(TARGETS NR_TESTGui DESTINATION lib)
