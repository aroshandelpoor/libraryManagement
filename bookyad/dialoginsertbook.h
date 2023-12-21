#ifndef DIALOGINSERTBOOK_H
#define DIALOGINSERTBOOK_H

#include <QDialog>

namespace Ui {
class DialoginsertBook;
}

class DialoginsertBook : public QDialog
{
    Q_OBJECT

public:
    explicit DialoginsertBook(QWidget *parent = nullptr);
    ~DialoginsertBook();

private slots:
    void on_pushButton_accept_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::DialoginsertBook *ui;
};

#endif // DIALOGINSERTBOOK_H
