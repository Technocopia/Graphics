/********************************************************************************
** Form generated from reading UI file 'DlgLocationPos.ui'
**
** Created: Thu Apr 18 22:16:56 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGLOCATIONPOS_H
#define UI_DLGLOCATIONPOS_H

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

class Ui_Position
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *vectorX;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *vectorY;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *vectorZ;
    QCheckBox *checkBox;
    QComboBox *comboBoxGridSize;

    void setupUi(QWidget *Position)
    {
        if (Position->objectName().isEmpty())
            Position->setObjectName(QString::fromUtf8("Position"));
        Position->resize(171, 178);
        verticalLayout = new QVBoxLayout(Position);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Position);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        vectorX = new QDoubleSpinBox(Position);
        vectorX->setObjectName(QString::fromUtf8("vectorX"));
        vectorX->setMinimum(-2.14748e+09);
        vectorX->setMaximum(2.14748e+09);

        horizontalLayout->addWidget(vectorX);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Position);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        vectorY = new QDoubleSpinBox(Position);
        vectorY->setObjectName(QString::fromUtf8("vectorY"));
        vectorY->setMinimum(-2.14748e+09);
        vectorY->setMaximum(2.14748e+09);

        horizontalLayout_2->addWidget(vectorY);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Position);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        vectorZ = new QDoubleSpinBox(Position);
        vectorZ->setObjectName(QString::fromUtf8("vectorZ"));
        vectorZ->setMinimum(-2.14748e+09);
        vectorZ->setMaximum(2.14748e+09);
        vectorZ->setValue(1);

        horizontalLayout_3->addWidget(vectorZ);


        verticalLayout->addLayout(horizontalLayout_3);

        checkBox = new QCheckBox(Position);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        comboBoxGridSize = new QComboBox(Position);
        comboBoxGridSize->setObjectName(QString::fromUtf8("comboBoxGridSize"));
        comboBoxGridSize->setEditable(true);

        verticalLayout->addWidget(comboBoxGridSize);


        retranslateUi(Position);

        QMetaObject::connectSlotsByName(Position);
    } // setupUi

    void retranslateUi(QWidget *Position)
    {
        Position->setWindowTitle(QApplication::translate("Position", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Position", "X:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Position", "Y:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Position", "Z:", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Position", "Grid Snap in", 0, QApplication::UnicodeUTF8));
        comboBoxGridSize->clear();
        comboBoxGridSize->insertItems(0, QStringList()
         << QApplication::translate("Position", "0.1 mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Position", "0.5 mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Position", "1 mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Position", "2 mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Position", "5 mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Position", "10 mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Position", "20 mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Position", "50 mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Position", "100 mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Position", "200 mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Position", "500 mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Position", "1 m", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Position", "2 m", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Position", "5 m ", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class Position: public Ui_Position {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGLOCATIONPOS_H
