/********************************************************************************
** Form generated from reading UI file 'dialogbio.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBIO_H
#define UI_DIALOGBIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogBio
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_bio;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogBio)
    {
        if (DialogBio->objectName().isEmpty())
            DialogBio->setObjectName("DialogBio");
        DialogBio->setWindowModality(Qt::ApplicationModal);
        DialogBio->resize(400, 619);
        DialogBio->setMinimumSize(QSize(400, 619));
        DialogBio->setMaximumSize(QSize(400, 619));
        QFont font;
        font.setFamilies({QString::fromUtf8("IRANSansX")});
        font.setBold(false);
        DialogBio->setFont(font);
        verticalLayout = new QVBoxLayout(DialogBio);
        verticalLayout->setObjectName("verticalLayout");
        horizontalSpacer = new QSpacerItem(385, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_bio = new QLabel(DialogBio);
        label_bio->setObjectName("label_bio");
        label_bio->setMinimumSize(QSize(64, 64));
        label_bio->setMaximumSize(QSize(64, 64));
        label_bio->setPixmap(QPixmap(QString::fromUtf8(":/icons/about.png")));
        label_bio->setScaledContents(true);

        horizontalLayout->addWidget(label_bio);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(DialogBio);
        groupBox->setObjectName("groupBox");
        groupBox->setLayoutDirection(Qt::LeftToRight);
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName("textEdit");
        textEdit->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);


        retranslateUi(DialogBio);

        QMetaObject::connectSlotsByName(DialogBio);
    } // setupUi

    void retranslateUi(QDialog *DialogBio)
    {
        DialogBio->setWindowTitle(QCoreApplication::translate("DialogBio", "\330\257\330\261\330\250\330\247\330\261\331\207 \333\214 \331\205\330\247", nullptr));
        label_bio->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("DialogBio", "\330\257\330\261\330\250\330\247\330\261\331\207 \333\214 \331\205\330\247", nullptr));
        textEdit->setHtml(QCoreApplication::translate("DialogBio", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'IRANSansX'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\330\250\331\200\331\200\331\210\332\251\331\200\331\200\333\214\331\200\330\247\330\257 .</span></p>\n"
"<p dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\330\263\330\247\331\205\330\247\331\206\331\207 \331\205\330\257\333\214"
                        "\330\261\333\214\330\252 \332\251\330\252\330\247\330\250\330\256\330\247\331\206\331\207</span></p>\n"
"<p dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\331\205\330\247 \330\250\330\247 \330\263\330\247\330\256\330\252 \330\247\333\214\331\206 \330\263\330\247\331\205\330\247\331\206\331\207 \330\257\330\261 \330\252\331\204\330\247\330\264 \330\250\331\210\330\257\333\214\331\205 \330\252\330\247 \330\250\330\261\330\247\333\214 \330\261\330\247\330\255\330\252 \330\263\330\247\330\262\333\214 \331\210 \331\205\330\257\333\214\330\261\333\214\330\252 \332\251\330\252\330\247\330\250\330\256\330\247\331\206\331\207 \330\247\330\262 \330\267\330\261\333\214\331\202 \330\247\330\252\331\210\331\205\330\247\330\263\333\214\331\210\331\206 \332\251\330\261\330\257\331\206 \331\204\333\214\330\263\330\252 \330\247\330\271\330\266\330\247 \331\210 \331\207\331\205\332\206\331\206\333\214\331\206 \331\205\330\257\333\214\330\261\333\214"
                        "\330\252 \330\247\331\205\330\247\331\206\330\247\330\252 \331\210... \330\250\331\207 \332\251\330\247\330\261 \330\264\331\205\330\247 \330\263\330\261\330\271\330\252 \330\250\330\250\330\256\330\264\333\214\331\205.</p>\n"
"<p dir='rtl' style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\330\263\330\247\333\214\330\252:                         <a href=\"http://roshandelpoor.ir/?i=1\"><span style=\" text-decoration: underline; color:#007af4;\">bookyad.ir</span></a></p>\n"
"<p dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\330\252\331\205\330\247\330\263 \330\250\330\247 \331\205\330\247:            <span style=\" color:#000000;\"> </span><a href=\"061558184\"><span style=\" text-decoration: un"
                        "derline; color:#000000;\">\333\264\333\262\333\265\333\265\333\270\333\261\333\270\333\264-\333\260\333\266\333\261</span></a></p>\n"
"<p dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\331\276\330\264\330\252\333\214\330\250\330\247\331\206\333\214:                <a href=\"09399886772\"><span style=\" text-decoration: underline; color:#000000;\">\333\260\333\271\333\263\333\271\333\271\333\270\333\270\333\266\333\267\333\267\333\262</span></a>   </p>\n"
"<p dir='rtl' style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" dir='rtl' style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p dir='rtl' style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-blo"
                        "ck-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/biologo.png\" /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogBio: public Ui_DialogBio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBIO_H
