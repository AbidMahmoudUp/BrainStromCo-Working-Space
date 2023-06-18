#include "reservationcard.h"
#include "ui_reservationcard.h"

ReservationCard::ReservationCard(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::ReservationCard)
{
  ui->setupUi(this);
}

ReservationCard::~ReservationCard()
{
  delete ui;
}

void ReservationCard:: setIdReservation(QString value){
ui->id_reservation->setText(value);
}
QString ReservationCard::getIdReservation(){
return ui->id_reservation->text();
}
