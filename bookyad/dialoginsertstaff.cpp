#include "dialoginsertstaff.h"
#include "ui_dialoginsertstaff.h"

DialogInsertStaff::DialogInsertStaff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInsertStaff)
{
    ui->setupUi(this);
}

DialogInsertStaff::~DialogInsertStaff()
{
    delete ui;
}
