#ifndef BORROWERFORM_H
#define BORROWERFORM_H

#include <QMainWindow>

namespace Ui {
class BorrowerForm;
}

class BorrowerForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit BorrowerForm(QWidget *parent = nullptr);
    ~BorrowerForm();

private slots:

    void show_grid();

    void on_pushButton_refresh_clicked();

private:
    Ui::BorrowerForm *ui;
};

#endif // BORROWERFORM_H
