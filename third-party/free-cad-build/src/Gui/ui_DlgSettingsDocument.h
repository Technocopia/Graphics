/********************************************************************************
** Form generated from reading UI file 'DlgSettingsDocument.ui'
**
** Created: Thu Apr 18 07:04:47 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSDOCUMENT_H
#define UI_DLGSETTINGSDOCUMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "Gui/PrefWidgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsDocument
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *GroupBox5;
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    Gui::PrefSpinBox *prefCompression;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel1_2;
    Gui::PrefSpinBox *prefUndoRedoSize;
    Gui::PrefCheckBox *prefCheckNewDoc;
    QFrame *line1;
    QFrame *line1_2;
    Gui::PrefCheckBox *prefUndoRedo;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    Gui::PrefCheckBox *prefSaveTransaction;
    Gui::PrefCheckBox *prefDiscardTransaction;
    QFrame *line1_2_3;
    Gui::PrefCheckBox *prefSaveThumbnail;
    QHBoxLayout *hboxLayout2;
    Gui::PrefCheckBox *prefSaveBackupFiles;
    QSpacerItem *spacerItem;
    Gui::PrefSpinBox *prefCountBackupFiles;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    Gui::PrefCheckBox *prefDuplicateLabel;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *Gui__Dialog__DlgSettingsDocument)
    {
        if (Gui__Dialog__DlgSettingsDocument->objectName().isEmpty())
            Gui__Dialog__DlgSettingsDocument->setObjectName(QString::fromUtf8("Gui__Dialog__DlgSettingsDocument"));
        Gui__Dialog__DlgSettingsDocument->resize(470, 423);
        gridLayout_3 = new QGridLayout(Gui__Dialog__DlgSettingsDocument);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        GroupBox5 = new QGroupBox(Gui__Dialog__DlgSettingsDocument);
        GroupBox5->setObjectName(QString::fromUtf8("GroupBox5"));
        gridLayout = new QGridLayout(GroupBox5);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel1 = new QLabel(GroupBox5);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        hboxLayout->addWidget(textLabel1);

        prefCompression = new Gui::PrefSpinBox(GroupBox5);
        prefCompression->setObjectName(QString::fromUtf8("prefCompression"));
        prefCompression->setValue(3);
        prefCompression->setProperty("prefEntry", QVariant(QByteArray("CompressionLevel")));
        prefCompression->setProperty("prefPath", QVariant(QByteArray("Document")));

        hboxLayout->addWidget(prefCompression);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel1_2 = new QLabel(GroupBox5);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        hboxLayout1->addWidget(textLabel1_2);

        prefUndoRedoSize = new Gui::PrefSpinBox(GroupBox5);
        prefUndoRedoSize->setObjectName(QString::fromUtf8("prefUndoRedoSize"));
        prefUndoRedoSize->setValue(20);
        prefUndoRedoSize->setProperty("prefEntry", QVariant(QByteArray("MaxUndoSize")));
        prefUndoRedoSize->setProperty("prefPath", QVariant(QByteArray("Document")));

        hboxLayout1->addWidget(prefUndoRedoSize);


        gridLayout->addLayout(hboxLayout1, 5, 0, 1, 1);

        prefCheckNewDoc = new Gui::PrefCheckBox(GroupBox5);
        prefCheckNewDoc->setObjectName(QString::fromUtf8("prefCheckNewDoc"));
        prefCheckNewDoc->setChecked(false);
        prefCheckNewDoc->setProperty("prefEntry", QVariant(QByteArray("CreateNewDoc")));
        prefCheckNewDoc->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout->addWidget(prefCheckNewDoc, 0, 0, 1, 1);

        line1 = new QFrame(GroupBox5);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        line1->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(line1, 1, 0, 1, 1);

        line1_2 = new QFrame(GroupBox5);
        line1_2->setObjectName(QString::fromUtf8("line1_2"));
        line1_2->setFrameShape(QFrame::HLine);
        line1_2->setFrameShadow(QFrame::Sunken);
        line1_2->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(line1_2, 3, 0, 1, 1);

        prefUndoRedo = new Gui::PrefCheckBox(GroupBox5);
        prefUndoRedo->setObjectName(QString::fromUtf8("prefUndoRedo"));
        prefUndoRedo->setChecked(true);
        prefUndoRedo->setProperty("prefEntry", QVariant(QByteArray("UsingUndo")));
        prefUndoRedo->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout->addWidget(prefUndoRedo, 4, 0, 1, 1);


        gridLayout_3->addWidget(GroupBox5, 0, 0, 1, 1);

        groupBox = new QGroupBox(Gui__Dialog__DlgSettingsDocument);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        prefSaveTransaction = new Gui::PrefCheckBox(groupBox);
        prefSaveTransaction->setObjectName(QString::fromUtf8("prefSaveTransaction"));
        prefSaveTransaction->setEnabled(false);
        prefSaveTransaction->setProperty("prefEntry", QVariant(QByteArray("SaveTransactions")));
        prefSaveTransaction->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout_2->addWidget(prefSaveTransaction, 0, 0, 1, 1);

        prefDiscardTransaction = new Gui::PrefCheckBox(groupBox);
        prefDiscardTransaction->setObjectName(QString::fromUtf8("prefDiscardTransaction"));
        prefDiscardTransaction->setEnabled(false);
        prefDiscardTransaction->setProperty("prefEntry", QVariant(QByteArray("TransactionsDiscard")));
        prefDiscardTransaction->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout_2->addWidget(prefDiscardTransaction, 1, 0, 1, 1);

        line1_2_3 = new QFrame(groupBox);
        line1_2_3->setObjectName(QString::fromUtf8("line1_2_3"));
        line1_2_3->setFrameShape(QFrame::HLine);
        line1_2_3->setFrameShadow(QFrame::Sunken);
        line1_2_3->setFrameShape(QFrame::HLine);

        gridLayout_2->addWidget(line1_2_3, 2, 0, 1, 1);

        prefSaveThumbnail = new Gui::PrefCheckBox(groupBox);
        prefSaveThumbnail->setObjectName(QString::fromUtf8("prefSaveThumbnail"));
        prefSaveThumbnail->setProperty("prefEntry", QVariant(QByteArray("SaveThumbnail")));
        prefSaveThumbnail->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout_2->addWidget(prefSaveThumbnail, 3, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        prefSaveBackupFiles = new Gui::PrefCheckBox(groupBox);
        prefSaveBackupFiles->setObjectName(QString::fromUtf8("prefSaveBackupFiles"));
        prefSaveBackupFiles->setChecked(true);
        prefSaveBackupFiles->setProperty("prefEntry", QVariant(QByteArray("CreateBackupFiles")));
        prefSaveBackupFiles->setProperty("prefPath", QVariant(QByteArray("Document")));

        hboxLayout2->addWidget(prefSaveBackupFiles);

        spacerItem = new QSpacerItem(91, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem);

        prefCountBackupFiles = new Gui::PrefSpinBox(groupBox);
        prefCountBackupFiles->setObjectName(QString::fromUtf8("prefCountBackupFiles"));
        prefCountBackupFiles->setMinimum(1);
        prefCountBackupFiles->setProperty("prefEntry", QVariant(QByteArray("CountBackupFiles")));
        prefCountBackupFiles->setProperty("prefPath", QVariant(QByteArray("Document")));

        hboxLayout2->addWidget(prefCountBackupFiles);


        gridLayout_2->addLayout(hboxLayout2, 4, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(Gui__Dialog__DlgSettingsDocument);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        prefDuplicateLabel = new Gui::PrefCheckBox(groupBox_2);
        prefDuplicateLabel->setObjectName(QString::fromUtf8("prefDuplicateLabel"));
        prefDuplicateLabel->setProperty("prefEntry", QVariant(QByteArray("DuplicateLabels")));
        prefDuplicateLabel->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout1->addWidget(prefDuplicateLabel, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 2, 0, 1, 1);

        spacerItem1 = new QSpacerItem(429, 37, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(spacerItem1, 3, 0, 1, 1);

        QWidget::setTabOrder(prefCheckNewDoc, prefCompression);
        QWidget::setTabOrder(prefCompression, prefUndoRedo);
        QWidget::setTabOrder(prefUndoRedo, prefUndoRedoSize);
        QWidget::setTabOrder(prefUndoRedoSize, prefSaveTransaction);
        QWidget::setTabOrder(prefSaveTransaction, prefDiscardTransaction);
        QWidget::setTabOrder(prefDiscardTransaction, prefSaveThumbnail);

        retranslateUi(Gui__Dialog__DlgSettingsDocument);
        QObject::connect(prefSaveBackupFiles, SIGNAL(toggled(bool)), prefCountBackupFiles, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsDocument);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettingsDocument)
    {
        Gui__Dialog__DlgSettingsDocument->setWindowTitle(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Document", 0, QApplication::UnicodeUTF8));
        GroupBox5->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "General", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Document save compression level\n"
"(0 = none, 9 = highest, 3 = default)", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Maximum Undo/Redo steps", 0, QApplication::UnicodeUTF8));
        prefCheckNewDoc->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Create new document at start up", 0, QApplication::UnicodeUTF8));
        prefUndoRedo->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Using Undo/Redo on documents", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Storage", 0, QApplication::UnicodeUTF8));
        prefSaveTransaction->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Saving transactions (Auto-save)", 0, QApplication::UnicodeUTF8));
        prefDiscardTransaction->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Discard saved transaction after saving document", 0, QApplication::UnicodeUTF8));
        prefSaveThumbnail->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Save thumbnail into project file when saving document", 0, QApplication::UnicodeUTF8));
        prefSaveBackupFiles->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Create up to backup files when resaving document", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Document objects", 0, QApplication::UnicodeUTF8));
        prefDuplicateLabel->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Allow duplicate object labels in one document", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsDocument: public Ui_DlgSettingsDocument {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSDOCUMENT_H
