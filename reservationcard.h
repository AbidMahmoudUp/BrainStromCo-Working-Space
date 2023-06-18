#ifndef RESERVATIONCARD_H
#define RESERVATIONCARD_H

#include <QWidget>

namespace Ui {
  class ReservationCard;
}

class ReservationCard : public QWidget
{
  Q_OBJECT

public:
  explicit ReservationCard(QWidget *parent = nullptr);
  ~ReservationCard();
  void setIdReservation(QString value);

  QString getIdReservation();

private:
  Ui::ReservationCard *ui;
};

#endif // RESERVATIONCARD_H
