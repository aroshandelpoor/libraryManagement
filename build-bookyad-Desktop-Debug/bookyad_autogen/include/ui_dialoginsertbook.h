/********************************************************************************
** Form generated from reading UI file 'dialoginsertbook.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINSERTBOOK_H
#define UI_DIALOGINSERTBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialoginsertBook
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_isbn_icon;
    QLabel *label_isbncode;
    QLineEdit *lineEdit_isbncode;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_book_icon;
    QLabel *label_booktitle;
    QLineEdit *lineEdit_booktitle;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_writer_icon;
    QLabel *label_writername_text;
    QLineEdit *lineEdit_writername;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_accept;

    void setupUi(QDialog *DialoginsertBook)
    {
        if (DialoginsertBook->objectName().isEmpty())
            DialoginsertBook->setObjectName("DialoginsertBook");
        DialoginsertBook->setWindowModality(Qt::ApplicationModal);
        DialoginsertBook->resize(422, 219);
        DialoginsertBook->setMinimumSize(QSize(422, 219));
        DialoginsertBook->setMaximumSize(QSize(422, 219));
        QFont font;
        font.setFamilies({QString::fromUtf8("IRANSansX")});
        DialoginsertBook->setFont(font);
        gridLayout = new QGridLayout(DialoginsertBook);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(DialoginsertBook);
        groupBox->setObjectName("groupBox");
        groupBox->setLayoutDirection(Qt::RightToLeft);
        groupBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_isbn_icon = new QLabel(groupBox);
        label_isbn_icon->setObjectName("label_isbn_icon");
        label_isbn_icon->setMinimumSize(QSize(16, 16));
        label_isbn_icon->setMaximumSize(QSize(16, 16));
        label_isbn_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/isbn_2.png")));
        label_isbn_icon->setScaledContents(true);

        horizontalLayout->addWidget(label_isbn_icon);

        label_isbncode = new QLabel(groupBox);
        label_isbncode->setObjectName("label_isbncode");

        horizontalLayout->addWidget(label_isbncode);

        lineEdit_isbncode = new QLineEdit(groupBox);
        lineEdit_isbncode->setObjectName("lineEdit_isbncode");

        horizontalLayout->addWidget(lineEdit_isbncode);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_book_icon = new QLabel(groupBox);
        label_book_icon->setObjectName("label_book_icon");
        label_book_icon->setMinimumSize(QSize(16, 16));
        label_book_icon->setMaximumSize(QSize(16, 16));
        label_book_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/book_2.png")));
        label_book_icon->setScaledContents(true);

        horizontalLayout_2->addWidget(label_book_icon);

        label_booktitle = new QLabel(groupBox);
        label_booktitle->setObjectName("label_booktitle");

        horizontalLayout_2->addWidget(label_booktitle);

        lineEdit_booktitle = new QLineEdit(groupBox);
        lineEdit_booktitle->setObjectName("lineEdit_booktitle");

        horizontalLayout_2->addWidget(lineEdit_booktitle);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_writer_icon = new QLabel(groupBox);
        label_writer_icon->setObjectName("label_writer_icon");
        label_writer_icon->setMinimumSize(QSize(16, 16));
        label_writer_icon->setMaximumSize(QSize(16, 16));
        label_writer_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/pencil-icon.png")));
        label_writer_icon->setScaledContents(true);

        horizontalLayout_6->addWidget(label_writer_icon);

        label_writername_text = new QLabel(groupBox);
        label_writername_text->setObjectName("label_writername_text");

        horizontalLayout_6->addWidget(label_writername_text);

        lineEdit_writername = new QLineEdit(groupBox);
        lineEdit_writername->setObjectName("lineEdit_writername");

        horizontalLayout_6->addWidget(lineEdit_writername);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_exit = new QPushButton(groupBox);
        pushButton_exit->setObjectName("pushButton_exit");

        horizontalLayout_3->addWidget(pushButton_exit);

        pushButton_accept = new QPushButton(groupBox);
        pushButton_accept->setObjectName("pushButton_accept");

        horizontalLayout_3->addWidget(pushButton_accept);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(DialoginsertBook);

        QMetaObject::connectSlotsByName(DialoginsertBook);
    } // setupUi

    void retranslateUi(QDialog *DialoginsertBook)
    {
        DialoginsertBook->setWindowTitle(QCoreApplication::translate("DialoginsertBook", "\330\253\330\250\330\252", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialoginsertBook", "\330\253\330\250\330\252 \332\251\330\252\330\247\330\250", nullptr));
        label_isbn_icon->setText(QString());
        label_isbncode->setText(QCoreApplication::translate("DialoginsertBook", "\330\264\330\247\330\250\332\251:", nullptr));
        label_book_icon->setText(QString());
        label_booktitle->setText(QCoreApplication::translate("DialoginsertBook", "\331\206\330\247\331\205 \332\251\330\252\330\247\330\250:", nullptr));
        label_writer_icon->setText(QString());
        label_writername_text->setText(QCoreApplication::translate("DialoginsertBook", "\331\206\331\210\333\214\330\263\331\206\330\257\331\207:", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("DialoginsertBook", "\330\250\330\247\330\262\332\257\330\264\330\252", nullptr));
        pushButton_accept->setText(QCoreApplication::translate("DialoginsertBook", "\330\253\330\250\330\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialoginsertBook: public Ui_DialoginsertBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINSERTBOOK_H
