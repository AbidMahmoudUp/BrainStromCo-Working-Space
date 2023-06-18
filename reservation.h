#ifndef RESERVATION_H
#define RESERVATION_H
#include "QString"
#include "list"
#include "QDate"
class Reservation
{
public:
  Reservation();

  Reservation(QString,QString,QString,QString,QString);

  QString getIdReservation()
  {
    return this->id_reservation;
  }

  void setIdReservation(QString value)
  {
    this->id_reservation = value;
  }


  QString getIdOfiiceReservation()
  {
    return this->id_office_reservation;
  }

  void setIdOfficeReservation(QString value)
  {
    this->id_office_reservation = value;
  }

  QString getCheckInReservation()
  {
    return this->check_in_reservation;
  }

  void setCheckInReservation(QString value)
  {
    this->check_in_reservation = value;
  }

  QString getCheckOutReservation()
  {
    return this->check_out_reservation;
  }

  void setCheckOutReservation(QString value)
  {
    this->check_out_reservation = value;
  }

  QString getCinClientReservation()
  {
    return this->cin_client;
  }

  void setCinClientReservation(QString value)
  {
    this->cin_client = value;
  }

  std::list<Reservation*> getAllOfficesReservation();

  bool deleteReservationById();

  bool edit_reservation_database();

  bool add_reservation_database();

  std::list<Reservation*> date_check(QDate date1, QDate date2,std::list<Reservation*> result );
  std::list<Reservation*> getReservationByOfficesId(QString id);
//---------------------------------
  private:
  QString id_reservation;

  QString id_office_reservation;

  QString check_in_reservation;

  QString check_out_reservation;

  QString cin_client;
};

#endif // RESERVATION_H
