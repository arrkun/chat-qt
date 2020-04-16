#ifndef chatlistscrollview_h
#define chatlistscrollview_h
#include "chatlistitemdelegate.h"
#include "chatlistitemmodel.h"

#include <QListView>
#include <QPainter>
#include <QScroller>
#include <QVector>

class ChatListScrollView: public QListView
{
    Q_OBJECT
    
public:
    ChatListScrollView(QWidget *parent = nullptr);
    void render();
    void onAddChat(const int count = 0);
private:
    ChatListItemModal *listModal;
    ChatListItemDelegate *listItemDelegate;
};


#endif /* chatlistscrollview_h */
