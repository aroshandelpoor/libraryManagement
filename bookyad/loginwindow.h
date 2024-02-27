#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "mainform.h"
#include "QDialog"
#include "QDebug"
#include "QSql"
#include "QFileInfo"
#include "QMessageBox"
#include "QStandardPaths"
#include "QSqlQuery"


namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::LoginWindow *ui;
    MainForm mainform;
};

#endif // LOGINWINDOW_H
