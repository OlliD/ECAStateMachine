#############################################################################
# Makefile for building: libQtSolutions_StateMachineFramework-1.1_debug.1.0.0.dylib
# Generated by qmake (2.01a) (Qt 4.6.3) on: Mo. Jul 19 14:56:58 2010
# Project:  buildlib.pro
# Template: lib
# Command: /opt/local/bin/qmake -macx -o QtSolutions_StateMachineFramework-1.1_debug.xcodeproj/project.pbxproj buildlib.pro
#############################################################################

MOC       = /Developer/Tools/Qt/moc
UIC       = /Developer/Tools/Qt/uic
LEX       = flex
LEXFLAGS  = 
YACC      = yacc
YACCFLAGS = -d
DEFINES       = -DQT_STATEMACHINE_SOLUTION -DQT_NO_ANIMATION -DQT_SCRIPT_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
INCPATH       = -I/usr/local/Qt4.6/mkspecs/macx-xcode -I. -I/Library/Frameworks/QtCore.framework/Versions/4/Headers -I/usr/include/QtCore -I/Library/Frameworks/QtGui.framework/Versions/4/Headers -I/usr/include/QtGui -I/Library/Frameworks/QtScript.framework/Versions/4/Headers -I/usr/include/QtScript -I/usr/include -I../src -I. -I/usr/local/include -I/System/Library/Frameworks/CarbonCore.framework/Headers -F/Library/Frameworks
DEL_FILE  = rm -f
MOVE      = mv -f

IMAGES = 
PARSERS =
preprocess: $(PARSERS) compilers
clean preprocess_clean: parser_clean compiler_clean

parser_clean:
check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compilers: ./moc_qstatemachine.cpp ./moc_qstateaction.cpp ./moc_qabstractstate.cpp\
	 ./moc_qactionstate.cpp ./moc_qstate.cpp ./moc_qfinalstate.cpp\
	 ./moc_qhistorystate.cpp ./moc_qabstracttransition.cpp ./moc_qtransition.cpp\
	 ./moc_qstatefinishedtransition.cpp ./moc_qsignaltransition.cpp ./moc_qeventtransition.cpp\
	 ./moc_qscriptedstatemachine.cpp ./moc_qssmguiinvokers_p.cpp ./qscriptedstatemachine.moc
compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_moc_header_make_all: moc_qstatemachine.cpp moc_qstateaction.cpp moc_qabstractstate.cpp moc_qactionstate.cpp moc_qstate.cpp moc_qfinalstate.cpp moc_qhistorystate.cpp moc_qabstracttransition.cpp moc_qtransition.cpp moc_qstatefinishedtransition.cpp moc_qsignaltransition.cpp moc_qeventtransition.cpp moc_qscriptedstatemachine.cpp moc_qssmguiinvokers_p.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_qstatemachine.cpp moc_qstateaction.cpp moc_qabstractstate.cpp moc_qactionstate.cpp moc_qstate.cpp moc_qfinalstate.cpp moc_qhistorystate.cpp moc_qabstracttransition.cpp moc_qtransition.cpp moc_qstatefinishedtransition.cpp moc_qsignaltransition.cpp moc_qeventtransition.cpp moc_qscriptedstatemachine.cpp moc_qssmguiinvokers_p.cpp
moc_qstatemachine.cpp: ../src/qtstatemachineglobal.h \
		../src/qactionstate.h \
		../src/qabstractstate.h \
		../src/qstatemachine.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qstatemachine.h -o moc_qstatemachine.cpp

moc_qstateaction.cpp: ../src/qtstatemachineglobal.h \
		../src/qstateaction.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qstateaction.h -o moc_qstateaction.cpp

moc_qabstractstate.cpp: ../src/qtstatemachineglobal.h \
		../src/qabstractstate.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qabstractstate.h -o moc_qabstractstate.cpp

moc_qactionstate.cpp: ../src/qtstatemachineglobal.h \
		../src/qabstractstate.h \
		../src/qactionstate.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qactionstate.h -o moc_qactionstate.cpp

