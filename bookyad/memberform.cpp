#include "memberform.h"
#include "ui_memberform.h"
#include "QScreen"
#include "QSqlDatabase"
#include "QSqlQuery"
#include "QMessageBox"
#include "QDebug"
#include "QSqlQueryModel"
#include "QDir"
#include "QFileInfo"
#include "QScreen"
MemberForm::MemberForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MemberForm)
{
    ui->setupUi(this);

    move(QGuiApplication::screens().at(0)->geometry().center() - frameGeometry().center());

    QFileInfo info(QDir::currentPath());
    QString path = info.absolutePath();

    QSqlDatabase db;

    db= QSqlDatabase :: addDatabase("QSQLITE");
    db.setDatabaseName(path+"/bookyad/database/bookyad.db");
    db.open();
}

MemberForm::~MemberForm()
{
    delete ui;
}

void MemberForm::on_pushButton_insert_clicked()
{
    insertMember.show();
}

void MemberForm::on_pushButton_delete_clicked()
{
    deleteMember.show();
}

void MemberForm::on_pushButton_edit_clicked()
{
    editMember.show();
}

void MemberForm::on_pushButton_refresh_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel();

    QSqlQuery *qry=new QSqlQuery;
    qry->prepare("Select * from Student_Details order by Student_Id desc");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);

    qDebug() << (model->rowCount());

}
