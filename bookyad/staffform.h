#ifndef STAFFFORM_H
#define STAFFFORM_H

#include <QMainWindow>
#include "dialoginsertstaff.h"
#include "dialogdeletestaff.h"
#include "dialogeditstaff.h"
namespace Ui {
class StafForm;
}

class StaffForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit StaffForm(QWidget *parent = nullptr);
    ~StaffForm();

private slots:
    void on_pushButton_insert_clicked();

    void on_pushButton_delete_clicked();

    void show_grid();


    void on_pushButton_edit_clicked();

    void on_pushButton_refresh_clicked();

private:
    Ui::StafForm *ui;
    DialogInsertStaff insertStaff;
    DialogDeleteStaff deleteStaff;
    DialogEditStaff   editStaff;
};

#endif // STAFFFORM_H
