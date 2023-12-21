/********************************************************************************
** Form generated from reading UI file 'dialogeditmember.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEDITMEMBER_H
#define UI_DIALOGEDITMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogEditMember
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_phonenumbermember;
    QLabel *label_phonenumbermember_text;
    QLabel *label_phonenumbermember_icon;
    QLineEdit *lineEdit_membername;
    QLabel *label_membername_text;
    QLabel *label_membername_icon;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_birthdaymember;
    QLabel *label_birthdaymember_text;
    QLabel *label_birthdaymember_icon;
    QLineEdit *lineEdit_memberid;
    QLabel *label_memberid_text;
    QLabel *label_memberid_icon;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *radioButton_female;
    QRadioButton *radioButton_male;
    QLabel *label_gender;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_exit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DialogEditMember)
    {
        if (DialogEditMember->objectName().isEmpty())
            DialogEditMember->setObjectName("DialogEditMember");
        DialogEditMember->setWindowModality(Qt::ApplicationModal);
        DialogEditMember->resize(512, 256);
        DialogEditMember->setMinimumSize(QSize(512, 256));
        DialogEditMember->setMaximumSize(QSize(512, 256));
        QFont font;
        font.setFamilies({QString::fromUtf8("IRANSansX")});
        DialogEditMember->setFont(font);
        verticalLayout = new QVBoxLayout(DialogEditMember);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(DialogEditMember);
        groupBox->setObjectName("groupBox");
        groupBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_phonenumbermember = new QLineEdit(groupBox);
        lineEdit_phonenumbermember->setObjectName("lineEdit_phonenumbermember");

        horizontalLayout->addWidget(lineEdit_phonenumbermember);

        label_phonenumbermember_text = new QLabel(groupBox);
        label_phonenumbermember_text->setObjectName("label_phonenumbermember_text");

        horizontalLayout->addWidget(label_phonenumbermember_text);

        label_phonenumbermember_icon = new QLabel(groupBox);
        label_phonenumbermember_icon->setObjectName("label_phonenumbermember_icon");
        label_phonenumbermember_icon->setMinimumSize(QSize(16, 16));
        label_phonenumbermember_icon->setMaximumSize(QSize(16, 16));
        label_phonenumbermember_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/mobile.png")));
        label_phonenumbermember_icon->setScaledContents(true);

        horizontalLayout->addWidget(label_phonenumbermember_icon);

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

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit_birthdaymember = new QLineEdit(groupBox);
        lineEdit_birthdaymember->setObjectName("lineEdit_birthdaymember");

        horizontalLayout_2->addWidget(lineEdit_birthdaymember);

        label_birthdaymember_text = new QLabel(groupBox);
        label_birthdaymember_text->setObjectName("label_birthdaymember_text");

        horizontalLayout_2->addWidget(label_birthdaymember_text);

        label_birthdaymember_icon = new QLabel(groupBox);
        label_birthdaymember_icon->setObjectName("label_birthdaymember_icon");
        label_birthdaymember_icon->setMinimumSize(QSize(16, 16));
        label_birthdaymember_icon->setMaximumSize(QSize(16, 16));
        label_birthdaymember_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/calender.png")));
        label_birthdaymember_icon->setScaledContents(true);

        horizontalLayout_2->addWidget(label_birthdaymember_icon);

        lineEdit_memberid = new QLineEdit(groupBox);
        lineEdit_memberid->setObjectName("lineEdit_memberid");

        horizontalLayout_2->addWidget(lineEdit_memberid);

        label_memberid_text = new QLabel(groupBox);
        label_memberid_text->setObjectName("label_memberid_text");

        horizontalLayout_2->addWidget(label_memberid_text);

        label_memberid_icon = new QLabel(groupBox);
        label_memberid_icon->setObjectName("label_memberid_icon");
        label_memberid_icon->setMinimumSize(QSize(16, 16));
        label_memberid_icon->setMaximumSize(QSize(16, 16));
        label_memberid_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/national id.png")));
        label_memberid_icon->setScaledContents(true);

        horizontalLayout_2->addWidget(label_memberid_icon);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        radioButton_female = new QRadioButton(groupBox);
        radioButton_female->setObjectName("radioButton_female");
        radioButton_female->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_3->addWidget(radioButton_female);

        radioButton_male = new QRadioButton(groupBox);
        radioButton_male->setObjectName("radioButton_male");
        radioButton_male->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_3->addWidget(radioButton_male);

        label_gender = new QLabel(groupBox);
        label_gender->setObjectName("label_gender");

        horizontalLayout_3->addWidget(label_gender);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);

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


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox);


        retranslateUi(DialogEditMember);

        QMetaObject::connectSlotsByName(DialogEditMember);
    } // setupUi

    void retranslateUi(QDialog *DialogEditMember)
    {
        DialogEditMember->setWindowTitle(QCoreApplication::translate("DialogEditMember", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogEditMember", "\331\210\333\214\330\261\330\247\333\214\330\264 \330\247\330\271\330\266\330\247", nullptr));
        label_phonenumbermember_text->setText(QCoreApplication::translate("DialogEditMember", "\330\264\331\205\330\247\330\261\331\207 \331\205\331\210\330\250\330\247\333\214\331\204:", nullptr));
        label_phonenumbermember_icon->setText(QString());
        label_membername_text->setText(QCoreApplication::translate("DialogEditMember", "\331\206\330\247\331\205 \331\210 \331\206\330\247\331\205\342\200\214\330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214:", nullptr));
        label_membername_icon->setText(QString());
        label_birthdaymember_text->setText(QCoreApplication::translate("DialogEditMember", "\330\252\330\247\330\261\333\214\330\256 \330\252\331\210\331\204\330\257:", nullptr));
        label_birthdaymember_icon->setText(QString());
        label_memberid_text->setText(QCoreApplication::translate("DialogEditMember", "\332\251\330\257 \331\205\331\204\333\214:", nullptr));
        label_memberid_icon->setText(QString());
        radioButton_female->setText(QCoreApplication::translate("DialogEditMember", "\330\262\331\206", nullptr));
        radioButton_male->setText(QCoreApplication::translate("DialogEditMember", "\331\205\330\261\330\257", nullptr));
        label_gender->setText(QCoreApplication::translate("DialogEditMember", "\330\254\331\206\330\263\333\214\330\252:", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("DialogEditMember", "\331\210\333\214\330\261\330\247\333\214\330\264", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("DialogEditMember", "\330\250\330\247\330\262\332\257\330\264\330\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogEditMember: public Ui_DialogEditMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEDITMEMBER_H
