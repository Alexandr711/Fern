#include <QWidget>
#include <QPushButton>

class TitleWidget: public QWidgetData
{
    Q_OBJECT

private:
    QPushButton* docButton;
    QPushButton* palnButton;
    QPushButton* detail3dButton;
    QPushButton* assembly3dButton;

public:
    TitleWidget(QWidget* parent = nullptr);
    ~TitleWidget();

    QPushButton* createButton();

};

