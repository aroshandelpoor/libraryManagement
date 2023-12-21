#ifndef DIALOGDELETEBOOK_H
#define DIALOGDELETEBOOK_H

#include <QDialog>

namespace Ui {
class DialogDeleteBook;
}

class DialogDeleteBook : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDeleteBook(QWidget *parent = nullptr);
    ~DialogDeleteBook();

private slots:
    void on_pushButton_delete_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::DialogDeleteBook *ui;
};

#endif // DIALOGDELETEBOOK_H
