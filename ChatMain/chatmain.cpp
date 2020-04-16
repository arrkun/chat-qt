#include "chatmain.h"

ChatMain::ChatMain(QWidget *parent): QWidget(parent)
{
    this->render();
}
ChatMain::~ChatMain()
{
    
}
void ChatMain::render()
{
    layout = new QHBoxLayout(this);

    listContent = new ChatListContainer(this);
    messageContent = new ChatMessageContainer(this);

    layout->addWidget(listContent);
    layout->addWidget(messageContent, 1);

    layout->setMargin(0);
    layout->setSpacing(0);

    listContent->show();
    messageContent->show();
    
    this->setLayout(layout);
}
void ChatMain::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(QColor(235, 235, 235));
    // 上面画线
    painter.drawLine(0, 0, this->width() - 1, 0);
    // 左面画线
//    painter.drawLine(0, 0, 0, this->height() - 1);
    // 右侧画线
//    painter.drawLine(this->width() - 1, 0, this->width() - 1, this->height() - 1);
    // 下面画线
//    painter.drawLine(0, this->height() - 1, this->width() - 1, this->height() - 1);
}

void ChatMain::onAddChat(const int count)
{
    listContent->onAddChat(count);
}
