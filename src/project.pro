QT += core gui widgets printsupport

TARGET = cs3307-orange
TEMPLATE = app
CONFIG += c++11
win32 {
	CONFIG += windows
}

SOURCES += main.cpp \
    parser/PresentationParser.cpp \
    ui/DashboardWindow.cpp ui/VisualizationWindow.cpp ui/FileInputDialog.cpp \
    ../external/qcustomplot.cpp

FORMS += ui/FileInputDialog.ui ui/DashboardWindow.ui ui/VisualizationWindow.ui

HEADERS += \
    parser/Parser.h parser/PresentationParser.h \
    ui/DashboardWindow.h ui/VisualizationWindow.h ui/FileInputDialog.h \
    ../external/qcustomplot.h ../external/csv.h
