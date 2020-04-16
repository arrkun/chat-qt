#ifndef rightcontainer_h
#define rightcontainer_h

#include <QWidget>
#include "../ChatNavigationContainer/chatnavigationcontainer.h"
#include "../ChatMain/chatmain.h"

class Chat: public QWidget {
    Q_OBJECT
signals:
    // nav 添加会话插槽
    void s_nav_click_add_chat();
public:
    Chat(QWidget *parent = nullptr);
    ~Chat();
protected:
    void render();
private:
    ChatNavigationContainer *chatNavContent;
    ChatMain *chatMainContent;
    void connectSlot();
};


#endif /* rightcontainer_h */
