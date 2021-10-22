#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<client.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
   void setclient(client c);
    ~Dialog();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
