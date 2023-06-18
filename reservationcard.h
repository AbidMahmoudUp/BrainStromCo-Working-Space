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

  void paintEvent(QPaintEvent *event);
  void setIdReservation(QString value);
  QString getIdReservation();
  void setCINReservation(QString value);
  QString getCINReservation();
  void setCheckInReservation(QString value);
  QString getCheckInReservation();
  void setCheckOutReservation(QString value);
  QString getCheckOutReservation();

private:
  Ui::ReservationCard *ui;
};

#endif // RESERVATIONCARD_H
