/********************************************************************************
** Form generated from reading UI file 'DlgProjectUtility.ui'
**
** Created: Thu Apr 18 07:04:46 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPROJECTUTILITY_H
#define UI_DLGPROJECTUTILITY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include "Gui/FileDialog.h"

namespace Gui {
namespace Dialog {

class Ui_DlgProjectUtility
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    Gui::FileChooser *extractSource;
    QLabel *label_2;
    Gui::FileChooser *extractDest;
    QPushButton *extractButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    Gui::FileChooser *createSource;
    QLabel *label_4;
    Gui::FileChooser *createDest;
    QPushButton *createButton;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkLoadProject;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DlgProjectUtility)
    {
        if (Gui__Dialog__DlgProjectUtility->objectName().isEmpty())
            Gui__Dialog__DlgProjectUtility->setObjectName(QString::fromUtf8("Gui__Dialog__DlgProjectUtility"));
        Gui__Dialog__DlgProjectUtility->resize(445, 262);
        gridLayout_4 = new QGridLayout(Gui__Dialog__DlgProjectUtility);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(Gui__Dialog__DlgProjectUtility);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        extractSource = new Gui::FileChooser(groupBox);
        extractSource->setObjectName(QString::fromUtf8("extractSource"));

        gridLayout->addWidget(extractSource, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        extractDest = new Gui::FileChooser(groupBox);
        extractDest->setObjectName(QString::fromUtf8("extractDest"));
        extractDest->setMode(Gui::FileChooser::Directory);

        gridLayout->addWidget(extractDest, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        extractButton = new QPushButton(Gui__Dialog__DlgProjectUtility);
        extractButton->setObjectName(QString::fromUtf8("extractButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(extractButton->sizePolicy().hasHeightForWidth());
        extractButton->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(extractButton, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(Gui__Dialog__DlgProjectUtility);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        createSource = new Gui::FileChooser(groupBox_2);
        createSource->setObjectName(QString::fromUtf8("createSource"));

        gridLayout_2->addWidget(createSource, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        createDest = new Gui::FileChooser(groupBox_2);
        createDest->setObjectName(QString::fromUtf8("createDest"));
        createDest->setMode(Gui::FileChooser::Directory);

        gridLayout_2->addWidget(createDest, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        createButton = new QPushButton(Gui__Dialog__DlgProjectUtility);
        createButton->setObjectName(QString::fromUtf8("createButton"));
        sizePolicy.setHeightForWidth(createButton->sizePolicy().hasHeightForWidth());
        createButton->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(createButton, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);

        checkLoadProject = new QCheckBox(Gui__Dialog__DlgProjectUtility);
        checkLoadProject->setObjectName(QString::fromUtf8("checkLoadProject"));

        gridLayout_4->addWidget(checkLoadProject, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgProjectUtility);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout_4->addWidget(buttonBox, 2, 1, 1, 1);


        retranslateUi(Gui__Dialog__DlgProjectUtility);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__DlgProjectUtility, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DlgProjectUtility, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgProjectUtility);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgProjectUtility)
    {
        Gui__Dialog__DlgProjectUtility->setWindowTitle(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Project utility", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Extract project", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Source", 0, QApplication::UnicodeUTF8));
        extractSource->setFilter(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Project file (*.fcstd)", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Destination", 0, QApplication::UnicodeUTF8));
        extractButton->setText(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Extract", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Create project", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Source", 0, QApplication::UnicodeUTF8));
        createSource->setFilter(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Document.xml", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Destination", 0, QApplication::UnicodeUTF8));
        createButton->setText(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Create", 0, QApplication::UnicodeUTF8));
        checkLoadProject->setText(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Load project file after creation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgProjectUtility: public Ui_DlgProjectUtility {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGPROJECTUTILITY_H
