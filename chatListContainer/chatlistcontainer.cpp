#include "chatlistcontainer.h"

ChatListContainer::ChatListContainer(QWidget *parent): QWidget(parent)
{
    this->render();
}
ChatListContainer::~ChatListContainer()
{
    
}
void ChatListContainer::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(QColor(235, 235, 235));
    painter.drawLine(this->width() - 1, 0, this->width() - 1, this->height() - 1);
}
void ChatListContainer::render()
{
    
    this->setFixedWidth(250);
    
    listView = new ChatListScrollView(this);
    layout = new QBoxLayout(QBoxLayout::TopToBottom, this);
    
    layout->addWidget(listView, 1);
    layout->setSpacing(0);
    layout->setMargin(0);
    
    this->setLayout(layout);
}
void ChatListContainer::onAddChat(const int count)
{
    listView->onAddChat(count);
}
