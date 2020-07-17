/********************************************************************************
** Form generated from reading UI file 'mainvisiter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVISITER_H
#define UI_MAINVISITER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainVisiter
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *MainVisiter)
    {
        if (MainVisiter->objectName().isEmpty())
            MainVisiter->setObjectName(QString::fromUtf8("MainVisiter"));
        MainVisiter->resize(862, 561);
        MainVisiter->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(MainVisiter);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(MainVisiter);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 840, 508));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(MainVisiter);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(MainVisiter);

        QMetaObject::connectSlotsByName(MainVisiter);
    } // setupUi

    void retranslateUi(QWidget *MainVisiter)
    {
        MainVisiter->setWindowTitle(QApplication::translate("MainVisiter", "\320\223\320\276\321\201\321\202\321\214", nullptr));
        pushButton_3->setText(QApplication::translate("MainVisiter", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \320\267\320\260\321\217\320\262\320\272\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainVisiter: public Ui_MainVisiter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVISITER_H
