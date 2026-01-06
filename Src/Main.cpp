#include <QApplication>

#include "MainWindow.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    MainWindow wnd;
    wnd.addMenuBar();
    wnd.setTitlesMenuBar();
    wnd.showMaximized();
    return app.exec();
}
