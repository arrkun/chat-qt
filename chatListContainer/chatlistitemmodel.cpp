#include "chatlistitemmodel.h"

ChatListItemModal::ChatListItemModal(QObject *parent): QAbstractListModel(parent)
{
    
}
ChatListItemModal::~ChatListItemModal()
{
    
}
int ChatListItemModal::rowCount(const QModelIndex &) const
{
    return chatItem.count();
}
QVariant ChatListItemModal::data(const QModelIndex &index, int role) const {
    if (index.isValid() && index.row() < chatItem.size() && index.row() >= 0 && role == Qt::DisplayRole)
    {
        return QVariant::fromValue(chatItem.at(index.row()));
    }
    return QVariant();
}
void ChatListItemModal::addChatItem(ChatListItemData item)
{
    beginInsertRows(QModelIndex(), chatItem.size(), chatItem.size());
    chatItem.append(item);
    endInsertRows();
}
void ChatListItemModal::addChatItems(QVector<ChatListItemData> items)
{
    if (items.isEmpty())
        return;
    beginInsertRows(QModelIndex(),
                    chatItem.size(),
                    chatItem.size() + items.size() - 1
                    );
    chatItem.append(items);
    endInsertRows();
}
void ChatListItemModal::resetData(QVector<ChatListItemData> items)
{
    beginResetModel();
    chatItem = items;
    endResetModel();
}
