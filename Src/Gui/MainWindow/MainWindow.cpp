#include "MainWindow.h"


MainWindow::MainWindow(QWidget *parrent): QMainWindow(parrent)
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

void MainWindow::addMenuBar()
{
    menuBar = new FernMenuBar();
    menuBar->setItems();
    setMenuBar(menuBar);
}

void MainWindow::selectLanguage()
{

}

void MainWindow::openLanguageFiles()
{

}


