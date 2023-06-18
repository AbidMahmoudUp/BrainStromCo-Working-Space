#include "reservationcard.h"
#include "ui_reservationcard.h"
#include "QPainter"
#include <QPainterPath>
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
void ReservationCard::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    QColor backgroundColor = palette().color(QPalette::Light);
    p.setBrush(backgroundColor);
    p.setRenderHint(QPainter::Antialiasing);
    QPainterPath path;
    QPen pen(Qt::white, 0);
    p.setPen(pen);
    p.drawPath(path);
    p.drawRoundedRect(QRect(0,0,width()-1, height()-1),5,5);




}
