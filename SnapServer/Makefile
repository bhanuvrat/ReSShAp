#############################################################################
# Makefile for building: SnapServer
# Generated by qmake (2.01a) (Qt 4.5.3) on: Tue Aug 17 08:42:35 2010
# Project:  SnapServer.pro
# Template: app
# Command: /usr/lib/qt4/bin/qmake -unix -o Makefile SnapServer.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fstack-protector --param=ssp-buffer-size=4 -m32 -march=i686 -mtune=atom -fasynchronous-unwind-tables -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fstack-protector --param=ssp-buffer-size=4 -m32 -march=i686 -mtune=atom -fasynchronous-unwind-tables -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/lib/qt4/mkspecs/linux-g++ -I. -I/usr/include/QtCore -I/usr/include/QtNetwork -I/usr/include/QtGui -I/usr/include -I. -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)   -lQtGui -lQtNetwork -lQtCore -lpthread
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = Connection.cpp \
		ConnectionData.cpp \
		main.cpp \
		SnapServer.cpp moc_Connection.cpp \
		moc_ConnectionData.cpp \
		moc_SnapServer.cpp
OBJECTS       = Connection.o \
		ConnectionData.o \
		main.o \
		SnapServer.o \
		moc_Connection.o \
		moc_ConnectionData.o \
		moc_SnapServer.o
DIST          = /usr/lib/qt4/mkspecs/common/g++-multilib.conf \
		/usr/lib/qt4/mkspecs/common/unix.conf \
		/usr/lib/qt4/mkspecs/common/linux.conf \
		/usr/lib/qt4/mkspecs/qconfig.pri \
		/usr/lib/qt4/mkspecs/features/qt_functions.prf \
		/usr/lib/qt4/mkspecs/features/qt_config.prf \
		/usr/lib/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt4/mkspecs/features/default_pre.prf \
		/usr/lib/qt4/mkspecs/features/release.prf \
		/usr/lib/qt4/mkspecs/features/default_post.prf \
		/usr/lib/qt4/mkspecs/features/warn_on.prf \
		/usr/lib/qt4/mkspecs/features/qt.prf \
		/usr/lib/qt4/mkspecs/features/unix/thread.prf \
		/usr/lib/qt4/mkspecs/features/moc.prf \
		/usr/lib/qt4/mkspecs/features/resources.prf \
		/usr/lib/qt4/mkspecs/features/uic.prf \
		/usr/lib/qt4/mkspecs/features/yacc.prf \
		/usr/lib/qt4/mkspecs/features/lex.prf \
		/usr/lib/qt4/mkspecs/features/include_source_dir.prf \
		SnapServer.pro
QMAKE_TARGET  = SnapServer
DESTDIR       = 
TARGET        = SnapServer

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_SnapServer.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: SnapServer.pro  /usr/lib/qt4/mkspecs/linux-g++/qmake.conf /usr/lib/qt4/mkspecs/common/g++-multilib.conf \
		/usr/lib/qt4/mkspecs/common/unix.conf \
		/usr/lib/qt4/mkspecs/common/linux.conf \
		/usr/lib/qt4/mkspecs/qconfig.pri \
		/usr/lib/qt4/mkspecs/features/qt_functions.prf \
		/usr/lib/qt4/mkspecs/features/qt_config.prf \
		/usr/lib/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt4/mkspecs/features/default_pre.prf \
		/usr/lib/qt4/mkspecs/features/release.prf \
		/usr/lib/qt4/mkspecs/features/default_post.prf \
		/usr/lib/qt4/mkspecs/features/warn_on.prf \
		/usr/lib/qt4/mkspecs/features/qt.prf \
		/usr/lib/qt4/mkspecs/features/unix/thread.prf \
		/usr/lib/qt4/mkspecs/features/moc.prf \
		/usr/lib/qt4/mkspecs/features/resources.prf \
		/usr/lib/qt4/mkspecs/features/uic.prf \
		/usr/lib/qt4/mkspecs/features/yacc.prf \
		/usr/lib/qt4/mkspecs/features/lex.prf \
		/usr/lib/qt4/mkspecs/features/include_source_dir.prf
	$(QMAKE) -unix -o Makefile SnapServer.pro
