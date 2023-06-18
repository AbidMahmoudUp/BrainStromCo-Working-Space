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
#include <cctype>
#include "reservation.h"
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
public:
  Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
