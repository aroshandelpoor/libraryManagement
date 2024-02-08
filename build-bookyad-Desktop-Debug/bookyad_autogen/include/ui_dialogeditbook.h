/********************************************************************************
** Form generated from reading UI file 'dialogeditbook.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEDITBOOK_H
#define UI_DIALOGEDITBOOK_H

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

class Ui_DialogEditBook
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_isbncode;
    QLabel *label_isbncode_text;
    QLabel *label_isbn_icon;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_booktitle;
    QLabel *label_booktitle_text;
    QLabel *label_book_icon;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_writername;
    QLabel *label_writername_text;
    QLabel *label_writer_icon;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_exit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DialogEditBook)
    {
        if (DialogEditBook->objectName().isEmpty())
            DialogEditBook->setObjectName("DialogEditBook");
        DialogEditBook->setWindowModality(Qt::ApplicationModal);
        DialogEditBook->resize(412, 219);
        DialogEditBook->setMinimumSize(QSize(412, 219));
        DialogEditBook->setMaximumSize(QSize(412, 219));
        QFont font;
        font.setFamilies({QString::fromUtf8("IRANSansX")});
        DialogEditBook->setFont(font);
        gridLayout = new QGridLayout(DialogEditBook);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(DialogEditBook);
        groupBox->setObjectName("groupBox");
        groupBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_isbncode = new QLineEdit(groupBox);
        lineEdit_isbncode->setObjectName("lineEdit_isbncode");

        horizontalLayout->addWidget(lineEdit_isbncode);

        label_isbncode_text = new QLabel(groupBox);
        label_isbncode_text->setObjectName("label_isbncode_text");

        horizontalLayout->addWidget(label_isbncode_text);

        label_isbn_icon = new QLabel(groupBox);
        label_isbn_icon->setObjectName("label_isbn_icon");
        label_isbn_icon->setMinimumSize(QSize(16, 16));
        label_isbn_icon->setMaximumSize(QSize(16, 16));
        label_isbn_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/isbn_2.png")));
        label_isbn_icon->setScaledContents(true);

        horizontalLayout->addWidget(label_isbn_icon);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit_booktitle = new QLineEdit(groupBox);
        lineEdit_booktitle->setObjectName("lineEdit_booktitle");

        horizontalLayout_2->addWidget(lineEdit_booktitle);

        label_booktitle_text = new QLabel(groupBox);
        label_booktitle_text->setObjectName("label_booktitle_text");

        horizontalLayout_2->addWidget(label_booktitle_text);

        label_book_icon = new QLabel(groupBox);
        label_book_icon->setObjectName("label_book_icon");
        label_book_icon->setMinimumSize(QSize(16, 16));
        label_book_icon->setMaximumSize(QSize(16, 16));
        label_book_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/book_2.png")));
        label_book_icon->setScaledContents(true);

        horizontalLayout_2->addWidget(label_book_icon);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lineEdit_writername = new QLineEdit(groupBox);
        lineEdit_writername->setObjectName("lineEdit_writername");

        horizontalLayout_5->addWidget(lineEdit_writername);

        label_writername_text = new QLabel(groupBox);
        label_writername_text->setObjectName("label_writername_text");

        horizontalLayout_5->addWidget(label_writername_text);

        label_writer_icon = new QLabel(groupBox);
        label_writer_icon->setObjectName("label_writer_icon");
        label_writer_icon->setMinimumSize(QSize(16, 16));
        label_writer_icon->setMaximumSize(QSize(16, 16));
        label_writer_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/pencil-icon.png")));
        label_writer_icon->setScaledContents(true);

        horizontalLayout_5->addWidget(label_writer_icon);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_edit = new QPushButton(groupBox);
        pushButton_edit->setObjectName("pushButton_edit");

        horizontalLayout_4->addWidget(pushButton_edit);

        pushButton_exit = new QPushButton(groupBox);
        pushButton_exit->setObjectName("pushButton_exit");

        horizontalLayout_4->addWidget(pushButton_exit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(DialogEditBook);

        QMetaObject::connectSlotsByName(DialogEditBook);
    } // setupUi

    void retranslateUi(QDialog *DialogEditBook)
    {
        DialogEditBook->setWindowTitle(QCoreApplication::translate("DialogEditBook", "\331\210\333\214\330\261\330\247\333\214\330\264", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogEditBook", "\331\210\333\214\330\261\330\247\333\214\330\264 \332\251\330\252\330\247\330\250", nullptr));
        label_isbncode_text->setText(QCoreApplication::translate("DialogEditBook", "\330\264\330\247\330\250\332\251:", nullptr));
        label_isbn_icon->setText(QString());
        label_booktitle_text->setText(QCoreApplication::translate("DialogEditBook", "\331\206\330\247\331\205 \332\251\330\252\330\247\330\250:", nullptr));
        label_book_icon->setText(QString());
        label_writername_text->setText(QCoreApplication::translate("DialogEditBook", "\331\206\331\210\333\214\330\263\331\206\330\257\331\207:", nullptr));
        label_writer_icon->setText(QString());
        pushButton_edit->setText(QCoreApplication::translate("DialogEditBook", "\331\210\333\214\330\261\330\247\333\214\330\264", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("DialogEditBook", "\330\250\330\247\330\262\332\257\330\264\330\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogEditBook: public Ui_DialogEditBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEDITBOOK_H
