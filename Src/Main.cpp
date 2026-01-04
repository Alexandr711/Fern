#include <QApplication>

#include "MainWindow.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    MainWindow wnd;
    wnd.addMenuBar();
    wnd.show();
    return app.exec();
}
