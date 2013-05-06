/********************************************************************************
** Form generated from reading UI file 'TextureMapping.ui'
**
** Created: Thu Apr 18 22:16:54 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTUREMAPPING_H
#define UI_TEXTUREMAPPING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include "Gui/FileDialog.h"

namespace Gui {
namespace Dialog {

class Ui_TextureMapping
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *checkGlobal;
    QCheckBox *checkEnv;
    Gui::FileChooser *fileChooser;

    void setupUi(QDialog *Gui__Dialog__TextureMapping)
    {
        if (Gui__Dialog__TextureMapping->objectName().isEmpty())
            Gui__Dialog__TextureMapping->setObjectName(QString::fromUtf8("Gui__Dialog__TextureMapping"));
        Gui__Dialog__TextureMapping->resize(218, 122);
        gridLayout_2 = new QGridLayout(Gui__Dialog__TextureMapping);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(Gui__Dialog__TextureMapping);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkGlobal = new QCheckBox(groupBox);
        checkGlobal->setObjectName(QString::fromUtf8("checkGlobal"));

        gridLayout->addWidget(checkGlobal, 0, 0, 1, 1);

        checkEnv = new QCheckBox(groupBox);
        checkEnv->setObjectName(QString::fromUtf8("checkEnv"));

        gridLayout->addWidget(checkEnv, 0, 1, 1, 1);

        fileChooser = new Gui::FileChooser(groupBox);
        fileChooser->setObjectName(QString::fromUtf8("fileChooser"));

        gridLayout->addWidget(fileChooser, 1, 0, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(Gui__Dialog__TextureMapping);

        QMetaObject::connectSlotsByName(Gui__Dialog__TextureMapping);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__TextureMapping)
    {
        Gui__Dialog__TextureMapping->setWindowTitle(QApplication::translate("Gui::Dialog::TextureMapping", "Texture", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Gui::Dialog::TextureMapping", "Texture mapping", 0, QApplication::UnicodeUTF8));
        checkGlobal->setText(QApplication::translate("Gui::Dialog::TextureMapping", "Global", 0, QApplication::UnicodeUTF8));
        checkEnv->setText(QApplication::translate("Gui::Dialog::TextureMapping", "Environment", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class TextureMapping: public Ui_TextureMapping {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_TEXTUREMAPPING_H
