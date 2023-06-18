#include "availableofficecard.h"
#include "ui_availableofficecard.h"

AvailableOfficeCard::AvailableOfficeCard(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::AvailableOfficeCard)
{
  ui->setupUi(this);
}

AvailableOfficeCard::~AvailableOfficeCard()
{
  delete ui;
}


QString AvailableOfficeCard:: GetOfficeName()
{
  return ui->button_text->text();
}
void AvailableOfficeCard:: SetOfficeName(QString value)
{
  ui->button_text->setText(value);
}
