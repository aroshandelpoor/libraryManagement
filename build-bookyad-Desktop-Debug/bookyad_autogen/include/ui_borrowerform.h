/********************************************************************************
** Form generated from reading UI file 'borrowerform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWERFORM_H
#define UI_BORROWERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BorrowerForm
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_text;
    QLabel *label_icon;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_search;
    QLabel *label_search_text;
    QLabel *label_search_icon;
    QHBoxLayout *horizontalLayout_4;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_insert;
    QPushButton *pushButton_extetion;
    QPushButton *pushButton_return;
    QPushButton *pushButton_edit_member;
    QPushButton *pushButton_edit_book;
    QPushButton *pushButton_refresh;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BorrowerForm)
    {
        if (BorrowerForm->objectName().isEmpty())
            BorrowerForm->setObjectName("BorrowerForm");
        BorrowerForm->setWindowModality(Qt::ApplicationModal);
        BorrowerForm->resize(697, 438);
        BorrowerForm->setMinimumSize(QSize(697, 438));
        BorrowerForm->setMaximumSize(QSize(697, 438));
        QFont font;
        font.setFamilies({QString::fromUtf8("IRANSansX")});
        BorrowerForm->setFont(font);
        centralwidget = new QWidget(BorrowerForm);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_text = new QLabel(centralwidget);
        label_text->setObjectName("label_text");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("IRANSansX")});
        font1.setBold(true);
        label_text->setFont(font1);

        horizontalLayout_2->addWidget(label_text);

        label_icon = new QLabel(centralwidget);
        label_icon->setObjectName("label_icon");
        label_icon->setMinimumSize(QSize(42, 42));
        label_icon->setMaximumSize(QSize(42, 42));
        label_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/logo.png")));
        label_icon->setScaledContents(true);

        horizontalLayout_2->addWidget(label_icon);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lineEdit_search = new QLineEdit(centralwidget);
        lineEdit_search->setObjectName("lineEdit_search");

        horizontalLayout_3->addWidget(lineEdit_search);

        label_search_text = new QLabel(centralwidget);
        label_search_text->setObjectName("label_search_text");

        horizontalLayout_3->addWidget(label_search_text);

        label_search_icon = new QLabel(centralwidget);
        label_search_icon->setObjectName("label_search_icon");
        label_search_icon->setMinimumSize(QSize(32, 32));
        label_search_icon->setMaximumSize(QSize(32, 32));
        label_search_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/search.png")));
        label_search_icon->setScaledContents(true);

        horizontalLayout_3->addWidget(label_search_icon);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_4->addWidget(tableView);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        pushButton_insert = new QPushButton(centralwidget);
        pushButton_insert->setObjectName("pushButton_insert");

        verticalLayout_4->addWidget(pushButton_insert);

        pushButton_extetion = new QPushButton(centralwidget);
        pushButton_extetion->setObjectName("pushButton_extetion");

        verticalLayout_4->addWidget(pushButton_extetion);

        pushButton_return = new QPushButton(centralwidget);
        pushButton_return->setObjectName("pushButton_return");

        verticalLayout_4->addWidget(pushButton_return);

        pushButton_edit_member = new QPushButton(centralwidget);
        pushButton_edit_member->setObjectName("pushButton_edit_member");

        verticalLayout_4->addWidget(pushButton_edit_member);

        pushButton_edit_book = new QPushButton(centralwidget);
        pushButton_edit_book->setObjectName("pushButton_edit_book");

        verticalLayout_4->addWidget(pushButton_edit_book);

        pushButton_refresh = new QPushButton(centralwidget);
        pushButton_refresh->setObjectName("pushButton_refresh");

        verticalLayout_4->addWidget(pushButton_refresh);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        BorrowerForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BorrowerForm);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 697, 19));
        BorrowerForm->setMenuBar(menubar);
        statusbar = new QStatusBar(BorrowerForm);
        statusbar->setObjectName("statusbar");
        BorrowerForm->setStatusBar(statusbar);

        retranslateUi(BorrowerForm);

        QMetaObject::connectSlotsByName(BorrowerForm);
    } // setupUi

    void retranslateUi(QMainWindow *BorrowerForm)
    {
        BorrowerForm->setWindowTitle(QCoreApplication::translate("BorrowerForm", "\331\276\331\206\331\204 \330\247\331\205\330\247\331\206\330\247\330\252", nullptr));
        label_text->setText(QCoreApplication::translate("BorrowerForm", "\330\263\330\247\331\205\330\247\331\206\331\207 \331\205\330\257\333\214\330\261\333\214\330\252 \332\251\330\252\330\247\330\250\330\256\330\247\331\206\331\207 \330\250\331\210\332\251\333\214\330\247\330\257", nullptr));
        label_icon->setText(QString());
        label_search_text->setText(QCoreApplication::translate("BorrowerForm", "\330\254\330\263\330\252\330\254\331\210:", nullptr));
        label_search_icon->setText(QString());
        pushButton_insert->setText(QCoreApplication::translate("BorrowerForm", "\330\253\330\250\330\252", nullptr));
        pushButton_extetion->setText(QCoreApplication::translate("BorrowerForm", "\330\252\331\205\330\257\333\214\330\257", nullptr));
        pushButton_return->setText(QCoreApplication::translate("BorrowerForm", "\330\250\330\261\332\257\330\264\330\252", nullptr));
        pushButton_edit_member->setText(QCoreApplication::translate("BorrowerForm", "\331\210\333\214\330\261\330\247\333\214\330\264 \330\271\330\266\331\210", nullptr));
        pushButton_edit_book->setText(QCoreApplication::translate("BorrowerForm", "\331\210\333\214\330\261\330\247\333\214\330\264 \332\251\330\252\330\247\330\250", nullptr));
        pushButton_refresh->setText(QCoreApplication::translate("BorrowerForm", "\330\252\330\247\330\262\331\207 \332\251\330\261\330\257\331\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BorrowerForm: public Ui_BorrowerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWERFORM_H
