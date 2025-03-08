/********************************************************************************
** Form generated from reading UI file 'selectwin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIN_H
#define UI_SELECTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectWin
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QRadioButton *attRb;
    QRadioButton *empRb;
    QPushButton *selectBt;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;

    void setupUi(QWidget *SelectWin)
    {
        if (SelectWin->objectName().isEmpty())
            SelectWin->setObjectName(QString::fromUtf8("SelectWin"));
        SelectWin->resize(799, 440);
        layoutWidget = new QWidget(SelectWin);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 11, 751, 411));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(layoutWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        attRb = new QRadioButton(layoutWidget1);
        attRb->setObjectName(QString::fromUtf8("attRb"));

        gridLayout->addWidget(attRb, 0, 0, 1, 1);

        empRb = new QRadioButton(layoutWidget1);
        empRb->setObjectName(QString::fromUtf8("empRb"));

        gridLayout->addWidget(empRb, 0, 1, 1, 1);

        selectBt = new QPushButton(layoutWidget1);
        selectBt->setObjectName(QString::fromUtf8("selectBt"));

        gridLayout->addWidget(selectBt, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(19, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        splitter->addWidget(layoutWidget1);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 1, 0, 1, 1);


        retranslateUi(SelectWin);

        QMetaObject::connectSlotsByName(SelectWin);
    } // setupUi

    void retranslateUi(QWidget *SelectWin)
    {
        SelectWin->setWindowTitle(QApplication::translate("SelectWin", "Form", nullptr));
        attRb->setText(QApplication::translate("SelectWin", "\350\200\203\345\213\244", nullptr));
        empRb->setText(QApplication::translate("SelectWin", "\345\221\230\345\267\245", nullptr));
        selectBt->setText(QApplication::translate("SelectWin", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectWin: public Ui_SelectWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIN_H
