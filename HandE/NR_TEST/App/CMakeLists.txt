
include_directories(
    ${Boost_INCLUDE_DIRS}
    ${OCC_INCLUDE_DIR}
    ${PYTHON_INCLUDE_PATH}
    ${ZLIB_INCLUDE_DIR}
    ${XERCESC_INCLUDE_DIR}
)

set(NR_TEST_LIBS
    FreeCADApp
)

SET(NR_TEST_SRCS
    AppNR_TEST.cpp
    AppNR_TESTPy.cpp
    PreCompiled.cpp
    PreCompiled.h
)

add_library(NR_TEST SHARED ${NR_TEST_SRCS})
target_link_libraries(NR_TEST ${NR_TEST_LIBS})


fc_target_copy_resource(NR_TEST 
    ${CMAKE_SOURCE_DIR}/src/Mod/NR_TEST
    ${CMAKE_BINARY_DIR}/Mod/NR_TEST
    Init.py)

if(MSVC)
    set_target_properties(NR_TEST PROPERTIES SUFFIX ".pyd")
    set_target_properties(NR_TEST PROPERTIES DEBUG_OUTPUT_NAME "NR_TEST_d")
    set_target_properties(NR_TEST PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NR_TEST)
    set_target_properties(NR_TEST PROPERTIES PREFIX "../")
elseif(MINGW)
    set_target_properties(NR_TEST PROPERTIES SUFFIX ".pyd")
    set_target_properties(NR_TEST PROPERTIES DEBUG_OUTPUT_NAME "NR_TEST_d")
    set_target_properties(NR_TEST PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NR_TEST)
    set_target_properties(NR_TEST PROPERTIES PREFIX "")
else(MSVC)
    set_target_properties(NR_TEST PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mod/NR_TEST)
    set_target_properties(NR_TEST PROPERTIES PREFIX "")
    set_target_properties(Fem PROPERTIES INSTALL_RPATH ${INSTALL_RPATH})
endif(MSVC)

install(TARGETS NR_TEST DESTINATION lib)
