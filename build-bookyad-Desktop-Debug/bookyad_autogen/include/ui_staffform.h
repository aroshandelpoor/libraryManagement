/********************************************************************************
** Form generated from reading UI file 'staffform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFFORM_H
#define UI_STAFFFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
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

class Ui_StafForm
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_text;
    QLabel *label_icon;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_search;
    QLabel *label_search_text;
    QLabel *label_search_icon;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_insert;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_refresh;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StafForm)
    {
        if (StafForm->objectName().isEmpty())
            StafForm->setObjectName("StafForm");
        StafForm->setWindowModality(Qt::ApplicationModal);
        StafForm->resize(697, 438);
        StafForm->setMinimumSize(QSize(697, 438));
        StafForm->setMaximumSize(QSize(697, 438));
        QFont font;
        font.setFamilies({QString::fromUtf8("IRANSansX")});
        StafForm->setFont(font);
        centralwidget = new QWidget(StafForm);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_text = new QLabel(centralwidget);
        label_text->setObjectName("label_text");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("IRANSansX")});
        font1.setBold(true);
        label_text->setFont(font1);

        horizontalLayout->addWidget(label_text);

        label_icon = new QLabel(centralwidget);
        label_icon->setObjectName("label_icon");
        label_icon->setMaximumSize(QSize(42, 42));
        label_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/logo.png")));
        label_icon->setScaledContents(true);

        horizontalLayout->addWidget(label_icon);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit_search = new QLineEdit(centralwidget);
        lineEdit_search->setObjectName("lineEdit_search");

        horizontalLayout_2->addWidget(lineEdit_search);

        label_search_text = new QLabel(centralwidget);
        label_search_text->setObjectName("label_search_text");

        horizontalLayout_2->addWidget(label_search_text);

        label_search_icon = new QLabel(centralwidget);
        label_search_icon->setObjectName("label_search_icon");
        label_search_icon->setMinimumSize(QSize(32, 32));
        label_search_icon->setMaximumSize(QSize(32, 32));
        label_search_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/search.png")));
        label_search_icon->setScaledContents(true);

        horizontalLayout_2->addWidget(label_search_icon);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, -1, -1, -1);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_4->addWidget(tableView);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_insert = new QPushButton(centralwidget);
        pushButton_insert->setObjectName("pushButton_insert");

        verticalLayout_2->addWidget(pushButton_insert);

        pushButton_delete = new QPushButton(centralwidget);
        pushButton_delete->setObjectName("pushButton_delete");

        verticalLayout_2->addWidget(pushButton_delete);

        pushButton_edit = new QPushButton(centralwidget);
        pushButton_edit->setObjectName("pushButton_edit");

        verticalLayout_2->addWidget(pushButton_edit);

        pushButton_refresh = new QPushButton(centralwidget);
        pushButton_refresh->setObjectName("pushButton_refresh");

        verticalLayout_2->addWidget(pushButton_refresh);


        horizontalLayout_5->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        StafForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StafForm);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 697, 19));
        StafForm->setMenuBar(menubar);
        statusbar = new QStatusBar(StafForm);
        statusbar->setObjectName("statusbar");
        StafForm->setStatusBar(statusbar);

        retranslateUi(StafForm);

        QMetaObject::connectSlotsByName(StafForm);
    } // setupUi

    void retranslateUi(QMainWindow *StafForm)
    {
        StafForm->setWindowTitle(QCoreApplication::translate("StafForm", "\331\276\331\206\331\204 \332\251\330\247\330\261\331\205\331\206\330\257\330\247\331\206", nullptr));
        label_text->setText(QCoreApplication::translate("StafForm", "\330\263\330\247\331\205\330\247\331\206\331\207 \331\205\330\257\333\214\330\261\333\214\330\252 \332\251\330\252\330\247\330\250\330\256\330\247\331\206\331\207 \330\250\331\210\332\251\333\214\330\247\330\257", nullptr));
        label_icon->setText(QString());
        label_search_text->setText(QCoreApplication::translate("StafForm", "\330\254\330\263\330\252\330\254\331\210:", nullptr));
        label_search_icon->setText(QString());
        pushButton_insert->setText(QCoreApplication::translate("StafForm", "\330\253\330\250\330\252", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("StafForm", "\330\255\330\260\331\201", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("StafForm", "\331\210\333\214\330\261\330\247\333\214\330\264", nullptr));
        pushButton_refresh->setText(QCoreApplication::translate("StafForm", "\330\252\330\247\330\262\331\207 \332\251\330\261\330\257\331\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StafForm: public Ui_StafForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFFORM_H
