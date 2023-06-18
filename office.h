#ifndef OFFICE_H
#define OFFICE_H
#include "QString"

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

  bool add_office_database();
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
