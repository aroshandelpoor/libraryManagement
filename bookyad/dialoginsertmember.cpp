#include "dialoginsertmember.h"
#include "ui_dialoginsertmember.h"

DialogInsertMember::DialogInsertMember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInsertMember)
{
    ui->setupUi(this);
}

DialogInsertMember::~DialogInsertMember()
{
    delete ui;
}
