#include "borrowerform.h"
#include "qscreen.h"
#include "ui_borrowerform.h"
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

BorrowerForm::BorrowerForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BorrowerForm)
{
    ui->setupUi(this);

    move(QGuiApplication::screens().at(0)->geometry().center() - frameGeometry().center());

    show_grid();
}

BorrowerForm::~BorrowerForm()
{
    delete ui;
}

void BorrowerForm::on_pushButton_refresh_clicked()
{
    show_grid();
}

void BorrowerForm::show_grid()
{
    QSqlQueryModel *model=new QSqlQueryModel();

    QSqlQuery *qry=new QSqlQuery;
    qry->prepare("SELECT Student_Details.Student_Name, Book_Info.Book_Title, Borrower_Details.Borrowed_From, Borrower_Details.Actual_Return_Date, Staff_Details.name FROM Borrower_Details INNER JOIN Student_Details ON Borrower_Details.Borrower_Id=Student_Details.Borrower_Id INNER JOIN Book_Info ON Borrower_Details.Book_ID = Book_Info.ISBN_Code INNER JOIN Staff_Details ON Borrower_Details.Issued_by = Staff_Details.id;");
    qry->exec();
    model->setQuery(*qry);

    QStringList newColumnNames;
    newColumnNames <<  "نام اعضا" << "نام کتاب" << "تاریخ امانت گرفتن" << "تاریخ برگشت" << "مسئول ثبت" ;

    for (int column = 0; column < newColumnNames.size(); ++column)
    {
        model->setHeaderData(column, Qt::Horizontal, newColumnNames[column]);
    }

    ui->tableView->setModel(model);

    qDebug() << (model->rowCount());
}
