/********************************************************************************
** Form generated from reading UI file 'redacthuman.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDACTHUMAN_H
#define UI_REDACTHUMAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RedactHuman
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *surname_label;
    QLabel *name_label;
    QLabel *patronymic_label;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *status_label;
    QLineEdit *status_edit;
    QSpacerItem *verticalSpacer_5;
    QLabel *data_in_label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *data_out_label;
    QLineEdit *data_out_edit;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *building_number_label;
    QComboBox *building_combobox;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *room_number_label;
    QComboBox *room_combobox;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *phine_label;
    QLineEdit *phone_edit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mail_label;
    QLineEdit *mail_edit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *redacted;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *RedactHuman)
    {
        if (RedactHuman->objectName().isEmpty())
            RedactHuman->setObjectName(QStringLiteral("RedactHuman"));
        RedactHuman->resize(400, 420);
        RedactHuman->setMinimumSize(QSize(400, 420));
        RedactHuman->setMaximumSize(QSize(400, 420));
        verticalLayout = new QVBoxLayout(RedactHuman);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        surname_label = new QLabel(RedactHuman);
        surname_label->setObjectName(QStringLiteral("surname_label"));
        QFont font;
        font.setPointSize(12);
        surname_label->setFont(font);

        verticalLayout->addWidget(surname_label);

        name_label = new QLabel(RedactHuman);
        name_label->setObjectName(QStringLiteral("name_label"));
        name_label->setFont(font);

        verticalLayout->addWidget(name_label);

        patronymic_label = new QLabel(RedactHuman);
        patronymic_label->setObjectName(QStringLiteral("patronymic_label"));
        patronymic_label->setFont(font);

        verticalLayout->addWidget(patronymic_label);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        status_label = new QLabel(RedactHuman);
        status_label->setObjectName(QStringLiteral("status_label"));
        status_label->setMinimumSize(QSize(150, 0));
        status_label->setMaximumSize(QSize(150, 16777215));
        status_label->setFont(font);

        horizontalLayout_5->addWidget(status_label);

        status_edit = new QLineEdit(RedactHuman);
        status_edit->setObjectName(QStringLiteral("status_edit"));
        status_edit->setMinimumSize(QSize(150, 0));
        status_edit->setMaximumSize(QSize(999, 16777215));

        horizontalLayout_5->addWidget(status_edit);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        data_in_label = new QLabel(RedactHuman);
        data_in_label->setObjectName(QStringLiteral("data_in_label"));
        data_in_label->setMinimumSize(QSize(150, 0));
        data_in_label->setMaximumSize(QSize(999999, 16777215));
        data_in_label->setFont(font);

        verticalLayout->addWidget(data_in_label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        data_out_label = new QLabel(RedactHuman);
        data_out_label->setObjectName(QStringLiteral("data_out_label"));
        data_out_label->setMinimumSize(QSize(150, 0));
        data_out_label->setMaximumSize(QSize(150, 16777215));
        data_out_label->setFont(font);

        horizontalLayout_4->addWidget(data_out_label);

        data_out_edit = new QLineEdit(RedactHuman);
        data_out_edit->setObjectName(QStringLiteral("data_out_edit"));
        data_out_edit->setMinimumSize(QSize(150, 0));
        data_out_edit->setMaximumSize(QSize(999, 16777215));

        horizontalLayout_4->addWidget(data_out_edit);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        building_number_label = new QLabel(RedactHuman);
        building_number_label->setObjectName(QStringLiteral("building_number_label"));
        building_number_label->setMinimumSize(QSize(150, 0));
        building_number_label->setMaximumSize(QSize(150, 16777215));
        building_number_label->setFont(font);

        horizontalLayout_6->addWidget(building_number_label);


        horizontalLayout_9->addLayout(horizontalLayout_6);

        building_combobox = new QComboBox(RedactHuman);
        building_combobox->setObjectName(QStringLiteral("building_combobox"));

        horizontalLayout_9->addWidget(building_combobox);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        room_number_label = new QLabel(RedactHuman);
        room_number_label->setObjectName(QStringLiteral("room_number_label"));
        room_number_label->setMinimumSize(QSize(150, 0));
        room_number_label->setMaximumSize(QSize(150, 16777215));
        room_number_label->setFont(font);

        horizontalLayout_7->addWidget(room_number_label);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        room_combobox = new QComboBox(RedactHuman);
        room_combobox->setObjectName(QStringLiteral("room_combobox"));

        horizontalLayout_8->addWidget(room_combobox);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        phine_label = new QLabel(RedactHuman);
        phine_label->setObjectName(QStringLiteral("phine_label"));
        phine_label->setMinimumSize(QSize(150, 0));
        phine_label->setMaximumSize(QSize(150, 16777215));
        phine_label->setFont(font);

        horizontalLayout_3->addWidget(phine_label);

        phone_edit = new QLineEdit(RedactHuman);
        phone_edit->setObjectName(QStringLiteral("phone_edit"));
        phone_edit->setMinimumSize(QSize(150, 0));
        phone_edit->setMaximumSize(QSize(999, 16777215));

        horizontalLayout_3->addWidget(phone_edit);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mail_label = new QLabel(RedactHuman);
        mail_label->setObjectName(QStringLiteral("mail_label"));
        mail_label->setMinimumSize(QSize(150, 0));
        mail_label->setMaximumSize(QSize(150, 16777215));
        mail_label->setFont(font);

        horizontalLayout_2->addWidget(mail_label);

        mail_edit = new QLineEdit(RedactHuman);
        mail_edit->setObjectName(QStringLiteral("mail_edit"));
        mail_edit->setMinimumSize(QSize(150, 0));
        mail_edit->setMaximumSize(QSize(999, 16777215));

        horizontalLayout_2->addWidget(mail_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        redacted = new QPushButton(RedactHuman);
        redacted->setObjectName(QStringLiteral("redacted"));

        horizontalLayout->addWidget(redacted);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RedactHuman);

        QMetaObject::connectSlotsByName(RedactHuman);
    } // setupUi

    void retranslateUi(QWidget *RedactHuman)
    {
        RedactHuman->setWindowTitle(QApplication::translate("RedactHuman", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", Q_NULLPTR));
        surname_label->setText(QApplication::translate("RedactHuman", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", Q_NULLPTR));
        name_label->setText(QApplication::translate("RedactHuman", "\320\230\320\274\321\217", Q_NULLPTR));
        patronymic_label->setText(QApplication::translate("RedactHuman", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", Q_NULLPTR));
        status_label->setText(QApplication::translate("RedactHuman", "\320\241\321\202\320\260\321\202\321\203\321\201", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        status_edit->setToolTip(QApplication::translate("RedactHuman", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214 \320\270\320\273\320\270 \320\263\321\200\321\203\320\277\320\277\321\203.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        data_in_label->setText(QApplication::translate("RedactHuman", "\320\224\320\260\321\202\320\260 \320\267\320\260\321\201\320\265\320\273\320\265\320\275\320\270\321\217", Q_NULLPTR));
        data_out_label->setText(QApplication::translate("RedactHuman", "\320\224\320\260\321\202\320\260 \320\262\321\213\321\201\320\265\320\273\320\265\320\275\320\270\321\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        data_out_edit->setToolTip(QApplication::translate("RedactHuman", "\320\244\320\276\321\200\320\274\320\260\321\202 \320\264\320\260\321\202\321\213 2020-01-10", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        building_number_label->setText(QApplication::translate("RedactHuman", "\320\235\320\276\320\274\320\265\321\200 \320\272\320\276\321\200\320\277\321\203\321\201\320\260", Q_NULLPTR));
        room_number_label->setText(QApplication::translate("RedactHuman", "\320\235\320\276\320\274\320\265\321\200 \320\272\320\276\320\274\320\275\320\260\321\202\321\213", Q_NULLPTR));
        phine_label->setText(QApplication::translate("RedactHuman", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", Q_NULLPTR));
        mail_label->setText(QApplication::translate("RedactHuman", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\320\260\321\217 \320\277\320\276\321\207\321\202\320\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        redacted->setToolTip(QApplication::translate("RedactHuman", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        redacted->setText(QApplication::translate("RedactHuman", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RedactHuman: public Ui_RedactHuman {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDACTHUMAN_H
