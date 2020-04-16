#ifndef WINDOWENTRY_H
#define WINDOWENTRY_H

#include <QMainWindow>
#include <QWidget>
#include <QBoxLayout>
#include <QPushButton>
#include <QTabWidget>

#include "MainLeftMenu/mainleftmenu.h"
#include "Chat/chat.h"
#include "Workbench/workbench.h"

class MainWindow: public QMainWindow {

    Q_OBJECT

public:
    MainWindow(QMainWindow *parent = nullptr);
    ~MainWindow();
    void onMenuItemPress(int index);
    void setActiveTab(int index);

protected:
    void renderMainWindow();
private:
    QWidget *centralWidget;
    QBoxLayout *centralWidgetLayout;

    MainLeftMenu *menu;
    Chat *chatContent;
    Workbench *workbench;
    QTabWidget *myTabWidget;
    int activeTab = 0;
};

#endif // WINDOWENTRY_H
