
add_subdirectory(App)
if(FREECAD_BUILD_GUI)
    add_subdirectory(Gui)
endif(FREECAD_BUILD_GUI)

SET(NR_GUIMain_SRCS
	InitGui.py
)

SOURCE_GROUP("" FILES ${NR_GUIMain_SRCS})

SET(FileExportGui_SRCS
	FileExportGui/FileExportGui.py
	FileExportGui/FileExportGui.ui
	FileExportGui/second.ui
	FileExportGui/second.py
)
SOURCE_GROUP("fileexportgui" FILES ${FileExportGui_SRCS})

SET(all_files ${NR_GUIMain_SRCS} ${FileExportGui_SRCS})

ADD_CUSTOM_TARGET(NR_Gui ALL
	SOURCES ${all_files}
)

fc_copy_sources(Mod/NR_GUI "${CMAKE_BINARY_DIR}/Mod/NR_GUI" ${all_files})

INSTALL(
	FILES
		${FileExportGui_SRCS}
	DESTINATION
		Mod/NR_GUI/FileExportGui
)
INSTALL(
	FILES
		${NR_GUIMain_SRCS}
	DESTINATION
		Mod/NR_GUI
)