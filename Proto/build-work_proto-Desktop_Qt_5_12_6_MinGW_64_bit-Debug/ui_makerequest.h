/********************************************************************************
** Form generated from reading UI file 'makerequest.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKEREQUEST_H
#define UI_MAKEREQUEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MakeRequest
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *surname_label;
    QLineEdit *surname_edit;
    QLabel *name_label;
    QLineEdit *name_edit;
    QLabel *patronymic_label;
    QLineEdit *patronymic_edit;
    QGroupBox *status_groupbox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *student_radio;
    QRadioButton *sotrudnik_radio;
    QLabel *group_work_label;
    QLineEdit *group_work_edit;
    QLabel *phone_label;
    QLineEdit *phone_edit;
    QLabel *mail_label;
    QLineEdit *mail_edit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *MakeRequest)
    {
        if (MakeRequest->objectName().isEmpty())
            MakeRequest->setObjectName(QString::fromUtf8("MakeRequest"));
        MakeRequest->resize(470, 450);
        MakeRequest->setMinimumSize(QSize(470, 450));
        MakeRequest->setMaximumSize(QSize(470, 450));
        verticalLayout = new QVBoxLayout(MakeRequest);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        surname_label = new QLabel(MakeRequest);
        surname_label->setObjectName(QString::fromUtf8("surname_label"));

        verticalLayout->addWidget(surname_label);

        surname_edit = new QLineEdit(MakeRequest);
        surname_edit->setObjectName(QString::fromUtf8("surname_edit"));

        verticalLayout->addWidget(surname_edit);

        name_label = new QLabel(MakeRequest);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        verticalLayout->addWidget(name_label);

        name_edit = new QLineEdit(MakeRequest);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));

        verticalLayout->addWidget(name_edit);

        patronymic_label = new QLabel(MakeRequest);
        patronymic_label->setObjectName(QString::fromUtf8("patronymic_label"));

        verticalLayout->addWidget(patronymic_label);

        patronymic_edit = new QLineEdit(MakeRequest);
        patronymic_edit->setObjectName(QString::fromUtf8("patronymic_edit"));

        verticalLayout->addWidget(patronymic_edit);

        status_groupbox = new QGroupBox(MakeRequest);
        status_groupbox->setObjectName(QString::fromUtf8("status_groupbox"));
        status_groupbox->setMinimumSize(QSize(0, 80));
        verticalLayout_2 = new QVBoxLayout(status_groupbox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        student_radio = new QRadioButton(status_groupbox);
        student_radio->setObjectName(QString::fromUtf8("student_radio"));

        verticalLayout_2->addWidget(student_radio);

        sotrudnik_radio = new QRadioButton(status_groupbox);
        sotrudnik_radio->setObjectName(QString::fromUtf8("sotrudnik_radio"));

        verticalLayout_2->addWidget(sotrudnik_radio);


        verticalLayout->addWidget(status_groupbox);

        group_work_label = new QLabel(MakeRequest);
        group_work_label->setObjectName(QString::fromUtf8("group_work_label"));

        verticalLayout->addWidget(group_work_label);

        group_work_edit = new QLineEdit(MakeRequest);
        group_work_edit->setObjectName(QString::fromUtf8("group_work_edit"));

        verticalLayout->addWidget(group_work_edit);

        phone_label = new QLabel(MakeRequest);
        phone_label->setObjectName(QString::fromUtf8("phone_label"));

        verticalLayout->addWidget(phone_label);

        phone_edit = new QLineEdit(MakeRequest);
        phone_edit->setObjectName(QString::fromUtf8("phone_edit"));

        verticalLayout->addWidget(phone_edit);

        mail_label = new QLabel(MakeRequest);
        mail_label->setObjectName(QString::fromUtf8("mail_label"));

        verticalLayout->addWidget(mail_label);

        mail_edit = new QLineEdit(MakeRequest);
        mail_edit->setObjectName(QString::fromUtf8("mail_edit"));

        verticalLayout->addWidget(mail_edit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(MakeRequest);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MakeRequest);

        QMetaObject::connectSlotsByName(MakeRequest);
    } // setupUi

    void retranslateUi(QWidget *MakeRequest)
    {
        MakeRequest->setWindowTitle(QApplication::translate("MakeRequest", "\320\227\320\260\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265 \320\267\320\260\321\217\320\262\320\272\320\270 \320\275\320\260 \320\267\320\260\321\201\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        surname_label->setText(QApplication::translate("MakeRequest", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\204\320\260\320\274\320\270\320\273\320\270\321\216", nullptr));
        name_label->setText(QApplication::translate("MakeRequest", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217", nullptr));
        patronymic_label->setText(QApplication::translate("MakeRequest", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\276\321\202\321\207\320\265\321\201\321\202\320\262\320\276 (\320\277\321\200\320\270 \320\276\321\202\321\201\321\203\321\202\321\201\321\202\320\262\320\270\320\270 \320\274\320\276\320\266\320\275\320\276 \320\276\320\277\321\203\321\201\321\202\320\270\321\202\321\214)", nullptr));
#ifndef QT_NO_TOOLTIP
        patronymic_edit->setToolTip(QApplication::translate("MakeRequest", "\320\235\320\265\320\276\320\261\321\217\320\267\320\260\321\202\320\265\320\273\321\214\320\275\320\276\320\265 \320\277\320\276\320\273\320\265.", nullptr));
#endif // QT_NO_TOOLTIP
        status_groupbox->setTitle(QApplication::translate("MakeRequest", "\320\222\321\213 \321\201\321\202\321\203\320\264\320\265\320\275\321\202 \320\270\320\273\320\270 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272?", nullptr));
        student_radio->setText(QApplication::translate("MakeRequest", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202", nullptr));
        sotrudnik_radio->setText(QApplication::translate("MakeRequest", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272", nullptr));
        group_work_label->setText(QApplication::translate("MakeRequest", "\320\225\321\201\320\273\320\270 \320\262\321\213 \321\201\321\202\321\203\320\264\320\265\320\275\321\202, \321\203\320\272\320\260\320\266\320\270\321\202\320\265 \320\262\320\260\321\210\321\203 \320\263\321\200\321\203\320\277\320\277\321\203. \320\225\321\201\320\273\320\270 \320\262\321\213 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272, \321\203\320\272\320\260\320\266\320\270\321\202\320\265 \320\262\320\260\321\210\321\203 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214.", nullptr));
        phone_label->setText(QApplication::translate("MakeRequest", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\262\320\260\321\210 \320\275\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        mail_label->setText(QApplication::translate("MakeRequest", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\262\320\260\321\210 \320\260\320\264\321\200\320\265\321\201 \321\215\320\273\320\265\320\274\321\202\321\200\320\276\320\275\320\275\320\276\320\271 \320\277\320\276\321\207\321\202\321\213", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MakeRequest", "\320\235\320\260\320\266\320\274\320\270\321\202\320\265, \321\207\321\202\320\276\320\261\321\213 \320\276\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\321\217\320\262\320\272\321\203 \320\275\320\260 \321\200\320\260\321\201\321\201\320\274\320\276\321\202\321\200\320\265\320\275\320\270\320\265.", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("MakeRequest", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\321\217\320\262\320\272\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MakeRequest: public Ui_MakeRequest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKEREQUEST_H
