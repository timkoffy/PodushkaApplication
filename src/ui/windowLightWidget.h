#ifndef PODUSHKAAPPLICATION_WINDOWLIGHTWIDGET_H
#define PODUSHKAAPPLICATION_WINDOWLIGHTWIDGET_H

#include "headerWidget.h"
#include <QLabel>

class WindowLightWidget : public QFrame {
    Q_OBJECT;

public:
    WindowLightWidget(QWidget* parent = nullptr);
    void initializeWidget();
    void setHeaderText(QString text);
    void setContentText(QString text);
    void setFixedHeight(int h);

private:
    QLabel* headerTextLabel;
    QLabel* contentTextLabel;
    QFrame* headerWidget;
    QFrame* contentWidget;

    QString headerText;
    QString contentText;
};



#endif //PODUSHKAAPPLICATION_WINDOWLIGHTWIDGET_H