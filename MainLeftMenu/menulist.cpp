#include "menulist.h"
#include <iostream>

MenuList::MenuList(QWidget *parent) : QWidget(parent)
{
    listLayout = new QBoxLayout(QBoxLayout::TopToBottom);

    listLayout->setContentsMargins(0, 26, 0, 0);

    for (int i = 0; i < 4; i++) {
        QPixmap *pixmap = new QPixmap;
        QString tip;
        if (i == 0)
        {
            pixmap->load(":/assets/images/chat_unselect.png");
            tip = "会话";
        }
        else if (i == 1)
        {
            pixmap->load(":/assets/images/todo_unselect.png");
            tip = "待办";
        }
        else if (i == 2)
        {
            pixmap->load(":/assets/images/addressBook_unselect.png");
            tip = "通讯录";
        }
        else if (i == 3)
        {
            pixmap->load(":/assets/images/workbench_unselect.png");
            tip = "工作台";
        }
        pixmap->scaled(20, 20, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
        MenuItem *menu = new MenuItem(this, i, pixmap, tip);
        QObject::connect(menu, &MenuItem::on_menu_item_press, this, &MenuList::on_menu_item_press);
        listLayout->addWidget(menu);
    }
    listLayout->setAlignment(Qt::AlignTop);
    listLayout->setSpacing(8);
    setLayout(listLayout);
}
