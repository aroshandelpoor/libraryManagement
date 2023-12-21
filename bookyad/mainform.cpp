#include "mainform.h"
#include "borrowerform.h"
#include "ui_mainform.h"
#include "QScreen"

MainForm::MainForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainForm)
{
    ui->setupUi(this);


    move(QGuiApplication::screens().at(0)->geometry().center() - frameGeometry().center());



}
MainForm::~MainForm()
{

    delete ui;
}

void MainForm::on_action_insertbook_triggered()
{
    bookInfo.show();
}


void MainForm::on_action_borrowbook_triggered()
{
    borrowerForm.show();
}


void MainForm::on_action_members_triggered()
{
    memberForm.show();
}


void MainForm::on_action_staffs_triggered()
{
    staffForm.show();
}


void MainForm::on_action_bio_triggered()
{
    dialogebio.show();
}


void MainForm::on_action_exit_triggered()
{
     this->close();
}

