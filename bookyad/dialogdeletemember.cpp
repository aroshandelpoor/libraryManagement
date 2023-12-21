#include "dialogdeletemember.h"
#include "ui_dialogdeletemember.h"

DialogDeleteMember::DialogDeleteMember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDeleteMember)
{
    ui->setupUi(this);
}

DialogDeleteMember::~DialogDeleteMember()
{
    delete ui;
}
