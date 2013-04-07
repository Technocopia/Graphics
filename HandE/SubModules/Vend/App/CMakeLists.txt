
include_directories(
    ${Boost_INCLUDE_DIRS}
    ${OCC_INCLUDE_DIR}
    ${PYTHON_INCLUDE_PATH}
    ${ZLIB_INCLUDE_DIR}
    ${XERCESC_INCLUDE_DIR}
)

set(Vend_LIBS
    FreeCADApp
)

SET(Vend_SRCS
    AppVend.cpp
    AppVendPy.cpp
    PreCompiled.cpp
    PreCompiled.h
)

add_library(Vend SHARED ${Vend_SRCS})
target_link_libraries(Vend ${Vend_LIBS})


fc_target_copy_resource(Vend 
    ${CMAKE_SOURCE_DIR}/src/Mod/Vend
    ${CMAKE_BINARY_DIR}/Mod/Vend
    Init.py)

if(MSVC)
    set_target_properties(Vend PROPERTIES SUFFIX ".pyd")
    set_target_properties(Vend PROPERTIES DEBUG_OUTPUT_NAME "Vend_d")
    set_target_properties(Vend PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/Vend)
    set_target_properties(Vend PROPERTIES PREFIX "../")
elseif(MINGW)
    set_target_properties(Vend PROPERTIES SUFFIX ".pyd")
    set_target_properties(Vend PROPERTIES DEBUG_OUTPUT_NAME "Vend_d")
    set_target_properties(Vend PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/Vend)
    set_target_properties(Vend PROPERTIES PREFIX "")
else(MSVC)
    set_target_properties(Vend PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/Vend)
    set_target_properties(Vend PROPERTIES PREFIX "")
    set_target_properties(Fem PROPERTIES INSTALL_RPATH ${INSTALL_RPATH})
endif(MSVC)

install(TARGETS Vend DESTINATION lib)
