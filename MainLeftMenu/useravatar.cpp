#include "useravatar.h"

UserAvatar::UserAvatar(QWidget *parent) : QWidget(parent)
{
    setFixedWidth(imageSize);
    setFixedHeight(imageSize);
}
void UserAvatar::paintEvent (QPaintEvent *)
{
    const int width = imageSize;
    const int height = imageSize;

    QPixmap p;
    p.load(":/assets/test.png");
    p.scaled(imageSize, imageSize, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);

    QPainterPath path;
    path.addEllipse(0, 0, width, height);

    QPainter selfPainter(this);
    // 抗锯齿 + 平滑边缘处理
    selfPainter.setRenderHints(QPainter::Antialiasing, true);
    selfPainter.setRenderHints(QPainter::SmoothPixmapTransform, true);
    selfPainter.setClipPath(path);
    selfPainter.drawPixmap(0, 0, width, height, p);

}
