#include "dialoginsertstaff.h"
#include "ui_dialoginsertstaff.h"
#include "QSqlDatabase"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "QMessageBox"
#include "QCryptographicHash"

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

void DialogInsertStaff::on_pushButton_insert_clicked()
{
    QString duty, id, staffName, pass,repeatPass;

    duty=ui->comboBox_role->currentText();
    id= ui->lineEdit_id->text();
    staffName=ui->lineEdit_staff_name->text();
    pass=ui->lineEdit_password->text();
    repeatPass=ui->lineEdit_repeat_password->text();

    QCryptographicHash hash(QCryptographicHash::Md5);
    hash.addData(pass.toUtf8());
    QByteArray hashedPassword = hash.result().toHex();

    QSqlQuery queryinsert;
    queryinsert.prepare("INSERT INTO Staff_Details (id,name,Password,duty) VALUES ('"+id+"','"+staffName+"','"+hashedPassword+"','"+duty+"')");

    if(queryinsert.exec())
    {

        QMessageBox::about(this,"ثبت","اطلاعات با موفقیت ثبت گردید.");

    }
    else if (!queryinsert.exec())
    {

        QMessageBox::critical(this,"خطای ثبت","اطلاعات ارسال نشد!");

    }

    ui->lineEdit_id->clear();
    ui->lineEdit_staff_name->clear();
    ui->lineEdit_password->text();
    ui->lineEdit_repeat_password->text();

}


void DialogInsertStaff::on_pushButton_exit_clicked()
{
    ui->lineEdit_id->clear();
    ui->lineEdit_staff_name->clear();
    ui->lineEdit_password->text();
    ui->lineEdit_repeat_password->text();
    this->close();
}

