#include "bookform.h"
#include "ui_bookform.h"
#include "dialoginsertbook.h"
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

bookForm::bookForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bookForm)
{
    ui->setupUi(this);

    move(QGuiApplication::screens().at(0)->geometry().center() - frameGeometry().center());

    QFileInfo info(QDir::currentPath());
    QString path = info.absolutePath();

    QSqlDatabase db;

    db= QSqlDatabase :: addDatabase("QSQLITE");
    db.setDatabaseName(path+"/bookyad/database/bookyad.db");
    db.open();

    setWindowTitle("پنل ثبت کتاب");

    show_grid();
}

bookForm::~bookForm()
{
    delete ui;
}

void bookForm::on_pushButton_insert_clicked()
{
    insertBook.show();
}


void bookForm::on_pushButton_delete_clicked()
{
    deleteBook.show();
}


void bookForm::on_pushButton_edit_clicked()
{
    editBook.show();
}


void bookForm::on_pushButton_refresh_clicked()
{
    show_grid();
}

void bookForm::show_grid()
{


    QSqlQueryModel *model=new QSqlQueryModel();

    QSqlQuery *qry=new QSqlQuery;
    qry->prepare("SELECT * FROM Book_Info ORDER BY ISBN_Code DESC");
    qry->exec();
    model->setQuery(*qry);

    QString tableName = "Book_Info";  // Replace with your table name

    QMap<QString, QString> columnMap;
    columnMap["شابک"] = "ISBN_Code";
    columnMap["Book_Name"] = "Book_Title";
    columnMap["نویسنده"] = "Writer_Name";
    // Add more column mappings as needed

    QSqlQuery query;

    foreach(const QString& oldColumnName, columnMap.keys()) {
        const QString& newColumnName = columnMap.value(oldColumnName);

        QString queryString = QString("ALTER TABLE %1 RENAME COLUMN %2 TO %3")
                                  .arg(tableName)
                                  .arg(oldColumnName)
                                  .arg(newColumnName);

        if (query.exec(queryString)) {
            qDebug() << "Column" << oldColumnName << "renamed to" << newColumnName;
        } else {
            qDebug() << "Error renaming column" << oldColumnName << ":" << query.lastError().text();
        }
    }



    ui->tableView->setModel(model);

    qDebug() << (model->rowCount());
}
