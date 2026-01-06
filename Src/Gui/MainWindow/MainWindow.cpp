#include <QFile>
#include <QDir>

#include "MainWindow.h"


MainWindow::MainWindow(QWidget *parrent): QMainWindow(parrent)
{
    menuBar = new FernMenuBar;
    mainToolBar = nullptr;
    firstToolBar = nullptr;
    secondToolBar = nullptr;
}

MainWindow::~MainWindow()
{
    if(mainToolBar != nullptr)
        delete mainToolBar;
    if(firstToolBar != nullptr)
        delete firstToolBar;
    if(secondToolBar != nullptr)
        delete secondToolBar;
    delete menuBar;
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

QJsonObject MainWindow::openJsonFile(QString name)
{
    QFile file(name);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QString str = file.readAll();
    file.close();
    QJsonDocument document = QJsonDocument::fromJson(str.toUtf8());
    QJsonObject jsonObject = document.object();
    return jsonObject;
}

void MainWindow::setTitlesMenuBar()
{
    QJsonObject temp = openJsonFile("C:/Users/aleks/source/Fern/Src/Gui/Languages/Windows/English/MenuBar.json");

    menuBar->fileMenu->setTitle(temp["File"].toString());
    menuBar->openFileAction->setText(temp["Open file"].toString());
    menuBar->openProjectAction->setText(temp["Open project"].toString());
    menuBar->createFileAction->setText(temp["Create file"].toString());
    menuBar->createProjectAction->setText(temp["Create project"].toString());
    menuBar->exitAction->setText(temp["Quit"].toString());

    menuBar->editMenu->setTitle(temp["Edit"].toString());
    menuBar->undoAction->setText(temp["Undo"].toString());
    menuBar->redoAction->setText(temp["Redo"].toString());

    menuBar->helpMenu->setTitle(temp["Help"].toString());
    menuBar->languageMenu->setTitle(temp["Language"].toString());
    menuBar->englishAction->setText(temp["English"].toString());
    menuBar->japaneseAction->setText(temp["Japanese"].toString());
    menuBar->russianAction->setText(temp["Russian"].toString());
    menuBar->colorThemeMenu->setTitle(temp["Color theme"].toString());
    menuBar->darkAction->setText(temp["Dark theme"].toString());
    menuBar->lightAction->setText(temp["Light theme"].toString());
    menuBar->aboutAction->setText(temp["About"].toString());
}




