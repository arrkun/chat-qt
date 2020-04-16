#include "chat.h"
#include <QWidget>
#include <QVBoxLayout>
#include <iostream>

Chat::Chat(QWidget *parent): QWidget(parent) {
    this->render();
    this->connectSlot();
}
Chat::~Chat() {
    
}
void Chat::render() {
    QPalette selfContainerPalette = this->palette();
    this->setAutoFillBackground(true);
    selfContainerPalette.setColor(QPalette::Window, QColor(255, 255, 255));
    this->setPalette(selfContainerPalette);
    
    QVBoxLayout *layout = new QVBoxLayout;
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setMargin(0);
    layout->setSpacing(0);
    
    // 上下布局，上面是搜索栏等，下面是会话列表等
    chatNavContent = new ChatNavigationContainer(this);
    chatMainContent = new ChatMain(this);
    
    layout->addWidget(chatNavContent);
    layout->addWidget(chatMainContent, 10);
    
    chatNavContent->show();
    chatMainContent->show();

    setLayout(layout);
    QLayout *selfLayout = this->layout();
    
    selfLayout->setAlignment(Qt::AlignTop);
}
// todo 连接子组件的插槽，并且代理下去
void Chat::connectSlot()
{
    QObject::connect(
                chatNavContent,
                &ChatNavigationContainer::s_add_chat_click,
                chatMainContent,
                [this]() {
                    chatMainContent->onAddChat(1000);
                }
                );
}

