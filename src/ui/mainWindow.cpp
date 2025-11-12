#include "mainWindow.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QFrame>

#include "headerWidget.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent) {
}

void MainWindow::initializeWindow() {
    this->setFixedSize(1100,851);
    this->setWindowTitle("мой цифровой бункер");
    this->setStyleSheet("background-color: #29383C;");

    auto* centralMainWidget = new QFrame;
    this->setCentralWidget(centralMainWidget);

    auto* headerWidget = new HeaderWidget;

    auto* leftSidebarWidget = new QFrame;
    leftSidebarWidget->setStyleSheet("background-color: #3c3c3c;");

    auto* centralWidget = new QFrame;
    centralWidget->setFixedWidth(500);
    centralWidget->setStyleSheet("background-color: #1e1e1e;");

    auto* rightSidebarWidget = new QFrame;
    rightSidebarWidget->setStyleSheet("background-color: #3c3c3c;");


    auto* mainLayout = new QVBoxLayout(centralMainWidget);
    mainLayout->setContentsMargins(17,17,17,17);
    mainLayout->setSpacing(17);

    mainLayout->addWidget(headerWidget);

    auto *contentLayout = new QHBoxLayout;
    contentLayout->setSpacing(17);

    contentLayout->addWidget(leftSidebarWidget);
    contentLayout->addWidget(centralWidget);
    contentLayout->addWidget(rightSidebarWidget);

    mainLayout->addLayout(contentLayout);

    this->show();
}
