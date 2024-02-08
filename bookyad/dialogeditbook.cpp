#include "dialogeditbook.h"
#include "ui_dialogeditbook.h"
#include "QSqlQuery"
#include "QMessageBox"
#include "QScreen"

DialogEditBook::DialogEditBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEditBook)
{
    ui->setupUi(this);
}

DialogEditBook::~DialogEditBook()
{
    delete ui;
}

void DialogEditBook::on_pushButton_edit_clicked()
{
    QString isbnCode,bookTitle,writerName;

    isbnCode=ui->lineEdit_isbncode->text();
    bookTitle=ui->lineEdit_booktitle->text();
    writerName=ui->lineEdit_writername->text();

    QSqlQuery queryupdate;
    queryupdate.prepare("UPDATE Book_Info SET Book_Title = '"+bookTitle+"' WHERE ISBN_Code = "+isbnCode+" ");
    if(queryupdate.exec()){
        QMessageBox::about(this,"ویرایش","اطلاعات با موفقیت ویرایش گردید.");
    }
    else if (!queryupdate.exec())
    {

        QMessageBox::critical(this,"خطای ویرایش","اطلاعات ارسال نشد!");

    }

    ui->lineEdit_isbncode->clear();
    ui->lineEdit_booktitle->clear();
    ui->lineEdit_writername->clear();
}


void DialogEditBook::on_pushButton_exit_clicked()
{
    ui->lineEdit_isbncode->clear();
    ui->lineEdit_booktitle->clear();
    ui->lineEdit_writername->clear();
    this->close();
}

