#ifndef USERAVATAR_H
#define USERAVATAR_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>

class UserAvatar : public QWidget
{
    Q_OBJECT
public:
    explicit UserAvatar(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *) override;
private:
    const int imageSize = 36;
};

#endif // USERAVATAR_H
