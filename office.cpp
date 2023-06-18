#include "office.h"


Office::Office(QString image,QString description,QString price)
{
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
