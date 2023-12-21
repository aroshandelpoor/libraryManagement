#ifndef DIALOGEDITSTAFF_H
#define DIALOGEDITSTAFF_H

#include <QDialog>

namespace Ui {
class DialogEditStaff;
}

class DialogEditStaff : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEditStaff(QWidget *parent = nullptr);
    ~DialogEditStaff();

private:
    Ui::DialogEditStaff *ui;
};

#endif // DIALOGEDITSTAFF_H
