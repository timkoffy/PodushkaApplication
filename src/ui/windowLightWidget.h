#ifndef PODUSHKAAPPLICATION_WINDOWLIGHTWIDGET_H
#define PODUSHKAAPPLICATION_WINDOWLIGHTWIDGET_H

#include "headerWidget.h"
#include <QLabel>

class WindowLightWidget : public QFrame {
    Q_OBJECT;

public:
    explicit WindowLightWidget(QWidget* parent = nullptr);
    void initializeWidget();
    void setHeaderText(QString text);
    void setContentWidget(QWidget* widget);
    void setFixedHeight(int h);

private:
    QFrame* headerWidget;
    QLabel* headerTextLabel;
    QFrame* contentArea;
    QString headerText;
};

#endif //PODUSHKAAPPLICATION_WINDOWLIGHTWIDGET_H