#include "mainWindow.h"
#include <QApplication>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent) {
}

void MainWindow::initializeWindow() {
    this->setFixedSize(1100,851);
    this->setWindowTitle("мой цифровой бункер");

    QWidget* centralMainWidget = new QWidget;
    this->setCentralWidget(centralMainWidget);

    QWidget* headerWidget = new QWidget;
    headerWidget->setFixedHeight(34);
    headerWidget->setStyleSheet("background-color: #2b2b2b;");


    QWidget* leftSidebarWidget = new QWidget;
    leftSidebarWidget->setStyleSheet("background-color: #3c3c3c;");

    QWidget* centralWidget = new QWidget;
    centralWidget->setFixedWidth(500);
    centralWidget->setStyleSheet("background-color: #1e1e1e;");

    QWidget* rightSidebarWidget = new QWidget;
    rightSidebarWidget->setStyleSheet("background-color: #3c3c3c;");


    QVBoxLayout* mainLayout = new QVBoxLayout(centralMainWidget);
    mainLayout->setContentsMargins(17,17,17,17);
    mainLayout->setSpacing(17);

    mainLayout->addWidget(headerWidget);

    QHBoxLayout *contentLayout = new QHBoxLayout;
    contentLayout->setSpacing(17);

    contentLayout->addWidget(leftSidebarWidget);
    contentLayout->addWidget(centralWidget);
    contentLayout->addWidget(rightSidebarWidget);

    mainLayout->addLayout(contentLayout);

    this->show();
}
