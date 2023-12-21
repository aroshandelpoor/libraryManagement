/********************************************************************************
** Form generated from reading UI file 'memberform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERFORM_H
#define UI_MEMBERFORM_H

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

class Ui_MemberForm
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_text;
    QLabel *label_icon;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_search;
    QLabel *label_search_text;
    QLabel *label_search_icon;
    QHBoxLayout *horizontalLayout_3;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_insert;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_refresh;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MemberForm)
    {
        if (MemberForm->objectName().isEmpty())
            MemberForm->setObjectName("MemberForm");
        MemberForm->setWindowModality(Qt::ApplicationModal);
        MemberForm->resize(697, 438);
        MemberForm->setMinimumSize(QSize(697, 438));
        MemberForm->setMaximumSize(QSize(697, 438));
        QFont font;
        font.setFamilies({QString::fromUtf8("IRANSansX")});
        MemberForm->setFont(font);
        centralwidget = new QWidget(MemberForm);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
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
        label_icon->setMinimumSize(QSize(42, 42));
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

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_3->addWidget(tableView);

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


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        MemberForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MemberForm);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 697, 23));
        MemberForm->setMenuBar(menubar);
        statusbar = new QStatusBar(MemberForm);
        statusbar->setObjectName("statusbar");
        MemberForm->setStatusBar(statusbar);

        retranslateUi(MemberForm);

        QMetaObject::connectSlotsByName(MemberForm);
    } // setupUi

    void retranslateUi(QMainWindow *MemberForm)
    {
        MemberForm->setWindowTitle(QCoreApplication::translate("MemberForm", "\331\276\331\206\331\204 \330\247\330\271\330\266\330\247", nullptr));
        label_text->setText(QCoreApplication::translate("MemberForm", "\330\263\330\247\331\205\330\247\331\206\331\207 \331\205\330\257\333\214\330\261\333\214\330\252 \332\251\330\252\330\247\330\250\330\256\330\247\331\206\331\207 \330\250\331\210\332\251\333\214\330\247\330\257", nullptr));
        label_icon->setText(QString());
        label_search_text->setText(QCoreApplication::translate("MemberForm", "\330\254\330\263\330\252\330\254\331\210:", nullptr));
        label_search_icon->setText(QString());
        pushButton_insert->setText(QCoreApplication::translate("MemberForm", "\330\253\330\250\330\252", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("MemberForm", "\330\255\330\260\331\201", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("MemberForm", "\331\210\333\214\330\261\330\247\333\214\330\264", nullptr));
        pushButton_refresh->setText(QCoreApplication::translate("MemberForm", "\330\252\330\247\330\262\331\207 \332\251\330\261\330\257\331\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberForm: public Ui_MemberForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERFORM_H
