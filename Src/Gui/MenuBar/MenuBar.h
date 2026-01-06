#include <QMenuBar>

class FernMenuBar : public QMenuBar
{
public:
    QMenu* fileMenu;
        QAction* createFileAction;
        QAction* createProjectAction;
        QAction* openFileAction;
        QAction* openProjectAction;

        QAction* exitAction;


    QMenu* editMenu;
        QAction* undoAction;
        QAction* redoAction;

    QMenu* viewMenu;


    QMenu* helpMenu;
        QMenu* languageMenu;
            QAction* englishAction;
            QAction* japaneseAction;
            QAction* russianAction;
        QMenu* colorThemeMenu;
            QAction* darkAction;
            QAction* lightAction;

        QAction* aboutAction;


public:
    FernMenuBar(QWidget *parrent = nullptr);
    ~FernMenuBar();
    void setItems();


};
