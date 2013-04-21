/********************************************************************************
** Form generated from reading UI file 'DlgLocationAngle.ui'
**
** Created: Thu Apr 18 22:16:56 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGLOCATIONANGLE_H
#define UI_DLGLOCATIONANGLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Angle
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *vectorA;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *vectorB;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *vectorC;
    QCheckBox *checkBoxSnap;
    QComboBox *comboGridSize;

    void setupUi(QWidget *Angle)
    {
        if (Angle->objectName().isEmpty())
            Angle->setObjectName(QString::fromUtf8("Angle"));
        Angle->resize(145, 147);
        verticalLayout = new QVBoxLayout(Angle);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Angle);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        vectorA = new QDoubleSpinBox(Angle);
        vectorA->setObjectName(QString::fromUtf8("vectorA"));
        vectorA->setMinimum(-2.14748e+09);
        vectorA->setMaximum(2.14748e+09);

        horizontalLayout->addWidget(vectorA);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Angle);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        vectorB = new QDoubleSpinBox(Angle);
        vectorB->setObjectName(QString::fromUtf8("vectorB"));
        vectorB->setMinimum(-2.14748e+09);
        vectorB->setMaximum(2.14748e+09);

        horizontalLayout_2->addWidget(vectorB);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Angle);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        vectorC = new QDoubleSpinBox(Angle);
        vectorC->setObjectName(QString::fromUtf8("vectorC"));
        vectorC->setMinimum(-2.14748e+09);
        vectorC->setMaximum(2.14748e+09);
        vectorC->setValue(1);

        horizontalLayout_3->addWidget(vectorC);


        verticalLayout->addLayout(horizontalLayout_3);

        checkBoxSnap = new QCheckBox(Angle);
        checkBoxSnap->setObjectName(QString::fromUtf8("checkBoxSnap"));

        verticalLayout->addWidget(checkBoxSnap);

        comboGridSize = new QComboBox(Angle);
        comboGridSize->setObjectName(QString::fromUtf8("comboGridSize"));
        comboGridSize->setEditable(true);

        verticalLayout->addWidget(comboGridSize);


        retranslateUi(Angle);

        QMetaObject::connectSlotsByName(Angle);
    } // setupUi

    void retranslateUi(QWidget *Angle)
    {
        Angle->setWindowTitle(QApplication::translate("Angle", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Angle", "A:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Angle", "B:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Angle", "C:", 0, QApplication::UnicodeUTF8));
        checkBoxSnap->setText(QApplication::translate("Angle", "Angle Snap", 0, QApplication::UnicodeUTF8));
        comboGridSize->clear();
        comboGridSize->insertItems(0, QStringList()
         << QApplication::translate("Angle", "1 \302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Angle", "2 \302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Angle", "5 \302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Angle", "10 \302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Angle", "20 \302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Angle", "45 \302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Angle", "90 \302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Angle", "180 \302\260", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class Angle: public Ui_Angle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGLOCATIONANGLE_H
