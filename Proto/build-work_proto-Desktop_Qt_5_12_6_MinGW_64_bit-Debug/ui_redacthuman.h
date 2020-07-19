/********************************************************************************
** Form generated from reading UI file 'redacthuman.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDACTHUMAN_H
#define UI_REDACTHUMAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RedactHuman
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *name_label;
    QLabel *surname_label;
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
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *room_number_label;
    QSpinBox *room_number_spinbox;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *building_number_label;
    QSpinBox *building_number_spinbox;
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
            RedactHuman->setObjectName(QString::fromUtf8("RedactHuman"));
        RedactHuman->resize(400, 420);
        RedactHuman->setMinimumSize(QSize(400, 420));
        RedactHuman->setMaximumSize(QSize(400, 420));
        verticalLayout = new QVBoxLayout(RedactHuman);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        name_label = new QLabel(RedactHuman);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        QFont font;
        font.setPointSize(12);
        name_label->setFont(font);

        verticalLayout->addWidget(name_label);

        surname_label = new QLabel(RedactHuman);
        surname_label->setObjectName(QString::fromUtf8("surname_label"));
        surname_label->setFont(font);

        verticalLayout->addWidget(surname_label);

        patronymic_label = new QLabel(RedactHuman);
        patronymic_label->setObjectName(QString::fromUtf8("patronymic_label"));
        patronymic_label->setFont(font);

        verticalLayout->addWidget(patronymic_label);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        status_label = new QLabel(RedactHuman);
        status_label->setObjectName(QString::fromUtf8("status_label"));
        status_label->setMinimumSize(QSize(150, 0));
        status_label->setMaximumSize(QSize(150, 16777215));
        status_label->setFont(font);

        horizontalLayout_5->addWidget(status_label);

        status_edit = new QLineEdit(RedactHuman);
        status_edit->setObjectName(QString::fromUtf8("status_edit"));
        status_edit->setMinimumSize(QSize(150, 0));
        status_edit->setMaximumSize(QSize(999, 16777215));

        horizontalLayout_5->addWidget(status_edit);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        data_in_label = new QLabel(RedactHuman);
        data_in_label->setObjectName(QString::fromUtf8("data_in_label"));
        data_in_label->setMinimumSize(QSize(150, 0));
        data_in_label->setMaximumSize(QSize(999999, 16777215));
        data_in_label->setFont(font);

        verticalLayout->addWidget(data_in_label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        data_out_label = new QLabel(RedactHuman);
        data_out_label->setObjectName(QString::fromUtf8("data_out_label"));
        data_out_label->setMinimumSize(QSize(150, 0));
        data_out_label->setMaximumSize(QSize(150, 16777215));
        data_out_label->setFont(font);

        horizontalLayout_4->addWidget(data_out_label);

        data_out_edit = new QLineEdit(RedactHuman);
        data_out_edit->setObjectName(QString::fromUtf8("data_out_edit"));
        data_out_edit->setMinimumSize(QSize(150, 0));
        data_out_edit->setMaximumSize(QSize(999, 16777215));

        horizontalLayout_4->addWidget(data_out_edit);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        room_number_label = new QLabel(RedactHuman);
        room_number_label->setObjectName(QString::fromUtf8("room_number_label"));
        room_number_label->setMinimumSize(QSize(150, 0));
        room_number_label->setMaximumSize(QSize(150, 16777215));
        room_number_label->setFont(font);

        horizontalLayout_7->addWidget(room_number_label);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        room_number_spinbox = new QSpinBox(RedactHuman);
        room_number_spinbox->setObjectName(QString::fromUtf8("room_number_spinbox"));
        room_number_spinbox->setMinimumSize(QSize(100, 0));
        room_number_spinbox->setMaximumSize(QSize(999, 16777215));

        horizontalLayout_8->addWidget(room_number_spinbox);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        building_number_label = new QLabel(RedactHuman);
        building_number_label->setObjectName(QString::fromUtf8("building_number_label"));
        building_number_label->setMinimumSize(QSize(150, 0));
        building_number_label->setMaximumSize(QSize(150, 16777215));
        building_number_label->setFont(font);

        horizontalLayout_6->addWidget(building_number_label);


        horizontalLayout_9->addLayout(horizontalLayout_6);

        building_number_spinbox = new QSpinBox(RedactHuman);
        building_number_spinbox->setObjectName(QString::fromUtf8("building_number_spinbox"));
        building_number_spinbox->setMinimumSize(QSize(100, 0));
        building_number_spinbox->setMaximumSize(QSize(999, 16777215));

        horizontalLayout_9->addWidget(building_number_spinbox);


        verticalLayout->addLayout(horizontalLayout_9);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        phine_label = new QLabel(RedactHuman);
        phine_label->setObjectName(QString::fromUtf8("phine_label"));
        phine_label->setMinimumSize(QSize(150, 0));
        phine_label->setMaximumSize(QSize(150, 16777215));
        phine_label->setFont(font);

        horizontalLayout_3->addWidget(phine_label);

        phone_edit = new QLineEdit(RedactHuman);
        phone_edit->setObjectName(QString::fromUtf8("phone_edit"));
        phone_edit->setMinimumSize(QSize(150, 0));
        phone_edit->setMaximumSize(QSize(999, 16777215));

        horizontalLayout_3->addWidget(phone_edit);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mail_label = new QLabel(RedactHuman);
        mail_label->setObjectName(QString::fromUtf8("mail_label"));
        mail_label->setMinimumSize(QSize(150, 0));
        mail_label->setMaximumSize(QSize(150, 16777215));
        mail_label->setFont(font);

        horizontalLayout_2->addWidget(mail_label);

        mail_edit = new QLineEdit(RedactHuman);
        mail_edit->setObjectName(QString::fromUtf8("mail_edit"));
        mail_edit->setMinimumSize(QSize(150, 0));
        mail_edit->setMaximumSize(QSize(999, 16777215));

        horizontalLayout_2->addWidget(mail_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        redacted = new QPushButton(RedactHuman);
        redacted->setObjectName(QString::fromUtf8("redacted"));

        horizontalLayout->addWidget(redacted);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RedactHuman);

        QMetaObject::connectSlotsByName(RedactHuman);
    } // setupUi

    void retranslateUi(QWidget *RedactHuman)
    {
        RedactHuman->setWindowTitle(QApplication::translate("RedactHuman", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        name_label->setText(QApplication::translate("RedactHuman", "\320\230\320\274\321\217", nullptr));
        surname_label->setText(QApplication::translate("RedactHuman", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        patronymic_label->setText(QApplication::translate("RedactHuman", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        status_label->setText(QApplication::translate("RedactHuman", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        data_in_label->setText(QApplication::translate("RedactHuman", "\320\224\320\260\321\202\320\260 \320\267\320\260\321\201\320\265\320\273\320\265\320\275\320\270\321\217", nullptr));
        data_out_label->setText(QApplication::translate("RedactHuman", "\320\224\320\260\321\202\320\260 \320\262\321\213\321\201\320\265\320\273\320\265\320\275\320\270\321\217", nullptr));
        room_number_label->setText(QApplication::translate("RedactHuman", "\320\235\320\276\320\274\320\265\321\200 \320\272\320\276\320\274\320\275\320\260\321\202\321\213", nullptr));
        building_number_label->setText(QApplication::translate("RedactHuman", "\320\235\320\276\320\274\320\265\321\200 \320\272\320\276\321\200\320\277\321\203\321\201\320\260", nullptr));
        phine_label->setText(QApplication::translate("RedactHuman", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        mail_label->setText(QApplication::translate("RedactHuman", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\320\260\321\217 \320\277\320\276\321\207\321\202\320\260", nullptr));
        redacted->setText(QApplication::translate("RedactHuman", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RedactHuman: public Ui_RedactHuman {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDACTHUMAN_H
