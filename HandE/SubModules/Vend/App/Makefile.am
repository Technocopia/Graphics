
lib_LTLIBRARIES=libVend.la Vend.la

libVend_la_SOURCES=\
		AppVendPy.cpp \
		PreCompiled.cpp \
		PreCompiled.h

includedir = @includedir@/Mod/Vend/App

# the library search path.
libVend_la_LDFLAGS = -L../../../Base -L../../../App $(all_libraries) \
		-version-info @LIB_CURRENT@:@LIB_REVISION@:@LIB_AGE@
libVend_la_CPPFLAGS = -DVendAppExport=

libVend_la_LIBADD   = \
		@BOOST_SYSTEM_LIB@ \
		-l@PYTHON_LIB@ \
		-lxerces-c \
		-lFreeCADBase \
		-lFreeCADApp

#--------------------------------------------------------------------------------------
# Loader of libVend

Vend_la_SOURCES=\
		AppVend.cpp

# the library search path.
Vend_la_LDFLAGS = $(libVend_la_LDFLAGS) -module -avoid-version
Vend_la_CPPFLAGS = $(libVend_la_CPPFLAGS)

Vend_la_LIBADD   = \
		$(libVend_la_LIBADD) \
		-lVend

Vend_la_DEPENDENCIES = libVend.la

#--------------------------------------------------------------------------------------

# set the include path found by configure
AM_CXXFLAGS = -I$(top_srcdir)/src -I$(top_builddir)/src $(all_includes)

libdir = $(prefix)/Mod/Vend

EXTRA_DIST = \
		CMakeLists.txt
