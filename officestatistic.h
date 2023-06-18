#ifndef OFFICESTATISTIC_H
#define OFFICESTATISTIC_H
#include<QString>
#include <QChartView>
#include<QtCharts>
#include<QChart>
 void stylee(QLineEdit *e,QLabel *icone,QString url,QString styleSheet);
 void styleeFinished(QLineEdit *e,QLabel *icone,QString url);
class OfficeStatistic
{
public:
  QChart *statistic();
};

#endif // OFFICESTATISTIC_H
