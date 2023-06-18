#include "connexion.h"
#include "mainwindow.h"
#include "QMessageBox"
#include "QDebug"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow w;
  /*connexion * c = new connexion();
   bool test=c->ouvrirConnexion();
   if(test == true)
     {
       QMessageBox::information(nullptr, QObject::tr("database is  open"),
                                        QObject::tr("connection success.\n""Click Cancel to exit."), QMessageBox::Ok);
     }
   else
     {
       QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                                        QObject::tr("connection failed.\n""Click Cancel to exit."), QMessageBox::Cancel);
     }*/

  QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
  db=QSqlDatabase::addDatabase("QODBC");
  db.setDatabaseName("datasource");
  db.setUserName("system");
  db.setPassword("admin");
  db.open();
      if (db.open())
        {
          QMessageBox::information(nullptr, QObject::tr("database is  open"),
                                           QObject::tr("connection success.\n""Click Cancel to exit."), QMessageBox::Ok);
        }
      else
        {
          QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                                           QObject::tr("connection failed.\n""Click Cancel to exit."), QMessageBox::Cancel);
        }
          w.show();
            return a.exec();



}
