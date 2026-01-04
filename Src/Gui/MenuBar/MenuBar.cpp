#include "MenuBar.h"

FernMenuBar::FernMenuBar(QWidget *parrent): QMenuBar(parrent)
{
    fileMenu = new QMenu;
    createFileAction = new QAction;
    createProjectAction = new QAction;
    openFileAction = new QAction;
    openProjectAction = new QAction;

    exitAction = new QAction;

    editMenu = new QMenu;
    undoAction = new QAction;
    redoAction = new QAction;

    helpMenu = new QMenu;
    languageMenu = new QMenu;
    englishAction = new QAction;
    japaneseAction = new QAction;
    russianAction = new QAction;

    colorThemeMenu = new QMenu;
    darkAction = new QAction;
    lightAction = new QAction;

    aboutAction = new QAction;
}

FernMenuBar::~FernMenuBar()
{
    delete aboutAction;

    delete lightAction;
    delete darkAction;
    delete colorThemeMenu;

    delete russianAction;
    delete japaneseAction;
    delete englishAction;
    delete languageMenu;
    delete helpMenu;

    delete redoAction;
    delete undoAction;
    delete editMenu;

    delete exitAction;

    delete openProjectAction;
    delete openFileAction;
    delete createProjectAction;
    delete createFileAction;
    delete fileMenu;
}

void FernMenuBar::setItems()
{
    addMenu(fileMenu);
    fileMenu->addAction(openFileAction);
    fileMenu->addAction(openProjectAction);
    fileMenu->addAction(createFileAction);
    fileMenu->addAction(createProjectAction);
    fileMenu->addAction(exitAction);

    addMenu(editMenu);
    editMenu->addAction(undoAction);
    editMenu->addAction(redoAction);


    addMenu(helpMenu);

    helpMenu->addMenu(languageMenu);
    languageMenu->addAction(englishAction);
    languageMenu->addAction(japaneseAction);
    languageMenu->addAction(russianAction);

    helpMenu->addMenu(colorThemeMenu);
    colorThemeMenu->addAction(darkAction);
    colorThemeMenu->addAction(lightAction);

    helpMenu->addAction(aboutAction);
}
