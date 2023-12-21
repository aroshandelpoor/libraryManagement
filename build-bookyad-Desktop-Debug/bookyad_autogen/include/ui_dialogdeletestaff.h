/********************************************************************************
** Form generated from reading UI file 'dialogdeletestaff.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDELETESTAFF_H
#define UI_DIALOGDELETESTAFF_H

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

class Ui_DialogDeleteStaff
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_staffid;
    QLabel *label_staffid_text;
    QLabel *label_staffid_icon;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_staff_name;
    QLabel *label_staff_name;
    QLabel *label_staff_icon;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_exit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DialogDeleteStaff)
    {
        if (DialogDeleteStaff->objectName().isEmpty())
            DialogDeleteStaff->setObjectName("DialogDeleteStaff");
        DialogDeleteStaff->setWindowModality(Qt::ApplicationModal);
        DialogDeleteStaff->resize(412, 219);
        DialogDeleteStaff->setMinimumSize(QSize(412, 219));
        DialogDeleteStaff->setMaximumSize(QSize(412, 219));
        QFont font;
        font.setFamilies({QString::fromUtf8("IRANSansX")});
        DialogDeleteStaff->setFont(font);
        verticalLayout = new QVBoxLayout(DialogDeleteStaff);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(DialogDeleteStaff);
        groupBox->setObjectName("groupBox");
        groupBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

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
        label_staffid_icon->setBaseSize(QSize(16, 16));
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


        verticalLayout_3->addLayout(verticalLayout_2);

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


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox);


        retranslateUi(DialogDeleteStaff);

        QMetaObject::connectSlotsByName(DialogDeleteStaff);
    } // setupUi

    void retranslateUi(QDialog *DialogDeleteStaff)
    {
        DialogDeleteStaff->setWindowTitle(QCoreApplication::translate("DialogDeleteStaff", "\330\255\330\260\331\201", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogDeleteStaff", "\330\255\330\260\331\201 \332\251\330\247\330\261\331\205\331\206\330\257\330\247\331\206", nullptr));
        label_staffid_text->setText(QCoreApplication::translate("DialogDeleteStaff", "\332\251\330\257 \331\276\330\261\330\263\331\206\331\204\333\214:", nullptr));
        label_staffid_icon->setText(QString());
        label_staff_name->setText(QCoreApplication::translate("DialogDeleteStaff", "\331\206\330\247\331\205 \331\210 \331\206\330\247\331\205\342\200\214\330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214:", nullptr));
        label_staff_icon->setText(QString());
        pushButton_delete->setText(QCoreApplication::translate("DialogDeleteStaff", "\330\255\330\260\331\201", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("DialogDeleteStaff", "\330\250\330\247\330\262\332\257\330\264\330\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDeleteStaff: public Ui_DialogDeleteStaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDELETESTAFF_H
