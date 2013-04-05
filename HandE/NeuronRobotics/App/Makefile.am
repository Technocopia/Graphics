
lib_LTLIBRARIES=libNeuronRobotics.la NeuronRobotics.la

libNeuronRobotics_la_SOURCES=\
		AppNeuronRoboticsPy.cpp \
		PreCompiled.cpp \
		PreCompiled.h

includedir = @includedir@/Mod/NeuronRobotics/App

# the library search path.
libNeuronRobotics_la_LDFLAGS = -L../../../Base -L../../../App $(all_libraries) \
		-version-info @LIB_CURRENT@:@LIB_REVISION@:@LIB_AGE@
libNeuronRobotics_la_CPPFLAGS = -DNeuronRoboticsAppExport=

libNeuronRobotics_la_LIBADD   = \
		@BOOST_SYSTEM_LIB@ \
		-l@PYTHON_LIB@ \
		-lxerces-c \
		-lFreeCADBase \
		-lFreeCADApp

#--------------------------------------------------------------------------------------
# Loader of libNeuronRobotics

NeuronRobotics_la_SOURCES=\
		AppNeuronRobotics.cpp

# the library search path.
NeuronRobotics_la_LDFLAGS = $(libNeuronRobotics_la_LDFLAGS) -module -avoid-version
NeuronRobotics_la_CPPFLAGS = $(libNeuronRobotics_la_CPPFLAGS)

NeuronRobotics_la_LIBADD   = \
		$(libNeuronRobotics_la_LIBADD) \
		-lNeuronRobotics

NeuronRobotics_la_DEPENDENCIES = libNeuronRobotics.la

#--------------------------------------------------------------------------------------

# set the include path found by configure
AM_CXXFLAGS = -I$(top_srcdir)/src -I$(top_builddir)/src $(all_includes)

libdir = $(prefix)/Mod/NeuronRobotics

EXTRA_DIST = \
		CMakeLists.txt
