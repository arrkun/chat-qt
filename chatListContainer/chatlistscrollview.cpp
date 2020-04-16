#include "chatlistscrollview.h"


ChatListScrollView::ChatListScrollView(QWidget *parent): QListView(parent)
{
    render();
}
// 渲染
void ChatListScrollView::render()
{
    // 滚动列表的边框去除
    setFrameShape(QListView::NoFrame);
    // 当视图变化时是否重新绘制
    setResizeMode(QListView::ResizeMode::Fixed);
    // 确定项目是立即布局所有项目还是进行分批次布局 Batched 是分批次布局 默认100项
    // todo 这里如果设置，那么每更新一次数据，如果当前浏览到100条开外，则会滚动到第100条
    // setLayoutMode(QListView::LayoutMode::Batched);
    // 设置流动方向
    setFlow(QListView::TopToBottom);
    // 是否可以移动子项目
    setMovement(QListView::Static);
    // 设置显示类型，是基于上下布局的list还是左右布局的iconlist
    setViewMode(QListView::ListMode);
    // 设置只在滚动时显示滚动条
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    // 当视图大小变化时，可滚动区域是要跟着变化的
    setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
    // 自动滚动
    setAutoScroll(true);
    // 设置每一个项目是否具有相同的大小
    setUniformItemSizes(true);
    // 取消填充颜色
    viewport()->setAutoFillBackground(false);
    // 设置自定义数据model
    listModal = new ChatListItemModal;
    onAddChat(100);
    // 设置数据模型
    listItemDelegate = new ChatListItemDelegate;
    // 设置子项渲染
    setItemDelegate(listItemDelegate);
    setModel(listModal);
}
void ChatListScrollView::onAddChat(const int count)
{
    int dataCount = listModal->rowCount();
    QVector<ChatListItemData> list;
    for (int i = 0; i < count; ++i)
    {
        QString title = QStringLiteral("hello %1").arg(i + dataCount);
        ChatListItemData data = {
            .title = title,
            .avatar = title
        };
        list.push_back(data);
    }
    listModal->addChatItems(list);
}
















