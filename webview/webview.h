#ifndef WEBVIEW_H
#define WEBVIEW_H
#include <QWebEngineView>
class webview:public QWebEngineView
{
    Q_OBJECT
public:
    webview(QWidget *parent = nullptr);
};

#endif // WEBVIEW_H
