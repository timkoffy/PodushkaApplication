#include "headerWidget.h"

#include <QFrame>
#include <QHBoxLayout>

HeaderWidget::HeaderWidget(QWidget* parent)
        : QFrame(parent) {
    initializeWidget();
}

void HeaderWidget::initializeWidget() {
    this->setFixedHeight(34);

    auto* logoWidget = new QFrame;
    logoWidget->setFixedWidth(622);
    logoWidget->setStyleSheet("background-color: #4C5F65;");

    auto* infoBarWidget = new QFrame;
    infoBarWidget->setStyleSheet("background-color: #970000;");

    auto* headerLayout = new QHBoxLayout(this);
    headerLayout->setContentsMargins(0,0,0,0);
    headerLayout->setSpacing(17);

    headerLayout->addWidget(logoWidget);
    headerLayout->addWidget(infoBarWidget);
}