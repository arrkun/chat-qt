#ifndef DOWNCONTAINER_H
#define DOWNCONTAINER_H

#include <QWidget>
#include <QWidget>
#include <QHBoxLayout>
#include <QPainter>
#include "../ChatListContainer/chatlistcontainer.h"
#include "../ChatMessageContainer/chatmessagecontainer.h"

class ChatMain: public QWidget
{
    Q_OBJECT
    
public:
    ChatMain(QWidget *parent = nullptr);
    ~ChatMain();
    void onAddChat(const int count = 0);
protected:
    void render();
    void paintEvent(QPaintEvent *event);
    QHBoxLayout *layout;
    ChatListContainer *listContent;
    ChatMessageContainer *messageContent;
};

#endif /* DOWNCONTAINER_H */
