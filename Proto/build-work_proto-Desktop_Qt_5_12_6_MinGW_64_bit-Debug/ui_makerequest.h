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
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
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
        label = new QLabel(MakeRequest);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(MakeRequest);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(MakeRequest);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(MakeRequest);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        label_3 = new QLabel(MakeRequest);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(MakeRequest);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        groupBox = new QGroupBox(MakeRequest);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 80));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);


        verticalLayout->addWidget(groupBox);

        label_4 = new QLabel(MakeRequest);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        lineEdit_4 = new QLineEdit(MakeRequest);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        label_5 = new QLabel(MakeRequest);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        lineEdit_5 = new QLineEdit(MakeRequest);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        label_6 = new QLabel(MakeRequest);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        lineEdit_6 = new QLineEdit(MakeRequest);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        verticalLayout->addWidget(lineEdit_6);

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
        label->setText(QApplication::translate("MakeRequest", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\204\320\260\320\274\320\270\320\273\320\270\321\216", nullptr));
        label_2->setText(QApplication::translate("MakeRequest", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217", nullptr));
        label_3->setText(QApplication::translate("MakeRequest", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\276\321\202\321\207\320\265\321\201\321\202\320\262\320\276 (\320\277\321\200\320\270 \320\276\321\202\321\201\321\203\321\202\321\201\321\202\320\262\320\270\320\270 \320\274\320\276\320\266\320\275\320\276 \320\276\320\277\321\203\321\201\321\202\320\270\321\202\321\214)", nullptr));
        groupBox->setTitle(QApplication::translate("MakeRequest", "\320\222\321\213 \321\201\321\202\321\203\320\264\320\265\320\275\321\202 \320\270\320\273\320\270 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272?", nullptr));
        radioButton->setText(QApplication::translate("MakeRequest", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202", nullptr));
        radioButton_2->setText(QApplication::translate("MakeRequest", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272", nullptr));
        label_4->setText(QApplication::translate("MakeRequest", "\320\225\321\201\320\273\320\270 \320\262\321\213 \321\201\321\202\321\203\320\264\320\265\320\275\321\202, \321\203\320\272\320\260\320\266\320\270\321\202\320\265 \320\262\320\260\321\210\321\203 \320\263\321\200\321\203\320\277\320\277\321\203. \320\225\321\201\320\273\320\270 \320\262\321\213 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272, \321\203\320\272\320\260\320\266\320\270\321\202\320\265 \320\262\320\260\321\210\321\203 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214.", nullptr));
        label_5->setText(QApplication::translate("MakeRequest", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\262\320\260\321\210 \320\275\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        label_6->setText(QApplication::translate("MakeRequest", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\262\320\260\321\210 \320\260\320\264\321\200\320\265\321\201 \321\215\320\273\320\265\320\274\321\202\321\200\320\276\320\275\320\275\320\276\320\271 \320\277\320\276\321\207\321\202\321\213", nullptr));
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
