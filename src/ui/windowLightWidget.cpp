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
    contentWidget = new QFrame;
    headerTextLabel = new QLabel;
    contentTextLabel = new QLabel;

    // заголовок
    headerWidget->setFixedHeight(26);
    headerWidget->setStyleSheet("background: #C7C8C7;");

    headerTextLabel->setStyleSheet("color: #29383C;");
    headerTextLabel->setFont(QFont("Helvetica", 14));

    QVBoxLayout* headerLayout = new QVBoxLayout(headerWidget);
    headerLayout->addWidget(headerTextLabel);
    headerLayout->setContentsMargins(5,5,5,5);

    // контент
    contentWidget->setStyleSheet("background: #29383C;" "border-left: 2px solid #C7C8C7;");
    contentWidget->setFixedHeight(260);

    contentTextLabel->setStyleSheet("color: #C7C8C7;" "border-left: 0px;");
    contentTextLabel->setAlignment(Qt::AlignTop);
    contentTextLabel->setFont(QFont("Helvetica", 11));

    QVBoxLayout* contentLayout = new QVBoxLayout(contentWidget);
    contentLayout->addWidget(contentTextLabel);
    contentLayout->setContentsMargins(7,5,5,5);

    // главный лаяут
    QVBoxLayout* mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0,0,0,0);
    mainLayout->setSpacing(0);
    mainLayout->addWidget(headerWidget);
    mainLayout->addWidget(contentWidget);

    this->show();
}

void WindowLightWidget::setHeaderText(QString text) {
    headerText = std::move(text);
    if (headerTextLabel) headerTextLabel->setText(headerText);
}

void WindowLightWidget::setContentText(QString text) {
    contentText = std::move(text);
    if (contentTextLabel) contentTextLabel->setText(contentText);
}

void WindowLightWidget::setFixedHeight(int h) {
    if (contentWidget) contentWidget->setFixedHeight(h-26);
    QFrame::setFixedHeight(h);
}