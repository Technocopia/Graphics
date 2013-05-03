
lib_LTLIBRARIES=libNR_GUI.la NR_GUI.la

libNR_GUI_la_SOURCES=\
		AppNR_GUIPy.cpp \
		PreCompiled.cpp \
		PreCompiled.h

includedir = @includedir@/Mod/NR_GUI/App

# the library search path.
libNR_GUI_la_LDFLAGS = -L../../../Base -L../../../App $(all_libraries) \
		-version-info @LIB_CURRENT@:@LIB_REVISION@:@LIB_AGE@
libNR_GUI_la_CPPFLAGS = -DNR_GUIAppExport=

libNR_GUI_la_LIBADD   = \
		@BOOST_SYSTEM_LIB@ \
		-l@PYTHON_LIB@ \
		-lxerces-c \
		-lFreeCADBase \
		-lFreeCADApp

#--------------------------------------------------------------------------------------
# Loader of libNR_GUI

NR_GUI_la_SOURCES=\
		AppNR_GUI.cpp

# the library search path.
NR_GUI_la_LDFLAGS = $(libNR_GUI_la_LDFLAGS) -module -avoid-version
NR_GUI_la_CPPFLAGS = $(libNR_GUI_la_CPPFLAGS)

NR_GUI_la_LIBADD   = \
		$(libNR_GUI_la_LIBADD) \
		-lNR_GUI

NR_GUI_la_DEPENDENCIES = libNR_GUI.la

#--------------------------------------------------------------------------------------

# set the include path found by configure
AM_CXXFLAGS = -I$(top_srcdir)/src -I$(top_builddir)/src $(all_includes)

libdir = $(prefix)/Mod/NR_GUI

EXTRA_DIST = \
		CMakeLists.txt
