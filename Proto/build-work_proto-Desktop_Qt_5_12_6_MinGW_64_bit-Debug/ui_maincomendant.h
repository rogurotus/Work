/********************************************************************************
** Form generated from reading UI file 'maincomendant.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCOMENDANT_H
#define UI_MAINCOMENDANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainComendant
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *action_9;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QGroupBox *dormitory_groupbox;
    QVBoxLayout *verticalLayout_4;
    QLabel *address_label;
    QLabel *comendant_label;
    QSpacerItem *verticalSpacer;
    QLabel *building_1_label;
    QLabel *room_amount_1_label;
    QLabel *place_amount_1_label;
    QSpacerItem *verticalSpacer_2;
    QLabel *building_2_label;
    QLabel *room_amount_2_label;
    QLabel *place_amount_2_label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *state_label;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainComendant)
    {
        if (MainComendant->objectName().isEmpty())
            MainComendant->setObjectName(QString::fromUtf8("MainComendant"));
        MainComendant->resize(800, 457);
        action = new QAction(MainComendant);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainComendant);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(MainComendant);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainComendant);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainComendant);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(MainComendant);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(MainComendant);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        action_8 = new QAction(MainComendant);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        action_9 = new QAction(MainComendant);
        action_9->setObjectName(QString::fromUtf8("action_9"));
        centralwidget = new QWidget(MainComendant);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dormitory_groupbox = new QGroupBox(centralwidget);
        dormitory_groupbox->setObjectName(QString::fromUtf8("dormitory_groupbox"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        dormitory_groupbox->setFont(font);
        verticalLayout_4 = new QVBoxLayout(dormitory_groupbox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        address_label = new QLabel(dormitory_groupbox);
        address_label->setObjectName(QString::fromUtf8("address_label"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        address_label->setFont(font1);

        verticalLayout_4->addWidget(address_label);

        comendant_label = new QLabel(dormitory_groupbox);
        comendant_label->setObjectName(QString::fromUtf8("comendant_label"));
        comendant_label->setFont(font1);

        verticalLayout_4->addWidget(comendant_label);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        building_1_label = new QLabel(dormitory_groupbox);
        building_1_label->setObjectName(QString::fromUtf8("building_1_label"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        building_1_label->setFont(font2);

        verticalLayout_4->addWidget(building_1_label);

        room_amount_1_label = new QLabel(dormitory_groupbox);
        room_amount_1_label->setObjectName(QString::fromUtf8("room_amount_1_label"));
        room_amount_1_label->setFont(font1);

        verticalLayout_4->addWidget(room_amount_1_label);

        place_amount_1_label = new QLabel(dormitory_groupbox);
        place_amount_1_label->setObjectName(QString::fromUtf8("place_amount_1_label"));
        place_amount_1_label->setFont(font1);

        verticalLayout_4->addWidget(place_amount_1_label);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        building_2_label = new QLabel(dormitory_groupbox);
        building_2_label->setObjectName(QString::fromUtf8("building_2_label"));
        building_2_label->setFont(font2);

        verticalLayout_4->addWidget(building_2_label);

        room_amount_2_label = new QLabel(dormitory_groupbox);
        room_amount_2_label->setObjectName(QString::fromUtf8("room_amount_2_label"));
        room_amount_2_label->setFont(font1);

        verticalLayout_4->addWidget(room_amount_2_label);

        place_amount_2_label = new QLabel(dormitory_groupbox);
        place_amount_2_label->setObjectName(QString::fromUtf8("place_amount_2_label"));
        place_amount_2_label->setFont(font1);

        verticalLayout_4->addWidget(place_amount_2_label);


        verticalLayout->addWidget(dormitory_groupbox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font3;
        font3.setPointSize(12);
        pushButton->setFont(font3);

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout);

        state_label = new QLabel(centralwidget);
        state_label->setObjectName(QString::fromUtf8("state_label"));
        state_label->setMaximumSize(QSize(16777215, 10));

        verticalLayout_3->addWidget(state_label);

        MainComendant->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainComendant);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        MainComendant->setMenuBar(menubar);
        statusbar = new QStatusBar(MainComendant);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainComendant->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu_2->addAction(action_3);
        menu_2->addAction(action_4);
        menu_2->addAction(action_5);
        menu_2->addAction(action_6);
        menu_3->addAction(action_7);
        menu_4->addAction(action_8);
        menu_4->addAction(action_9);

        retranslateUi(MainComendant);

        QMetaObject::connectSlotsByName(MainComendant);
    } // setupUi

    void retranslateUi(QMainWindow *MainComendant)
    {
        MainComendant->setWindowTitle(QApplication::translate("MainComendant", "\320\240\320\265\320\266\320\270\320\274 \320\272\320\276\320\274\320\265\320\275\320\264\320\260\320\275\321\202\320\260", nullptr));
        action->setText(QApplication::translate("MainComendant", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \320\267\320\260\321\201\320\265\320\273\320\265\320\275\320\275\321\213\321\205 \320\273\320\270\321\206\320\260\321\205", nullptr));
        action_2->setText(QApplication::translate("MainComendant", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \320\262\321\213\321\201\320\265\320\273\320\265\320\275\320\275\321\213\321\205 \320\273\320\270\321\206\320\260\321\205", nullptr));
        action_3->setText(QApplication::translate("MainComendant", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\321\213\321\205 \320\274\320\265\321\201\321\202", nullptr));
        action_4->setText(QApplication::translate("MainComendant", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\321\213\321\205 \320\272\320\276\320\274\320\275\320\260\321\202", nullptr));
        action_5->setText(QApplication::translate("MainComendant", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \320\272\320\276\320\274\320\275\320\260\321\202\320\265", nullptr));
        action_6->setText(QApplication::translate("MainComendant", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\277\321\200\320\276\320\266\320\270\320\262\320\260\321\216\321\211\320\270\321\205", nullptr));
        action_7->setText(QApplication::translate("MainComendant", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\267\320\260\321\217\320\262\320\276\320\272", nullptr));
        action_8->setText(QApplication::translate("MainComendant", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        action_9->setText(QApplication::translate("MainComendant", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\260", nullptr));
        dormitory_groupbox->setTitle(QApplication::translate("MainComendant", "\320\236\320\261\321\211\320\265\320\266\320\270\321\202\320\270\320\265 \342\204\226 0", nullptr));
        address_label->setText(QApplication::translate("MainComendant", "\320\220\320\264\321\200\320\265\321\201:", nullptr));
        comendant_label->setText(QApplication::translate("MainComendant", "\320\232\320\276\320\274\320\265\320\275\320\264\320\260\320\275\321\202: ", nullptr));
        building_1_label->setText(QApplication::translate("MainComendant", "\320\232\320\276\321\200\320\277\321\203\321\201 \342\204\226 0", nullptr));
        room_amount_1_label->setText(QApplication::translate("MainComendant", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202:", nullptr));
        place_amount_1_label->setText(QApplication::translate("MainComendant", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\265\321\201\321\202 \320\262 \320\272\320\276\320\274\320\275\320\260\321\202\320\265:", nullptr));
        building_2_label->setText(QApplication::translate("MainComendant", "\320\232\320\276\321\200\320\277\321\203\321\201 \342\204\226 0", nullptr));
        room_amount_2_label->setText(QApplication::translate("MainComendant", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202:", nullptr));
        place_amount_2_label->setText(QApplication::translate("MainComendant", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\265\321\201\321\202 \320\262 \320\272\320\276\320\274\320\275\320\260\321\202\320\265:", nullptr));
        pushButton->setText(QApplication::translate("MainComendant", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        state_label->setText(QApplication::translate("MainComendant", "\320\232\320\276\320\274\320\265\320\275\320\264\320\260\320\275\321\202: \320\223\320\273\320\260\320\262\320\275\320\260\321\217", nullptr));
        menu->setTitle(QApplication::translate("MainComendant", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\276\320\261\321\211\320\265\320\266\320\270\321\202\320\270\320\265\320\274", nullptr));
        menu_2->setTitle(QApplication::translate("MainComendant", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
        menu_3->setTitle(QApplication::translate("MainComendant", "\320\227\320\260\321\217\320\262\320\272\320\270", nullptr));
        menu_4->setTitle(QApplication::translate("MainComendant", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainComendant: public Ui_MainComendant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCOMENDANT_H
