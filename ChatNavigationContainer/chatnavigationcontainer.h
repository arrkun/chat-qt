#ifndef navigation_h
#define navigation_h

#include <QWidget>
#include <QHBoxLayout>
#include <QPushButton>
#include <iostream>

class ChatNavigationContainer: public QWidget {
    Q_OBJECT

signals:
    void s_add_chat_click();
public:
    ChatNavigationContainer(QWidget *parent = nullptr);
    ~ChatNavigationContainer();
protected:
    void render();
private slots:
    void addMsgEvent();
    void addChatEvent();
};

#endif /* navigation_h */
