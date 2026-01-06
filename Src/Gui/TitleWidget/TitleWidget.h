#include <QWidget>
#include <QToolButton>

class TitleWidget: public QWidget
{
    Q_OBJECT

private:
    QToolButton* docButton;
    QToolButton* planButton;
    QToolButton* detail3dButton;
    QToolButton* assembly3dButton;

public:
    TitleWidget(QWidget* parrent = nullptr);
    ~TitleWidget();
};

