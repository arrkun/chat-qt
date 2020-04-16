#ifndef CHATMESSAGESCROLLVIEW_H
#define CHATMESSAGESCROLLVIEW_H

#include <QListView>

class ChatMessageScrollView: public QListView
{
    Q_OBJECT
public:
    ChatMessageScrollView(QWidget * = nullptr);
};

#endif // CHATMESSAGESCROLLVIEW_H
