#include "src/ui/mainWindow.h"
#include <QApplication>
#include <QFontDatabase>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);

    QFont font("Helvetica", 14);
    QApplication::setFont(font);

    MainWindow w;
    w.initializeWindow();

    return QApplication::exec();
}