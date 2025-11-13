#include "src/ui/mainWindow.h"
#include <QApplication>
#include <QFontDatabase>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);

    QFont font("Helvetica", 12);
    QApplication::setFont(font);

    MainWindow w;
    w.initializeWindow();

    return QApplication::exec();
}