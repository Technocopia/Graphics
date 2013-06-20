SUBDIRS=App Gui

# Change data dir from default ($(prefix)/share) to $(prefix)
datadir = $(prefix)/Mod/NR_GUI
data_DATA = \
	InitGui.py 

nobase_data_DATA = \
	FileExportGui/FileExportGui.py \
	FileExportGui/FileExportGui.ui \
	FileExportGui/second.py \
	FileExportGui/second.ui

CLEANFILES = $(BUILT_SOURCES)

EXTRA_DIST = \
		$(data_DATA) \
		$(nobase_data_DATA) \
		CMakeLists.txt \
		NR_GUI.dox
