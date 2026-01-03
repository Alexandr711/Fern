#include <QWidget>
#include <QPushButton>

class TitleWidget: public QWidget
{
    Q_OBJECT

private:
    QPushButton* docButton;
    QPushButton* palnButton;
    QPushButton* detail3dButton;
    QPushButton* assembly3dButton;

public:
    TitleWidget(QWidget* parrent = nullptr);
    ~TitleWidget();

    QPushButton* createButton();

};

