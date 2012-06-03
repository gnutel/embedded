TEMPLATE	= app
LANGUAGE	= C++

CONFIG	+= qt warn_on release

HEADERS	+= data/common.h

SOURCES	+= main.cpp \
	data/common.cpp

FORMS	= mainwnd.ui

DBFILE	= access_control.db
unix {
  UI_DIR = .ui
  MOC_DIR = .moc
  OBJECTS_DIR = .obj
}


