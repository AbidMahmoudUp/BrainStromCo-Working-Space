#include "mainwindow.h"
#include "card.h"
#include "office.h"
#include "ui_mainwindow.h"
#include "officestatistic.h"
#include "QSqlDatabase"
#include "user.h"
#include"QSqlQuery"
MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{

  ui->setupUi(this);
  ui->BackgroundRM->setVisible(false);
  ui->QlineStatOffice->setStyleSheet("background-color:transparent;");
  ui->body->setCurrentIndex(0);
  ui->add_office_widget->setVisible(false);




}

MainWindow::~MainWindow()
{
  delete ui;
}
//----------Fonctions-----------------
void MainWindow::on_Username_textChanged(const QString &arg1)
{
      stylee(ui->Username,ui->usernameIconeGrey,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/alternate_email_blue.png","border-bottom: 1.5px solid #4A8292; border-radius:unset;");
}
void MainWindow::on_Username_editingFinished()
{
    stylee(ui->Username,ui->usernameIconeGrey,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/alternate_email_black_24dp.png","border-bottom: 1.5px solid #d9d9d9; border-radius:unset;");
}

void MainWindow::on_password_textChanged(const QString &arg1)
{
     ui->password->setStyleSheet("border-bottom: 1.5px solid #4A8292;");
}

void MainWindow::on_password_editingFinished()
{
     ui->password->setStyleSheet("border-bottom: 1.5px solid #d9d9d9;");
}

void MainWindow::on_visibilityBtn_clicked()
{

  if(ui->checkBox->isTristate() == true){
      ui->visibilityBtn->setStyleSheet("background-image: url('C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/visibility.png');background-repeat: no-repeat;");
      ui->password->setEchoMode(QLineEdit::Normal);
  }else{
      ui->visibilityBtn->setStyleSheet("background-image: url('C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/visibilityOff.png');background-repeat: no-repeat;");
    ui->password->setEchoMode(QLineEdit::Password);
    }
  ui->checkBox->setTristate(!ui->checkBox->isTristate());
}

void MainWindow::on_Username_SingUp_textChanged(const QString &arg1)
{

  stylee(ui->Username_SingUp,ui->usernameIcone_SingUp,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/alternate_email_blue.png","border-bottom: 1.5px solid #4A8292; border-radius:unset;");

}

void MainWindow::on_Username_SingUp_editingFinished()
{

  stylee(ui->Username_SingUp,ui->usernameIcone_SingUp,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/alternate_email_black_24dp.png","border-bottom: 1.5px solid #d9d9d9; border-radius:unset;");

}

void MainWindow::on_SingUpBtn_clicked()
{
    ui->loginForm->setCurrentIndex(1);
}

void MainWindow::on_password_SingUp_textChanged(const QString &arg1)
{
   ui->password_SingUp->setStyleSheet("border-bottom: 1.5px solid #4A8292;");
}

void MainWindow::on_password_SingUp_editingFinished()
{
    ui->password_SingUp->setStyleSheet("border-bottom: 1.5px solid #d9d9d9;");
}

void MainWindow::on_visibilityBtn_SingUp_clicked()
{
  if(ui->checkBox_SingUp->isTristate() == true){
      ui->visibilityBtn_SingUp->setStyleSheet("background-image: url('C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/visibility.png');background-repeat: no-repeat;");
      ui->password_SingUp->setEchoMode(QLineEdit::Normal);
  }else{
      ui->visibilityBtn_SingUp->setStyleSheet("background-image: url('C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/visibilityOff.png');background-repeat: no-repeat;");
    ui->password_SingUp->setEchoMode(QLineEdit::Password);
    }
  ui->checkBox_SingUp->setTristate(!ui->checkBox_SingUp->isTristate());
}

void MainWindow::on_email_SingUp_textChanged(const QString &arg1)
{

  stylee(ui->email_SingUp,ui->emailIcone_SingUp,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/email_blue.png","border-bottom: 1.5px solid #4A8292; border-radius:unset;");
}

void MainWindow::on_email_SingUp_editingFinished()
{

  stylee(ui->email_SingUp,ui->emailIcone_SingUp,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/email_grey.png","border-bottom: 1.5px solid #d9d9d9; border-radius:unset;");

}

void MainWindow::on_number_SingUp_textChanged(const QString &arg1)
{

  stylee(ui->number_SingUp,ui->numberIcone_SingUp,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/phone_blue.png","border-bottom: 1.5px solid #4A8292; border-radius:unset;");
}

void MainWindow::on_number_SingUp_editingFinished()
{
  stylee(ui->number_SingUp,ui->numberIcone_SingUp,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/phone_grey.png","border-bottom: 1.5px solid #d9d9d9; border-radius:unset;");
}

void MainWindow::on_SingUpBtn_3_clicked()
{
    ui->loginForm->setCurrentIndex(0);
}

void MainWindow::on_LoginButton_clicked()
{


  QString user=ui->Username->text();
      QString password=ui->password->text();
      QSqlQuery query;
       User P1;
       bool login;
       login=P1.login_user(user,password);


      if(login)
      {
        ui->mainWidget->setCurrentIndex(1);
      }
      else
      QMessageBox::information(this,"Login","the user or the password is not correct ! ");
}

void MainWindow::on_Reservation_Btn_clicked()
{
    ui->BackgroundOM->setVisible(false);
    ui->BackgroundRM->setVisible(true);
    //Ofice_Btn styling
    QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/officeAnusued.png)";
    QPixmap img(url);
    ui->office_icone->clear();
    ui->office_icone->setPixmap(img);
    QFont font = QFont ("Segoe UI Light");
    ui->Office_Btn->setFont(font);
    //Reservation_Btn styling
    QFont font1 = QFont ("Segoe UI");
    QString url1 = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/reservation_used.png)";
    QPixmap img1(url1);
    ui->Reservation_Icone->clear();
    ui->Reservation_Icone->setPixmap(img1);
    //OfficeBtn styling
    ui->Reservation_Btn->setFont(font1);
    QString url2 = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/officeAnusued.png)";
    QPixmap img2(url2);
    ui->office_icone->clear();
    ui->office_icone->setPixmap(img2);
    QFont font2 = QFont ("Segoe UI Light");
    ui->Office_Btn->setFont(font2);

    //------
    QString url3 = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/display_iconeUnused.png)";
    QPixmap img3(url3);
    ui->display_offices_icone->clear();
    ui->display_offices_icone->setPixmap(img3);
    QFont font3 = QFont ("Segoe UI Light");
    ui->Display_offices_Btn->setFont(font3);
    //------
    QFont font4 = QFont ("Segoe UI Light");
    QString url4 = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/statistics_iconeUnused.png)";
    QPixmap img4(url4);
    ui->statistics_offices_icone->clear();
    ui->statistics_offices_icone->setPixmap(img4);
    ui->Statistics_offices_Btn->setFont(font4);

}


void MainWindow::on_Office_Btn_clicked()
{
  ui->BackgroundOM->setVisible(true);
  ui->BackgroundRM->setVisible(false);
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/officeUsed.png)";
  QPixmap img(url);
  ui->office_icone->clear();
  ui->office_icone->setPixmap(img);
  QFont font = QFont ("Segoe UI");
  ui->Office_Btn->setFont(font);
  //OfficeBtn styling
  QFont font1 = QFont ("Segoe UI Light");
  QString url1 = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/reservation_unused.png)";
  QPixmap img1(url1);
  ui->Reservation_Icone->clear();
  ui->Reservation_Icone->setPixmap(img1);
  ui->Reservation_Btn->setFont(font1);
  //-----------------
  QString url2 = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/display_iconeUsed.png)";
  QPixmap img2(url2);
  ui->display_offices_icone->clear();
  ui->display_offices_icone->setPixmap(img2);
  QFont font2 = QFont ("Segoe UI ");
  ui->Display_offices_Btn->setFont(font2);
  ui->body->setCurrentIndex(0);

}





