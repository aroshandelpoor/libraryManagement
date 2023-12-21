/********************************************************************************
** Form generated from reading UI file 'dialogeditstaff.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEDITSTAFF_H
#define UI_DIALOGEDITSTAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogEditStaff
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_role;
    QLabel *label_role;
    QLineEdit *lineEdit_staffid;
    QLabel *label_staffid_text;
    QLabel *label_staffid_icon;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_staff_name;
    QLabel *label_staff_name;
    QLabel *label_staff_icon;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_repeat_password;
    QLabel *label_repeat_password;
    QLineEdit *lineEdit_password;
    QLabel *label_password;
    QLabel *label_password_icon;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_exit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DialogEditStaff)
    {
        if (DialogEditStaff->objectName().isEmpty())
            DialogEditStaff->setObjectName("DialogEditStaff");
        DialogEditStaff->setWindowModality(Qt::ApplicationModal);
        DialogEditStaff->resize(412, 219);
        DialogEditStaff->setMinimumSize(QSize(412, 219));
        DialogEditStaff->setMaximumSize(QSize(412, 219));
        QFont font;
        font.setFamilies({QString::fromUtf8("IRANSansX")});
        DialogEditStaff->setFont(font);
        verticalLayout = new QVBoxLayout(DialogEditStaff);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(DialogEditStaff);
        groupBox->setObjectName("groupBox");
        groupBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        comboBox_role = new QComboBox(groupBox);
        comboBox_role->addItem(QString());
        comboBox_role->addItem(QString());
        comboBox_role->addItem(QString());
        comboBox_role->addItem(QString());
        comboBox_role->setObjectName("comboBox_role");
        comboBox_role->setLayoutDirection(Qt::RightToLeft);
        comboBox_role->setEditable(false);
        comboBox_role->setInsertPolicy(QComboBox::InsertAtCurrent);
        comboBox_role->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_3->addWidget(comboBox_role);

        label_role = new QLabel(groupBox);
        label_role->setObjectName("label_role");

        horizontalLayout_3->addWidget(label_role);

        lineEdit_staffid = new QLineEdit(groupBox);
        lineEdit_staffid->setObjectName("lineEdit_staffid");

        horizontalLayout_3->addWidget(lineEdit_staffid);

        label_staffid_text = new QLabel(groupBox);
        label_staffid_text->setObjectName("label_staffid_text");

        horizontalLayout_3->addWidget(label_staffid_text);

        label_staffid_icon = new QLabel(groupBox);
        label_staffid_icon->setObjectName("label_staffid_icon");
        label_staffid_icon->setMinimumSize(QSize(16, 16));
        label_staffid_icon->setMaximumSize(QSize(16, 16));
        label_staffid_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/Personnel Code icon.png")));
        label_staffid_icon->setScaledContents(true);

        horizontalLayout_3->addWidget(label_staffid_icon);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_staff_name = new QLineEdit(groupBox);
        lineEdit_staff_name->setObjectName("lineEdit_staff_name");

        horizontalLayout->addWidget(lineEdit_staff_name);

        label_staff_name = new QLabel(groupBox);
        label_staff_name->setObjectName("label_staff_name");

        horizontalLayout->addWidget(label_staff_name);

        label_staff_icon = new QLabel(groupBox);
        label_staff_icon->setObjectName("label_staff_icon");
        label_staff_icon->setMinimumSize(QSize(16, 16));
        label_staff_icon->setMaximumSize(QSize(16, 16));
        label_staff_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/staff.png")));
        label_staff_icon->setScaledContents(true);

        horizontalLayout->addWidget(label_staff_icon);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit_repeat_password = new QLineEdit(groupBox);
        lineEdit_repeat_password->setObjectName("lineEdit_repeat_password");

        horizontalLayout_2->addWidget(lineEdit_repeat_password);

        label_repeat_password = new QLabel(groupBox);
        label_repeat_password->setObjectName("label_repeat_password");

        horizontalLayout_2->addWidget(label_repeat_password);

        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName("lineEdit_password");

        horizontalLayout_2->addWidget(lineEdit_password);

        label_password = new QLabel(groupBox);
        label_password->setObjectName("label_password");

        horizontalLayout_2->addWidget(label_password);

        label_password_icon = new QLabel(groupBox);
        label_password_icon->setObjectName("label_password_icon");
        label_password_icon->setMinimumSize(QSize(16, 16));
        label_password_icon->setMaximumSize(QSize(16, 16));
        label_password_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/password-icon.png")));
        label_password_icon->setScaledContents(true);

        horizontalLayout_2->addWidget(label_password_icon);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

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


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox);


        retranslateUi(DialogEditStaff);

        QMetaObject::connectSlotsByName(DialogEditStaff);
    } // setupUi

    void retranslateUi(QDialog *DialogEditStaff)
    {
        DialogEditStaff->setWindowTitle(QCoreApplication::translate("DialogEditStaff", "\331\210\333\214\330\261\330\247\333\214\330\264", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogEditStaff", "\331\210\333\214\330\261\330\247\333\214\330\264 \332\251\330\247\330\261\331\205\331\206\330\257\330\247\331\206", nullptr));
        comboBox_role->setItemText(0, QCoreApplication::translate("DialogEditStaff", "\331\205\330\257\333\214\330\261\333\214\330\252", nullptr));
        comboBox_role->setItemText(1, QCoreApplication::translate("DialogEditStaff", "\330\252\330\255\331\210\333\214\331\204\330\257\330\247\330\261", nullptr));
        comboBox_role->setItemText(2, QCoreApplication::translate("DialogEditStaff", "\332\251\330\252\330\247\330\250\330\257\330\247\330\261", nullptr));
        comboBox_role->setItemText(3, QCoreApplication::translate("DialogEditStaff", "\331\205\330\263\330\246\331\210\331\204 \330\250\330\247\333\214\332\257\330\247\331\206\333\214", nullptr));

        comboBox_role->setCurrentText(QCoreApplication::translate("DialogEditStaff", "\331\205\330\257\333\214\330\261\333\214\330\252", nullptr));
        label_role->setText(QCoreApplication::translate("DialogEditStaff", "\331\206\331\210\330\271 \331\201\330\271\330\247\331\204\333\214\330\252:", nullptr));
        label_staffid_text->setText(QCoreApplication::translate("DialogEditStaff", "\332\251\330\257 \331\276\330\261\330\263\331\206\331\204\333\214:", nullptr));
        label_staffid_icon->setText(QString());
        label_staff_name->setText(QCoreApplication::translate("DialogEditStaff", "\331\206\330\247\331\205 \331\210 \331\206\330\247\331\205\342\200\214\330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214:", nullptr));
        label_staff_icon->setText(QString());
        label_repeat_password->setText(QCoreApplication::translate("DialogEditStaff", "\330\252\332\251\330\261\330\247\330\261 \330\261\331\205\330\262\330\271\330\250\331\210\330\261:", nullptr));
        label_password->setText(QCoreApplication::translate("DialogEditStaff", "\330\261\331\205\330\262\330\271\330\250\331\210\330\261:", nullptr));
        label_password_icon->setText(QString());
        pushButton_edit->setText(QCoreApplication::translate("DialogEditStaff", "\331\210\333\214\330\261\330\247\333\214\330\264", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("DialogEditStaff", "\330\250\330\247\330\262\332\257\330\264\330\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogEditStaff: public Ui_DialogEditStaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEDITSTAFF_H
