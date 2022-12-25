/********************************************************************************
** Form generated from reading UI file 'page_login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGIN_H
#define UI_PAGE_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_Login
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Page_Login)
    {
        if (Page_Login->objectName().isEmpty())
            Page_Login->setObjectName("Page_Login");
        Page_Login->resize(400, 250);
        Page_Login->setMinimumSize(QSize(400, 250));
        Page_Login->setMaximumSize(QSize(400, 250));
        gridLayout_2 = new QGridLayout(Page_Login);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(Page_Login);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        widget_2 = new QWidget(Page_Login);
        widget_2->setObjectName("widget_2");
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 0, 1, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(Page_Login);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(95, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(95, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addWidget(widget, 2, 0, 1, 1);


        retranslateUi(Page_Login);

        QMetaObject::connectSlotsByName(Page_Login);
    } // setupUi

    void retranslateUi(QWidget *Page_Login)
    {
        Page_Login->setWindowTitle(QCoreApplication::translate("Page_Login", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("Page_Login", "\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("Page_Login", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("Page_Login", "\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("Page_Login", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Page_Login", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_Login: public Ui_Page_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H
