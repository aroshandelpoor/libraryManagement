#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "QSqlDatabase"
#include "QSqlQuery"
#include "QMessageBox"
#include "QDebug"
#include "QDir"
#include "QFileInfo"
#include "QScreen"


LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    move(QGuiApplication::screens().at(0)->geometry().center() - frameGeometry().center());

    QFileInfo info(QDir::currentPath());
    QString path = info.absolutePath();



    QSqlDatabase db;

    db= QSqlDatabase :: addDatabase("QSQLITE");
    db.setDatabaseName(path+"/bookyad/database/bookyad.db");
    db.open();

    setWindowTitle("سامانه مدیریت کتابخانه بوکیاد");

    ui->lineEdit_user->setStyleSheet("QLineEdit {  border: 2px solid gray;" "border-radius: 5px;}");
    ui->lineEdit_password->setStyleSheet("QLineEdit {  border: 2px solid gray;" "border-radius: 5px;}");
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);

}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_login_clicked()
{
    QString userName,passWord;

    userName=ui->lineEdit_user->text();
    passWord=ui->lineEdit_password->text();



    QSqlQuery qry;

    if (qry.exec("SELECT id,Password FROM Staff_Details WHERE id='"+userName+"'  AND Password='"+passWord+"'"))
    {
        int count=0;
        while (qry.next())
        {

            count++;

        }
        if(count==1)
        {



            mainform.showMaximized();
            mainform.setEnabled(true);
            this->hide();

        }

        if(count<1)
            QMessageBox::warning(this,"!خطا","نام کاربری یا رمز عبور اشتباه است");

    }
}

