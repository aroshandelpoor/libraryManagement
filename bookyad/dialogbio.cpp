#include "dialogbio.h"
#include "ui_dialogbio.h"

DialogBio::DialogBio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogBio)
{
    ui->setupUi(this);
}

DialogBio::~DialogBio()
{
    delete ui;
}
