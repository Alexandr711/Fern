#include "TitleWidget.h"

TitleWidget::TitleWidget(QWidget *parrent): QWidget(parrent)
{

}

TitleWidget::~TitleWidget()
{

}

QPushButton *TitleWidget::createButton()
{
    QPushButton* tempButton = new QPushButton;
    return tempButton;
}
