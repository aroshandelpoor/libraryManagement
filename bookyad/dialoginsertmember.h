#ifndef DIALOGINSERTMEMBER_H
#define DIALOGINSERTMEMBER_H

#include <QDialog>

namespace Ui {
class DialogInsertMember;
}

class DialogInsertMember : public QDialog
{
    Q_OBJECT

public:
    explicit DialogInsertMember(QWidget *parent = nullptr);
    ~DialogInsertMember();

private:
    Ui::DialogInsertMember *ui;
};

#endif // DIALOGINSERTMEMBER_H
