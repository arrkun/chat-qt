#ifndef MENUITEM_H
#define MENUITEM_H

#include <QWidget>
#include <QBoxLayout>
#include <QPainter>

class MenuItem : public QWidget
{
    Q_OBJECT
signals:
    void on_menu_item_press(int index);
public:
    explicit MenuItem(QWidget *parent = nullptr, int index = 1, QPixmap * = nullptr, QString tip = "");
    void paintEvent (QPaintEvent *) override;
    void enterEvent (QEvent *) override;
    void leaveEvent (QEvent *) override;
    void mouseReleaseEvent (QMouseEvent *) override;
protected:
    void setActiveHoverBackground();
    void setDefaultBackground();
private:
    int index;
    QPixmap *pixmap;
    QString tip;
    QBoxLayout *itemLayout;
    QPalette leftTabBarPalette;

    const int menuWidth = 60;
    const int iconSize = 20;
};

#endif // MENUITEM_H
