
lib_LTLIBRARIES=libVendGui.la VendGui.la

BUILT_SOURCES=

libVendGui_la_SOURCES=\
		AppVendGuiPy.cpp \
		Command.cpp \
		PreCompiled.cpp \
		PreCompiled.h \
		Workbench.cpp \
		Workbench.h

includedir = @includedir@/Mod/Vend/Gui

# the library search path.
libVendGui_la_LDFLAGS = -L../../../Base -L../../../App -L../../../Gui -L../App \
		$(QT_LIBS) $(all_libraries) \
		$(sim_ac_coin_ldflags) $(sim_ac_coin_libs) \
		$(sim_ac_soqt_ldflags) $(sim_ac_soqt_libs) \
		-version-info @LIB_CURRENT@:@LIB_REVISION@:@LIB_AGE@

libVendGui_la_CPPFLAGS = -DVendAppExport= -DVendGuiExport=

libVendGui_la_LIBADD   = \
		@BOOST_SYSTEM_LIB@ \
		-l@PYTHON_LIB@ \
		-lxerces-c \
		-lFreeCADBase \
		-lFreeCADApp \
		-lFreeCADGui \
		-lVend

#--------------------------------------------------------------------------------------
# Loader of libVendGui

VendGui_la_SOURCES=\
		AppVendGui.cpp

# the library search path.
VendGui_la_LDFLAGS = $(libVendGui_la_LDFLAGS) -module -avoid-version
VendGui_la_CPPFLAGS = $(libVendGui_la_CPPFLAGS)

VendGui_la_LIBADD   = \
		$(libVendGui_la_LIBADD) \
		-lVendGui

VendGui_la_DEPENDENCIES = libVendGui.la

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

libdir = $(prefix)/Mod/Vend

CLEANFILES = $(BUILT_SOURCES)

EXTRA_DIST = \
		CMakeLists.txt \
		Resources/Vend.qrc

