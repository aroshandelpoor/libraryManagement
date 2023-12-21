#include "dialogdeletestaff.h"
#include "ui_dialogdeletestaff.h"

DialogDeleteStaff::DialogDeleteStaff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDeleteStaff)
{
    ui->setupUi(this);
}

DialogDeleteStaff::~DialogDeleteStaff()
{
    delete ui;
}
