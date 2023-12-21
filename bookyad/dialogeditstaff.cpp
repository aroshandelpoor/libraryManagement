#include "dialogeditstaff.h"
#include "ui_dialogeditstaff.h"

DialogEditStaff::DialogEditStaff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEditStaff)
{
    ui->setupUi(this);
}

DialogEditStaff::~DialogEditStaff()
{
    delete ui;
}
