/********************************************************************************
** Form generated from reading UI file 'DlgSettingsColorGradient.ui'
**
** Created: Thu Apr 18 22:16:55 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSCOLORGRADIENT_H
#define UI_DLGSETTINGSCOLORGRADIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsColorGradient
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxModel;
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel5;
    QComboBox *comboBoxModel;
    QSpacerItem *spacerItem;
    QGroupBox *groupBoxVisible;
    QHBoxLayout *hboxLayout2;
    QCheckBox *checkBoxGrayed;
    QCheckBox *checkBoxInvisible;
    QGroupBox *buttonGroupStyle;
    QGridLayout *gridLayout1;
    QRadioButton *radioButtonZero;
    QRadioButton *radioButtonFlow;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem1;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;
    QGroupBox *groupBoxRange;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem2;
    QGridLayout *gridLayout3;
    QLineEdit *floatLineEditMax;
    QLineEdit *floatLineEditMin;
    QLabel *textLabelMin;
    QLabel *textLabelMax;
    QGridLayout *gridLayout4;
    QSpinBox *spinBoxLabel;
    QSpinBox *spinBoxDecimals;
    QLabel *textLabel1;
    QLabel *textLabel1_2;

    void setupUi(QDialog *Gui__Dialog__DlgSettingsColorGradient)
    {
        if (Gui__Dialog__DlgSettingsColorGradient->objectName().isEmpty())
            Gui__Dialog__DlgSettingsColorGradient->setObjectName(QString::fromUtf8("Gui__Dialog__DlgSettingsColorGradient"));
        Gui__Dialog__DlgSettingsColorGradient->resize(361, 342);
        Gui__Dialog__DlgSettingsColorGradient->setSizeGripEnabled(true);
        Gui__Dialog__DlgSettingsColorGradient->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgSettingsColorGradient);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBoxModel = new QGroupBox(Gui__Dialog__DlgSettingsColorGradient);
        groupBoxModel->setObjectName(QString::fromUtf8("groupBoxModel"));
        hboxLayout = new QHBoxLayout(groupBoxModel);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel5 = new QLabel(groupBoxModel);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        hboxLayout1->addWidget(textLabel5);

        comboBoxModel = new QComboBox(groupBoxModel);
        comboBoxModel->setObjectName(QString::fromUtf8("comboBoxModel"));

        hboxLayout1->addWidget(comboBoxModel);

        spacerItem = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(hboxLayout1);


        gridLayout->addWidget(groupBoxModel, 0, 0, 1, 1);

        groupBoxVisible = new QGroupBox(Gui__Dialog__DlgSettingsColorGradient);
        groupBoxVisible->setObjectName(QString::fromUtf8("groupBoxVisible"));
        hboxLayout2 = new QHBoxLayout(groupBoxVisible);
        hboxLayout2->setSpacing(0);
        hboxLayout2->setContentsMargins(11, 11, 11, 11);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        checkBoxGrayed = new QCheckBox(groupBoxVisible);
        checkBoxGrayed->setObjectName(QString::fromUtf8("checkBoxGrayed"));

        hboxLayout2->addWidget(checkBoxGrayed);

        checkBoxInvisible = new QCheckBox(groupBoxVisible);
        checkBoxInvisible->setObjectName(QString::fromUtf8("checkBoxInvisible"));

        hboxLayout2->addWidget(checkBoxInvisible);


        gridLayout->addWidget(groupBoxVisible, 2, 0, 1, 1);

        buttonGroupStyle = new QGroupBox(Gui__Dialog__DlgSettingsColorGradient);
        buttonGroupStyle->setObjectName(QString::fromUtf8("buttonGroupStyle"));
        gridLayout1 = new QGridLayout(buttonGroupStyle);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        radioButtonZero = new QRadioButton(buttonGroupStyle);
        radioButtonZero->setObjectName(QString::fromUtf8("radioButtonZero"));

        gridLayout1->addWidget(radioButtonZero, 0, 1, 1, 1);

        radioButtonFlow = new QRadioButton(buttonGroupStyle);
        radioButtonFlow->setObjectName(QString::fromUtf8("radioButtonFlow"));
        radioButtonFlow->setChecked(true);

        gridLayout1->addWidget(radioButtonFlow, 0, 0, 1, 1);


        gridLayout->addWidget(buttonGroupStyle, 1, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem1 = new QSpacerItem(41, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem1);

        buttonOk = new QPushButton(Gui__Dialog__DlgSettingsColorGradient);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);
        buttonOk->setDefault(true);

        hboxLayout3->addWidget(buttonOk);

        buttonCancel = new QPushButton(Gui__Dialog__DlgSettingsColorGradient);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout3->addWidget(buttonCancel);


        gridLayout->addLayout(hboxLayout3, 4, 0, 1, 1);

        groupBoxRange = new QGroupBox(Gui__Dialog__DlgSettingsColorGradient);
        groupBoxRange->setObjectName(QString::fromUtf8("groupBoxRange"));
        gridLayout2 = new QGridLayout(groupBoxRange);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        spacerItem2 = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 0, 1, 1, 1);

        gridLayout3 = new QGridLayout();
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        floatLineEditMax = new QLineEdit(groupBoxRange);
        floatLineEditMax->setObjectName(QString::fromUtf8("floatLineEditMax"));

        gridLayout3->addWidget(floatLineEditMax, 0, 1, 1, 1);

        floatLineEditMin = new QLineEdit(groupBoxRange);
        floatLineEditMin->setObjectName(QString::fromUtf8("floatLineEditMin"));

        gridLayout3->addWidget(floatLineEditMin, 1, 1, 1, 1);

        textLabelMin = new QLabel(groupBoxRange);
        textLabelMin->setObjectName(QString::fromUtf8("textLabelMin"));

        gridLayout3->addWidget(textLabelMin, 1, 0, 1, 1);

        textLabelMax = new QLabel(groupBoxRange);
        textLabelMax->setObjectName(QString::fromUtf8("textLabelMax"));

        gridLayout3->addWidget(textLabelMax, 0, 0, 1, 1);


        gridLayout2->addLayout(gridLayout3, 0, 0, 1, 1);

        gridLayout4 = new QGridLayout();
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(0, 0, 0, 0);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        spinBoxLabel = new QSpinBox(groupBoxRange);
        spinBoxLabel->setObjectName(QString::fromUtf8("spinBoxLabel"));

        gridLayout4->addWidget(spinBoxLabel, 0, 1, 1, 1);

        spinBoxDecimals = new QSpinBox(groupBoxRange);
        spinBoxDecimals->setObjectName(QString::fromUtf8("spinBoxDecimals"));
        spinBoxDecimals->setMaximum(6);
        spinBoxDecimals->setValue(2);

        gridLayout4->addWidget(spinBoxDecimals, 1, 1, 1, 1);

        textLabel1 = new QLabel(groupBoxRange);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout4->addWidget(textLabel1, 0, 0, 1, 1);

        textLabel1_2 = new QLabel(groupBoxRange);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        gridLayout4->addWidget(textLabel1_2, 1, 0, 1, 1);


        gridLayout2->addLayout(gridLayout4, 0, 2, 1, 1);


        gridLayout->addWidget(groupBoxRange, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel5->setBuddy(comboBoxModel);
        textLabelMin->setBuddy(floatLineEditMin);
        textLabelMax->setBuddy(floatLineEditMax);
        textLabel1->setBuddy(spinBoxLabel);
        textLabel1_2->setBuddy(spinBoxDecimals);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(comboBoxModel, radioButtonFlow);
        QWidget::setTabOrder(radioButtonFlow, checkBoxGrayed);
        QWidget::setTabOrder(checkBoxGrayed, checkBoxInvisible);
        QWidget::setTabOrder(checkBoxInvisible, floatLineEditMax);
        QWidget::setTabOrder(floatLineEditMax, floatLineEditMin);
        QWidget::setTabOrder(floatLineEditMin, spinBoxLabel);
        QWidget::setTabOrder(spinBoxLabel, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(Gui__Dialog__DlgSettingsColorGradient);
        QObject::connect(buttonOk, SIGNAL(clicked()), Gui__Dialog__DlgSettingsColorGradient, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), Gui__Dialog__DlgSettingsColorGradient, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsColorGradient);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgSettingsColorGradient)
    {
        Gui__Dialog__DlgSettingsColorGradient->setWindowTitle(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Color-gradient settings", 0, QApplication::UnicodeUTF8));
        groupBoxModel->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Color model", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Gradient:", 0, QApplication::UnicodeUTF8));
        comboBoxModel->clear();
        comboBoxModel->insertItems(0, QStringList()
         << QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "red-yellow-green-cyan-blue", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "blue-cyan-green-yellow-red", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "white-black", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "black-white", 0, QApplication::UnicodeUTF8)
        );
        groupBoxVisible->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Visibility", 0, QApplication::UnicodeUTF8));
        checkBoxGrayed->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Out g&rayed", 0, QApplication::UnicodeUTF8));
        checkBoxGrayed->setShortcut(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Alt+R", 0, QApplication::UnicodeUTF8));
        checkBoxInvisible->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Out &invisible", 0, QApplication::UnicodeUTF8));
        checkBoxInvisible->setShortcut(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Alt+I", 0, QApplication::UnicodeUTF8));
        buttonGroupStyle->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Style", 0, QApplication::UnicodeUTF8));
        radioButtonZero->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Zero", 0, QApplication::UnicodeUTF8));
        radioButtonZero->setShortcut(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Alt+Z", 0, QApplication::UnicodeUTF8));
        radioButtonFlow->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Flow", 0, QApplication::UnicodeUTF8));
        radioButtonFlow->setShortcut(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Alt+F", 0, QApplication::UnicodeUTF8));
        buttonOk->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&OK", 0, QApplication::UnicodeUTF8));
        buttonOk->setShortcut(QString());
        buttonCancel->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Cancel", 0, QApplication::UnicodeUTF8));
        buttonCancel->setShortcut(QString());
        groupBoxRange->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Parameter range", 0, QApplication::UnicodeUTF8));
        textLabelMin->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Mi&nimum:", 0, QApplication::UnicodeUTF8));
        textLabelMax->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Ma&ximum:", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Labels:", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Decimals:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsColorGradient: public Ui_DlgSettingsColorGradient {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSCOLORGRADIENT_H
