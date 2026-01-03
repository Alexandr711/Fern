#include "MenuBar.h"

FernMenuBar::FernMenuBar(QWidget *parrent): QMenuBar(parrent)
{
    fileMenu = new QMenu("File");
    createFileAction = new QAction("New file");
    createProjectAction = new QAction("New project");
    openFileAction = new QAction("Open file");
    openProjectAction = new QAction("Open project");


}

FernMenuBar::~FernMenuBar()
{
    delete openProjectAction;
    delete openFileAction;
    delete createProjectAction;
    delete createFileAction;
    delete fileMenu;
}
