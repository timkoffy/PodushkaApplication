#ifndef PODUSHKAAPPLICATION_MAINWINDOW_H
#define PODUSHKAAPPLICATION_MAINWINDOW_H

#include <QMainWindow>

#include "headerWidget.h"
#include "windowLightWidget.h"

class MainWindow : public QMainWindow {
    Q_OBJECT;

public:
    MainWindow(QWidget* parent = nullptr);
    void initializeWindow();

private:
    QFrame* centralMainWidget;
    HeaderWidget* headerWidget;
    WindowLightWidget* windowWidget;
    QFrame* leftSidebarWidget;
    QFrame* centralWidget;
    QFrame* rightSidebarWidget;

};

#endif