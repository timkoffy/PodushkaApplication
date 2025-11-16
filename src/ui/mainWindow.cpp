#include "mainWindow.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QFrame>

#include "headerWidget.h"
#include "windowLightWidget.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent) {
}

void MainWindow::initializeWindow() {
    this->setFixedSize(1100,851);
    this->setWindowTitle("Application");
    this->setStyleSheet("background-color: #29383C;");

    centralMainWidget = new QFrame;
    this->setCentralWidget(centralMainWidget);

    headerWidget = new HeaderWidget;

    leftSidebarWidget = new QFrame;
    leftSidebarWidget->setStyleSheet("background-color: #29383C;");

    WindowLightWidget* windowWidget = new WindowLightWidget;
    windowWidget->setFixedHeight(200);
    windowWidget->setHeaderText("заголовок");

    QVBoxLayout* leftSidebarLayout = new QVBoxLayout(leftSidebarWidget);
    leftSidebarLayout->addWidget(windowWidget);
    leftSidebarLayout->setContentsMargins(0,0,0,0);
    leftSidebarLayout->setAlignment(Qt::AlignTop);

    centralWidget = new QFrame;
    centralWidget->setFixedWidth(500);
    centralWidget->setStyleSheet("background-color: #29383C;");

    rightSidebarWidget = new QFrame;
    rightSidebarWidget->setStyleSheet("background-color: #29383C;");

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
