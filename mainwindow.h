#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "popup.h"
#include "office.h"
#include <QMainWindow>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include <iostream>
#include <regex>
#include <string>
#include "arduino.h"
#include <cctype>
#include "test.h"
#include "customer.h"
#include "reservation.h"
#include "qrcode.h"
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  std::list<Office*> dataSet;
  std::list<Reservation*> setReservation;
  std::list<Test*> test;
  //std::list<Reservation*> setReservation;
  QString type_office="office";
  QString price_office=" ASC ";
  QString space_office=" ASC ";
  QString availibity_office="available";
  QString setectedIdOffice;
  QString selectNameOffice;
  bool  EmailCheck (QString email);

private slots:

  void DrawOfficeCard();

  void SuccessPopUp(QString);
void  stylee_border(QPushButton *e,QLabel *icone,QString url,QString styleSheet);
  void Failed_PopUp(QString descrip);

  //void SuccessPopUpSginIn();

  //void Failed_PopUpSginIn();

  void on_Username_textChanged(const QString &arg1);

  void on_Username_editingFinished();

  void on_password_textChanged(const QString &arg1);

  void on_password_editingFinished();

  void on_visibilityBtn_clicked();

  void on_Username_SingUp_textChanged(const QString &arg1);

  void on_Username_SingUp_editingFinished();

  void on_SingUpBtn_clicked();

  void on_password_SingUp_textChanged(const QString &arg1);

  void on_password_SingUp_editingFinished();

  void on_type_line_editingFinished();

  void on_type_line_textChanged(const QString &arg1);

  void on_date_line_textChanged(const QString &arg1);

  void on_date_line_editingFinished();

  void on_visibilityBtn_SingUp_clicked();

  void on_Cin_LineEdit_edit_editingFinished();

  void on_Cin_LineEdit_edit_textChanged(const QString &arg1);

  void on_email_SingUp_textChanged(const QString &arg1);

  void on_email_SingUp_editingFinished();

  void on_number_SingUp_textChanged(const QString &arg1);

  void on_number_SingUp_editingFinished();

  void on_SingUpBtn_3_clicked();

  void on_Display_offices_Reservation_btn_clicked();

  void on_LoginButton_clicked();

  void on_Reservation_Btn_clicked();

  void on_Office_Btn_clicked();

  void on_Statistics_offices_Btn_clicked();

  void on_Display_offices_Btn_clicked();

  void on_exit_add_office_clicked();

  void on_pushButton_clicked();

  void on_exit_button_clicked();

  void exit_add_popup_add_reservation_edit_clicked();

  void on_office_Name_line_textChanged(const QString &arg1);

  void on_office_Name_line_editingFinished();

  void on_office_Name_line_edit_editingFinished();

  void on_office_Name_line_edit_textChanged(const QString &arg1);

  void on_Cin_LineEdit_textChanged(const QString &arg1);

  void on_Cin_LineEdit_editingFinished();

  void on_space_line_edit_textChanged(const QString &arg1);

  void on_space_line_edit_editingFinished();

  void on_position_line_edit_textChanged(const QString &arg1);

  void on_position_line_edit_editingFinished();

  void on_Price_line_edit_textChanged(const QString &arg1);

  void on_Price_line_edit_editingFinished();

  void on_type_line_edit_textChanged(const QString &arg1);

  void on_type_line_edit_editingFinished();

  void on_date_line_edit_textChanged(const QString &arg1);

  void on_date_line_edit_editingFinished();

  void on_description_line_edit_textChanged(const QString &arg1);

  void on_description_line_edit_editingFinished();

  void on_space_line_textChanged(const QString &arg1);

  void on_space_line_editingFinished();

  void on_position_line_textChanged(const QString &arg1);

  void on_position_line_editingFinished();

  void on_Price_line_textChanged(const QString &arg1);

  void on_Price_line_editingFinished();

  void on_description_line_textChanged(const QString &arg1);

  void on_description_line_editingFinished();

  void on_add_office_btn_clicked();

  void on_exit_add_popup_clicked();

  void on_GoBack_area_Sign_Up_clicked();

  void on_add_office_button_clicked();

  void recieveData(Office);

  void recieveDataReservation(Reservation);

  void recieveID(QString,QString);

  void on_GoBackButton_clicked();

  void on_GoBack_area_add_office_clicked();

   void on_omg_clicked();

   void on_SingUpBtn1_clicked();

   void on_edit_office_button_more_clicked();

   void on_edit_office_button_clicked();

   void on_delete_office_button_more_clicked();

   void on_search_button_office_clicked();

   void on_search_line_office_textChanged(const QString &arg1);

   void on_print_pdf_office_clicked();

   void on_lowest_button_clicked();

   void on_heighest_button_clicked();

   void on_open_area_button_clicked();

   void on_office_button_clicked();

   void on_available_button_clicked();

   void on_not_available_button_clicked();

   void on_asc_button_clicked();

   void on_desc_button_clicked();

   void on_add_reservation_button_clicked();

   void on_edit_reservation_clicked();

   void on_delete_reservation_clicked();

   void on_GoNextbtn_clicked();

   void on_add_reservation_btn_clicked();

   void on_exit_add_popup_add_reservation_clicked();

   void on_exit_popup_reservation_clicked();

   void on_exit_add_popup_edit_clicked();

   void on_edit_reservation_more_clicked();

   void on_GoNextbtn_edit_clicked();

   void on_open_clicked();

   void on_close_clicked();

   void on_exit_add_popup_add_reservation_edit_clicked();

   void  on_search_line_office_3_textChanged(const QString &arg1);

   void DrawReservationCard();

