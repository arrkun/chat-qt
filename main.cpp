#include <QApplication>
#include <iostream>

#include "MainWindow/mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

#ifdef Q_OS_MAC
    // macOS
#endif

    MainWindow w;
    w.show();
    std::clog<< 1234;
    return a.exec();
}
