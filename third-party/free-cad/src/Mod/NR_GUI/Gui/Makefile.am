
lib_LTLIBRARIES=libNR_GUIGui.la NR_GUIGui.la

BUILT_SOURCES=

libNR_GUIGui_la_SOURCES=\
		AppNR_GUIGuiPy.cpp \
		Command.cpp \
		PreCompiled.cpp \
		PreCompiled.h \
		Workbench.cpp \
		Workbench.h

includedir = @includedir@/Mod/NR_GUI/Gui

# the library search path.
libNR_GUIGui_la_LDFLAGS = -L../../../Base -L../../../App -L../../../Gui -L../App \
		$(QT_LIBS) $(all_libraries) \
		$(sim_ac_coin_ldflags) $(sim_ac_coin_libs) \
		$(sim_ac_soqt_ldflags) $(sim_ac_soqt_libs) \
		-version-info @LIB_CURRENT@:@LIB_REVISION@:@LIB_AGE@

libNR_GUIGui_la_CPPFLAGS = -DNR_GUIAppExport= -DNR_GUIGuiExport=

libNR_GUIGui_la_LIBADD   = \
		@BOOST_SYSTEM_LIB@ \
		-l@PYTHON_LIB@ \
		-lxerces-c \
		-lFreeCADBase \
		-lFreeCADApp \
		-lFreeCADGui \
		-lNR_GUI

#--------------------------------------------------------------------------------------
# Loader of libNR_GUIGui

NR_GUIGui_la_SOURCES=\
		AppNR_GUIGui.cpp

# the library search path.
NR_GUIGui_la_LDFLAGS = $(libNR_GUIGui_la_LDFLAGS) -module -avoid-version
NR_GUIGui_la_CPPFLAGS = $(libNR_GUIGui_la_CPPFLAGS)

NR_GUIGui_la_LIBADD   = \
		$(libNR_GUIGui_la_LIBADD) \
		-lNR_GUIGui

NR_GUIGui_la_DEPENDENCIES = libNR_GUIGui.la

#--------------------------------------------------------------------------------------

# rule for Qt MetaObject Compiler:
moc_%.cpp: %.h
	$(QT_MOC) $< -o $(@F)

# rule for Qt MetaObject Compiler:
%.moc: %.h
	$(QT_MOC) $< -o $(@F)

# rules for Qt User Interface Compiler:
ui_%.h: %.ui
	$(QT_UIC) $< -o $(@F)

# rules for Qt Resource Compiler:
qrc_%.cpp: Resources/%.qrc
	$(QT_RCC) -name $(*F) $< -o $(@F)

# set the include path found by configure
AM_CXXFLAGS = -I$(top_srcdir)/src -I$(top_builddir)/src $(all_includes) $(QT_CXXFLAGS) \
		-I$(sim_ac_coin_includedir) -I$(sim_ac_soqt_includedir)

libdir = $(prefix)/Mod/NR_GUI

CLEANFILES = $(BUILT_SOURCES)

EXTRA_DIST = \
		CMakeLists.txt \
		Resources/NR_GUI.qrc

