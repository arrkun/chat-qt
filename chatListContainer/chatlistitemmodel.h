#ifndef chatlistitemmodel_h
#define chatlistitemmodel_h

#include <QAbstractListModel>

struct ChatListItemData {
    QString title;
    QString avatar;
};

Q_DECLARE_METATYPE(ChatListItemData);

class ChatListItemModal: public QAbstractListModel {
    Q_OBJECT
public:
    explicit ChatListItemModal(QObject *parent = 0);
    ~ChatListItemModal();

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    void addChatItem(ChatListItemData item);
    void addChatItems(QVector<ChatListItemData> items);
    void resetData(QVector<ChatListItemData> items);
private:
    QVector<ChatListItemData> chatItem;
};

#endif /* chatlistitemmodel_h */
