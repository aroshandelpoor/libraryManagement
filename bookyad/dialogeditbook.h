#ifndef DIALOGEDITBOOK_H
#define DIALOGEDITBOOK_H

#include <QDialog>

namespace Ui {
class DialogEditBook;
}

class DialogEditBook : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEditBook(QWidget *parent = nullptr);
    ~DialogEditBook();

private slots:
    void on_pushButton_edit_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::DialogEditBook *ui;
};

#endif // DIALOGEDITBOOK_H
