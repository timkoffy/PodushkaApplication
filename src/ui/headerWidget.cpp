#include "headerWidget.h"

#include <QFrame>
#include <QHBoxLayout>

HeaderWidget::HeaderWidget(QWidget* parent)
        : QFrame(parent) {
    initializeWidget();
}

void HeaderWidget::initializeWidget() {
    this->setFixedHeight(34);

    logoWidget = new QFrame;
    logoWidget->setFixedWidth(622);
    logoWidget->setStyleSheet("background-color: #4C5F65;");

    logoTextLabel = new QLabel;
    logoTextLabel->setText("мой цифровой бункер");
    logoTextLabel->setStyleSheet("color: #C7C8C7;");
    logoTextLabel->setFixedWidth(622);

    QHBoxLayout* logoLayout = new QHBoxLayout(logoWidget);
    logoLayout->addWidget(logoTextLabel);
    logoLayout->setContentsMargins(8,6,5,5);

    infoBarWidget = new QFrame;
    infoBarWidget->setStyleSheet("background-color: #970000;");

    auto* headerLayout = new QHBoxLayout(this);
    headerLayout->setContentsMargins(0,0,0,0);
    headerLayout->setSpacing(17);

    headerLayout->addWidget(logoWidget);
    headerLayout->addWidget(infoBarWidget);
}