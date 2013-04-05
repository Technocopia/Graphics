
add_subdirectory(App)
if(FREECAD_BUILD_GUI)
    add_subdirectory(Gui)
endif(FREECAD_BUILD_GUI)



SET(VendExamples_SRCS
	Resources/Vitamin/BottomFlang/BottomFlang.fcstd
	Resources/Vitamin/box2/box2.fcstd
	Resources/Vitamin/circlefan/circlefan.fcstd
	Resources/Viatmin/nick/nick.fcstd
)
SOURCE_GROUP("vendexamples" FILES ${VendExamples_SRCS})

SET(VendLoad_SRCS
	Gui/VendLoad/__init__.py
	Gui/VendLoad/TaskPanel.py
	Gui/VendLoad/TaskPanel.ui
)
SOURCE_GROUP("vendload" FILES ${VendLoad_SRCS})



SET(Main_SRCS
    FILES
	Init.py
        InitGui.py

)
SOURCE_GROUP("" FILES ${MAIN_SRCS})

fc_copy_sources(Mod/NR_TEST "${CMAKE_BINARY_DIR}/Mod/NR_TEST" ${all_files})


INSTALL(
	FILES
		${VendExamples_SRCS}
	DESTINATION
		Mod/NR_TEST/Resources/Vitamin
)

INSTALL(
	FILES
		${VendLoad_SRCS}
	DESTINATION
		Mod/NR_TEST/Vend
)

INSTALL(
	FILES
		${Main_SRCS}
	DESTINATION
		Mod/NR_TEST
)
