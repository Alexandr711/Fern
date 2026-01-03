#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parrent): QWidget(parrent)
{
    menuBar = nullptr;
    mainToolBar = nullptr;
    firstToolBar = nullptr;
    secondToolBar = nullptr;
}

MainWindow::~MainWindow()
{
    if(menuBar != nullptr)
        delete menuBar;
    if(mainToolBar != nullptr)
        delete mainToolBar;
    if(firstToolBar != nullptr)
        delete firstToolBar;
    if(secondToolBar != nullptr)
        delete secondToolBar;
}

void MainWindow::setMenuBar(QMenuBar *menuBar)
{
    this->menuBar = menuBar;
}

void MainWindow::setMainToolBar(QToolBar *toolBar)
{
    mainToolBar = toolBar;
}

void MainWindow::setFirstToolBar(QToolBar *toolBar)
{
    firstToolBar = toolBar;
}

void MainWindow::setSecondToolBar(QToolBar *toolBar)
{
    secondToolBar = toolBar;
}
