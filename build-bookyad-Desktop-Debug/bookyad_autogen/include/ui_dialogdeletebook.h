/********************************************************************************
** Form generated from reading UI file 'dialogdeletebook.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDELETEBOOK_H
#define UI_DIALOGDELETEBOOK_H

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

class Ui_DialogDeleteBook
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_isbn_icon;
    QLabel *label_isbncode_text;
    QLineEdit *lineEdit_isbncode;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_book_icon;
    QLabel *label_booktitle_text;
    QLineEdit *lineEdit_booktitle;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_writer_icon;
    QLabel *label_writername_text;
    QLineEdit *lineEdit_writername;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_delete;

    void setupUi(QDialog *DialogDeleteBook)
    {
        if (DialogDeleteBook->objectName().isEmpty())
            DialogDeleteBook->setObjectName("DialogDeleteBook");
        DialogDeleteBook->setWindowModality(Qt::ApplicationModal);
        DialogDeleteBook->resize(412, 219);
        DialogDeleteBook->setMinimumSize(QSize(412, 219));
        DialogDeleteBook->setMaximumSize(QSize(412, 219));
        QFont font;
        font.setFamilies({QString::fromUtf8("IRANSansX")});
        DialogDeleteBook->setFont(font);
        gridLayout = new QGridLayout(DialogDeleteBook);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(DialogDeleteBook);
        groupBox->setObjectName("groupBox");
        groupBox->setLayoutDirection(Qt::RightToLeft);
        groupBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
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

        label_isbncode_text = new QLabel(groupBox);
        label_isbncode_text->setObjectName("label_isbncode_text");

        horizontalLayout->addWidget(label_isbncode_text);

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

        label_booktitle_text = new QLabel(groupBox);
        label_booktitle_text->setObjectName("label_booktitle_text");

        horizontalLayout_2->addWidget(label_booktitle_text);

        lineEdit_booktitle = new QLineEdit(groupBox);
        lineEdit_booktitle->setObjectName("lineEdit_booktitle");

        horizontalLayout_2->addWidget(lineEdit_booktitle);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_writer_icon = new QLabel(groupBox);
        label_writer_icon->setObjectName("label_writer_icon");
        label_writer_icon->setMinimumSize(QSize(16, 16));
        label_writer_icon->setMaximumSize(QSize(16, 16));
        label_writer_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/pencil-icon.png")));
        label_writer_icon->setScaledContents(true);

        horizontalLayout_4->addWidget(label_writer_icon);

        label_writername_text = new QLabel(groupBox);
        label_writername_text->setObjectName("label_writername_text");

        horizontalLayout_4->addWidget(label_writername_text);

        lineEdit_writername = new QLineEdit(groupBox);
        lineEdit_writername->setObjectName("lineEdit_writername");

        horizontalLayout_4->addWidget(lineEdit_writername);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_exit = new QPushButton(groupBox);
        pushButton_exit->setObjectName("pushButton_exit");

        horizontalLayout_3->addWidget(pushButton_exit);

        pushButton_delete = new QPushButton(groupBox);
        pushButton_delete->setObjectName("pushButton_delete");

        horizontalLayout_3->addWidget(pushButton_delete);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(DialogDeleteBook);

        QMetaObject::connectSlotsByName(DialogDeleteBook);
    } // setupUi

    void retranslateUi(QDialog *DialogDeleteBook)
    {
        DialogDeleteBook->setWindowTitle(QCoreApplication::translate("DialogDeleteBook", "\330\255\330\260\331\201", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogDeleteBook", "\330\255\330\260\331\201 \332\251\330\252\330\247\330\250", nullptr));
        label_isbn_icon->setText(QString());
        label_isbncode_text->setText(QCoreApplication::translate("DialogDeleteBook", "\330\264\330\247\330\250\332\251:", nullptr));
        label_book_icon->setText(QString());
        label_booktitle_text->setText(QCoreApplication::translate("DialogDeleteBook", "\331\206\330\247\331\205 \332\251\330\252\330\247\330\250:", nullptr));
        label_writer_icon->setText(QString());
        label_writername_text->setText(QCoreApplication::translate("DialogDeleteBook", "\331\206\331\210\333\214\330\263\331\206\330\257\331\207:", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("DialogDeleteBook", "\330\250\330\247\330\262\332\257\330\264\330\252", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("DialogDeleteBook", "\330\255\330\260\331\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDeleteBook: public Ui_DialogDeleteBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDELETEBOOK_H
