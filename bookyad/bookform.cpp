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

    ui->lineEdit_search->setStyleSheet("QLineEdit {border: 2px solid gray;" "border-radius: 5px;}");

    connect(ui->tableView, &QTableView::customContextMenuRequested, this, &bookForm::on_tableView_customContextMenuRequested);
    connect(ui->lineEdit_search, &QLineEdit::returnPressed, this, &bookForm::on_pushButton_search_clicked);
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

    QStringList newColumnNames;
    newColumnNames <<  "شابک" << "نام کتاب" << "نام نویسنده";

    for (int column = 0; column < newColumnNames.size(); ++column)
    {
        model->setHeaderData(column, Qt::Horizontal, newColumnNames[column]);
    }

    ui->tableView->setModel(model);

    qDebug() << (model->rowCount());
}


void bookForm::on_pushButton_search_clicked()
{

    QString searchTerm;

    searchTerm=ui->lineEdit_search->text();

    QSqlQueryModel *model0=new QSqlQueryModel();

    QSqlQuery *qry0=new QSqlQuery;
    qry0->prepare("SELECT * FROM Book_Info where ISBN_Code like'%"+searchTerm+"%'"" OR Book_Title like'%"+searchTerm+"%'"" OR Writer_Name like'%"+searchTerm+"%'""");
    qry0->exec();
    model0->setQuery(*qry0);

    QStringList newColumnNames;
    newColumnNames <<  "شابک" << "نام کتاب" << "نام نویسنده";

    for (int column = 0; column < newColumnNames.size(); ++column)
    {
        model0->setHeaderData(column, Qt::Horizontal, newColumnNames[column]);
    }

    ui->tableView->setModel(model0);
    qDebug() << (model0->rowCount());
}

void bookForm::on_tableView_customContextMenuRequested(const QPoint& pos)
{
    QMenu* contextMenu = new QMenu(this);

    // Create the actions for the context menu
    QAction* action1 = new QAction("حذف", this);
    QAction* action2 = new QAction("ویرایش", this);

    // Add the actions to the context menu
    contextMenu->addAction(action1);
    contextMenu->addAction(action2);

    // Show the context menu at the given position
    contextMenu->exec(ui->tableView->viewport()->mapToGlobal(pos));

    // Clean up the memory
    delete contextMenu;
}
