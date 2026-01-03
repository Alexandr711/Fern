#include <QWidget>
#include <QMenuBar>
#include <QToolBar>

class MainWindow: QWidgetData
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
