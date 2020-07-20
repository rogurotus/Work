/********************************************************************************
** Form generated from reading UI file 'managedatabase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEDATABASE_H
#define UI_MANAGEDATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageDatabase
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *redact_button;
    QSpacerItem *horizontalSpacer_2;
    QLabel *state_label;

    void setupUi(QWidget *ManageDatabase)
    {
        if (ManageDatabase->objectName().isEmpty())
            ManageDatabase->setObjectName(QString::fromUtf8("ManageDatabase"));
        ManageDatabase->resize(883, 560);
        verticalLayout = new QVBoxLayout(ManageDatabase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(ManageDatabase);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        redact_button = new QPushButton(ManageDatabase);
        redact_button->setObjectName(QString::fromUtf8("redact_button"));

        horizontalLayout->addWidget(redact_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        state_label = new QLabel(ManageDatabase);
        state_label->setObjectName(QString::fromUtf8("state_label"));

        verticalLayout->addWidget(state_label);


        retranslateUi(ManageDatabase);

        QMetaObject::connectSlotsByName(ManageDatabase);
    } // setupUi

    void retranslateUi(QWidget *ManageDatabase)
    {
        ManageDatabase->setWindowTitle(QApplication::translate("ManageDatabase", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        redact_button->setToolTip(QApplication::translate("ManageDatabase", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \320\276 \320\273\320\270\321\206\320\265.", nullptr));
#endif // QT_NO_TOOLTIP
        redact_button->setText(QApplication::translate("ManageDatabase", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        state_label->setText(QApplication::translate("ManageDatabase", "\320\232\320\276\320\274\320\265\320\275\320\264\320\260\320\275\321\202:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageDatabase: public Ui_ManageDatabase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEDATABASE_H
