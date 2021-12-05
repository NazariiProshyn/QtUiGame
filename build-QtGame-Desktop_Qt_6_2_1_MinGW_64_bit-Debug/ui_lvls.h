/********************************************************************************
** Form generated from reading UI file 'lvls.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LVLS_H
#define UI_LVLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lvls
{
public:
    QPushButton *Play;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *Warrior;
    QRadioButton *Magician;
    QRadioButton *Bowman;
    QGroupBox *groupBox_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *Easy;
    QRadioButton *Medium;
    QRadioButton *Hard;

    void setupUi(QDialog *Lvls)
    {
        if (Lvls->objectName().isEmpty())
            Lvls->setObjectName(QString::fromUtf8("Lvls"));
        Lvls->resize(423, 262);
        Play = new QPushButton(Lvls);
        Play->setObjectName(QString::fromUtf8("Play"));
        Play->setGeometry(QRect(30, 190, 371, 51));
        QFont font;
        font.setPointSize(14);
        Play->setFont(font);
        groupBox = new QGroupBox(Lvls);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 171, 151));
        QFont font1;
        font1.setPointSize(12);
        groupBox->setFont(font1);
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 40, 139, 109));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Warrior = new QRadioButton(widget);
        Warrior->setObjectName(QString::fromUtf8("Warrior"));
        QFont font2;
        font2.setPointSize(11);
        Warrior->setFont(font2);

        verticalLayout->addWidget(Warrior);

        Magician = new QRadioButton(widget);
        Magician->setObjectName(QString::fromUtf8("Magician"));
        Magician->setFont(font2);

        verticalLayout->addWidget(Magician);

        Bowman = new QRadioButton(widget);
        Bowman->setObjectName(QString::fromUtf8("Bowman"));
        Bowman->setFont(font2);

        verticalLayout->addWidget(Bowman);

        groupBox_2 = new QGroupBox(Lvls);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(230, 20, 171, 151));
        groupBox_2->setFont(font1);
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 40, 139, 109));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Easy = new QRadioButton(widget1);
        Easy->setObjectName(QString::fromUtf8("Easy"));
        Easy->setFont(font2);

        verticalLayout_2->addWidget(Easy);

        Medium = new QRadioButton(widget1);
        Medium->setObjectName(QString::fromUtf8("Medium"));
        Medium->setFont(font2);

        verticalLayout_2->addWidget(Medium);

        Hard = new QRadioButton(widget1);
        Hard->setObjectName(QString::fromUtf8("Hard"));
        Hard->setFont(font2);

        verticalLayout_2->addWidget(Hard);


        retranslateUi(Lvls);

        QMetaObject::connectSlotsByName(Lvls);
    } // setupUi

    void retranslateUi(QDialog *Lvls)
    {
        Lvls->setWindowTitle(QCoreApplication::translate("Lvls", "Dialog", nullptr));
        Play->setText(QCoreApplication::translate("Lvls", "PLAY!", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Lvls", "PlayerType", nullptr));
        Warrior->setText(QCoreApplication::translate("Lvls", "WARRIOR", nullptr));
        Magician->setText(QCoreApplication::translate("Lvls", "MAGICIAN", nullptr));
        Bowman->setText(QCoreApplication::translate("Lvls", "BOWMAN", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Lvls", "Difficulty", nullptr));
        Easy->setText(QCoreApplication::translate("Lvls", "EASY", nullptr));
        Medium->setText(QCoreApplication::translate("Lvls", "MEDIUM", nullptr));
        Hard->setText(QCoreApplication::translate("Lvls", "HARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lvls: public Ui_Lvls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LVLS_H
