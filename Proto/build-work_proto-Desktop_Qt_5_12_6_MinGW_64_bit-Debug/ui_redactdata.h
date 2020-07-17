/********************************************************************************
** Form generated from reading UI file 'redactdata.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDACTDATA_H
#define UI_REDACTDATA_H

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

class Ui_RedactData
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QLabel *label_8;
    QSpinBox *spinBox_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *RedactData)
    {
        if (RedactData->objectName().isEmpty())
            RedactData->setObjectName(QString::fromUtf8("RedactData"));
        RedactData->resize(350, 500);
        RedactData->setMinimumSize(QSize(350, 500));
        RedactData->setMaximumSize(QSize(350, 500));
        verticalLayout = new QVBoxLayout(RedactData);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(RedactData);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(RedactData);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(RedactData);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(RedactData);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        label_3 = new QLabel(RedactData);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(RedactData);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        lineEdit_3 = new QLineEdit(RedactData);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        label_5 = new QLabel(RedactData);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        spinBox = new QSpinBox(RedactData);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximumSize(QSize(50, 16777215));

        verticalLayout->addWidget(spinBox);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label_6 = new QLabel(RedactData);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(RedactData);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        lineEdit_4 = new QLineEdit(RedactData);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        label_8 = new QLabel(RedactData);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout->addWidget(label_8);

        spinBox_2 = new QSpinBox(RedactData);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMaximumSize(QSize(50, 16777215));

        verticalLayout->addWidget(spinBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(RedactData);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(RedactData);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
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
        RedactData->setWindowTitle(QApplication::translate("RedactData", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label->setText(QApplication::translate("RedactData", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\260\320\264\321\200\320\265\321\201 \320\276\320\261\321\211\320\265\320\266\320\270\321\202\320\270\321\217", nullptr));
        label_2->setText(QApplication::translate("RedactData", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\244\320\230\320\236 \320\272\320\276\320\274\320\265\320\275\320\264\320\260\320\275\321\202\320\260", nullptr));
        label_3->setText(QApplication::translate("RedactData", "\320\232\320\276\321\200\320\277\321\203\321\201 \342\204\226 0", nullptr));
        label_4->setText(QApplication::translate("RedactData", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202", nullptr));
        label_5->setText(QApplication::translate("RedactData", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\265\321\201\321\202 \320\262 \320\272\320\276\320\274\320\275\320\260\321\202\320\265", nullptr));
        label_6->setText(QApplication::translate("RedactData", "\320\232\320\276\321\200\320\277\321\203\321\201 \342\204\226 0", nullptr));
        label_7->setText(QApplication::translate("RedactData", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202", nullptr));
        label_8->setText(QApplication::translate("RedactData", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\265\321\201\321\202 \320\262 \320\272\320\276\320\274\320\275\320\260\321\202\320\265", nullptr));
        pushButton->setText(QApplication::translate("RedactData", "\320\236\320\272", nullptr));
        pushButton_2->setText(QApplication::translate("RedactData", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RedactData: public Ui_RedactData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDACTDATA_H
