#include "dialoginsertbook.h"
#include "ui_dialoginsertbook.h"
#include "bookform.h"
#include "QSqlDatabase"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "QMessageBox"
#include "QDir"
#include "QFileInfo"
#include "QScreen"
#include "QDebug"

DialoginsertBook::DialoginsertBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialoginsertBook)
{
    ui->setupUi(this);

    move(QGuiApplication::screens().at(0)->geometry().center() - frameGeometry().center());

    setWindowTitle("بوکیاد");

}

DialoginsertBook::~DialoginsertBook()
{
    delete ui;
}

void DialoginsertBook::on_pushButton_accept_clicked()
{
    QString isbnCode,bookTitle,writerName;

    isbnCode=ui->lineEdit_isbncode->text();
    bookTitle=ui->lineEdit_booktitle->text();
    writerName=ui->lineEdit_writername->text();

    QSqlQuery queryinsert;
    queryinsert.prepare("INSERT INTO Book_Info (ISBN_Code,Book_Title,Writer_Name) VALUES ('"+isbnCode+"','"+bookTitle+"','"+writerName+"')");

    if(queryinsert.exec())
    {

        QMessageBox::about(this,"ثبت","اطلاعات با موفقیت ثبت گردید.");

    }
    else if (!queryinsert.exec())
    {

        QMessageBox::critical(this,"خطای ثبت","اطلاعات ارسال نشد!");

    }

    ui->lineEdit_isbncode->clear();
    ui->lineEdit_booktitle->clear();
    ui->lineEdit_writername->clear();
}


void DialoginsertBook::on_pushButton_exit_clicked()
{
    ui->lineEdit_isbncode->clear();
    ui->lineEdit_booktitle->clear();
    ui->lineEdit_writername->clear();
    this->close();
}