void MainWindow::on_Statistics_offices_Btn_clicked()
{
  //display offices styling
   QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/display_iconeUnused.png)";
  ui->body->setCurrentIndex(1);
   QPixmap img(url);
   ui->display_offices_icone->clear();
   ui->display_offices_icone->setPixmap(img);
   QFont font = QFont ("Segoe UI Light");
   ui->Display_offices_Btn->setFont(font);
   //Statistics_offices styling
   QFont font1 = QFont ("Segoe UI");
   QString url1 = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/statistics_iconeUsed.png)";
   QPixmap img1(url1);
   ui->statistics_offices_icone->clear();
   ui->statistics_offices_icone->setPixmap(img1);
   ui->Statistics_offices_Btn->setFont(font1);
   //----------------
   ui->BackgroundRM->setVisible(false);
   QFont font2 = QFont ("Segoe UI");
   QString url2 = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/reservation_unused.png)";
   QPixmap img2(url2);
   ui->Reservation_Icone->clear();
   ui->Reservation_Icone->setPixmap(img2);
   QString url3 = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/officeUsed.png)";
   QPixmap img3(url3);
   ui->office_icone->clear();
   ui->office_icone->setPixmap(img3);
   QFont font3 = QFont ("Segoe UI");
   ui->Office_Btn->setFont(font3);
   ui->BackgroundOM->setVisible(true);
   // create statistic
 QLineSeries *series = new QLineSeries();
   // statistic implementation for Qline stat office
   // y Axe
   series->append(0,6);
   series->append(2,4);
   series->append(3,8);
   series->append(7,4);
   series->append(10,5);
 // X Axe
   *series << QPointF(11,1) << QPointF(13,3) << QPointF(17,3) << QPointF(18,3) <<QPointF(20,2);
 QChart *chart = new QChart();
 chart->legend()->hide();
 chart->addSeries(series);
 chart->createDefaultAxes();
 chart->setTitle("Line Chart Offices");

 QChartView * chartView=new QChartView(chart);

 chartView->setRenderHints(QPainter::Antialiasing);
 QVBoxLayout *layout = new QVBoxLayout(ui->QlineStatOffice);
 layout->addWidget(chartView);

 QPieSeries *series1 = new QPieSeries();

 series1->append("Open Area",300);

 series1->append("Offices",10);

 QChart * chart1=new QChart();

 chart1->addSeries(series1);

 chart1->setTitle("stats");

 QChartView * chartView1=new QChartView(chart1);

 chartView1->setRenderHints(QPainter::Antialiasing);
 QVBoxLayout *layout1 = new QVBoxLayout(ui->QPieStatOffice);
 layout1->addWidget(chartView1);

}


