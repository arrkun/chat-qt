#ifndef chatMessageContainer_h
#define chatMessageContainer_h
#include <QWidget>

class ChatMessageContainer: public QWidget {
    Q_OBJECT
    
public:
    ChatMessageContainer(QWidget *parent = nullptr);
    ~ChatMessageContainer();
protected:
    void render();
};

#endif /* chatMessageContainer_h */
