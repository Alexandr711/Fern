#include <QMenuBar>

class FernMenuBar : public QMenuBar
{
    Q_OBJECT

private:
    QMenu* fileMenu;
    QAction* createFileAction;
    QAction* createProjectAction;
    QAction* openFileAction;
    QAction* openProjectAction;

    QAction* exitAction;


    QMenu* editMenu;
    QAction* undoAction;

    QMenu* viewMenu;

    QMenu* helpMenu;

public:

};
