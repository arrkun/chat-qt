#include "mainleftmenu.h"

#include <iostream>

MainLeftMenu::MainLeftMenu(QWidget *parent): QWidget(parent)
{
    setStyle();
    render();
}
MainLeftMenu::~MainLeftMenu()
{
    
}
void MainLeftMenu::render()
{
    layout = new QBoxLayout(QBoxLayout::TopToBottom);
    userAvatar = new UserAvatar(this);
    menuList = new MenuList(this);

    layout->setMargin(0);
    layout->setSpacing(0);
    layout->setAlignment(Qt::AlignTop);

    layout->setContentsMargins(0, 10, 0, 0);
    layout->addWidget(userAvatar, 1, Qt::AlignHCenter);
    layout->addWidget(menuList, 1);
    QObject::connect(menuList, &MenuList::on_menu_item_press, this, &MainLeftMenu::on_menu_item_press);

    setLayout(layout);
}
void MainLeftMenu::setStyle()
{
    QPalette leftTabBarPalette = this->palette();
    setAutoFillBackground(true);
    leftTabBarPalette.setColor(QPalette::Window, QColor(246, 246, 246));
    setPalette(leftTabBarPalette);
    setFixedWidth(menuWidth);
}
