/********************************************************************************
** Form generated from reading UI file 'InsertDatum.ui'
**
** Created: Thu Apr 18 07:24:49 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTDATUM_H
#define UI_INSERTDATUM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

namespace SketcherGui {

class Ui_InsertDatum
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SketcherGui__InsertDatum)
    {
        if (SketcherGui__InsertDatum->objectName().isEmpty())
            SketcherGui__InsertDatum->setObjectName(QString::fromUtf8("SketcherGui__InsertDatum"));
        SketcherGui__InsertDatum->setWindowModality(Qt::ApplicationModal);
        SketcherGui__InsertDatum->resize(178, 72);
        verticalLayout = new QVBoxLayout(SketcherGui__InsertDatum);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SketcherGui__InsertDatum);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(SketcherGui__InsertDatum);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(SketcherGui__InsertDatum);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SketcherGui__InsertDatum);
        QObject::connect(buttonBox, SIGNAL(accepted()), SketcherGui__InsertDatum, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SketcherGui__InsertDatum, SLOT(reject()));

        QMetaObject::connectSlotsByName(SketcherGui__InsertDatum);
    } // setupUi

    void retranslateUi(QDialog *SketcherGui__InsertDatum)
    {
        SketcherGui__InsertDatum->setWindowTitle(QApplication::translate("SketcherGui::InsertDatum", "Insert datum", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SketcherGui::InsertDatum", "datum:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace SketcherGui

namespace SketcherGui {
namespace Ui {
    class InsertDatum: public Ui_InsertDatum {};
} // namespace Ui
} // namespace SketcherGui

#endif // UI_INSERTDATUM_H
