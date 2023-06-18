#ifndef OFFICE_H
#define OFFICE_H
#include "QString"
#include "list"
class Office
{
public:
  Office(QString idOffice,QString image,QString description,QString price,QString name,QString space,QString postion);
  Office();
  QString getIdOffice();
  void setIdOffice(QString value);
  QString getImage();
  void setImage(QString value);
  QString getDescription();
  void setDescription(QString value);
  QString getPrice();
  void setPrice(QString value);
  QString getNameOffice();
  void setNameOffice(QString value);
  QString getPostionOffice();
  void setPositionOffice(QString value);
  QString getSpaceOffice();
  void setSpaceOffice(QString value);
  bool edit_office_database();
  bool add_office_database();
 std::list<Office*> getAllOffices();
  bool deleteOfficeById();
  bool searchOfficeByName();
private:
  QString idOffice;
  QString image;
  QString description;
  QString price;
  QString name;
  QString postion;
  QString space;

};

#endif // OFFICE_H
