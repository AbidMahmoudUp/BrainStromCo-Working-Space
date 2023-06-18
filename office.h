#ifndef OFFICE_H
#define OFFICE_H
#include "QString"

class Office
{
public:
  Office(QString image,QString description,QString price);

  QString getImage();
  void setImage(QString value);
  QString getDescription();
  void setDescription(QString value);
  QString getPrice();
  void setPrice(QString value);
private:
  QString image;
  QString description;
  QString price;
};

#endif // OFFICE_H
