#############################################################################
# Makefile for building: openssl
# Generated by qmake (2.01a) (Qt 4.6.2) on: Mon Feb 13 21:45:24 2012
# Project:  openssl.pro
# Template: app
# Command: /home/wangg/FinalProject/qt-everywhere-opensource-src-4.6.2/bin/qmake -nocache -spec ../../../mkspecs/qws/linux-DM3730-g++ -unix CONFIG+=\ cross_compile LIBS*= LIBS+= INCLUDEPATH*= QMAKE_CXXFLAGS*= QMAKE_CXXFLAGS+= -o Makefile openssl.pro
#############################################################################

####### Compiler, tools and options

CC            = /usr/local/angstrom/arm/arm-angstrom-linux-gnueabi/bin/gcc
CXX           = /usr/local/angstrom/arm/arm-angstrom-linux-gnueabi/bin/g++
DEFINES       = 
CFLAGS        = -pipe -O3 -march=armv7-a -mtune=cortex-a8 -mfpu=neon -mfloat-abi=softfp -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -O3 -march=armv7-a -mtune=cortex-a8 -mfpu=neon -mfloat-abi=softfp -Wall -W $(DEFINES)
INCPATH       = -I../../../mkspecs/qws/linux-DM3730-g++ -I.
LINK          = /usr/local/angstrom/arm/arm-angstrom-linux-gnueabi/bin/g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)    
AR            = /usr/local/angstrom/arm/arm-angstrom-linux-gnueabi/bin/ar cqs
RANLIB        = 
QMAKE         = /home/wangg/FinalProject/qt-everywhere-opensource-src-4.6.2/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = /usr/local/angstrom/arm/arm-angstrom-linux-gnueabi/bin/strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = openssl.cpp 
OBJECTS       = openssl.o
DIST          = ../../../mkspecs/common/g++.conf \
		../../../mkspecs/common/unix.conf \
		../../../mkspecs/common/linux.conf \
		../../../mkspecs/common/qws.conf \
		../../../mkspecs/features/qt_functions.prf \
		../../../mkspecs/features/qt_config.prf \
		../../../mkspecs/features/exclusive_builds.prf \
		../../../mkspecs/features/default_pre.prf \
		openssl.pri \
		../../../mkspecs/features/release.prf \
		../../../mkspecs/features/default_post.prf \
		../../../mkspecs/features/warn_on.prf \
		../../../mkspecs/features/resources.prf \
		../../../mkspecs/features/uic.prf \
		../../../mkspecs/features/yacc.prf \
		../../../mkspecs/features/lex.prf \
		../../../mkspecs/features/include_source_dir.prf \
		openssl.pro
QMAKE_TARGET  = openssl
DESTDIR       = 
TARGET        = openssl

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

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: openssl.pro ../../../mkspecs/qws/linux-DM3730-g++/qmake.conf ../../../mkspecs/common/g++.conf \
		../../../mkspecs/common/unix.conf \
		../../../mkspecs/common/linux.conf \
		../../../mkspecs/common/qws.conf \
		../../../mkspecs/features/qt_functions.prf \
		../../../mkspecs/features/qt_config.prf \
		../../../mkspecs/features/exclusive_builds.prf \
		../../../mkspecs/features/default_pre.prf \
		openssl.pri \
		../../../mkspecs/features/release.prf \
		../../../mkspecs/features/default_post.prf \
		../../../mkspecs/features/warn_on.prf \
		../../../mkspecs/features/resources.prf \
		../../../mkspecs/features/uic.prf \
		../../../mkspecs/features/yacc.prf \
		../../../mkspecs/features/lex.prf \
		../../../mkspecs/features/include_source_dir.prf
	$(QMAKE) -nocache -spec ../../../mkspecs/qws/linux-DM3730-g++ -unix CONFIG+=\ cross_compile LIBS*= LIBS+= INCLUDEPATH*= QMAKE_CXXFLAGS*= QMAKE_CXXFLAGS+= -o Makefile openssl.pro
../../../mkspecs/common/g++.conf:
../../../mkspecs/common/unix.conf:
../../../mkspecs/common/linux.conf:
../../../mkspecs/common/qws.conf:
../../../mkspecs/features/qt_functions.prf:
../../../mkspecs/features/qt_config.prf:
../../../mkspecs/features/exclusive_builds.prf:
../../../mkspecs/features/default_pre.prf:
openssl.pri:
../../../mkspecs/features/release.prf:
../../../mkspecs/features/default_post.prf:
../../../mkspecs/features/warn_on.prf:
../../../mkspecs/features/resources.prf:
../../../mkspecs/features/uic.prf:
../../../mkspecs/features/yacc.prf:
../../../mkspecs/features/lex.prf:
../../../mkspecs/features/include_source_dir.prf:
qmake:  FORCE
	@$(QMAKE) -nocache -spec ../../../mkspecs/qws/linux-DM3730-g++ -unix CONFIG+=\ cross_compile LIBS*= LIBS+= INCLUDEPATH*= QMAKE_CXXFLAGS*= QMAKE_CXXFLAGS+= -o Makefile openssl.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/openssl1.0.0 || $(MKDIR) .tmp/openssl1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/openssl1.0.0/ && (cd `dirname .tmp/openssl1.0.0` && $(TAR) openssl1.0.0.tar openssl1.0.0 && $(COMPRESS) openssl1.0.0.tar) && $(MOVE) `dirname .tmp/openssl1.0.0`/openssl1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/openssl1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


compiler_rcc_make_all:
compiler_rcc_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

openssl.o: openssl.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o openssl.o openssl.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

