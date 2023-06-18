#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "item.h"
#include "ui_item.h"
#include "officestatistic.h"
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




void MainWindow::on_Username_textChanged(const QString &arg1)
{
      ui->Username->setStyleSheet("border-bottom: 1.5px solid #4A8292;");
      QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/alternate_email_blue.png)";
      QPixmap img(url);
      ui->usernameIconeGrey->clear();
      ui->usernameIconeGrey->setPixmap(img);
}


void MainWindow::on_Username_editingFinished()
{
    ui->Username->setStyleSheet("border-bottom: 1.5px solid #d9d9d9;");
    QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/alternate_email_black_24dp.png)";
    QPixmap img(url);
    ui->usernameIconeGrey->clear();
    ui->usernameIconeGrey->setPixmap(img);
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
  ui->Username_SingUp->setStyleSheet("border-bottom: 1.5px solid #4A8292;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/alternate_email_blue.png)";
  QPixmap img(url);
  ui->usernameIcone_SingUp->clear();
  ui->usernameIcone_SingUp->setPixmap(img);
}


void MainWindow::on_Username_SingUp_editingFinished()
{
  ui->Username_SingUp->setStyleSheet("border-bottom: 1.5px solid #d9d9d9;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/alternate_email_black_24dp.png)";
  QPixmap img(url);
  ui->usernameIcone_SingUp->clear();
  ui->usernameIcone_SingUp->setPixmap(img);
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
  ui->email_SingUp->setStyleSheet("border-bottom: 1.5px solid #4A8292;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/email_blue.png)";
  QPixmap img(url);
  ui->emailIcone_SingUp->clear();
  ui->emailIcone_SingUp->setPixmap(img);
}


void MainWindow::on_email_SingUp_editingFinished()
{
  ui->email_SingUp->setStyleSheet("border-bottom: 1.5px solid #d9d9d9;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/email_grey.png)";
  QPixmap img(url);
  ui->emailIcone_SingUp->clear();
  ui->emailIcone_SingUp->setPixmap(img);

}


void MainWindow::on_number_SingUp_textChanged(const QString &arg1)
{
  ui->number_SingUp->setStyleSheet("border-bottom: 1.5px solid #4A8292;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/phone_blue.png)";
  QPixmap img(url);
  ui->numberIcone_SingUp->clear();
  ui->numberIcone_SingUp->setPixmap(img);
}


void MainWindow::on_number_SingUp_editingFinished()
{
  ui->number_SingUp->setStyleSheet("border-bottom: 1.5px solid #d9d9d9;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/phone_grey.png)";
  QPixmap img(url);
  ui->numberIcone_SingUp->clear();
  ui->numberIcone_SingUp->setPixmap(img);
}


void MainWindow::on_SingUpBtn_3_clicked()
{
    ui->loginForm->setCurrentIndex(0);

}


void MainWindow::on_LoginButton_clicked()
{
  ui->mainWidget->setCurrentIndex(1);
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
 //QPen pen(QRgb(0xFdb157));
 //pen.setWidth(5);
 //series->setPen(pen);
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
/*
QVBoxLayout *layout = new QVBoxLayout();
QVBoxLayout *layout1 = new QVBoxLayout();
  for(int i=0;i<3;i++){
      QLabel * item = new QLabel();
      QLabel *label = new QLabel();
      label->setText("hiiii");
      item->setStyleSheet("background-color:white; height:50px;");
      item->setStyleSheet("border-radius:5px;");

item->resize(165, 50);

     layout1->addWidget(label);
     item->setLayout(layout1);
     layout->addWidget(item);

    }
   ui->widget->setLayout(layout);*/
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
  ui->office_Name_line->setStyleSheet("border-bottom: 1.5px solid #4A8292;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/nameOffice_iconeBlue.png)";
  QPixmap img(url);
  ui->officeName_icone->clear();
  ui->officeName_icone->setPixmap(img);
}


void MainWindow::on_office_Name_line_editingFinished()
{
  ui->office_Name_line->setStyleSheet("border-bottom: 1.5px solid #d9d9d9;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/nameOffice_iconeGrey.png)";
  QPixmap img(url);
  ui->officeName_icone->clear();
  ui->officeName_icone->setPixmap(img);
}


void MainWindow::on_space_line_textChanged(const QString &arg1)
{
  ui->space_line->setStyleSheet("border-bottom: 1.5px solid #4A8292;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/space_iconeBlue.png)";
  QPixmap img(url);
  ui->space_icone->clear();
  ui->space_icone->setPixmap(img);
}


void MainWindow::on_space_line_editingFinished()
{
  ui->space_line->setStyleSheet("border-bottom: 1.5px solid #d9d9d9;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/space_iconeGrey.png)";
  QPixmap img(url);
  ui->space_icone->clear();
  ui->space_icone->setPixmap(img);
}


void MainWindow::on_position_line_textChanged(const QString &arg1)
{
  ui->position_line->setStyleSheet("border-bottom: 1.5px solid #4A8292;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/position_iconeBlue.png)";
  QPixmap img(url);
  ui->position_icone->clear();
  ui->position_icone->setPixmap(img);
}


void MainWindow::on_position_line_editingFinished()
{
  ui->position_line->setStyleSheet("border-bottom: 1.5px solid #d9d9d9;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/position_iconeGrey.png)";
  QPixmap img(url);
  ui->position_icone->clear();
  ui->position_icone->setPixmap(img);
}


void MainWindow::on_Price_line_textChanged(const QString &arg1)
{
  stylee(ui->Price_line,ui->price_icone,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/dollar_iconeBlue.png");


  /*ui->Price_line->setStyleSheet("border-bottom: 1.5px solid #4A8292;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/dollar_iconeBlue.png)";
  QPixmap img(url);
  ui->price_icone->clear();
  ui->price_icone->setPixmap(img);*/
}


void MainWindow::on_Price_line_editingFinished()
{
  styleeFineshed(ui->Price_line,ui->price_icone,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/dollar_iconeGrey.png");
  /*ui->Price_line->setStyleSheet("border-bottom: 1.5px solid #d9d9d9;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/dollar_iconeGrey.png)";
  QPixmap img(url);
  ui->price_icone->clear();
  ui->price_icone->setPixmap(img);*/
}

void stylee(QLineEdit *e,QLabel *icone,QString url){
  e->setStyleSheet("border-bottom: 1.5px solid #4A8292;");
  QPixmap img(url);
  icone->clear();
  icone->setPixmap(img);

}
void styleeFineshed(QLineEdit *e,QLabel *icone,QString url){
  e->setStyleSheet("border-bottom: 1.5px solid #d9d9d9;");
  QPixmap img(url);
  icone->clear();
  icone->setPixmap(img);
}
void MainWindow::on_description_line_textChanged(const QString &arg1)
{
  stylee(ui->description_line,ui->description_icone,"C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/description_iconeBlue.png");


  /*ui->description_line->setStyleSheet("border-bottom: 1.5px solid #4A8292;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/description_iconeBlue.png)";
  QPixmap img(url);
  ui->description_icone->clear();
  ui->description_icone->setPixmap(img);*/
}


void MainWindow::on_description_line_editingFinished()
{
  ui->description_line->setStyleSheet("border-bottom: 1.5px solid #d9d9d9;");
  QString url = R"(C:/Users/Mon Pc/Desktop/Qt projects/BrainStormSpace/img/description_iconeGrey.png)";
  QPixmap img(url);
  ui->description_icone->clear();
  ui->description_icone->setPixmap(img);
}


void MainWindow::on_add_office_btn_clicked()
{
      ui->add_office_widget->setVisible(true);
}


void MainWindow::on_exit_add_popup_clicked()
{
    ui->add_office_widget->setVisible(false);
}


void MainWindow::on_add_office_button_clicked()
{
    ui->add_office_widget->setVisible(false);
}

