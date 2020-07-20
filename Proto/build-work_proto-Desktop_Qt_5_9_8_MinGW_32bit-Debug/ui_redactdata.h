/********************************************************************************
** Form generated from reading UI file 'redactdata.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDACTDATA_H
#define UI_REDACTDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RedactData
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *address_label;
    QLineEdit *address_edit;
    QSpacerItem *verticalSpacer_3;
    QLabel *surname_label;
    QLineEdit *surname_edit;
    QLabel *name_label;
    QLineEdit *name_edit;
    QLabel *patronymic_label;
    QLineEdit *patronymic_edit;
    QSpacerItem *verticalSpacer;
    QLabel *building1_label;
    QLabel *room_amount1_label;
    QLineEdit *room_amount1_edit;
    QLabel *place_amount1_label;
    QSpinBox *place_amount1_spinbox;
    QSpacerItem *verticalSpacer_2;
    QLabel *building2_label;
    QLabel *room_amount2_label;
    QLineEdit *room_amount2_edit;
    QLabel *place_amount2_label;
    QSpinBox *place_amount2_spinbox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *RedactData)
    {
        if (RedactData->objectName().isEmpty())
            RedactData->setObjectName(QStringLiteral("RedactData"));
        RedactData->resize(350, 600);
        RedactData->setMinimumSize(QSize(350, 600));
        RedactData->setMaximumSize(QSize(350, 600));
        verticalLayout = new QVBoxLayout(RedactData);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        address_label = new QLabel(RedactData);
        address_label->setObjectName(QStringLiteral("address_label"));
        QFont font;
        font.setPointSize(10);
        address_label->setFont(font);

        verticalLayout->addWidget(address_label);

        address_edit = new QLineEdit(RedactData);
        address_edit->setObjectName(QStringLiteral("address_edit"));

        verticalLayout->addWidget(address_edit);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        surname_label = new QLabel(RedactData);
        surname_label->setObjectName(QStringLiteral("surname_label"));
        surname_label->setFont(font);

        verticalLayout->addWidget(surname_label);

        surname_edit = new QLineEdit(RedactData);
        surname_edit->setObjectName(QStringLiteral("surname_edit"));

        verticalLayout->addWidget(surname_edit);

        name_label = new QLabel(RedactData);
        name_label->setObjectName(QStringLiteral("name_label"));
        name_label->setFont(font);

        verticalLayout->addWidget(name_label);

        name_edit = new QLineEdit(RedactData);
        name_edit->setObjectName(QStringLiteral("name_edit"));

        verticalLayout->addWidget(name_edit);

        patronymic_label = new QLabel(RedactData);
        patronymic_label->setObjectName(QStringLiteral("patronymic_label"));
        patronymic_label->setFont(font);

        verticalLayout->addWidget(patronymic_label);

        patronymic_edit = new QLineEdit(RedactData);
        patronymic_edit->setObjectName(QStringLiteral("patronymic_edit"));

        verticalLayout->addWidget(patronymic_edit);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        building1_label = new QLabel(RedactData);
        building1_label->setObjectName(QStringLiteral("building1_label"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        building1_label->setFont(font1);

        verticalLayout->addWidget(building1_label);

        room_amount1_label = new QLabel(RedactData);
        room_amount1_label->setObjectName(QStringLiteral("room_amount1_label"));
        room_amount1_label->setFont(font);

        verticalLayout->addWidget(room_amount1_label);

        room_amount1_edit = new QLineEdit(RedactData);
        room_amount1_edit->setObjectName(QStringLiteral("room_amount1_edit"));

        verticalLayout->addWidget(room_amount1_edit);

        place_amount1_label = new QLabel(RedactData);
        place_amount1_label->setObjectName(QStringLiteral("place_amount1_label"));
        place_amount1_label->setFont(font);

        verticalLayout->addWidget(place_amount1_label);

        place_amount1_spinbox = new QSpinBox(RedactData);
        place_amount1_spinbox->setObjectName(QStringLiteral("place_amount1_spinbox"));
        place_amount1_spinbox->setMaximumSize(QSize(50, 16777215));

        verticalLayout->addWidget(place_amount1_spinbox);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        building2_label = new QLabel(RedactData);
        building2_label->setObjectName(QStringLiteral("building2_label"));
        building2_label->setFont(font1);

        verticalLayout->addWidget(building2_label);

        room_amount2_label = new QLabel(RedactData);
        room_amount2_label->setObjectName(QStringLiteral("room_amount2_label"));
        room_amount2_label->setFont(font);

        verticalLayout->addWidget(room_amount2_label);

        room_amount2_edit = new QLineEdit(RedactData);
        room_amount2_edit->setObjectName(QStringLiteral("room_amount2_edit"));

        verticalLayout->addWidget(room_amount2_edit);

        place_amount2_label = new QLabel(RedactData);
        place_amount2_label->setObjectName(QStringLiteral("place_amount2_label"));
        place_amount2_label->setFont(font);

        verticalLayout->addWidget(place_amount2_label);

        place_amount2_spinbox = new QSpinBox(RedactData);
        place_amount2_spinbox->setObjectName(QStringLiteral("place_amount2_spinbox"));
        place_amount2_spinbox->setMaximumSize(QSize(50, 16777215));

        verticalLayout->addWidget(place_amount2_spinbox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(RedactData);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(RedactData);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RedactData);

        QMetaObject::connectSlotsByName(RedactData);
    } // setupUi

    void retranslateUi(QWidget *RedactData)
    {
        RedactData->setWindowTitle(QApplication::translate("RedactData", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\264\320\260\320\275\320\275\321\213\321\205", Q_NULLPTR));
        address_label->setText(QApplication::translate("RedactData", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\260\320\264\321\200\320\265\321\201 \320\276\320\261\321\211\320\265\320\266\320\270\321\202\320\270\321\217", Q_NULLPTR));
        surname_label->setText(QApplication::translate("RedactData", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\204\320\260\320\274\320\270\320\273\320\270\321\216 \320\272\320\276\320\274\320\265\320\275\320\264\320\260\320\275\321\202\320\260", Q_NULLPTR));
        name_label->setText(QApplication::translate("RedactData", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \320\272\320\276\320\274\320\265\320\275\320\264\320\260\320\275\321\202\320\260", Q_NULLPTR));
        patronymic_label->setText(QApplication::translate("RedactData", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\276\321\202\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\274\320\265\320\275\320\264\320\260\320\275\321\202\320\260 (\320\275\320\265\320\276\320\261\321\217\320\267\320\260\321\202\320\265\320\273\321\214\320\275\320\276\320\265 \320\277\320\276\320\273\320\265)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        patronymic_edit->setToolTip(QApplication::translate("RedactData", "\320\235\320\265\320\276\320\261\321\217\320\267\320\260\321\202\320\265\320\273\321\214\320\275\320\276\320\265 \320\264\320\273\321\217 \320\267\320\260\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217 \320\277\320\276\320\273\320\265.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        building1_label->setText(QApplication::translate("RedactData", "\320\232\320\276\321\200\320\277\321\203\321\201 \342\204\226 0", Q_NULLPTR));
        room_amount1_label->setText(QApplication::translate("RedactData", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202", Q_NULLPTR));
        place_amount1_label->setText(QApplication::translate("RedactData", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\265\321\201\321\202 \320\262 \320\272\320\276\320\274\320\275\320\260\321\202\320\265", Q_NULLPTR));
        building2_label->setText(QApplication::translate("RedactData", "\320\232\320\276\321\200\320\277\321\203\321\201 \342\204\226 0", Q_NULLPTR));
        room_amount2_label->setText(QApplication::translate("RedactData", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202", Q_NULLPTR));
        place_amount2_label->setText(QApplication::translate("RedactData", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\265\321\201\321\202 \320\262 \320\272\320\276\320\274\320\275\320\260\321\202\320\265", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("RedactData", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("RedactData", "\320\236\320\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("RedactData", "\320\235\320\265 \320\277\321\200\320\270\320\275\320\270\320\274\320\260\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("RedactData", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RedactData: public Ui_RedactData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDACTDATA_H
