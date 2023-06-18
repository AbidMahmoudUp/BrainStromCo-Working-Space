#include "reservation.h"
#include "QSqlQuery"
#include "mainwindow.h"
#include "list"
#include "QMessageBox"
Reservation::Reservation()
{
  this->id_office_reservation="";
  this->cin_client="";
  this->check_in_reservation="";
  this->check_out_reservation="";
  this->id_reservation="";
}
Reservation::Reservation(QString id_reservation,QString id_office_reservation,QString cin_client_reservation,QString check_in_reservation,QString check_out_reservation)
{
  this->id_reservation=id_reservation;
  this->id_office_reservation=id_office_reservation;
  this->cin_client=cin_client_reservation;
  this->check_in_reservation=check_in_reservation;
  this->check_out_reservation=check_out_reservation;

}

std::list<Reservation*>Reservation:: getAllOfficesReservation(){
  std::list<Reservation*> result ;
  QSqlQuery query;
      query.exec("SELECT * FROM reservation");
      while (query.next()) {
            QString check_in_reservation = query.value(1).toString();
            QString id_reservation = query.value(0).toString();
            QString cin_client_reservation =  query.value(4).toString();
             QString check_out_reservation = query.value(2).toString();
           QString id_office_reservation =  query.value(3).toString();

           Reservation * reservation = new Reservation(id_reservation,id_office_reservation,cin_client_reservation,check_in_reservation,check_out_reservation);
           result.insert(result.begin(), reservation);
        }
  return  result;
}
bool Reservation::deleteReservationById()
{
    QSqlQuery query;
    query.prepare("DELETE FROM reservation WHERE id_reservation=:id_reservation");
    query.bindValue(0,id_reservation);
    return query.exec();
}
bool Reservation::add_reservation_database()
{
  QSqlQuery query;
  query.prepare("INSERT INTO reservation (id_reservation, check_in, check_out ,id_office, cin_reservation ) "
                "VALUES ( id_reservation.nextval, :check_in, :check_out,:id_office,:cin_reservation)");
  query.bindValue(":id_reservation",1);
  query.bindValue(":check_in",check_in_reservation);
  query.bindValue(":check_out",check_out_reservation);
  query.bindValue(":id_office",id_office_reservation.toInt());
  query.bindValue(":cin_reservation",cin_client.toInt());
  QString slelect=("INSERT INTO reservation (id_reservation, check_in, check_out ,id_office, cin_reservation ) "
                                                                                                                "VALUES ( id_reservation.nextval, :check_in, :check_out,:id_office,:cin_reservation)");
  QMessageBox::information(nullptr,"test",slelect);
  return query.exec();

}
bool Reservation::edit_reservation_database()
{
  QSqlQuery query;
  query.prepare("UPDATE reservation SET  check_in=:check_in, check_out=:check_out ,cin_reservation=:cin_reservation WHERE id_reservation='"+id_reservation+"' "  );
  query.bindValue(":id_reservation",id_reservation);
  query.bindValue(":check_in",check_in_reservation);
  query.bindValue(":check_out",check_out_reservation);
  query.bindValue(":id_office",id_office_reservation);
  query.bindValue(":cin_reservation",cin_client);

  return query.exec();
}

