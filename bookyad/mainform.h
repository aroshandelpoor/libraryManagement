#ifndef MAINFORM_H
#define MAINFORM_H

#include <QMainWindow>
#include "bookform.h"
#include "borrowerform.h"
#include "memberform.h"
#include "staffform.h"
#include "dialogbio.h"

namespace Ui {
class MainForm;
}

class MainForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = nullptr);
    ~MainForm();

private slots:


    void on_action_insertbook_triggered();

    void on_action_borrowbook_triggered();

    void on_action_members_triggered();

    void on_action_staffs_triggered();

    void on_action_bio_triggered();

    void on_action_exit_triggered();

private:
    Ui::MainForm *ui;
    bookForm bookInfo;
    BorrowerForm borrowerForm;
    MemberForm       memberForm;
    StaffForm         staffForm;
    DialogBio         dialogebio;
};

#endif // MAINFORM_H
