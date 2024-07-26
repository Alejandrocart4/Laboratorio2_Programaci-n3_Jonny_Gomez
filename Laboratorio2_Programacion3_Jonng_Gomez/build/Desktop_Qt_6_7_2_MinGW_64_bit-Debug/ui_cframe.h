/********************************************************************************
** Form generated from reading UI file 'cframe.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAME_H
#define UI_CFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QWidget *centralwidget;
    QTabWidget *TabWidget;
    QWidget *tab;
    QPushButton *pB_Ex1;
    QPushButton *pB_Ex3;
    QPushButton *pB_Ex2;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName("cframe");
        cframe->resize(978, 615);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName("centralwidget");
        TabWidget = new QTabWidget(centralwidget);
        TabWidget->setObjectName("TabWidget");
        TabWidget->setGeometry(QRect(0, 0, 971, 571));
        tab = new QWidget();
        tab->setObjectName("tab");
        pB_Ex1 = new QPushButton(tab);
        pB_Ex1->setObjectName("pB_Ex1");
        pB_Ex1->setGeometry(QRect(400, 160, 121, 41));
        pB_Ex3 = new QPushButton(tab);
        pB_Ex3->setObjectName("pB_Ex3");
        pB_Ex3->setGeometry(QRect(400, 320, 121, 41));
        pB_Ex2 = new QPushButton(tab);
        pB_Ex2->setObjectName("pB_Ex2");
        pB_Ex2->setGeometry(QRect(400, 240, 121, 41));
        TabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        TabWidget->addTab(tab_2, QString());
        cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cframe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 978, 25));
        cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(cframe);
        statusbar->setObjectName("statusbar");
        cframe->setStatusBar(statusbar);

        retranslateUi(cframe);

        TabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QCoreApplication::translate("cframe", "cframe", nullptr));
        pB_Ex1->setText(QCoreApplication::translate("cframe", "Ejercicio 1", nullptr));
        pB_Ex3->setText(QCoreApplication::translate("cframe", "Ejercicio 3", nullptr));
        pB_Ex2->setText(QCoreApplication::translate("cframe", "Ejercicio 2", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(tab), QCoreApplication::translate("cframe", "Tab 1", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(tab_2), QCoreApplication::translate("cframe", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
