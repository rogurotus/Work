/********************************************************************************
** Form generated from reading UI file 'seekbyname.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEKBYNAME_H
#define UI_SEEKBYNAME_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeekByName
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *surname_label;
    QLineEdit *surname_edit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *name_label;
    QLineEdit *name_edit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *patronymic_label;
    QLineEdit *patronymic_edit;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Enter_FIO;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_4;
    QTableView *tableView;
    QSpacerItem *verticalSpacer_5;
    QLabel *state_label;

    void setupUi(QWidget *SeekByName)
    {
        if (SeekByName->objectName().isEmpty())
            SeekByName->setObjectName(QStringLiteral("SeekByName"));
        SeekByName->resize(807, 546);
        verticalLayout_2 = new QVBoxLayout(SeekByName);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        surname_label = new QLabel(SeekByName);
        surname_label->setObjectName(QStringLiteral("surname_label"));
        surname_label->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(surname_label);

        surname_edit = new QLineEdit(SeekByName);
        surname_edit->setObjectName(QStringLiteral("surname_edit"));
        surname_edit->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(surname_edit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        name_label = new QLabel(SeekByName);
        name_label->setObjectName(QStringLiteral("name_label"));
        name_label->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(name_label);

        name_edit = new QLineEdit(SeekByName);
        name_edit->setObjectName(QStringLiteral("name_edit"));
        name_edit->setMinimumSize(QSize(70, 0));

        horizontalLayout_2->addWidget(name_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        patronymic_label = new QLabel(SeekByName);
        patronymic_label->setObjectName(QStringLiteral("patronymic_label"));
        patronymic_label->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(patronymic_label);

        patronymic_edit = new QLineEdit(SeekByName);
        patronymic_edit->setObjectName(QStringLiteral("patronymic_edit"));

        horizontalLayout_3->addWidget(patronymic_edit);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        Enter_FIO = new QPushButton(SeekByName);
        Enter_FIO->setObjectName(QStringLiteral("Enter_FIO"));

        horizontalLayout_4->addWidget(Enter_FIO);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        tableView = new QTableView(SeekByName);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        state_label = new QLabel(SeekByName);
        state_label->setObjectName(QStringLiteral("state_label"));

        verticalLayout_2->addWidget(state_label);


        retranslateUi(SeekByName);

        QMetaObject::connectSlotsByName(SeekByName);
    } // setupUi

    void retranslateUi(QWidget *SeekByName)
    {
        SeekByName->setWindowTitle(QApplication::translate("SeekByName", "Form", Q_NULLPTR));
        surname_label->setText(QApplication::translate("SeekByName", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\204\320\260\320\274\320\270\320\273\320\270\321\216", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        surname_edit->setToolTip(QApplication::translate("SeekByName", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \321\204\320\260\320\274\320\270\320\273\320\270\320\270.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        surname_edit->setText(QString());
        name_label->setText(QApplication::translate("SeekByName", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        name_edit->setToolTip(QApplication::translate("SeekByName", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\270\320\274\320\265\320\275\320\270.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        patronymic_label->setText(QApplication::translate("SeekByName", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\276\321\202\321\207\320\265\321\201\321\202\320\262\320\276", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        patronymic_edit->setToolTip(QApplication::translate("SeekByName", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\276\321\202\321\207\320\265\321\201\321\202\320\262\321\203.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Enter_FIO->setToolTip(QApplication::translate("SeekByName", "\320\230\321\201\320\272\320\260\321\202\321\214 \320\277\320\276 \320\267\320\260\320\277\320\276\320\273\320\275\320\265\320\275\320\275\321\213\320\274 \320\277\320\276\320\273\321\217\320\274.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Enter_FIO->setText(QApplication::translate("SeekByName", "\320\236\320\272", Q_NULLPTR));
        state_label->setText(QApplication::translate("SeekByName", "\320\232\320\276\320\274\320\265\320\275\320\264\320\260\320\275\321\202:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SeekByName: public Ui_SeekByName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEKBYNAME_H