//--------------------------------------Arduino Implimentation--------
   void update_label();
//----------------------Integration avec tache evnement--------------
   void on_refresh_button_clicked();

   void on_add_event_button_clicked();

   void on_edit_event_button_clicked();

   void on_edit_event_clicked();

   void on_Event_Btn_clicked();

   void on_display_event_btn_clicked();

   void on_Event_history_Btn_clicked();

   void on_delete_event_clicked();

   void on_exit_add_popup_edit_event_clicked();

   void on_add_event_btn_clicked();

   void on_Event_id_line_edit_textChanged(const QString &arg1);

   void on_Event_id_line_edit_editingFinished();

   void on_participant_line_edit_textChanged(const QString &arg1);

   void on_participant_line_edit_editingFinished();

   void on_price_event_line_edit_textChanged(const QString &arg1);

   void on_price_event_line_edit_editingFinished();

   void on_Event_name_line_edit_textChanged(const QString &arg1);

   void on_Event_name_line_edit_editingFinished();

   void on_type_event_line_editt_textChanged(const QString &arg1);

   void on_type_event_line_editt_editingFinished();

   void on_date_event_line_edit_textChanged(const QString &arg1);

   void on_date_event_line_edit_editingFinished();

   void on_Event_id_line_add_textChanged(const QString &arg1);

   void on_Event_id_line_add_editingFinished();

   void on_participant_line_add_textChanged(const QString &arg1);

   void on_participant_line_add_editingFinished();

   void on_price_event_line_add_textChanged(const QString &arg1);

   void on_price_event_line_add_editingFinished();

   void on_Event_name_line_add_textChanged(const QString &arg1);

   void on_Event_name_line_add_editingFinished();

   void on_type_event_line_textChanged(const QString &arg1);

   void on_type_event_line_editingFinished();

   void on_date_event_line_textChanged(const QString &arg1);

   void on_date_event_line_editingFinished();

   //------------------------------------------Integration Client---------------------------------------------
   void on_Client_Managment_Btn_clicked();

   void on_edit_client_clicked();

   void on_exit_client_add_clicked();

   void on_edit_client_Btn_clicked();

   void on_exit_client_edit_clicked();

    void on_add_client_Btn_clicked();

    void on_add_client_button_clicked();

    void on_delete_client_btn_clicked();

    void on_cancel_btn_client_clicked();

    void on_exit_client_delete_clicked();

    void on_delete_client_clicked();

    void on_pdf_client_clicked();

    void on_search_line_client_textChanged(const QString &arg1);

    void on_name_client_line_add_textChanged(const QString &arg1);

    void on_name_client_line_add_editingFinished();

    void on_Last_name_client_line_add_textChanged(const QString &arg1);

    void on_Last_name_client_line_add_editingFinished();

    void on_email_line_add_textChanged(const QString &arg1);

    void on_email_line_add_editingFinished();

    void on_adress_line_add_textChanged(const QString &arg1);

    void on_adress_line_add_editingFinished();

    void on_Cin_client_line_add_textChanged(const QString &arg1);

    void on_Cin_client_line_add_editingFinished();

    void on_Cin_client_line_edit_textChanged(const QString &arg1);

    void on_Cin_client_line_edit_editingFinished();

    void on_name_client_line_edit_textChanged(const QString &arg1);

    void on_name_client_line_edit_editingFinished();

    void on_Last_name_client_line_edit_textChanged(const QString &arg1);

    void on_Last_name_client_line_edit_editingFinished();

    void on_email_client_line_edit_textChanged(const QString &arg1);

    void on_email_client_line_edit_editingFinished();

    void on_adress_line_edit_textChanged(const QString &arg1);

    void on_adress_line_edit_editingFinished();

    void on_Cin_client_line_delete_textChanged(const QString &arg1);

    void on_Cin_client_line_delete_editingFinished();
    /*

  int numero=ui->Cin_client_line_edit->text().toInt();
          QString name=ui->name_client_line_edit->text();
          QString lastname=ui->Last_name_client_line_edit->text();
           QString email=ui->email_client_line_edit->text();
            QString address=ui->adress_line_edit->text();
          customer c(name,lastname,email,address,numero);
    */
public:
  Ui::MainWindow *ui;

  QByteArray data;

  customer tmp;

  bool successfulEncoding;

  int encodeImageSize;

  QPoint LastPos;

  CQR_Encode  qrEncode;

  Arduino arduino;
};
#endif // MAINWINDOW_H
