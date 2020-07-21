/********************************************************************************
** Form generated from reading UI file 'mainvisiter.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVISITER_H
#define UI_MAINVISITER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainVisiter
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *dormitory1_groupbox;
    QVBoxLayout *verticalLayout_4;
    QLabel *address1_label;
    QLabel *comendant1_label;
    QSpacerItem *verticalSpacer;
    QLabel *building11_label;
    QLabel *room_amount11_label;
    QSpacerItem *verticalSpacer_2;
    QLabel *building12_label;
    QLabel *room_amount12_label;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *dormitory2_groupbox;
    QVBoxLayout *verticalLayout_5;
    QLabel *address2_label;
    QLabel *comendant2_label;
    QSpacerItem *verticalSpacer_3;
    QLabel *building21_label;
    QLabel *room_amount21_label;
    QSpacerItem *verticalSpacer_4;
    QLabel *building22_label;
    QLabel *room_amount22_label;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *state_label;

    void setupUi(QWidget *MainVisiter)
    {
        if (MainVisiter->objectName().isEmpty())
            MainVisiter->setObjectName(QStringLiteral("MainVisiter"));
        MainVisiter->resize(900, 493);
        MainVisiter->setMinimumSize(QSize(900, 460));
        verticalLayout = new QVBoxLayout(MainVisiter);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        dormitory1_groupbox = new QGroupBox(MainVisiter);
        dormitory1_groupbox->setObjectName(QStringLiteral("dormitory1_groupbox"));
        dormitory1_groupbox->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        dormitory1_groupbox->setFont(font);
        verticalLayout_4 = new QVBoxLayout(dormitory1_groupbox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        address1_label = new QLabel(dormitory1_groupbox);
        address1_label->setObjectName(QStringLiteral("address1_label"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        address1_label->setFont(font1);

        verticalLayout_4->addWidget(address1_label);

        comendant1_label = new QLabel(dormitory1_groupbox);
        comendant1_label->setObjectName(QStringLiteral("comendant1_label"));
        comendant1_label->setFont(font1);

        verticalLayout_4->addWidget(comendant1_label);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        building11_label = new QLabel(dormitory1_groupbox);
        building11_label->setObjectName(QStringLiteral("building11_label"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        building11_label->setFont(font2);

        verticalLayout_4->addWidget(building11_label);

        room_amount11_label = new QLabel(dormitory1_groupbox);
        room_amount11_label->setObjectName(QStringLiteral("room_amount11_label"));
        room_amount11_label->setFont(font1);

        verticalLayout_4->addWidget(room_amount11_label);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        building12_label = new QLabel(dormitory1_groupbox);
        building12_label->setObjectName(QStringLiteral("building12_label"));
        building12_label->setFont(font2);

        verticalLayout_4->addWidget(building12_label);

        room_amount12_label = new QLabel(dormitory1_groupbox);
        room_amount12_label->setObjectName(QStringLiteral("room_amount12_label"));
        room_amount12_label->setFont(font1);

        verticalLayout_4->addWidget(room_amount12_label);


        verticalLayout_2->addWidget(dormitory1_groupbox);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        dormitory2_groupbox = new QGroupBox(MainVisiter);
        dormitory2_groupbox->setObjectName(QStringLiteral("dormitory2_groupbox"));
        dormitory2_groupbox->setMinimumSize(QSize(0, 0));
        dormitory2_groupbox->setFont(font);
        verticalLayout_5 = new QVBoxLayout(dormitory2_groupbox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        address2_label = new QLabel(dormitory2_groupbox);
        address2_label->setObjectName(QStringLiteral("address2_label"));
        address2_label->setFont(font1);

        verticalLayout_5->addWidget(address2_label);

        comendant2_label = new QLabel(dormitory2_groupbox);
        comendant2_label->setObjectName(QStringLiteral("comendant2_label"));
        comendant2_label->setFont(font1);

        verticalLayout_5->addWidget(comendant2_label);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_3);

        building21_label = new QLabel(dormitory2_groupbox);
        building21_label->setObjectName(QStringLiteral("building21_label"));
        building21_label->setFont(font2);

        verticalLayout_5->addWidget(building21_label);

        room_amount21_label = new QLabel(dormitory2_groupbox);
        room_amount21_label->setObjectName(QStringLiteral("room_amount21_label"));
        room_amount21_label->setFont(font1);

        verticalLayout_5->addWidget(room_amount21_label);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_4);

        building22_label = new QLabel(dormitory2_groupbox);
        building22_label->setObjectName(QStringLiteral("building22_label"));
        building22_label->setFont(font2);

        verticalLayout_5->addWidget(building22_label);

        room_amount22_label = new QLabel(dormitory2_groupbox);
        room_amount22_label->setObjectName(QStringLiteral("room_amount22_label"));
        room_amount22_label->setFont(font1);

        verticalLayout_5->addWidget(room_amount22_label);


        verticalLayout_3->addWidget(dormitory2_groupbox);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_8);


        horizontalLayout_4->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(MainVisiter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font3;
        font3.setPointSize(12);
        pushButton->setFont(font3);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        state_label = new QLabel(MainVisiter);
        state_label->setObjectName(QStringLiteral("state_label"));
        state_label->setMinimumSize(QSize(0, 10));
        state_label->setMaximumSize(QSize(16777215, 10));

        verticalLayout->addWidget(state_label);


        retranslateUi(MainVisiter);

        QMetaObject::connectSlotsByName(MainVisiter);
    } // setupUi

    void retranslateUi(QWidget *MainVisiter)
    {
        MainVisiter->setWindowTitle(QApplication::translate("MainVisiter", "\320\223\320\276\321\201\321\202\321\214", Q_NULLPTR));
        dormitory1_groupbox->setTitle(QApplication::translate("MainVisiter", "\320\236\320\261\321\211\320\265\320\266\320\270\321\202\320\270\320\265 \342\204\226 0", Q_NULLPTR));
        address1_label->setText(QApplication::translate("MainVisiter", "\320\220\320\264\321\200\320\265\321\201: ", Q_NULLPTR));
        comendant1_label->setText(QApplication::translate("MainVisiter", "\320\232\320\276\320\274\320\265\320\275\320\264\320\260\320\275\321\202:", Q_NULLPTR));
        building11_label->setText(QApplication::translate("MainVisiter", "\320\232\320\276\321\200\320\277\321\203\321\201 \342\204\226 0", Q_NULLPTR));
        room_amount11_label->setText(QApplication::translate("MainVisiter", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\321\213\321\205 \320\272\320\276\320\274\320\275\320\260\321\202: ", Q_NULLPTR));
        building12_label->setText(QApplication::translate("MainVisiter", "\320\232\320\276\321\200\320\277\321\203\321\201 \342\204\226 0", Q_NULLPTR));
        room_amount12_label->setText(QApplication::translate("MainVisiter", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\321\213\321\205 \320\272\320\276\320\274\320\275\320\260\321\202: ", Q_NULLPTR));
        dormitory2_groupbox->setTitle(QApplication::translate("MainVisiter", "\320\236\320\261\321\211\320\265\320\266\320\270\321\202\320\270\320\265 \342\204\226 0", Q_NULLPTR));
        address2_label->setText(QApplication::translate("MainVisiter", "\320\220\320\264\321\200\320\265\321\201: ", Q_NULLPTR));
        comendant2_label->setText(QApplication::translate("MainVisiter", "\320\232\320\276\320\274\320\265\320\275\320\264\320\260\320\275\321\202:", Q_NULLPTR));
        building21_label->setText(QApplication::translate("MainVisiter", "\320\232\320\276\321\200\320\277\321\203\321\201 \342\204\226 0", Q_NULLPTR));
        room_amount21_label->setText(QApplication::translate("MainVisiter", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\321\213\321\205 \320\272\320\276\320\274\320\275\320\260\321\202:", Q_NULLPTR));
        building22_label->setText(QApplication::translate("MainVisiter", "\320\232\320\276\321\200\320\277\321\203\321\201 \342\204\226 0", Q_NULLPTR));
        room_amount22_label->setText(QApplication::translate("MainVisiter", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\321\213\321\205 \320\272\320\276\320\274\320\275\320\260\321\202: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainVisiter", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \320\270 \320\276\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\321\217\320\262\320\272\321\203 \320\275\320\260 \320\267\320\260\321\201\320\265\320\273\320\265\320\275\320\270\320\265.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("MainVisiter", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \320\267\320\260\321\217\320\262\320\272\321\203", Q_NULLPTR));
        state_label->setText(QApplication::translate("MainVisiter", "\320\223\320\276\321\201\321\202\321\214: \320\223\320\273\320\260\320\262\320\275\320\260\321\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainVisiter: public Ui_MainVisiter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVISITER_H
