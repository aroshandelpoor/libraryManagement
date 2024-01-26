#ifndef BOOKFORM_H
#define BOOKFORM_H

#include <QMainWindow>
#include "dialoginsertbook.h"
#include "dialogdeletebook.h"
#include "dialogeditbook.h"
namespace Ui {
class bookForm;
}

class bookForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit bookForm(QWidget *parent = nullptr);
    ~bookForm();

private slots:
    void on_pushButton_insert_clicked();

    void on_pushButton_delete_clicked();

    void show_grid();

    void on_pushButton_edit_clicked();

    void on_pushButton_refresh_clicked();

    void on_pushButton_search_clicked();

    void on_tableView_customContextMenuRequested(const QPoint& pos);

private:
    Ui::bookForm *ui;
    DialoginsertBook insertBook;
    DialogDeleteBook deleteBook;
    DialogEditBook   editBook;
};

#endif // BOOKFORM_H
