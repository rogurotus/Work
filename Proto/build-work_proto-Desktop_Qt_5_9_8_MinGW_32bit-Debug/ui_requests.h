/********************************************************************************
** Form generated from reading UI file 'requests.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTS_H
#define UI_REQUESTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Requests
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QLabel *state_label;

    void setupUi(QWidget *Requests)
    {
        if (Requests->objectName().isEmpty())
            Requests->setObjectName(QStringLiteral("Requests"));
        Requests->resize(400, 300);
        verticalLayout = new QVBoxLayout(Requests);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(Requests);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        state_label = new QLabel(Requests);
        state_label->setObjectName(QStringLiteral("state_label"));

        verticalLayout->addWidget(state_label);


        retranslateUi(Requests);

        QMetaObject::connectSlotsByName(Requests);
    } // setupUi

    void retranslateUi(QWidget *Requests)
    {
        Requests->setWindowTitle(QApplication::translate("Requests", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\267\320\260\321\217\320\262\320\276\320\272", Q_NULLPTR));
        state_label->setText(QApplication::translate("Requests", "\320\232\320\276\320\274\320\265\320\275\320\264\320\260\320\275\321\202: ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Requests: public Ui_Requests {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTS_H
