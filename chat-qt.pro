QT       += core gui
#QT += webenginewidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ChatListContainer/chatlistcontainer.cpp \
    ChatListContainer/chatlistitemdelegate.cpp \
    ChatListContainer/chatlistitemmodel.cpp \
    ChatListContainer/chatlistscrollview.cpp \
    ChatMessageContainer/chatmessagecontainer.cpp \
    ChatMain/chatmain.cpp \
    ChatMessageContainer/chatmessagescrollview.cpp \
    MainLeftMenu/mainleftmenu.cpp \
    MainLeftMenu/menuitem.cpp \
    MainLeftMenu/menulist.cpp \
    MainLeftMenu/useravatar.cpp \
    main.cpp \
    ChatNavigationContainer/chatnavigationcontainer.cpp \
    Chat/chat.cpp \
    MainWindow/mainwindow.cpp \
    Workbench/workbench.cpp

HEADERS += \
    ChatListContainer/chatlistcontainer.h \
    ChatListContainer/chatlistitemdelegate.h \
    ChatListContainer/chatlistitemmodel.h \
    ChatListContainer/chatlistscrollview.h \
    ChatMessageContainer/chatmessagecontainer.h \
    ChatMain/chatmain.h \
    ChatMessageContainer/chatmessageitemdata.h \
    ChatMessageContainer/chatmessagescrollview.h \
    MainLeftMenu/mainleftmenu.h \
    ChatNavigationContainer/chatnavigationcontainer.h \
    Chat/chat.h \
    MainLeftMenu/menuitem.h \
    MainLeftMenu/menulist.h \
    MainLeftMenu/useravatar.h \
    MainWindow/mainwindow.h \
    Workbench/workbench.h

TRANSLATIONS += \
    chat-qt_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    chat-qt.qrc
