#include <QWidget>
#include <QMenuBar>
#include <QToolBar>

#include "MenuBar.h"

class MainWindow: public QWidget
{
    Q_OBJECT

private:
    QMenuBar* menuBar;
    QToolBar* mainToolBar;
    QToolBar* firstToolBar;
    QToolBar* secondToolBar;

public:
    MainWindow(QWidget* parrent = nullptr);
    ~MainWindow();

    //setters
    void setMenuBar(QMenuBar* menuBar);
    void setMainToolBar(QToolBar* toolBar);
    void setFirstToolBar(QToolBar* toolBar);
    void setSecondToolBar(QToolBar* toolBar);
};
