#ifndef MENULIST_H
#define MENULIST_H

#include <QWidget>
#include <QBoxLayout>
#include <QObject>

#include "menuitem.h"

class MenuList : public QWidget
{
    Q_OBJECT
signals:
    void on_menu_item_press(int index);
public:
    explicit MenuList(QWidget *parent = nullptr);
private:
    QBoxLayout *listLayout;
    const int menuWidth = 60;
signals:

};

#endif // MENULIST_H
