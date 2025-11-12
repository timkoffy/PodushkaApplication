#ifndef PODUSHKAAPPLICATION_HEADERWIDGET_H
#define PODUSHKAAPPLICATION_HEADERWIDGET_H
#include <QFrame>
#include <qwidget.h>


class HeaderWidget : public QFrame {
    Q_OBJECT;

public:
    HeaderWidget(QWidget* parent = nullptr);
    void initializeWidget();
};

#endif //PODUSHKAAPPLICATION_HEADERWIDGET_H