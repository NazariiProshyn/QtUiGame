/********************************************************************************
** Form generated from reading UI file 'newuserform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSERFORM_H
#define UI_NEWUSERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewUserForm
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *log;
    QLineEdit *passw;
    QPushButton *NewUseButton;

    void setupUi(QDialog *NewUserForm)
    {
        if (NewUserForm->objectName().isEmpty())
            NewUserForm->setObjectName(QString::fromUtf8("NewUserForm"));
        NewUserForm->resize(330, 207);
        groupBox = new QGroupBox(NewUserForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 171));
        QFont font;
        font.setPointSize(12);
        groupBox->setFont(font);
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 281, 122));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        log = new QLineEdit(widget);
        log->setObjectName(QString::fromUtf8("log"));

        verticalLayout_2->addWidget(log);

        passw = new QLineEdit(widget);
        passw->setObjectName(QString::fromUtf8("passw"));

        verticalLayout_2->addWidget(passw);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        NewUseButton = new QPushButton(widget);
        NewUseButton->setObjectName(QString::fromUtf8("NewUseButton"));
        NewUseButton->setFont(font);

        verticalLayout_3->addWidget(NewUseButton);


        retranslateUi(NewUserForm);

        QMetaObject::connectSlotsByName(NewUserForm);
    } // setupUi

    void retranslateUi(QDialog *NewUserForm)
    {
        NewUserForm->setWindowTitle(QCoreApplication::translate("NewUserForm", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NewUserForm", "Registration", nullptr));
        label->setText(QCoreApplication::translate("NewUserForm", "Login:", nullptr));
        label_2->setText(QCoreApplication::translate("NewUserForm", "Password:", nullptr));
        NewUseButton->setText(QCoreApplication::translate("NewUserForm", "Create new user", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewUserForm: public Ui_NewUserForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSERFORM_H
