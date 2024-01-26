/********************************************************************************
** Form generated from reading UI file 'mainform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QAction *action_insertbook;
    QAction *action_borrowbook;
    QAction *action_members;
    QAction *action_staffs;
    QAction *action_bio;
    QAction *action_exit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_icon;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName("MainForm");
        MainForm->resize(567, 411);
        QFont font;
        font.setFamilies({QString::fromUtf8("IRANSansX")});
        font.setBold(false);
        MainForm->setFont(font);
        MainForm->setLayoutDirection(Qt::RightToLeft);
        action_insertbook = new QAction(MainForm);
        action_insertbook->setObjectName("action_insertbook");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/bookinsert.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_insertbook->setIcon(icon);
        action_borrowbook = new QAction(MainForm);
        action_borrowbook->setObjectName("action_borrowbook");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/borrower.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_borrowbook->setIcon(icon1);
        action_members = new QAction(MainForm);
        action_members->setObjectName("action_members");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/student.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_members->setIcon(icon2);
        action_staffs = new QAction(MainForm);
        action_staffs->setObjectName("action_staffs");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/staff.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_staffs->setIcon(icon3);
        action_bio = new QAction(MainForm);
        action_bio->setObjectName("action_bio");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_bio->setIcon(icon4);
        action_exit = new QAction(MainForm);
        action_exit->setObjectName("action_exit");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_exit->setIcon(icon5);
        centralwidget = new QWidget(MainForm);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_5);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("IRANSansX")});
        font1.setPointSize(18);
        font1.setBold(true);
        label->setFont(font1);
        label->setTabletTracking(false);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_icon = new QLabel(centralwidget);
        label_icon->setObjectName("label_icon");
        label_icon->setMinimumSize(QSize(122, 122));
        label_icon->setMaximumSize(QSize(122, 122));
        label_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/logo.png")));
        label_icon->setScaledContents(true);

        horizontalLayout->addWidget(label_icon);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        MainForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainForm);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 567, 19));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainForm->setMenuBar(menubar);
        statusbar = new QStatusBar(MainForm);
        statusbar->setObjectName("statusbar");
        MainForm->setStatusBar(statusbar);
        toolBar = new QToolBar(MainForm);
        toolBar->setObjectName("toolBar");
        toolBar->setIconSize(QSize(32, 32));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainForm->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action_insertbook);
        menu->addAction(action_borrowbook);
        menu->addAction(action_members);
        menu->addAction(action_staffs);
        menu->addSeparator();
        menu->addAction(action_exit);
        menu_2->addAction(action_bio);
        toolBar->addAction(action_insertbook);
        toolBar->addAction(action_borrowbook);
        toolBar->addSeparator();
        toolBar->addAction(action_members);
        toolBar->addAction(action_staffs);
        toolBar->addSeparator();
        toolBar->addAction(action_bio);
        toolBar->addSeparator();
        toolBar->addAction(action_exit);

        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QMainWindow *MainForm)
    {
        MainForm->setWindowTitle(QCoreApplication::translate("MainForm", "MainWindow", nullptr));
        action_insertbook->setText(QCoreApplication::translate("MainForm", "\330\253\330\250\330\252 \332\251\330\252\330\247\330\250", nullptr));
#if QT_CONFIG(tooltip)
        action_insertbook->setToolTip(QCoreApplication::translate("MainForm", "\330\253\330\250\330\252 \332\251\330\252\330\247\330\250", nullptr));
#endif // QT_CONFIG(tooltip)
        action_borrowbook->setText(QCoreApplication::translate("MainForm", "\331\276\331\206\331\204 \330\247\331\205\330\247\331\206\330\247\330\252", nullptr));
#if QT_CONFIG(tooltip)
        action_borrowbook->setToolTip(QCoreApplication::translate("MainForm", "\331\276\331\206\331\204 \330\247\331\205\330\247\331\206\330\247\330\252", nullptr));
#endif // QT_CONFIG(tooltip)
        action_members->setText(QCoreApplication::translate("MainForm", "\331\276\331\206\331\204 \330\247\330\271\330\266\330\247", nullptr));
#if QT_CONFIG(tooltip)
        action_members->setToolTip(QCoreApplication::translate("MainForm", "\331\276\331\206\331\204 \330\247\330\271\330\266\330\247", nullptr));
#endif // QT_CONFIG(tooltip)
        action_staffs->setText(QCoreApplication::translate("MainForm", "\331\276\331\206\331\204 \332\251\330\247\330\261\331\205\331\206\330\257\330\247\331\206", nullptr));
#if QT_CONFIG(tooltip)
        action_staffs->setToolTip(QCoreApplication::translate("MainForm", "\331\276\331\206\331\204 \332\251\330\247\330\261\331\205\331\206\330\257\330\247\331\206", nullptr));
#endif // QT_CONFIG(tooltip)
        action_bio->setText(QCoreApplication::translate("MainForm", "\330\257\330\261\330\250\330\247\330\261\331\207 \333\214 \331\205\330\247", nullptr));
#if QT_CONFIG(tooltip)
        action_bio->setToolTip(QCoreApplication::translate("MainForm", "\330\257\330\261\330\250\330\247\330\261\331\207 \333\214 \331\205\330\247", nullptr));
#endif // QT_CONFIG(tooltip)
        action_exit->setText(QCoreApplication::translate("MainForm", "\330\256\330\261\331\210\330\254", nullptr));
#if QT_CONFIG(tooltip)
        action_exit->setToolTip(QCoreApplication::translate("MainForm", "\330\256\330\261\331\210\330\254", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainForm", "\330\263\330\247\331\205\330\247\331\206\331\207 \331\205\330\257\333\214\330\261\333\214\330\252 \332\251\330\252\330\247\330\250\330\256\330\247\331\206\331\207 \330\250\331\210\332\251\333\214\330\247\330\257", nullptr));
        label_icon->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainForm", "\331\201\331\207\330\261\330\263\330\252", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainForm", "\330\257\330\261\330\250\330\247\330\261\331\207 \333\214 \331\205\330\247", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainForm", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
