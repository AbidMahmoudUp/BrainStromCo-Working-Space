#ifndef AVAILABLEOFFICECARD_H
#define AVAILABLEOFFICECARD_H

#include <QWidget>

namespace Ui {
  class AvailableOfficeCard;
}

class AvailableOfficeCard : public QWidget
{
  Q_OBJECT

public:
  explicit AvailableOfficeCard(QWidget *parent = nullptr);
  ~AvailableOfficeCard();
//  QString GetOfficeId();
//  void SetOfficeId(QString value);
  QString GetOfficeName();
  void SetOfficeName(QString value);
private:
  Ui::AvailableOfficeCard *ui;
};

#endif // AVAILABLEOFFICECARD_H
