#ifndef CHATMESSAGEITEMDATA_H
#define CHATMESSAGEITEMDATA_H

#include <QString>
#include <QMap>

struct TextMessageItemData {
    QString text;
};
struct ChatMessageItemData {
    // 1 文字消息
    int msgType = 1|2|3|4|5|6|7|8|9|10;
    QString userName;
    QString userId;
};

#endif // CHATMESSAGEITEMDATA_H
