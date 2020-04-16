#include "mainwindow.h"
#include <iostream>

MainWindow::MainWindow (QMainWindow *parent): QMainWindow(parent) {
    renderMainWindow();
}
MainWindow::~MainWindow () {

}
void MainWindow::renderMainWindow() {
    // 设置最小size
    setMinimumSize(QSize(894, 630));
    setWindowTitle(tr("V4.0"));


    menu = new MainLeftMenu(this);
    chatContent = new Chat(this);
    workbench = new Workbench(this);
    centralWidget = new QWidget(this);

    myTabWidget = new QTabWidget(this);
    myTabWidget->addTab(chatContent, "chat");
    myTabWidget->addTab(workbench, "workbench");
    myTabWidget->setTabPosition(QTabWidget::West);
    myTabWidget->setStyleSheet("QTabWidget::pane{border: 0px solid black;background: white;}");
    myTabWidget->tabBar()->hide();
    activeTab = myTabWidget->currentIndex();

    centralWidgetLayout = new QBoxLayout(QBoxLayout::LeftToRight);
    centralWidgetLayout->setMargin(0);
    centralWidgetLayout->setSpacing(0);
    centralWidgetLayout->setContentsMargins(0, 0, 0, 0);

    centralWidgetLayout->addWidget(menu);
    centralWidgetLayout->addWidget(myTabWidget, 1);
    QObject::connect(menu, &MainLeftMenu::on_menu_item_press, this, &MainWindow::onMenuItemPress);

    centralWidget->setLayout(centralWidgetLayout);
    // 设置中心内容
    setCentralWidget(centralWidget);
}
void MainWindow::onMenuItemPress(int index)
{
    setActiveTab(index);
}
void MainWindow::setActiveTab(int index)
{
    if (activeTab != index) {
        myTabWidget->setCurrentIndex(index);
        activeTab = index;
    }
}
