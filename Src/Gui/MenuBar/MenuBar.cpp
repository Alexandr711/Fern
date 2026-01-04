#include "MenuBar.h"

FernMenuBar::FernMenuBar(QWidget *parrent): QMenuBar(parrent)
{
    fileMenu = new QMenu("File");
    createFileAction = new QAction("New file");
    createProjectAction = new QAction("New project");
    openFileAction = new QAction("Open file");
    openProjectAction = new QAction("Open project");

    exitAction = new QAction("Exit");

    editMenu = new QMenu("Edit");
    undoAction = new QAction("Undo");
    redoAction = new QAction("Redo");

    helpMenu = new QMenu("Help");
    languageMenu = new QMenu("Language");
    englishAction = new QAction("English");
    japaneseAction = new QAction("Japanese");
    russianAction = new QAction("Russian");

    colorThemeMenu = new QMenu("Color theme");
    darkAction = new QAction("Dark theme");
    lightAction = new QAction("Light them");

    aboutAction = new QAction("About");
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
