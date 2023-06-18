#include "office.h"


Office::Office(QString idOffice,QString image,QString description,QString price)
{
  this->idOffice = idOffice;
this->image = image;
  this->description = description;
  this->price =price;
}

QString Office:: getImage(){
  return this->image;
}
void  Office:: setImage(QString value){
  this->image = value;
}
QString  Office:: getDescription(){
  return this->description;
}
void  Office:: setDescription(QString value){
  this->description = value;
}
QString  Office:: getPrice(){
  return this->price;
}
void  Office:: setPrice(QString value){
  this->price = value;
}

QString Office:: getIdOffice(){
  return this->idOffice;
}
void Office:: setIdOffice(QString value){
  this->idOffice = value;
}
