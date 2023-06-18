#include "connexion.h"
#include "mainwindow.h"
#include "QMessageBox"
#include "QDebug"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow w;
  connexion c;
   bool test=c.ouvrirConnexion();
   if(test)
     {
      w.show();
     }
   else
     {
       QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                                        QObject::tr("connection failed.\n""Click Cancel to exit."), QMessageBox::Cancel);
     }

  return a.exec();
}
