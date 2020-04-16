#ifndef chatlistcontainer_h
#define chatlistcontainer_h

#include "chatlistscrollview.h"
#include <QPainter>
#include <QBoxLayout>
#include <QScrollArea>
#include <QWidget>
#include <QListWidget>
#include <QScroller>
#include <QVBoxLayout>

class ChatListContainer: public QWidget {
    Q_OBJECT
    
public:
    ChatListContainer(QWidget *parent = nullptr);
    ~ChatListContainer();
    void onAddChat(const int count = 0);
protected:
    void render();
    void paintEvent(QPaintEvent *event);
private:
    ChatListScrollView *listView;
    QBoxLayout *layout;
};

#endif /* chatlistcontainer_h */
