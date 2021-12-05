/********************************************************************************
** Form generated from reading UI file 'cppgame.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPPGAME_H
#define UI_CPPGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_CppGame
{
public:
    QLabel *enemy;
    QLabel *hero;
    QGroupBox *groupBox;
    QRadioButton *KICK;
    QRadioButton *HEAL;
    QRadioButton *RUN;
    QPushButton *Move;
    QGroupBox *groupBox_2;
    QLabel *heroHealth;
    QLabel *heroShield;
    QGroupBox *groupBox_3;
    QLabel *enemyHealth;
    QLabel *enemyShield;

    void setupUi(QDialog *CppGame)
    {
        if (CppGame->objectName().isEmpty())
            CppGame->setObjectName(QString::fromUtf8("CppGame"));
        CppGame->resize(641, 584);
        enemy = new QLabel(CppGame);
        enemy->setObjectName(QString::fromUtf8("enemy"));
        enemy->setGeometry(QRect(420, 0, 181, 221));
        enemy->setPixmap(QPixmap(QString::fromUtf8("enemy.jpg")));
        hero = new QLabel(CppGame);
        hero->setObjectName(QString::fromUtf8("hero"));
        hero->setGeometry(QRect(20, 10, 211, 241));
        hero->setPixmap(QPixmap(QString::fromUtf8("hero123.jpg")));
        groupBox = new QGroupBox(CppGame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 380, 601, 181));
        QFont font;
        font.setPointSize(14);
        groupBox->setFont(font);
        KICK = new QRadioButton(groupBox);
        KICK->setObjectName(QString::fromUtf8("KICK"));
        KICK->setGeometry(QRect(20, 50, 161, 24));
        HEAL = new QRadioButton(groupBox);
        HEAL->setObjectName(QString::fromUtf8("HEAL"));
        HEAL->setGeometry(QRect(20, 90, 151, 24));
        RUN = new QRadioButton(groupBox);
        RUN->setObjectName(QString::fromUtf8("RUN"));
        RUN->setGeometry(QRect(20, 130, 171, 24));
        Move = new QPushButton(groupBox);
        Move->setObjectName(QString::fromUtf8("Move"));
        Move->setGeometry(QRect(260, 40, 321, 121));
        groupBox_2 = new QGroupBox(CppGame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 260, 271, 111));
        QFont font1;
        font1.setPointSize(12);
        groupBox_2->setFont(font1);
        heroHealth = new QLabel(groupBox_2);
        heroHealth->setObjectName(QString::fromUtf8("heroHealth"));
        heroHealth->setGeometry(QRect(20, 40, 141, 20));
        heroShield = new QLabel(groupBox_2);
        heroShield->setObjectName(QString::fromUtf8("heroShield"));
        heroShield->setGeometry(QRect(20, 80, 101, 20));
        groupBox_3 = new QGroupBox(CppGame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(420, 260, 191, 111));
        groupBox_3->setFont(font);
        enemyHealth = new QLabel(groupBox_3);
        enemyHealth->setObjectName(QString::fromUtf8("enemyHealth"));
        enemyHealth->setGeometry(QRect(20, 40, 151, 20));
        enemyShield = new QLabel(groupBox_3);
        enemyShield->setObjectName(QString::fromUtf8("enemyShield"));
        enemyShield->setGeometry(QRect(20, 80, 141, 20));

        retranslateUi(CppGame);

        QMetaObject::connectSlotsByName(CppGame);
    } // setupUi

    void retranslateUi(QDialog *CppGame)
    {
        CppGame->setWindowTitle(QCoreApplication::translate("CppGame", "Dialog", nullptr));
        enemy->setText(QString());
        hero->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("CppGame", "Move", nullptr));
        KICK->setText(QCoreApplication::translate("CppGame", "KICK", nullptr));
        HEAL->setText(QCoreApplication::translate("CppGame", "HEAL", nullptr));
        RUN->setText(QCoreApplication::translate("CppGame", "RUN", nullptr));
        Move->setText(QCoreApplication::translate("CppGame", "DO IT!", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CppGame", "HeroStats", nullptr));
        heroHealth->setText(QCoreApplication::translate("CppGame", "Health:", nullptr));
        heroShield->setText(QCoreApplication::translate("CppGame", "Shield:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("CppGame", "EnemyStats", nullptr));
        enemyHealth->setText(QCoreApplication::translate("CppGame", "Health:", nullptr));
        enemyShield->setText(QCoreApplication::translate("CppGame", "Shield:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CppGame: public Ui_CppGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPPGAME_H
