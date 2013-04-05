
lib_LTLIBRARIES=libNR_TEST.la NR_TEST.la

libNR_TEST_la_SOURCES=\
		AppNR_TESTPy.cpp \
		PreCompiled.cpp \
		PreCompiled.h

includedir = @includedir@/Mod/NR_TEST/App

# the library search path.
libNR_TEST_la_LDFLAGS = -L../../../Base -L../../../App $(all_libraries) \
		-version-info @LIB_CURRENT@:@LIB_REVISION@:@LIB_AGE@
libNR_TEST_la_CPPFLAGS = -DNR_TESTAppExport=

libNR_TEST_la_LIBADD   = \
		@BOOST_SYSTEM_LIB@ \
		-l@PYTHON_LIB@ \
		-lxerces-c \
		-lFreeCADBase \
		-lFreeCADApp

#--------------------------------------------------------------------------------------
# Loader of libNR_TEST

NR_TEST_la_SOURCES=\
		AppNR_TEST.cpp

# the library search path.
NR_TEST_la_LDFLAGS = $(libNR_TEST_la_LDFLAGS) -module -avoid-version
NR_TEST_la_CPPFLAGS = $(libNR_TEST_la_CPPFLAGS)

NR_TEST_la_LIBADD   = \
		$(libNR_TEST_la_LIBADD) \
		-lNR_TEST

NR_TEST_la_DEPENDENCIES = libNR_TEST.la

#--------------------------------------------------------------------------------------

# set the include path found by configure
AM_CXXFLAGS = -I$(top_srcdir)/src -I$(top_builddir)/src $(all_includes)

libdir = $(prefix)/Mod/NR_TEST

EXTRA_DIST = \
		CMakeLists.txt
