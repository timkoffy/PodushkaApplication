#ifndef PODUSHKAAPPLICATION_HEADERWIDGET_H
#define PODUSHKAAPPLICATION_HEADERWIDGET_H

#include <QLabel>
#include <qwidget.h>

class HeaderWidget : public QFrame {
    Q_OBJECT;

public:
    HeaderWidget(QWidget* parent = nullptr);
    void initializeWidget();
private:
    QLabel* logoText;
    QFrame* logoWidget;
    QFrame* infoBarWidget;
};

#endif //PODUSHKAAPPLICATION_HEADERWIDGET_H