/usr/lib/qt4/mkspecs/common/g++-multilib.conf:
/usr/lib/qt4/mkspecs/common/unix.conf:
/usr/lib/qt4/mkspecs/common/linux.conf:
/usr/lib/qt4/mkspecs/qconfig.pri:
/usr/lib/qt4/mkspecs/features/qt_functions.prf:
/usr/lib/qt4/mkspecs/features/qt_config.prf:
/usr/lib/qt4/mkspecs/features/exclusive_builds.prf:
/usr/lib/qt4/mkspecs/features/default_pre.prf:
/usr/lib/qt4/mkspecs/features/release.prf:
/usr/lib/qt4/mkspecs/features/default_post.prf:
/usr/lib/qt4/mkspecs/features/warn_on.prf:
/usr/lib/qt4/mkspecs/features/qt.prf:
/usr/lib/qt4/mkspecs/features/unix/thread.prf:
/usr/lib/qt4/mkspecs/features/moc.prf:
/usr/lib/qt4/mkspecs/features/resources.prf:
/usr/lib/qt4/mkspecs/features/uic.prf:
/usr/lib/qt4/mkspecs/features/yacc.prf:
/usr/lib/qt4/mkspecs/features/lex.prf:
/usr/lib/qt4/mkspecs/features/include_source_dir.prf:
qmake:  FORCE
	@$(QMAKE) -unix -o Makefile SnapServer.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/SnapServer1.0.0 || $(MKDIR) .tmp/SnapServer1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/SnapServer1.0.0/ && $(COPY_FILE) --parents Connection.h ConnectionData.h SnapServer.h .tmp/SnapServer1.0.0/ && $(COPY_FILE) --parents Connection.cpp ConnectionData.cpp main.cpp SnapServer.cpp .tmp/SnapServer1.0.0/ && $(COPY_FILE) --parents SnapServer.ui .tmp/SnapServer1.0.0/ && (cd `dirname .tmp/SnapServer1.0.0` && $(TAR) SnapServer1.0.0.tar SnapServer1.0.0 && $(COMPRESS) SnapServer1.0.0.tar) && $(MOVE) `dirname .tmp/SnapServer1.0.0`/SnapServer1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/SnapServer1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_Connection.cpp moc_ConnectionData.cpp moc_SnapServer.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_Connection.cpp moc_ConnectionData.cpp moc_SnapServer.cpp
moc_Connection.cpp: ConnectionData.h \
		Connection.h
	/usr/lib/qt4/bin/moc $(DEFINES) $(INCPATH) Connection.h -o moc_Connection.cpp

moc_ConnectionData.cpp: ConnectionData.h
	/usr/lib/qt4/bin/moc $(DEFINES) $(INCPATH) ConnectionData.h -o moc_ConnectionData.cpp

moc_SnapServer.cpp: ui_SnapServer.h \
		Connection.h \
		ConnectionData.h \
		SnapServer.h
	/usr/lib/qt4/bin/moc $(DEFINES) $(INCPATH) SnapServer.h -o moc_SnapServer.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_SnapServer.h
compiler_uic_clean:
	-$(DEL_FILE) ui_SnapServer.h
ui_SnapServer.h: SnapServer.ui
	/usr/lib/qt4/bin/uic SnapServer.ui -o ui_SnapServer.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

Connection.o: Connection.cpp Connection.h \
		ConnectionData.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Connection.o Connection.cpp

ConnectionData.o: ConnectionData.cpp ConnectionData.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ConnectionData.o ConnectionData.cpp

main.o: main.cpp SnapServer.h \
		ui_SnapServer.h \
		Connection.h \
		ConnectionData.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

SnapServer.o: SnapServer.cpp SnapServer.h \
		ui_SnapServer.h \
		Connection.h \
		ConnectionData.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SnapServer.o SnapServer.cpp

moc_Connection.o: moc_Connection.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Connection.o moc_Connection.cpp

moc_ConnectionData.o: moc_ConnectionData.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_ConnectionData.o moc_ConnectionData.cpp

moc_SnapServer.o: moc_SnapServer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_SnapServer.o moc_SnapServer.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

