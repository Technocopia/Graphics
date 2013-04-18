/********************************************************************************
** Form generated from reading UI file 'AboutApplication.ui'
**
** Created: Thu Apr 18 07:04:46 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTAPPLICATION_H
#define UI_ABOUTAPPLICATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_AboutApplication
{
public:
    QGridLayout *gridLayout;
    QLabel *labelSplashPicture;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem2;
    Gui::UrlLabel *labelAuthor;
    QSpacerItem *spacerItem3;
    QGridLayout *gridLayout1;
    QLabel *labelPlatform;
    QLabel *labelBuildPlatform;
    QLabel *labelDate;
    QLabel *labelBuildRevision;
    QLabel *labelBuildDate;
    QLabel *labelRevision;
    QLabel *labelBuildVersion;
    QLabel *labelVersion;
    QLabel *labelBranch;
    QLabel *labelBuildBranch;
    QLabel *labelBuildHash;
    QLabel *labelHash;
    QLabel *labelOS;
    QLabel *labelBuildOS;
    QSpacerItem *spacerItem4;
    QSpacerItem *spacerItem5;
    QHBoxLayout *hboxLayout1;
    QPushButton *licenseButton;
    QPushButton *copyButton;
    QSpacerItem *spacerItem6;
    QPushButton *okButton;

    void setupUi(QDialog *Gui__Dialog__AboutApplication)
    {
        if (Gui__Dialog__AboutApplication->objectName().isEmpty())
            Gui__Dialog__AboutApplication->setObjectName(QString::fromUtf8("Gui__Dialog__AboutApplication"));
        Gui__Dialog__AboutApplication->resize(436, 500);
        Gui__Dialog__AboutApplication->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__AboutApplication);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelSplashPicture = new QLabel(Gui__Dialog__AboutApplication);
        labelSplashPicture->setObjectName(QString::fromUtf8("labelSplashPicture"));
        labelSplashPicture->setPixmap(QPixmap(QString::fromUtf8(":/icons/freecadsplash.png")));
        labelSplashPicture->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelSplashPicture, 0, 0, 1, 3);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 1, 1, 1, 1);

        spacerItem1 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 2, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem2 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);

        labelAuthor = new Gui::UrlLabel(Gui__Dialog__AboutApplication);
        labelAuthor->setObjectName(QString::fromUtf8("labelAuthor"));
        labelAuthor->setText(QString::fromUtf8("<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600; text-decoration: underline; color:#0000ff;\"> Unknown Application (c) Unknown Author</span></p></body></html>"));

        hboxLayout->addWidget(labelAuthor);

        spacerItem3 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem3);


        vboxLayout->addLayout(hboxLayout);

        gridLayout1 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        labelPlatform = new QLabel(Gui__Dialog__AboutApplication);
        labelPlatform->setObjectName(QString::fromUtf8("labelPlatform"));

        gridLayout1->addWidget(labelPlatform, 4, 0, 1, 1);

        labelBuildPlatform = new QLabel(Gui__Dialog__AboutApplication);
        labelBuildPlatform->setObjectName(QString::fromUtf8("labelBuildPlatform"));
        labelBuildPlatform->setText(QString::fromUtf8("<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600;\">Unknown</span></p></body></html>"));

        gridLayout1->addWidget(labelBuildPlatform, 4, 1, 1, 1);

        labelDate = new QLabel(Gui__Dialog__AboutApplication);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));

        gridLayout1->addWidget(labelDate, 2, 0, 1, 1);

        labelBuildRevision = new QLabel(Gui__Dialog__AboutApplication);
        labelBuildRevision->setObjectName(QString::fromUtf8("labelBuildRevision"));
        labelBuildRevision->setText(QString::fromUtf8("<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600;\">Unknown</span></p></body></html>"));

        gridLayout1->addWidget(labelBuildRevision, 1, 1, 1, 1);

        labelBuildDate = new QLabel(Gui__Dialog__AboutApplication);
        labelBuildDate->setObjectName(QString::fromUtf8("labelBuildDate"));
        labelBuildDate->setText(QString::fromUtf8("<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600;\">Unknown</span></p></body></html>"));

        gridLayout1->addWidget(labelBuildDate, 2, 1, 1, 1);

        labelRevision = new QLabel(Gui__Dialog__AboutApplication);
        labelRevision->setObjectName(QString::fromUtf8("labelRevision"));

        gridLayout1->addWidget(labelRevision, 1, 0, 1, 1);

        labelBuildVersion = new QLabel(Gui__Dialog__AboutApplication);
        labelBuildVersion->setObjectName(QString::fromUtf8("labelBuildVersion"));
        labelBuildVersion->setText(QString::fromUtf8("<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600;\">Unknown</span></p></body></html>"));

        gridLayout1->addWidget(labelBuildVersion, 0, 1, 1, 1);

        labelVersion = new QLabel(Gui__Dialog__AboutApplication);
        labelVersion->setObjectName(QString::fromUtf8("labelVersion"));

        gridLayout1->addWidget(labelVersion, 0, 0, 1, 1);

        labelBranch = new QLabel(Gui__Dialog__AboutApplication);
        labelBranch->setObjectName(QString::fromUtf8("labelBranch"));
        labelBranch->setText(QString::fromUtf8("Branch"));

        gridLayout1->addWidget(labelBranch, 6, 0, 1, 1);

        labelBuildBranch = new QLabel(Gui__Dialog__AboutApplication);
        labelBuildBranch->setObjectName(QString::fromUtf8("labelBuildBranch"));
        labelBuildBranch->setText(QString::fromUtf8("<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600;\">Unknown</span></p></body></html>"));

        gridLayout1->addWidget(labelBuildBranch, 6, 1, 1, 1);

        labelBuildHash = new QLabel(Gui__Dialog__AboutApplication);
        labelBuildHash->setObjectName(QString::fromUtf8("labelBuildHash"));
        labelBuildHash->setText(QString::fromUtf8("<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600;\">Unknown</span></p></body></html>"));

        gridLayout1->addWidget(labelBuildHash, 7, 1, 1, 1);

        labelHash = new QLabel(Gui__Dialog__AboutApplication);
        labelHash->setObjectName(QString::fromUtf8("labelHash"));
        labelHash->setText(QString::fromUtf8("Hash"));

        gridLayout1->addWidget(labelHash, 7, 0, 1, 1);

        labelOS = new QLabel(Gui__Dialog__AboutApplication);
        labelOS->setObjectName(QString::fromUtf8("labelOS"));

        gridLayout1->addWidget(labelOS, 3, 0, 1, 1);

        labelBuildOS = new QLabel(Gui__Dialog__AboutApplication);
        labelBuildOS->setObjectName(QString::fromUtf8("labelBuildOS"));
        labelBuildOS->setText(QString::fromUtf8("<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600;\">Unknown</span></p></body></html>"));

        gridLayout1->addWidget(labelBuildOS, 3, 1, 1, 1);


        vboxLayout->addLayout(gridLayout1);


        gridLayout->addLayout(vboxLayout, 2, 1, 1, 1);

        spacerItem4 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem4, 2, 2, 1, 1);

        spacerItem5 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem5, 3, 1, 1, 1);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        licenseButton = new QPushButton(Gui__Dialog__AboutApplication);
        licenseButton->setObjectName(QString::fromUtf8("licenseButton"));

        hboxLayout1->addWidget(licenseButton);

        copyButton = new QPushButton(Gui__Dialog__AboutApplication);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));

        hboxLayout1->addWidget(copyButton);

        spacerItem6 = new QSpacerItem(160, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem6);

        okButton = new QPushButton(Gui__Dialog__AboutApplication);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout1->addWidget(okButton);


        gridLayout->addLayout(hboxLayout1, 4, 0, 1, 3);


        retranslateUi(Gui__Dialog__AboutApplication);
        QObject::connect(okButton, SIGNAL(clicked()), Gui__Dialog__AboutApplication, SLOT(accept()));

        QMetaObject::connectSlotsByName(Gui__Dialog__AboutApplication);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__AboutApplication)
    {
        Gui__Dialog__AboutApplication->setWindowTitle(QApplication::translate("Gui::Dialog::AboutApplication", "About", 0, QApplication::UnicodeUTF8));
        labelSplashPicture->setText(QString());
        labelPlatform->setText(QApplication::translate("Gui::Dialog::AboutApplication", "Platform", 0, QApplication::UnicodeUTF8));
        labelDate->setText(QApplication::translate("Gui::Dialog::AboutApplication", "Release date", 0, QApplication::UnicodeUTF8));
        labelRevision->setText(QApplication::translate("Gui::Dialog::AboutApplication", "Revision number", 0, QApplication::UnicodeUTF8));
        labelVersion->setText(QApplication::translate("Gui::Dialog::AboutApplication", "Version", 0, QApplication::UnicodeUTF8));
        labelOS->setText(QApplication::translate("Gui::Dialog::AboutApplication", "Operating system", 0, QApplication::UnicodeUTF8));
        licenseButton->setText(QApplication::translate("Gui::Dialog::AboutApplication", "License...", 0, QApplication::UnicodeUTF8));
        copyButton->setText(QApplication::translate("Gui::Dialog::AboutApplication", "Copy to clipboard", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("Gui::Dialog::AboutApplication", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class AboutApplication: public Ui_AboutApplication {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_ABOUTAPPLICATION_H
