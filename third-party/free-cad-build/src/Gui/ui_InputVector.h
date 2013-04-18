/********************************************************************************
** Form generated from reading UI file 'InputVector.ui'
**
** Created: Thu Apr 18 07:04:46 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTVECTOR_H
#define UI_INPUTVECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

namespace Gui {
namespace Dialog {

class Ui_InputVector
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QDoubleSpinBox *vectorZ;
    QDoubleSpinBox *vectorY;
    QDoubleSpinBox *vectorX;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;

    void setupUi(QDialog *Gui__Dialog__InputVector)
    {
        if (Gui__Dialog__InputVector->objectName().isEmpty())
            Gui__Dialog__InputVector->setObjectName(QString::fromUtf8("Gui__Dialog__InputVector"));
        Gui__Dialog__InputVector->resize(181, 177);
        gridLayout = new QGridLayout(Gui__Dialog__InputVector);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(Gui__Dialog__InputVector);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        vectorZ = new QDoubleSpinBox(groupBox);
        vectorZ->setObjectName(QString::fromUtf8("vectorZ"));
        vectorZ->setMaximum(2.14748e+09);
        vectorZ->setMinimum(-2.14748e+09);
        vectorZ->setValue(1);

        gridLayout1->addWidget(vectorZ, 2, 1, 1, 1);

        vectorY = new QDoubleSpinBox(groupBox);
        vectorY->setObjectName(QString::fromUtf8("vectorY"));
        vectorY->setMaximum(2.14748e+09);
        vectorY->setMinimum(-2.14748e+09);

        gridLayout1->addWidget(vectorY, 1, 1, 1, 1);

        vectorX = new QDoubleSpinBox(groupBox);
        vectorX->setObjectName(QString::fromUtf8("vectorX"));
        vectorX->setMaximum(2.14748e+09);
        vectorX->setMinimum(-2.14748e+09);

        gridLayout1->addWidget(vectorX, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(Gui__Dialog__InputVector);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        QWidget::setTabOrder(vectorX, vectorY);
        QWidget::setTabOrder(vectorY, vectorZ);
        QWidget::setTabOrder(vectorZ, okButton);

        retranslateUi(Gui__Dialog__InputVector);
        QObject::connect(okButton, SIGNAL(clicked()), Gui__Dialog__InputVector, SLOT(accept()));

        QMetaObject::connectSlotsByName(Gui__Dialog__InputVector);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__InputVector)
    {
        Gui__Dialog__InputVector->setWindowTitle(QApplication::translate("Gui::Dialog::InputVector", "Input vector", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Gui::Dialog::InputVector", "Vector", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Gui::Dialog::InputVector", "Z:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Gui::Dialog::InputVector", "Y:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Gui::Dialog::InputVector", "X:", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("Gui::Dialog::InputVector", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class InputVector: public Ui_InputVector {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_INPUTVECTOR_H