moc_qstate.cpp: ../src/qtstatemachineglobal.h \
		../src/qactionstate.h \
		../src/qabstractstate.h \
		../src/qstate.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qstate.h -o moc_qstate.cpp

moc_qfinalstate.cpp: ../src/qtstatemachineglobal.h \
		../src/qactionstate.h \
		../src/qabstractstate.h \
		../src/qfinalstate.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qfinalstate.h -o moc_qfinalstate.cpp

moc_qhistorystate.cpp: ../src/qtstatemachineglobal.h \
		../src/qstate.h \
		../src/qactionstate.h \
		../src/qabstractstate.h \
		../src/qhistorystate.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qhistorystate.h -o moc_qhistorystate.cpp

moc_qabstracttransition.cpp: ../src/qtstatemachineglobal.h \
		../src/qabstracttransition.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qabstracttransition.h -o moc_qabstracttransition.cpp

moc_qtransition.cpp: ../src/qtstatemachineglobal.h \
		../src/qabstracttransition.h \
		../src/qtransition.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qtransition.h -o moc_qtransition.cpp

moc_qstatefinishedtransition.cpp: ../src/qtstatemachineglobal.h \
		../src/qtransition.h \
		../src/qabstracttransition.h \
		../src/qstatefinishedtransition.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qstatefinishedtransition.h -o moc_qstatefinishedtransition.cpp

moc_qsignaltransition.cpp: ../src/qtstatemachineglobal.h \
		../src/qtransition.h \
		../src/qabstracttransition.h \
		../src/qsignaltransition.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qsignaltransition.h -o moc_qsignaltransition.cpp

moc_qeventtransition.cpp: ../src/qtstatemachineglobal.h \
		../src/qtransition.h \
		../src/qabstracttransition.h \
		../src/qeventtransition.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qeventtransition.h -o moc_qeventtransition.cpp

moc_qscriptedstatemachine.cpp: ../src/QtScriptedStateMachine \
		../src/QtStateMachine \
		../src/qstatemachine.h \
		../src/qtstatemachineglobal.h \
		../src/qactionstate.h \
		../src/qabstractstate.h \
		../src/qstateaction.h \
		../src/qtransition.h \
		../src/qabstracttransition.h \
		../src/qstate.h \
		../src/qscriptedstatemachine.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qscriptedstatemachine.h -o moc_qscriptedstatemachine.cpp

moc_qssmguiinvokers_p.cpp: ../src/qscriptedstatemachine.h \
		../src/QtScriptedStateMachine \
		../src/QtStateMachine \
		../src/qstatemachine.h \
		../src/qtstatemachineglobal.h \
		../src/qactionstate.h \
		../src/qabstractstate.h \
		../src/qstateaction.h \
		../src/qtransition.h \
		../src/qabstracttransition.h \
		../src/qstate.h \
		../src/qssmguiinvokers_p.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qssmguiinvokers_p.h -o moc_qssmguiinvokers_p.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all: qscriptedstatemachine.moc
compiler_moc_source_clean:
	-$(DEL_FILE) qscriptedstatemachine.moc
qscriptedstatemachine.moc: ../src/qscriptedstatemachine.h \
		../src/QtScriptedStateMachine \
		../src/QtStateMachine \
		../src/qstatemachine.h \
		../src/qtstatemachineglobal.h \
		../src/qactionstate.h \
		../src/qabstractstate.h \
		../src/qstateaction.h \
		../src/qtransition.h \
		../src/qabstracttransition.h \
		../src/qstate.h \
		../src/qstatefinishedevent.h \
		../src/qhistorystate.h \
		../src/qabstracttransition_p.h \
		../src/qfinalstate.h \
		../src/qssmguiinvokers_p.h \
		../src/qscriptedstatemachine.cpp
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ ../src/qscriptedstatemachine.cpp -o qscriptedstatemachine.moc

compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_moc_source_clean 
