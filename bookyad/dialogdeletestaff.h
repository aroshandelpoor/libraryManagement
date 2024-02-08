#ifndef DIALOGDELETESTAFF_H
#define DIALOGDELETESTAFF_H

#include <QDialog>

namespace Ui {
class DialogDeleteStaff;
}

class DialogDeleteStaff : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDeleteStaff(QWidget *parent = nullptr);
    ~DialogDeleteStaff();

private slots:
    void on_pushButton_delete_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::DialogDeleteStaff *ui;
};

#endif // DIALOGDELETESTAFF_H
