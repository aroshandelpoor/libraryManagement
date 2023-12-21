#ifndef DIALOGDELETEMEMBER_H
#define DIALOGDELETEMEMBER_H

#include <QDialog>

namespace Ui {
class DialogDeleteMember;
}

class DialogDeleteMember : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDeleteMember(QWidget *parent = nullptr);
    ~DialogDeleteMember();

private:
    Ui::DialogDeleteMember *ui;
};

#endif // DIALOGDELETEMEMBER_H
