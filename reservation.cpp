#include "reservation.h"
#include "QSqlQuery"
#include "mainwindow.h"
#include "list"
#include "QMessageBox"
#include <QDate>
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


  try {
   // Date=QDate::fromString(check_out_reservation,"dd/M/yy");
   // Date2=QDate::fromString(check_in_reservation,"dd/M/yy");
  } catch (const std::exception& ex) {
    //QMessageBox::information(nullptr,"test",ex.__cxa_exception_type()->name());
  }
  QDate Date=QDate::fromString(check_out_reservation,"dd-MM-yyyy");
  QDate Date2=QDate::fromString(check_in_reservation,"dd-MM-yyyy");
  QSqlQuery query;
  query.prepare("INSERT INTO reservation (id_reservation, check_in, check_out ,id_office, cin_reservation ) "
                "VALUES ( id_reservation.nextval, :check_in, :check_out,:id_office,:cin_reservation)");
  query.bindValue(":id_reservation",1);
  query.bindValue(":check_in",Date2);
  query.bindValue(":check_out",Date);
  query.bindValue(":id_office",id_office_reservation.toInt());
  query.bindValue(":cin_reservation",cin_client.toInt());
  QString slelect=(check_out_reservation);
 // QMessageBox::information(nullptr,"test",);
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

std::list<Reservation*> Reservation::date_check(QDate v_date1, QDate v_date2, std::list<Reservation*> reservation_list  )
{std::list<Reservation*> result ;
//QString v_checkIn = "'"+v_date1+"'";
//QString v_checkOut = "'"+v_date2+"'";
  QSqlQuery query;

    query.prepare("Select * from reservation  WHERE ((id_office='113') AND ( (check_in BETWEEN (:v_checkIn) AND (:v_checkOut)) OR (check_out BETWEEN (:v_checkIn) AND (:v_checkOut)) ))");
    query.bindValue(":v_checkIn",v_date1);
    query.bindValue(":v_checkOut",v_date2);
    QString check_in_reservation;
    query.exec();
   // QString select="Select * from reservation WHERE (id_office='113') AND (('"+v_date1+"' BETWEEN check_in AND check_out) OR ('"+v_date2+"' BETWEEN check_in AND check_out))";
    while (query.next()) {
           check_in_reservation = query.value(1).toString();
          QString id_reservation = query.value(0).toString();
          QString cin_client_reservation =  query.value(4).toString();
           QString check_out_reservation = query.value(2).toString();
         QString id_office_reservation =  query.value(3).toString();

         Reservation * reservation = new Reservation(id_reservation,id_office_reservation,cin_client_reservation,check_in_reservation,check_out_reservation);
         result.insert(result.begin(), reservation);
      }
    QMessageBox::information(nullptr,"test",check_in_reservation );

return  result;
    /* std::list<Reservation*>::iterator it1;
  QString res="";
  std::list<Reservation*> result;
  for (it1=reservation_list.begin();it1!=reservation_list.end();++it1)
    {
      QDate date1=QDate::fromString((*it1)->getCheckInReservation(),"dd-MM-yyyy");
      QDate date2=QDate::fromString((*it1)->getCheckOutReservation(),"dd-MM-yyyy");
      int dateTest= 0;
     res=res+(*it1)->getIdReservation();
     if(
        ((v_date1>=date1)&&(v_date2<=date2))
        ||((v_date1<=date1)&&(v_date2>=date2))
        ||((v_date1<=date1)&&((v_date2<=date2)&&(v_date2>=date2)))
        ||(((v_date1>=date1 && v_date1<=date2))&&(v_date2>=date2)))
       {
         dateTest =1;
       }
     if(dateTest == 0){
         //result.insert(result.begin(),*it1);
         return true;
       }else{
         return false;
       }
    }*/
 // return result;
  //QMessageBox::information(nullptr,"test",res);

/*  QSqlQuery query;
 // query.prepare("Select * from reservation WHERE id_office='"+id_office_reservation+"' and ((check_in <'"+date1.toString()+"' and  check_out>'"+date1.toString()+"') or (check_in <'"+date2.toString()+"' and  check_out>'"+date2.toString()+"') )  ");
  query.prepare("Select count(*)from reservation WHERE (id_office='"+id_office_reservation+"') AND (('"+date2.toString()+"' BETWEEN check_out AND check_in) AND ('"+date1.toString()+"' BETWEEN check_out AND check_in)) ");


  query.bindValue(":id_office",id_office_reservation);
  QString number;

      number = query.value(0).toString();


  if(number=="0"){
      return  true;
    }
  else{return false;}


*/
}

std::list<Reservation*> Reservation::getReservationByOfficesId(QString id_office)
{

  std::list<Reservation*> result ;
  QSqlQuery query;
      query.exec("SELECT * FROM reservation where id_office='"+id_office+"'");
      while (query.next())
        {
          QString check_in_reservation = query.value(1).toString();
          QString id_reservation = query.value(0).toString();
          QString cin_client_reservation =  query.value(4).toString();
          QString check_out_reservation = query.value(2).toString();
          QString id_office_reservation =  query.value(3).toString();

           Reservation * reservation = new Reservation(id_reservation,id_office_reservation,cin_client_reservation,check_in_reservation,check_out_reservation);
           result.insert(result.begin(), reservation);

        }
      return result;
}