void MainWindow::on_Display_offices_Btn_clicked()
{ //
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/display_iconeUsed.png)";
  QPixmap img(url);
  ui->display_offices_icone->clear();
  ui->display_offices_icone->setPixmap(img);
  QFont font = QFont ("Segoe UI ");
  ui->Display_offices_Btn->setFont(font);
  //Statistics_offices styling
  QFont font1 = QFont ("Segoe UI Light");
  QString url1 = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/statistics_iconeUnused.png)";
  QPixmap img1(url1);
  ui->statistics_offices_icone->clear();
  ui->statistics_offices_icone->setPixmap(img1);
  ui->Statistics_offices_Btn->setFont(font1);
  //-----------------------
  ui->BackgroundRM->setVisible(false);
  QFont font2 = QFont ("Segoe UI");
  QString url2 = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/reservation_unused.png)";
  QPixmap img2(url2);
  ui->Reservation_Icone->clear();
  ui->Reservation_Icone->setPixmap(img2);
  QString url3 = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/officeUsed.png)";
  QPixmap img3(url3);
  ui->office_icone->clear();
  ui->office_icone->setPixmap(img3);
  QFont font3 = QFont ("Segoe UI");
  ui->Office_Btn->setFont(font3);
  ui->BackgroundOM->setVisible(true);
  ui->body->setCurrentIndex(0);


 dataSet.erase(dataSet.begin(),dataSet.end()) ;
qDeleteAll(ui->scrollAreaWidgetContents->findChildren<Card *>(QString(), Qt::FindDirectChildrenOnly));



for(int i =0 ; i<5 ; i++){
    int x = 1;
    QString officeID = "id_"+ QString::number(x);
   QString image = "C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/office.png";
   QString description ="description : Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur." ;
   QString price = "2500"+QString::number(i);
   QString name;
   QString position;
   QString space;
   Office * office = new Office(officeID,image,description,price,name,position,space);
   dataSet.insert(dataSet.begin(), office);


  }
