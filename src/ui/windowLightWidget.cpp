#include "windowLightWidget.h"

#include <qboxlayout.h>
#include <utility>

#include "headerWidget.h"

WindowLightWidget::WindowLightWidget(QWidget *parent)
        : QFrame(parent) {
    initializeWidget();
}

void WindowLightWidget::initializeWidget() {
    headerWidget = new QFrame;
    headerTextLabel = new QLabel;
    contentArea = new QFrame;

    // заголовок
    headerWidget->setFixedHeight(26);
    headerWidget->setStyleSheet("background: #C7C8C7;");

    headerTextLabel->setStyleSheet("color: #29383C;");

    QVBoxLayout* headerLayout = new QVBoxLayout(headerWidget);
    headerLayout->addWidget(headerTextLabel);
    headerLayout->setContentsMargins(5,5,5,5);

    // контент
    contentArea->setStyleSheet("background: #29383C;" "border-left: 2px solid #C7C8C7;");
    contentArea->setLayout(new QVBoxLayout);

    // главный лаяут
    QVBoxLayout* mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0,0,0,0);
    mainLayout->setSpacing(0);
    mainLayout->addWidget(headerWidget);
    mainLayout->addWidget(contentArea);

    this->show();
}

void WindowLightWidget::setHeaderText(QString text) {
    headerText = std::move(text);
    headerTextLabel->setText(headerText);
}

void WindowLightWidget::setContentWidget(QWidget* widget) {
    contentArea->layout()->addWidget(widget);
}

void WindowLightWidget::setFixedHeight(int h){
    contentArea->setFixedHeight(h-26);
    QFrame::setFixedHeight(h);
}