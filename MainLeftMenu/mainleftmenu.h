#ifndef menu_h
#define menu_h
#include <QWidget>
#include <QBoxLayout>
#include <QPalette>
#include <QObject>

#include "useravatar.h"
#include "menulist.h"

class MainLeftMenu: public QWidget {
    Q_OBJECT
signals:
    void on_menu_item_press(int index);
public:
    MainLeftMenu(QWidget *parent = nullptr);
    ~MainLeftMenu();
protected:
    void render();
    void setStyle();
private:
    QWidget *userAvatar;
    MenuList *menuList;
    QBoxLayout *layout;
    const int menuWidth = 60;
};

#endif /* menu_h */
