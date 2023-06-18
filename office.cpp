#include "office.h"
#include "QSqlQuery"
#include "QtDebug"
#include "QDebug"
#include "QObject"
#include"QMessageBox"
#include <mainwindow.h>
 Office::Office(QString idOffice,QString image,QString description,QString price,QString name,QString space,QString postion)
{
  this->idOffice=idOffice;
  this->image = image;
  this->description = description;
  this->price =price;
   this->postion=postion;
   this->space=space;
   this->name=name;
}

QString Office:: getImage()
{
  return this->image;
}
void  Office:: setImage(QString value)
{
  this->image = value;
}
QString  Office:: getDescription(){
  return this->description;
}
void  Office:: setDescription(QString value)
{
  this->description = value;
}
QString  Office:: getPrice()
{
  return this->price;
}
void  Office:: setPrice(QString value)
{
  this->price = value;
}

QString Office:: getIdOffice(){
  return this->idOffice;
}
void Office:: setIdOffice(QString value)
{
   this->idOffice = value;
}
void Office::setNameOffice(QString value)
{
  this->name=value;
}
QString Office::getNameOffice()
{
   return this->name;
}
QString Office::getPostionOffice()
{
   return this->postion;
}
void Office::setPositionOffice(QString value)
{
  this->postion=value;
}
QString Office::getSpaceOffice()
{
   return this->space;
}
void Office::setSpaceOffice(QString value)
{
  this->space=value;
}
bool Office::add_office_database()
{
  QSqlQuery query;
  query.prepare("INSERT INTO office (id_office, name_office, description_office ,price_office, image_office) " "VALUES ( id_office.nextval, :name_office, :description_office,:price_office,:image_office)");
  query.bindValue(":name_office",name);
  query.bindValue(":description_office",description);
  query.bindValue(":price_office",price);
  query.bindValue(":image_office",image);
  return query.exec();
}
bool Office::edit_office_database()
{
  QSqlQuery query;
  query.prepare("UPDATE office SET  name_office=:name_office, description_office=:description_office ,price_office=:price_office, image_office=:image_office WHERE id_office='"+idOffice+"' "  );
  query.bindValue(":name_office",name);
  query.bindValue(":description_office",description);
  query.bindValue(":price_office",price);
  query.bindValue(":image_office",image);
  return query.exec();
}
std::list<Office*> Office::getAllOffices(){
  std::list<Office*> result ;
  QSqlQuery query;
      query.exec("SELECT * FROM office");
      while (query.next()) {
            QString name = query.value(1).toString();

            QString officeID = query.value(0).toString();
            QString image =  query.value(4).toString();
           QString description = query.value(2).toString();
           QString price =  query.value(3).toString();
           QString position= query.value(5).toString();;
           QString space= query.value(6).toString();;
           Office * office = new Office(officeID,image,description,price,name,position,space);
           result.insert(result.begin(), office);
        }
  return  result;
}
bool Office::deleteOfficeById()
{
    QSqlQuery query;
    query.prepare("DELETE FROM office WHERE id_office=:idOffice");
    query.bindValue(0,idOffice);
    return query.exec();
}
bool Office::searchOfficeByName(QString namedonne)
{

  QString s=name.at(0)+'%';
  QSqlQuery query;
  QString select="SELECT * FROM office WHERE name_office like '"+namedonne+"'";
  //QMessageBox::information(nullptr,"test",select);
  query.prepare(select);
  return query.exec();
}
bool Office::searchOfficeByWord(){
  QString s=name.at(0)+'%';
  QSqlQuery query;
  QString select="SELECT * FROM office WHERE name_office like '"+s+"'";
  QMessageBox::information(nullptr,"test",select);
  query.prepare(select);
  return query.exec();
}
std::list<Office*> Office::getSearchOffices(QString namedonne){
  std::list<Office*> result ;
  QSqlQuery query;

      query.prepare("SELECT * FROM office where name_office like '%"+namedonne+"%'");
      if(query.exec()){
             while (query.next()) {
            QString name = query.value(1).toString();

            QString officeID = query.value(0).toString();
            QString image =  query.value(4).toString();
           QString description = query.value(2).toString();
           QString price =  query.value(3).toString();
           QString position= query.value(5).toString();;
           QString space= query.value(6).toString();;
           Office * office = new Office(officeID,image,description,price,name,position,space);
           result.insert(result.begin(), office);
        }
        }

  return  result;
}
