#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <ui_mainwindow.h>
#include "office.h"
#include <QMainWindow>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
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

private slots:

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

  void on_visibilityBtn_SingUp_clicked();

  void on_email_SingUp_textChanged(const QString &arg1);

  void on_email_SingUp_editingFinished();

  void on_number_SingUp_textChanged(const QString &arg1);

  void on_number_SingUp_editingFinished();

  void on_SingUpBtn_3_clicked();

  void on_LoginButton_clicked();

  void on_Reservation_Btn_clicked();

  void on_Office_Btn_clicked();



  void on_Statistics_offices_Btn_clicked();

  void on_Display_offices_Btn_clicked();

  void on_exit_add_office_clicked();

  void on_pushButton_clicked();

  void on_exit_button_clicked();

  void on_office_Name_line_textChanged(const QString &arg1);

  void on_office_Name_line_editingFinished();

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

  void on_add_office_button_clicked();
  void recieveData(QString);

  void on_GoBackButton_clicked();

  void on_delete_officeBtn_clicked();
   void on_omg_clicked();

public:
  Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
