#ifndef MEMBERFORM_H
#define MEMBERFORM_H

#include <QMainWindow>
#include "dialoginsertmember.h"
#include "dialogdeletemember.h"
#include "dialogeditmember.h"
namespace Ui {
class MemberForm;
}

class MemberForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberForm(QWidget *parent = nullptr);
    ~MemberForm();

private slots:
    void on_pushButton_insert_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_edit_clicked();

    void on_pushButton_refresh_clicked();

private:
    Ui::MemberForm *ui;
    DialogInsertMember insertMember;
    DialogDeleteMember deleteMember;
    DialogEditMember editMember;
};

#endif // MEMBERFORM_H