int i = 0 ;
std::list<Office*>::iterator it1;


std::list<Office*>::iterator it;
for (it = dataSet.begin(); it != dataSet.end(); ++it){
    Card *card = new Card();
    card->setOfficeID((*it)->getIdOffice()+ QString::number(i));
    i++;
    card->setOfficePrice((*it)->getPrice());
    card->setOfficeDescription((*it)->getDescription());
    card->setOfficeImage((*it)->getImage());
    connect(card,SIGNAL(sendData(QString)),this,SLOT(recieveData(QString)));
     ui->CardsLayout->addWidget(card);
}
}

void MainWindow::recieveData(QString str)
{

    ui->body->setCurrentIndex(2);
    ui->idOffice->setText(str);
}
void MainWindow::on_exit_add_office_clicked()
{
    ui->add_office_widget->setVisible(false);
}

void MainWindow::on_pushButton_clicked()
{
     ui->add_office_widget->setVisible(true);
}

void MainWindow::on_exit_button_clicked()
{
    ui->add_office_widget->setVisible(false);
}

void MainWindow::on_office_Name_line_textChanged(const QString &arg1)
{
  stylee(ui->office_Name_line,ui->officeName_icone,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/nameOffice_iconeBlue.png","border-bottom: 1.5px solid #4A8292; border-radius:unset;");
}

void MainWindow::on_office_Name_line_editingFinished()
{
  stylee(ui->office_Name_line,ui->officeName_icone,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/nameOffice_iconeGrey.png","border-bottom: 1.5px solid #d9d9d9; border-radius:unset;");

}

void MainWindow::on_space_line_textChanged(const QString &arg1)
{
  stylee(ui->space_line,ui->space_icone,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/space_iconeBlue.png","border-bottom: 1.5px solid #4A8292; border-radius:unset;");
}

void MainWindow::on_space_line_editingFinished()
{
  stylee(ui->space_line,ui->space_icone,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/space_iconeGrey.png","border-bottom: 1.5px solid #d9d9d9; border-radius:unset;");
}

void MainWindow::on_position_line_textChanged(const QString &arg1)
{
stylee(ui->position_line,ui->position_icone,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/position_iconeBlue.png","border-bottom: 1.5px solid #4A8292; border-radius:unset;");
}

void MainWindow::on_position_line_editingFinished()
{
  stylee(ui->position_line,ui->position_icone,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/position_iconeGrey.png","border-bottom: 1.5px solid #d9d9d9; border-radius:unset;");
}

void MainWindow::on_Price_line_textChanged(const QString &arg1)
{
  stylee(ui->Price_line,ui->price_icone,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/dollar_iconeBlue.png","border-bottom: 1.5px solid #4A8292;border-radius:unset;");
}


void MainWindow::on_Price_line_editingFinished()
{
    stylee(ui->Price_line,ui->price_icone,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/dollar_iconeGrey.png","border-bottom: 1.5px solid #d9d9d9; border-radius:unset;");
}

void stylee(QLineEdit *e,QLabel *icone,QString url,QString styleSheet){
  e->setStyleSheet(styleSheet);
  QPixmap img(url);
  icone->clear();
  icone->setPixmap(img);

}
void MainWindow::on_description_line_textChanged(const QString &arg1)
{
  stylee(ui->description_line,ui->description_icone,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/description_iconeBlue.png","border-bottom: 1.5px solid #4A8292; border-radius:unset;");
}


void MainWindow::on_description_line_editingFinished()
{
  stylee(ui->description_line,ui->description_icone,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/description_iconeGrey.png","border-bottom: 1.5px solid #d9d9d9; border-radius:unset;");
}

void MainWindow::on_add_office_btn_clicked()
{

      ui->add_office_widget->setVisible(true);
      /*QString id_office;
      QString image;//we have to make url line in the pop up widget
      QString description=ui->description_line->text();
      QString price=ui->Price_line->text();
      QString name=ui->office_Name_line->text();
      QString space=ui->space_line->text();
      QString position=ui->position_line->text();




      Office stock(id_office,image,description,price,name,space,position);
      bool check=stock.add_office_database();
      if(check){
          QMessageBox::information(nullptr, QObject::tr("database is  open"),
                                           QObject::tr("Success.\n""Click Cancel to exit."), QMessageBox::Ok);
        }
      else{
          QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                                           QObject::tr("Failed.\n""Click Cancel to exit."), QMessageBox::Cancel);
        }*/

}

void MainWindow::on_exit_add_popup_clicked()
{
    ui->add_office_widget->setVisible(false);
}


void MainWindow::on_add_office_button_clicked()
{
  qDeleteAll(ui->scrollAreaWidgetContents->findChildren<Card *>(QString(), Qt::FindDirectChildrenOnly));
  int x = 1;
  QString id_office;
  QString image = "C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/office.png";//we have to make url line in the pop up widget
  QString description=ui->description_line->text();
  QString price=ui->Price_line->text();
  QString name=ui->office_Name_line->text();
  QString space=ui->space_line->text();
  QString position=ui->position_line->text();

  Office * office = new Office(id_office,image,description,price,name,position,space);

  Office stock(id_office,image,description,price,name,space,position);
  bool check=stock.add_office_database();
  if(check){
      QMessageBox::information(nullptr, QObject::tr("database is  open"),
                                       QObject::tr("Success.\n""Click Cancel to exit."), QMessageBox::Ok);
    }
  else{
      QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                                       QObject::tr("Failed.\n""Click Cancel to exit."), QMessageBox::Cancel);
    }

  dataSet.insert(dataSet.begin(), office);
  std::list<Office*>::iterator it;

  for (it = dataSet.begin(); it != dataSet.end(); ++it){
      Card *card = new Card();
      card->setOfficeID((*it)->getIdOffice());
      card->setOfficePrice((*it)->getPrice());
      card->setOfficeDescription((*it)->getDescription());
      card->setOfficeImage((*it)->getImage());
      card->setNameOffice((*it)->getNameOffice());

      connect(card,SIGNAL(sendData(QString)),this,SLOT(recieveData(QString)));
       ui->CardsLayout->addWidget(card);
  }
  ui->add_office_widget->setVisible(false);
}

void MainWindow::on_GoBackButton_clicked()
{
    ui->body->setCurrentIndex(0);
}


void MainWindow::on_delete_officeBtn_clicked()
{
  std::list<Office*>::iterator itErrazed;
  std::list<Office*>::iterator itErrazedEnd;
  std::list<Office*>::iterator it1;
Office * office;
  for (it1 = dataSet.begin(); it1 != dataSet.end(); ++it1){
      if(ui->idOffice->text() == (*it1)->getIdOffice()){
           itErrazed = it1;
           itErrazedEnd = ++it1;
        }

  }
  dataSet.erase(itErrazed,itErrazedEnd);
   qDeleteAll(ui->scrollAreaWidgetContents->findChildren<Card *>(QString(), Qt::FindDirectChildrenOnly));
  std::list<Office*>::iterator it;
   for (it = dataSet.begin(); it != dataSet.end(); ++it){
  Card *card = new Card();
  card->setOfficeID((*it)->getIdOffice());
  card->setOfficePrice((*it)->getPrice());
  card->setOfficeDescription((*it)->getDescription());
  card->setOfficeImage((*it)->getImage());

  connect(card,SIGNAL(sendData(QString)),this,SLOT(recieveData(QString)));
   ui->CardsLayout->addWidget(card);}


   ui->body->setCurrentIndex(0);
}

void MainWindow::on_omg_clicked()
{

   ui->body->setCurrentIndex(3);
}


void MainWindow::on_SingUpBtn1_clicked()
{
  ui->loginForm->setCurrentIndex(0);

  QString username=ui->Username_SingUp->text();
  QString password=ui->password_SingUp->text();
  int phone_number=ui->number_SingUp->text().toInt();
  QString email=ui->email_SingUp->text();
  User stock(username,password,email,phone_number);
  bool check=stock.Add_new();
  if(check){
      QMessageBox::information(nullptr, QObject::tr("database is  open"),
                                       QObject::tr("Success.\n""Click Cancel to exit."), QMessageBox::Ok);
    }
  else{
      QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                                       QObject::tr("Failed.\n""Click Cancel to exit."), QMessageBox::Cancel);
    }

}
