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

    show_grid();
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
    show_grid();
}

void MemberForm::show_grid()
{
    QSqlQueryModel *model=new QSqlQueryModel();

    QSqlQuery *qry=new QSqlQuery;
    qry->prepare("SELECT student_id, student_name, sex, date_of_birth, contact_number FROM Student_Details order by Student_Id desc");
    qry->exec();
    model->setQuery(*qry);

    QStringList newColumnNames;
    newColumnNames << "کدملی اعضا" << "نام , نام خانوادگی" << "جنسیت" << "تاریخ تولد" << "شماره تماس" ;

    for (int column = 0; column < newColumnNames.size(); ++column)
    {
        model->setHeaderData(column, Qt::Horizontal, newColumnNames[column]);
    }

    ui->tableView->setModel(model);

    qDebug() << (model->rowCount());
}
