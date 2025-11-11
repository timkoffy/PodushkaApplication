#include "src/ui/mainWindow.h"
#include <QApplication>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);

    MainWindow w;
    w.initializeWindow();

    return QApplication::exec();
}