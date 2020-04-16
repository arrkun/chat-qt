#include "menuitem.h"
#include <iostream>

MenuItem::MenuItem(
        QWidget *parent,
        int index,
        QPixmap *pixmap,
        QString tip
        )
    : QWidget(parent),
      index(index),
      pixmap(pixmap),
      tip(tip)
{
    setFixedSize(QSize(menuWidth, menuWidth));
    leftTabBarPalette = palette();
    setAutoFillBackground(true);
    setCursor(Qt::PointingHandCursor);
}
void MenuItem::paintEvent(QPaintEvent *)
{
    QPainter itemPainter(this);
    itemPainter.save();
    int position = (menuWidth - iconSize) / 2;
    itemPainter.setRenderHint(QPainter::Antialiasing, true);
    itemPainter.drawPixmap(position, position, iconSize, iconSize, *pixmap);
    itemPainter.restore();
}
void MenuItem::enterEvent(QEvent *)
{
    setActiveHoverBackground();
}
void MenuItem::leaveEvent(QEvent *)
{
    setDefaultBackground();
}
void MenuItem::mouseReleaseEvent (QMouseEvent *)
{
    emit on_menu_item_press(index);
}
void MenuItem::setActiveHoverBackground()
{
    leftTabBarPalette.setColor(QPalette::Window, QColor(235, 235, 235));
    setPalette(leftTabBarPalette);
}
void MenuItem::setDefaultBackground()
{
    leftTabBarPalette.setColor(QPalette::Window, QColor(246, 246, 246));
    setPalette(leftTabBarPalette);
}
