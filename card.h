#ifndef CARD_H
#define CARD_H

#include "ui_mainwindow.h"
#include <QWidget>

namespace Ui {
class Card;
class MainWindow;
}

class Card : public QWidget
{
    Q_OBJECT


public:
    explicit Card(QWidget *parent = nullptr);
    void setOfficePrice(QString value);
    QString getOfficePrice();

    void setOfficeImage(QString value);
    QString getOfficeImage();

    void setOfficeDescription(QString value);
    QString getOfficeDescription();
    void setOfficeSeeMoreState(QString value);
    QString getOfficeSeeMoreState();

    ~Card();

private:
    Ui::Card *uiCard;

    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event) override;

private slots:
    void on_pushButton_clicked();
signals:
   void sendData(QString);
};

#endif // CARD_H
