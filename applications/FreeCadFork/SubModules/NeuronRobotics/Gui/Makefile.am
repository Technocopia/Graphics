
lib_LTLIBRARIES=libNeuronRoboticsGui.la NeuronRoboticsGui.la

BUILT_SOURCES=

libNeuronRoboticsGui_la_SOURCES=\
		AppNeuronRoboticsGuiPy.cpp \
		Command.cpp \
		PreCompiled.cpp \
		PreCompiled.h \
		Workbench.cpp \
		Workbench.h

includedir = @includedir@/Mod/NeuronRobotics/Gui

# the library search path.
libNeuronRoboticsGui_la_LDFLAGS = -L../../../Base -L../../../App -L../../../Gui -L../App \
		$(QT_LIBS) $(all_libraries) \
		$(sim_ac_coin_ldflags) $(sim_ac_coin_libs) \
		$(sim_ac_soqt_ldflags) $(sim_ac_soqt_libs) \
		-version-info @LIB_CURRENT@:@LIB_REVISION@:@LIB_AGE@

libNeuronRoboticsGui_la_CPPFLAGS = -DNeuronRoboticsAppExport= -DNeuronRoboticsGuiExport=

libNeuronRoboticsGui_la_LIBADD   = \
		@BOOST_SYSTEM_LIB@ \
		-l@PYTHON_LIB@ \
		-lxerces-c \
		-lFreeCADBase \
		-lFreeCADApp \
		-lFreeCADGui \
		-lNeuronRobotics

#--------------------------------------------------------------------------------------
# Loader of libNeuronRoboticsGui

NeuronRoboticsGui_la_SOURCES=\
		AppNeuronRoboticsGui.cpp

# the library search path.
NeuronRoboticsGui_la_LDFLAGS = $(libNeuronRoboticsGui_la_LDFLAGS) -module -avoid-version
NeuronRoboticsGui_la_CPPFLAGS = $(libNeuronRoboticsGui_la_CPPFLAGS)

NeuronRoboticsGui_la_LIBADD   = \
		$(libNeuronRoboticsGui_la_LIBADD) \
		-lNeuronRoboticsGui

NeuronRoboticsGui_la_DEPENDENCIES = libNeuronRoboticsGui.la

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

libdir = $(prefix)/Mod/NeuronRobotics

CLEANFILES = $(BUILT_SOURCES)

EXTRA_DIST = \
		CMakeLists.txt \
		Resources/NeuronRobotics.qrc

