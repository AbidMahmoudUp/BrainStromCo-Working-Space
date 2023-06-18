#include "card.h"
#include "ui_card.h"
#include "ui_card.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QPainterPath>
Card::Card(QWidget *parent) :
    QWidget(parent),
    uiCard(new Ui::Card)
{
    uiCard->setupUi(this);

}

Card::~Card()
{
    delete uiCard;
}

// just to draw a border. could also use stylesheet
void Card::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    QColor backgroundColor = palette().color(QPalette::Light);
    p.setBrush(backgroundColor);
    p.setRenderHint(QPainter::Antialiasing);
    QPainterPath path;
    QPen pen(Qt::white, 0);
    p.setPen(pen);
    p.drawPath(path);
    p.drawRoundedRect(QRect(0,0,width()-1, height()-1),5,5);




}
void Card::setOfficePrice(QString value)
{
    uiCard->officePrice->setText(value);
}

QString Card::getOfficePrice()
{
    return uiCard->officePrice->text();
}

void Card:: setOfficeImage(QString value){
  uiCard->image->setStyleSheet("border-radius: 10px;");
  QPixmap mypix (value);
  uiCard->image->setPixmap(mypix);
  /*QPixmap scaled = mypix.scaled(100,100,Qt::KeepAspectRatio,Qt::SmoothTransformation);


  QBitmap map(28,28);
  map.fill(Qt::color0);

  QPainter painter( &map );
  painter.setBrush(Qt::color1);
  painter.drawRoundedRect( 0, 0, 28, 28,8,8);


  scaled.setMask(map);
  ui->image->setPixmap(scaled);*/
 // ui->image->setText(value);
}
QString Card:: getOfficeImage(){

  return uiCard->image->text();
}

void Card:: setOfficeDescription(QString value){
  uiCard->description->setText(value);
}
QString Card:: getOfficeDescription(){
  return uiCard->description->text();

}

void Card::on_pushButton_clicked()
{
  //Ui::MainWindow *ui;
 //   uiCard->setupUi(ui.mainWidget);
  //connect(uiCard->pushButton, SIGNAL(textEdited(QString)),
   //       QM, SLOT(setText(QString)));
 // ui->mainWidget->setCurrentIndex(0);
  //uiCard->
}

