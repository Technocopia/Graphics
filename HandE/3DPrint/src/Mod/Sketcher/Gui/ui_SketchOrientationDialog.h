/********************************************************************************
** Form generated from reading UI file 'SketchOrientationDialog.ui'
**
** Created: Thu Apr 18 22:40:34 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKETCHORIENTATIONDIALOG_H
#define UI_SKETCHORIENTATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>

namespace SketcherGui {

class Ui_SketchOrientationDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *XY_radioButton;
    QRadioButton *XZ_radioButton;
    QRadioButton *YZ_radioButton;
    QLabel *previewLabel;
    QCheckBox *Reverse_checkBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *Offset_doubleSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SketcherGui__SketchOrientationDialog)
    {
        if (SketcherGui__SketchOrientationDialog->objectName().isEmpty())
            SketcherGui__SketchOrientationDialog->setObjectName(QString::fromUtf8("SketcherGui__SketchOrientationDialog"));
        SketcherGui__SketchOrientationDialog->resize(178, 201);
        gridLayout = new QGridLayout(SketcherGui__SketchOrientationDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(SketcherGui__SketchOrientationDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        XY_radioButton = new QRadioButton(groupBox);
        XY_radioButton->setObjectName(QString::fromUtf8("XY_radioButton"));
        XY_radioButton->setChecked(true);

        verticalLayout->addWidget(XY_radioButton);

        XZ_radioButton = new QRadioButton(groupBox);
        XZ_radioButton->setObjectName(QString::fromUtf8("XZ_radioButton"));

        verticalLayout->addWidget(XZ_radioButton);

        YZ_radioButton = new QRadioButton(groupBox);
        YZ_radioButton->setObjectName(QString::fromUtf8("YZ_radioButton"));

        verticalLayout->addWidget(YZ_radioButton);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        previewLabel = new QLabel(SketcherGui__SketchOrientationDialog);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        previewLabel->setMinimumSize(QSize(48, 48));
        previewLabel->setMaximumSize(QSize(48, 48));
        previewLabel->setText(QString::fromUtf8("Preview"));

        gridLayout->addWidget(previewLabel, 0, 1, 1, 1);

        Reverse_checkBox = new QCheckBox(SketcherGui__SketchOrientationDialog);
        Reverse_checkBox->setObjectName(QString::fromUtf8("Reverse_checkBox"));

        gridLayout->addWidget(Reverse_checkBox, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SketcherGui__SketchOrientationDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        Offset_doubleSpinBox = new QDoubleSpinBox(SketcherGui__SketchOrientationDialog);
        Offset_doubleSpinBox->setObjectName(QString::fromUtf8("Offset_doubleSpinBox"));
        Offset_doubleSpinBox->setDecimals(1);
        Offset_doubleSpinBox->setMinimum(-1e+09);
        Offset_doubleSpinBox->setMaximum(1e+09);
        Offset_doubleSpinBox->setSingleStep(10);

        horizontalLayout->addWidget(Offset_doubleSpinBox);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(SketcherGui__SketchOrientationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);


        retranslateUi(SketcherGui__SketchOrientationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SketcherGui__SketchOrientationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SketcherGui__SketchOrientationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SketcherGui__SketchOrientationDialog);
    } // setupUi

    void retranslateUi(QDialog *SketcherGui__SketchOrientationDialog)
    {
        SketcherGui__SketchOrientationDialog->setWindowTitle(QApplication::translate("SketcherGui::SketchOrientationDialog", "Choose orientation", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SketcherGui::SketchOrientationDialog", "Sketch orientation", 0, QApplication::UnicodeUTF8));
        XY_radioButton->setText(QApplication::translate("SketcherGui::SketchOrientationDialog", "XY-Plane", 0, QApplication::UnicodeUTF8));
        XZ_radioButton->setText(QApplication::translate("SketcherGui::SketchOrientationDialog", "XZ-Plane", 0, QApplication::UnicodeUTF8));
        YZ_radioButton->setText(QApplication::translate("SketcherGui::SketchOrientationDialog", "YZ-Plane", 0, QApplication::UnicodeUTF8));
        Reverse_checkBox->setText(QApplication::translate("SketcherGui::SketchOrientationDialog", "Reverse direction", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SketcherGui::SketchOrientationDialog", "Offset:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace SketcherGui

namespace SketcherGui {
namespace Ui {
    class SketchOrientationDialog: public Ui_SketchOrientationDialog {};
} // namespace Ui
} // namespace SketcherGui

#endif // UI_SKETCHORIENTATIONDIALOG_H
