#include "officestatistic.h"

QChart * OfficeStatistic::statistic()
{


  QPieSeries *series = new QPieSeries();

  series->append("Open Area",300);

  series->append("Offices",10);

  QChart * chart=new QChart();

  chart->addSeries(series);

  chart->setTitle("stats");

  return chart;

}
