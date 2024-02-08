#include "dialogdeletestaff.h"
#include "ui_dialogdeletestaff.h"
#include "QSqlQuery"
#include "QMessageBox"
#include "QScreen"

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

void DialogDeleteStaff::on_pushButton_delete_clicked()
{
    QString idStaff,nameStaff;

    idStaff=ui->lineEdit_staffid->text();
    nameStaff=ui->lineEdit_staff_name->text();

    QSqlQuery querydelete;
    querydelete.prepare("DELETE FROM Staff_Details WHERE id = "+idStaff+" ");
    if(querydelete.exec()){
        QMessageBox::about(this,"حذف","اطلاعات با موفقیت حذف گردید.");
    }
    else if (!querydelete.exec())
    {

        QMessageBox::critical(this,"خطای حذف","اطلاعات ارسال نشد!");

    }

    ui->lineEdit_staffid->clear();
    ui->lineEdit_staff_name->clear();
}


void DialogDeleteStaff::on_pushButton_exit_clicked()
{
    ui->lineEdit_staffid->clear();
    ui->lineEdit_staff_name->clear();
    this->close();
}

