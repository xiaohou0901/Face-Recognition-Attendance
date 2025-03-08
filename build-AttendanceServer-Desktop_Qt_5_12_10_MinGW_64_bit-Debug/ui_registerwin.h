/********************************************************************************
** Form generated from reading UI file 'registerwin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIN_H
#define UI_REGISTERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWin
{
public:
    QLabel *headpicLb;
    QPushButton *videoswitchBt;
    QPushButton *addpicBt;
    QPushButton *cameraBt;
    QLineEdit *picFileEdit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLineEdit *addressEdit;
    QFormLayout *formLayout_3;
    QLabel *label_6;
    QLineEdit *phoneEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QRadioButton *mrb;
    QRadioButton *wrb;
    QFormLayout *formLayout_4;
    QLabel *label_8;
    QDateEdit *birthdayEdit;
    QPushButton *registerBt;
    QPushButton *resetBt;

    void setupUi(QWidget *RegisterWin)
    {
        if (RegisterWin->objectName().isEmpty())
            RegisterWin->setObjectName(QString::fromUtf8("RegisterWin"));
        RegisterWin->resize(780, 470);
        headpicLb = new QLabel(RegisterWin);
        headpicLb->setObjectName(QString::fromUtf8("headpicLb"));
        headpicLb->setGeometry(QRect(399, 30, 341, 291));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(headpicLb->sizePolicy().hasHeightForWidth());
        headpicLb->setSizePolicy(sizePolicy);
        headpicLb->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        videoswitchBt = new QPushButton(RegisterWin);
        videoswitchBt->setObjectName(QString::fromUtf8("videoswitchBt"));
        videoswitchBt->setGeometry(QRect(520, 389, 109, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(videoswitchBt->sizePolicy().hasHeightForWidth());
        videoswitchBt->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        videoswitchBt->setFont(font);
        addpicBt = new QPushButton(RegisterWin);
        addpicBt->setObjectName(QString::fromUtf8("addpicBt"));
        addpicBt->setGeometry(QRect(400, 389, 93, 41));
        addpicBt->setFont(font);
        cameraBt = new QPushButton(RegisterWin);
        cameraBt->setObjectName(QString::fromUtf8("cameraBt"));
        cameraBt->setGeometry(QRect(647, 389, 93, 41));
        cameraBt->setFont(font);
        picFileEdit = new QLineEdit(RegisterWin);
        picFileEdit->setObjectName(QString::fromUtf8("picFileEdit"));
        picFileEdit->setGeometry(QRect(400, 330, 341, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(picFileEdit->sizePolicy().hasHeightForWidth());
        picFileEdit->setSizePolicy(sizePolicy2);
        picFileEdit->setFont(font);
        layoutWidget = new QWidget(RegisterWin);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 331, 401));
        sizePolicy.setHeightForWidth(layoutWidget->sizePolicy().hasHeightForWidth());
        layoutWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(34);
        gridLayout->setVerticalSpacing(37);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy3);
        nameEdit->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);


        gridLayout->addLayout(formLayout, 0, 0, 1, 2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        addressEdit = new QLineEdit(layoutWidget);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        sizePolicy3.setHeightForWidth(addressEdit->sizePolicy().hasHeightForWidth());
        addressEdit->setSizePolicy(sizePolicy3);
        addressEdit->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, addressEdit);


        gridLayout->addLayout(formLayout_2, 1, 0, 1, 2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        phoneEdit = new QLineEdit(layoutWidget);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        sizePolicy3.setHeightForWidth(phoneEdit->sizePolicy().hasHeightForWidth());
        phoneEdit->setSizePolicy(sizePolicy3);
        phoneEdit->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, phoneEdit);


        gridLayout->addLayout(formLayout_3, 2, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(9);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        horizontalLayout->addWidget(label_9);

        mrb = new QRadioButton(layoutWidget);
        mrb->setObjectName(QString::fromUtf8("mrb"));
        mrb->setFont(font1);

        horizontalLayout->addWidget(mrb, 0, Qt::AlignHCenter);

        wrb = new QRadioButton(layoutWidget);
        wrb->setObjectName(QString::fromUtf8("wrb"));
        wrb->setFont(font1);

        horizontalLayout->addWidget(wrb);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_8);

        birthdayEdit = new QDateEdit(layoutWidget);
        birthdayEdit->setObjectName(QString::fromUtf8("birthdayEdit"));
        sizePolicy3.setHeightForWidth(birthdayEdit->sizePolicy().hasHeightForWidth());
        birthdayEdit->setSizePolicy(sizePolicy3);
        birthdayEdit->setFont(font1);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, birthdayEdit);


        gridLayout->addLayout(formLayout_4, 4, 0, 1, 2);

        registerBt = new QPushButton(layoutWidget);
        registerBt->setObjectName(QString::fromUtf8("registerBt"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(registerBt->sizePolicy().hasHeightForWidth());
        registerBt->setSizePolicy(sizePolicy4);
        registerBt->setFont(font);

        gridLayout->addWidget(registerBt, 5, 0, 1, 1);

        resetBt = new QPushButton(layoutWidget);
        resetBt->setObjectName(QString::fromUtf8("resetBt"));
        sizePolicy4.setHeightForWidth(resetBt->sizePolicy().hasHeightForWidth());
        resetBt->setSizePolicy(sizePolicy4);
        resetBt->setFont(font);

        gridLayout->addWidget(resetBt, 5, 1, 1, 1);


        retranslateUi(RegisterWin);

        QMetaObject::connectSlotsByName(RegisterWin);
    } // setupUi

    void retranslateUi(QWidget *RegisterWin)
    {
        RegisterWin->setWindowTitle(QApplication::translate("RegisterWin", "Form", nullptr));
        headpicLb->setText(QString());
        videoswitchBt->setText(QApplication::translate("RegisterWin", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
        addpicBt->setText(QApplication::translate("RegisterWin", "\346\267\273\345\212\240\345\244\264\345\203\217", nullptr));
        cameraBt->setText(QApplication::translate("RegisterWin", "\346\213\215\347\205\247", nullptr));
        label->setText(QApplication::translate("RegisterWin", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_5->setText(QApplication::translate("RegisterWin", "\345\234\260\345\235\200\357\274\232", nullptr));
        label_6->setText(QApplication::translate("RegisterWin", "\347\224\265\350\257\235\357\274\232", nullptr));
        label_9->setText(QApplication::translate("RegisterWin", "\346\200\247\345\210\253\357\274\232", nullptr));
        mrb->setText(QApplication::translate("RegisterWin", "\347\224\267", nullptr));
        wrb->setText(QApplication::translate("RegisterWin", "\345\245\263", nullptr));
        label_8->setText(QApplication::translate("RegisterWin", "\347\224\237\346\227\245\357\274\232", nullptr));
        registerBt->setText(QApplication::translate("RegisterWin", "\346\263\250\345\206\214", nullptr));
        resetBt->setText(QApplication::translate("RegisterWin", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWin: public Ui_RegisterWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIN_H
