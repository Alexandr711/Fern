#include <QWidget>
#include <QMainWindow>
#include <QMenuBar>
#include <QToolBar>

#include "MenuBar.h"
#include "Languages.h"

class MainWindow: public QMainWindow
{
    Q_OBJECT

private:
    FernMenuBar* menuBar;
    QToolBar* mainToolBar;
    QToolBar* firstToolBar;
    QToolBar* secondToolBar;

public:
    MainWindow(QWidget* parrent = nullptr);
    ~MainWindow();

    void addMenuBar();
    void selectLanguage();
    //void
};
