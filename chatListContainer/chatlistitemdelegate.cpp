#include "chatlistitemdelegate.h"

// 绘制列表每一项list

ChatListItemDelegate::ChatListItemDelegate(QWidget *parent)
    : QStyledItemDelegate(parent)
{
    
}

ChatListItemDelegate::~ChatListItemDelegate()
{
    
}

// 使用 paint 绘制该项
void ChatListItemDelegate::paint
(
        QPainter *painter,
        const QStyleOptionViewItem &option,
        const QModelIndex &index
)
const
{
    if(!index.isValid()) return;
    QStyleOptionViewItem opt = option;
    
    painter->save();
    
    if (option.state & QStyle::State_Selected){
        painter->fillRect(option.rect, QColor("#F6F6F6"));
    }
    // 设置该item的大小
    this->sizeHint(opt, index);

    QRect rect = opt.rect;
    // 获取当前列表项的数据
    ChatListItemData data = index.data().value<ChatListItemData>();
    // 绘制头像
    painter->drawPixmap(
                QRect(
                    rect.left() + 16,
                    rect.top() + 13,
                    this->imageSize,
                    this->imageSize
                    ),
                QPixmap(":/assets/photo.jpg")
                );
    // 绘制文字
    painter->setPen(Qt::black);
    painter->drawText(
                QRect(
                    rect.left() + 66,
                    rect.top(),
                    rect.width() - 66,
                    rect.height()
                    ),
                opt.displayAlignment, data.title
                );
    painter->restore();
}
// 设置每一个list item的size
QSize ChatListItemDelegate::sizeHint
(
        const QStyleOptionViewItem &option,
        const QModelIndex &index
)
const
{
    if (!index.isValid()) return QSize();
    QSize reslut = QStyledItemDelegate::sizeHint(option, index);
    reslut.setHeight(this->listItemHeight);

    return reslut;
}
