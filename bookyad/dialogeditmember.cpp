#include "dialogeditmember.h"
#include "ui_dialogeditmember.h"

DialogEditMember::DialogEditMember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEditMember)
{
    ui->setupUi(this);
}

DialogEditMember::~DialogEditMember()
{
    delete ui;
}
