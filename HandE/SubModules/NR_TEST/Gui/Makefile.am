
lib_LTLIBRARIES=libNR_TESTGui.la NR_TESTGui.la

BUILT_SOURCES=

libNR_TESTGui_la_SOURCES=\
		AppNR_TESTGuiPy.cpp \
		Command.cpp \
		PreCompiled.cpp \
		PreCompiled.h \
		Workbench.cpp \
		Workbench.h

includedir = @includedir@/Mod/NR_TEST/Gui

# the library search path.
libNR_TESTGui_la_LDFLAGS = -L../../../Base -L../../../App -L../../../Gui -L../App \
		$(QT_LIBS) $(all_libraries) \
		$(sim_ac_coin_ldflags) $(sim_ac_coin_libs) \
		$(sim_ac_soqt_ldflags) $(sim_ac_soqt_libs) \
		-version-info @LIB_CURRENT@:@LIB_REVISION@:@LIB_AGE@

libNR_TESTGui_la_CPPFLAGS = -DNR_TESTAppExport= -DNR_TESTGuiExport=

libNR_TESTGui_la_LIBADD   = \
		@BOOST_SYSTEM_LIB@ \
		-l@PYTHON_LIB@ \
		-lxerces-c \
		-lFreeCADBase \
		-lFreeCADApp \
		-lFreeCADGui \
		-lNR_TEST

#--------------------------------------------------------------------------------------
# Loader of libNR_TESTGui

NR_TESTGui_la_SOURCES=\
		AppNR_TESTGui.cpp

# the library search path.
NR_TESTGui_la_LDFLAGS = $(libNR_TESTGui_la_LDFLAGS) -module -avoid-version
NR_TESTGui_la_CPPFLAGS = $(libNR_TESTGui_la_CPPFLAGS)

NR_TESTGui_la_LIBADD   = \
		$(libNR_TESTGui_la_LIBADD) \
		-lNR_TESTGui

NR_TESTGui_la_DEPENDENCIES = libNR_TESTGui.la

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

libdir = $(prefix)/Mod/NR_TEST

CLEANFILES = $(BUILT_SOURCES)

EXTRA_DIST = \
		CMakeLists.txt \
		Resources/NR_TEST.qrc

