#############################################################################
# Makefile for building: cfgtest_QtWebKit
# Generated by qmake (3.0) (Qt 5.3.2)
# Project:  cfgtest_QtWebKit.pro
# Template: app
# Command: c:\Qt\5.3\msvc2013_64\bin\qmake.exe -spec win32-msvc2008 -o cfgtest_QtWebKit.mk cfgtest_QtWebKit.pro
#############################################################################

MAKEFILE      = cfgtest_QtWebKit.mk

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = c:\Qt\5.3\msvc2013_64\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = copy /y
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug uninstall

cfgtest_QtWebKit.mk: cfgtest_QtWebKit.pro ..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\win32-msvc2008\qmake.conf ..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\spec_pre.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\common\shell-win32.conf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\qconfig.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_axbase.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_axbase_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_axcontainer.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_axcontainer_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_axserver.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_axserver_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_bluetooth.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_bluetooth_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_bootstrap_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_clucene_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_concurrent.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_concurrent_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_core.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_core_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_declarative.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_declarative_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_designer.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_designer_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_designercomponents_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_enginio.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_enginio_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_gui.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_gui_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_help.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_help_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_multimedia.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_multimedia_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_multimediawidgets.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_multimediawidgets_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_network.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_network_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_nfc.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_nfc_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_opengl.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_opengl_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_openglextensions.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_openglextensions_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_platformsupport_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_positioning.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_positioning_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_printsupport.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_printsupport_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_qml.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_qml_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_qmldevtools_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_qmltest.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_qmltest_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_quick.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_quick_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_quickparticles_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_quickwidgets.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_quickwidgets_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_script.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_script_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_scripttools.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_scripttools_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_sensors.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_sensors_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_serialport.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_serialport_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_sql.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_sql_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_svg.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_svg_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_testlib.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_testlib_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_uitools.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_uitools_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_webkit.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_webkit_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_webkitwidgets.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_webkitwidgets_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_websockets.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_websockets_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_widgets.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_widgets_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_winextras.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_winextras_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_xml.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_xml_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_xmlpatterns.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_xmlpatterns_private.pri \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\qt_functions.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\qt_config.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\win32\qt_config.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\win32-msvc2008\qmake.conf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\spec_post.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\exclusive_builds.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\default_pre.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\win32\default_pre.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\resolve_config.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\exclusive_builds_post.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\default_post.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\win32\rtti.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\precompile_header.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\warn_on.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\qt.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\resources.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\moc.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\win32\opengl.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\win32\windows.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\testcase_targets.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\exceptions.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\yacc.prf \
		..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\lex.prf \
		cfgtest_QtWebKit.pro \
		C:/Qt/5.3/msvc2013_64/lib/qtmain.prl \
		C:/Qt/5.3/msvc2013_64/lib/Qt5Core.prl \
		C:/Qt/5.3/msvc2013_64/lib/Qt5WebKit.prl \
		C:/Qt/5.3/msvc2013_64/lib/Qt5Network.prl \
		C:/Qt/5.3/msvc2013_64/lib/Qt5Gui.prl \
		C:/Qt/5.3/msvc2013_64/lib/libEGL.prl \
		C:/Qt/5.3/msvc2013_64/lib/libGLESv2.prl
	$(QMAKE) -spec win32-msvc2008 -o cfgtest_QtWebKit.mk cfgtest_QtWebKit.pro
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\spec_pre.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\common\shell-win32.conf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\qconfig.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_axbase.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_axbase_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_axcontainer.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_axcontainer_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_axserver.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_axserver_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_bluetooth.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_bluetooth_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_bootstrap_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_clucene_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_concurrent.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_concurrent_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_core.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_core_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_declarative.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_declarative_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_designer.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_designer_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_designercomponents_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_enginio.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_enginio_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_gui.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_gui_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_help.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_help_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_multimedia.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_multimedia_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_multimediawidgets.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_multimediawidgets_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_network.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_network_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_nfc.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_nfc_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_opengl.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_opengl_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_openglextensions.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_openglextensions_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_platformsupport_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_positioning.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_positioning_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_printsupport.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_printsupport_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_qml.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_qml_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_qmldevtools_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_qmltest.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_qmltest_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_quick.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_quick_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_quickparticles_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_quickwidgets.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_quickwidgets_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_script.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_script_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_scripttools.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_scripttools_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_sensors.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_sensors_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_serialport.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_serialport_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_sql.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_sql_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_svg.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_svg_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_testlib.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_testlib_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_uitools.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_uitools_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_webkit.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_webkit_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_webkitwidgets.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_webkitwidgets_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_websockets.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_websockets_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_widgets.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_widgets_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_winextras.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_winextras_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_xml.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_xml_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_xmlpatterns.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\modules\qt_lib_xmlpatterns_private.pri:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\qt_functions.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\qt_config.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\win32\qt_config.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\win32-msvc2008\qmake.conf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\spec_post.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\exclusive_builds.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\default_pre.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\win32\default_pre.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\resolve_config.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\exclusive_builds_post.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\default_post.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\win32\rtti.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\precompile_header.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\warn_on.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\qt.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\resources.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\moc.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\win32\opengl.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\win32\windows.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\testcase_targets.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\exceptions.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\yacc.prf:
..\..\..\..\Qt\5.3\msvc2013_64\mkspecs\features\lex.prf:
cfgtest_QtWebKit.pro:
C:/Qt/5.3/msvc2013_64/lib/qtmain.prl:
C:/Qt/5.3/msvc2013_64/lib/Qt5Core.prl:
C:/Qt/5.3/msvc2013_64/lib/Qt5WebKit.prl:
C:/Qt/5.3/msvc2013_64/lib/Qt5Network.prl:
C:/Qt/5.3/msvc2013_64/lib/Qt5Gui.prl:
C:/Qt/5.3/msvc2013_64/lib/libEGL.prl:
C:/Qt/5.3/msvc2013_64/lib/libGLESv2.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-msvc2008 -o cfgtest_QtWebKit.mk cfgtest_QtWebKit.pro

qmake_all: FORCE

make_first: release-make_first debug-make_first FORCE
all: release-all debug-all FORCE
clean: release-clean debug-clean FORCE
	-$(DEL_FILE) cfgtest_QtWebKit.exp
distclean: release-distclean debug-distclean FORCE
	-$(DEL_FILE) cfgtest_QtWebKit.mk

release-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first
FORCE:

$(MAKEFILE).Release: cfgtest_QtWebKit.mk
$(MAKEFILE).Debug: cfgtest_QtWebKit.mk
