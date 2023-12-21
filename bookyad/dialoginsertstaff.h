#ifndef DIALOGINSERTSTAFF_H
#define DIALOGINSERTSTAFF_H

#include <QDialog>

namespace Ui {
class DialogInsertStaff;
}

class DialogInsertStaff : public QDialog
{
    Q_OBJECT

public:
    explicit DialogInsertStaff(QWidget *parent = nullptr);
    ~DialogInsertStaff();

private:
    Ui::DialogInsertStaff *ui;
};

#endif // DIALOGINSERTSTAFF_H
