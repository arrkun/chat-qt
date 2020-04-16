#ifndef chatitemlistdelegate_h
#define chatitemlistdelegate_h
#include "chatlistitemmodel.h"

#include <QStyledItemDelegate>
#include <QWidget>
#include <QStyledItemDelegate>
#include <QPainter>
#include <iostream>

class ChatListItemDelegate: public QStyledItemDelegate {
    Q_OBJECT
public:
    ChatListItemDelegate(QWidget *parent = nullptr);
    ~ChatListItemDelegate();
    // 重写QStyledItemDelegate中的该方法，完成绘制
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    // 重写QStyledItemDelegate中的该方法，完成设置item的大小
    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const;
private:
    const int imageSize = 42;
    const int listItemHeight = 68;
};

#endif /* chatitemlistdelegate_h */
