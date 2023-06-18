#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);

}

MainWindow::~MainWindow()
{
  delete ui;
}


void MainWindow::on_Username_returnPressed()
{

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


void MainWindow::on_pushButton_clicked(bool k)
{

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

