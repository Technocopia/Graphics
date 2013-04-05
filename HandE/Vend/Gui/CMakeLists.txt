
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

set(VendGui_LIBS
    Vend
    FreeCADGui
)

qt4_add_resources(Vend_QRC_SRCS Resources/Vend.qrc)

SET(VendGui_SRCS
    ${Vend_QRC_SRCS}
    AppVendGui.cpp
    AppVendGuiPy.cpp
    Command.cpp
    PreCompiled.cpp
    PreCompiled.h
    Workbench.cpp
    Workbench.h
)

add_library(VendGui SHARED ${VendGui_SRCS})
target_link_libraries(VendGui ${VendGui_LIBS})

fc_target_copy_resource(VendGui 
    ${CMAKE_SOURCE_DIR}/src/Mod/Vend
    ${CMAKE_BINARY_DIR}/Mod/Vend
    InitGui.py)

if(MSVC)
    set_target_properties(VendGui PROPERTIES SUFFIX ".pyd")
    set_target_properties(VendGui PROPERTIES DEBUG_OUTPUT_NAME "VendGui_d")
    set_target_properties(VendGui PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/Vend)
    set_target_properties(VendGui PROPERTIES PREFIX "../")
elseif(MINGW)
    set_target_properties(VendGui PROPERTIES SUFFIX ".pyd")
    set_target_properties(VendGui PROPERTIES DEBUG_OUTPUT_NAME "VendGui_d")
    set_target_properties(VendGui PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/Vend)
    set_target_properties(VendGui PROPERTIES PREFIX "")
else(MSVC)
    set_target_properties(VendGui PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/Vend)
    set_target_properties(VendGui PROPERTIES PREFIX "")
    set_target_properties(Fem PROPERTIES INSTALL_RPATH ${INSTALL_RPATH})
endif(MSVC)

install(TARGETS VendGui DESTINATION lib)
