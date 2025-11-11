#ifndef PODUSHKAAPPLICATION_MAINWINDOW_H
#define PODUSHKAAPPLICATION_MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow {
    Q_OBJECT;

public:
    MainWindow(QWidget* parent = nullptr);
    void initializeWindow();
};

#endif