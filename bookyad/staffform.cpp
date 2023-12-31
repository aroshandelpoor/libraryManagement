#include "staffform.h"
#include "ui_staffform.h"
#include "qsqlquerymodel.h"
#include "QSqlDatabase"
#include "QSqlQuery"
#include "QMessageBox"
#include "QDebug"
#include "QSqlQueryModel"
#include "QDir"
#include "QFileInfo"
#include "QScreen"
#include "QSqlError"

StaffForm::StaffForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StafForm)
{
    ui->setupUi(this);

    move(QGuiApplication::screens().at(0)->geometry().center() - frameGeometry().center());

    QFileInfo info(QDir::currentPath());
    QString path = info.absolutePath();

    QSqlDatabase db;

    db= QSqlDatabase :: addDatabase("QSQLITE");
    db.setDatabaseName(path+"/bookyad/database/bookyad.db");
    db.open();

    show_grid();

}

StaffForm::~StaffForm()
{
    delete ui;
}

void StaffForm::on_pushButton_insert_clicked()
{
    insertStaff.show();
}


void StaffForm::on_pushButton_delete_clicked()
{
    deleteStaff.show();
}


void StaffForm::on_pushButton_edit_clicked()
{
    editStaff.show();
}


void StaffForm::on_pushButton_refresh_clicked()
{
    show_grid();
}


void StaffForm::show_grid()
{


    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery;
    qry->prepare("SELECT * FROM Staff_Details ORDER BY id DESC");
    qry->exec();
    model->setQuery(*qry);


    // Define new column names
    QStringList newColumnNames;
    newColumnNames <<  "کد پرسنلی" << "نام , نام خانوادگی" << "رمز عبور" << "نوع فعالیت" ;

    for (int column = 0; column < newColumnNames.size(); ++column)
    {
        model->setHeaderData(column, Qt::Horizontal, newColumnNames[column]);
    }

    ui->tableView->setModel(model);

    qDebug() << (model->rowCount());
}





