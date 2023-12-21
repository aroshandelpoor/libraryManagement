#ifndef DIALOGEDITMEMBER_H
#define DIALOGEDITMEMBER_H

#include <QDialog>

namespace Ui {
class DialogEditMember;
}

class DialogEditMember : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEditMember(QWidget *parent = nullptr);
    ~DialogEditMember();

private:
    Ui::DialogEditMember *ui;
};

#endif // DIALOGEDITMEMBER_H
