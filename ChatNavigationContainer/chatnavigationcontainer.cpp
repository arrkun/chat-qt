#include "chatnavigationcontainer.h"


ChatNavigationContainer::ChatNavigationContainer(QWidget *parent): QWidget(parent)
{
    this->render();
}
ChatNavigationContainer::~ChatNavigationContainer()
{
    
}
void ChatNavigationContainer::render()
{
    this->setFixedHeight(55);
    QHBoxLayout *layout = new QHBoxLayout(this);

    layout->setAlignment(Qt::AlignLeft);

    QPushButton *addChat = new QPushButton(this);
    QPushButton *addMsg = new QPushButton(this);

    addChat->setText("add*1000");
    addMsg->setText("add*100");
    addChat->setAutoFillBackground(true);
    addMsg->setAutoFillBackground(true);

    connect(addChat, &QPushButton::clicked, this, &ChatNavigationContainer::s_add_chat_click);
    connect(addMsg, &QPushButton::clicked, this, &ChatNavigationContainer::addMsgEvent);

    layout->setSpacing(0);

    layout->addWidget(addChat);
    layout->addWidget(addMsg);

    this->setLayout(layout);

}

void ChatNavigationContainer::addChatEvent()
{
    std::clog << "addChat" << std::endl;
}

void ChatNavigationContainer::addMsgEvent()
{
    std::clog << "addMsg" << std::endl;
}




