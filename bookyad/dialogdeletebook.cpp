#include "dialogdeletebook.h"
#include "ui_dialogdeletebook.h"
#include "QSqlQuery"
#include "QMessageBox"
#include "QScreen"

DialogDeleteBook::DialogDeleteBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDeleteBook)
{
    ui->setupUi(this);

    move(QGuiApplication::screens().at(0)->geometry().center() - frameGeometry().center());

}

DialogDeleteBook::~DialogDeleteBook()
{
    delete ui;
}

void DialogDeleteBook::on_pushButton_delete_clicked()
{
    QString isbnCode,bookTitle;

    isbnCode=ui->lineEdit_isbncode->text();
    bookTitle=ui->lineEdit_booktitle->text();

    QSqlQuery querydelete;
    querydelete.prepare("DELETE FROM Book_Info WHERE ISBN_Code = "+isbnCode+" ");
    if(querydelete.exec()){
        QMessageBox::about(this,"حذف","اطلاعات با موفقیت حذف گردید.");
    }
    else if (!querydelete.exec())
    {

        QMessageBox::critical(this,"خطای حذف","اطلاعات ارسال نشد!");

    }

}


void DialogDeleteBook::on_pushButton_exit_clicked()
{
    this->close();
}

