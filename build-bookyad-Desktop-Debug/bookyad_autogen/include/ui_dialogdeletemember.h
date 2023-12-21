/********************************************************************************
** Form generated from reading UI file 'dialogdeletemember.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDELETEMEMBER_H
#define UI_DIALOGDELETEMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogDeleteMember
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_phonenumbermember;
    QLabel *label_memberid_text;
    QLabel *label_memberid_icon;
    QLineEdit *lineEdit_membername;
    QLabel *label_membername_text;
    QLabel *label_membername_icon;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_exit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DialogDeleteMember)
    {
        if (DialogDeleteMember->objectName().isEmpty())
            DialogDeleteMember->setObjectName("DialogDeleteMember");
        DialogDeleteMember->setWindowModality(Qt::ApplicationModal);
        DialogDeleteMember->resize(412, 219);
        DialogDeleteMember->setMinimumSize(QSize(412, 219));
        DialogDeleteMember->setMaximumSize(QSize(412, 219));
        QFont font;
        font.setFamilies({QString::fromUtf8("IRANSansX")});
        DialogDeleteMember->setFont(font);
        verticalLayout = new QVBoxLayout(DialogDeleteMember);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(DialogDeleteMember);
        groupBox->setObjectName("groupBox");
        groupBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_phonenumbermember = new QLineEdit(groupBox);
        lineEdit_phonenumbermember->setObjectName("lineEdit_phonenumbermember");

        horizontalLayout->addWidget(lineEdit_phonenumbermember);

        label_memberid_text = new QLabel(groupBox);
        label_memberid_text->setObjectName("label_memberid_text");

        horizontalLayout->addWidget(label_memberid_text);

        label_memberid_icon = new QLabel(groupBox);
        label_memberid_icon->setObjectName("label_memberid_icon");
        label_memberid_icon->setMinimumSize(QSize(16, 16));
        label_memberid_icon->setMaximumSize(QSize(16, 16));
        label_memberid_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/national id.png")));
        label_memberid_icon->setScaledContents(true);

        horizontalLayout->addWidget(label_memberid_icon);

        lineEdit_membername = new QLineEdit(groupBox);
        lineEdit_membername->setObjectName("lineEdit_membername");

        horizontalLayout->addWidget(lineEdit_membername);

        label_membername_text = new QLabel(groupBox);
        label_membername_text->setObjectName("label_membername_text");

        horizontalLayout->addWidget(label_membername_text);

        label_membername_icon = new QLabel(groupBox);
        label_membername_icon->setObjectName("label_membername_icon");
        label_membername_icon->setMinimumSize(QSize(16, 16));
        label_membername_icon->setMaximumSize(QSize(16, 16));
        label_membername_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/member.png")));
        label_membername_icon->setScaledContents(true);

        horizontalLayout->addWidget(label_membername_icon);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_delete = new QPushButton(groupBox);
        pushButton_delete->setObjectName("pushButton_delete");

        horizontalLayout_4->addWidget(pushButton_delete);

        pushButton_exit = new QPushButton(groupBox);
        pushButton_exit->setObjectName("pushButton_exit");

        horizontalLayout_4->addWidget(pushButton_exit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox);


        retranslateUi(DialogDeleteMember);

        QMetaObject::connectSlotsByName(DialogDeleteMember);
    } // setupUi

    void retranslateUi(QDialog *DialogDeleteMember)
    {
        DialogDeleteMember->setWindowTitle(QCoreApplication::translate("DialogDeleteMember", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogDeleteMember", "\330\255\330\260\331\201 \330\247\330\271\330\266\330\247", nullptr));
        label_memberid_text->setText(QCoreApplication::translate("DialogDeleteMember", "\332\251\330\257 \331\205\331\204\333\214:", nullptr));
        label_memberid_icon->setText(QString());
        label_membername_text->setText(QCoreApplication::translate("DialogDeleteMember", "\331\206\330\247\331\205 \331\210 \331\206\330\247\331\205\342\200\214\330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214:", nullptr));
        label_membername_icon->setText(QString());
        pushButton_delete->setText(QCoreApplication::translate("DialogDeleteMember", "\330\255\330\260\331\201", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("DialogDeleteMember", "\330\250\330\247\330\262\332\257\330\264\330\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDeleteMember: public Ui_DialogDeleteMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDELETEMEMBER_H
