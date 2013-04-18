/********************************************************************************
** Form generated from reading UI file 'UnitTest.ui'
**
** Created: Thu Apr 18 07:13:14 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNITTEST_H
#define UI_UNITTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

namespace TestGui {

class Ui_UnitTest
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout1;
    QTreeWidget *treeViewFailure;
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *startButton;
    QSpacerItem *spacerItem1;
    QPushButton *helpButton;
    QPushButton *aboutButton;
    QPushButton *closeButton;
    QLabel *textLabelStatus;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout2;
    QProgressBar *progressBar;
    QLabel *textLabelRemCt;
    QLabel *textLabelRem;
    QLabel *textLabelErrCt;
    QLabel *textLabelErr;
    QLabel *textLabelFailCt;
    QLabel *textLabelFail;
    QLabel *textLabelRunCt;
    QLabel *textLabelRun;
    QGroupBox *buttonGroup1;
    QHBoxLayout *hboxLayout;
    QLabel *textLabelTest;
    QComboBox *comboTests;

    void setupUi(QDialog *TestGui__UnitTest)
    {
        if (TestGui__UnitTest->objectName().isEmpty())
            TestGui__UnitTest->setObjectName(QString::fromUtf8("TestGui__UnitTest"));
        TestGui__UnitTest->resize(421, 434);
        TestGui__UnitTest->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(TestGui__UnitTest);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox2 = new QGroupBox(TestGui__UnitTest);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        gridLayout1 = new QGridLayout(groupBox2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        treeViewFailure = new QTreeWidget(groupBox2);
        treeViewFailure->setObjectName(QString::fromUtf8("treeViewFailure"));
        treeViewFailure->setRootIsDecorated(false);

        gridLayout1->addWidget(treeViewFailure, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox2, 2, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem);

        startButton = new QPushButton(TestGui__UnitTest);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setAutoDefault(true);
        startButton->setDefault(true);

        vboxLayout->addWidget(startButton);

        spacerItem1 = new QSpacerItem(77, 141, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        helpButton = new QPushButton(TestGui__UnitTest);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setAutoDefault(true);

        vboxLayout->addWidget(helpButton);

        aboutButton = new QPushButton(TestGui__UnitTest);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));
        aboutButton->setAutoDefault(true);

        vboxLayout->addWidget(aboutButton);

        closeButton = new QPushButton(TestGui__UnitTest);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setAutoDefault(true);

        vboxLayout->addWidget(closeButton);


        gridLayout->addLayout(vboxLayout, 0, 1, 3, 1);

        textLabelStatus = new QLabel(TestGui__UnitTest);
        textLabelStatus->setObjectName(QString::fromUtf8("textLabelStatus"));
        textLabelStatus->setFrameShape(QFrame::Panel);
        textLabelStatus->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(textLabelStatus, 3, 0, 1, 2);

        groupBox1 = new QGroupBox(TestGui__UnitTest);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout2 = new QGridLayout(groupBox1);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(6, 6, 6, 6);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        progressBar = new QProgressBar(groupBox1);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setOrientation(Qt::Horizontal);

        gridLayout2->addWidget(progressBar, 0, 0, 1, 8);

        textLabelRemCt = new QLabel(groupBox1);
        textLabelRemCt->setObjectName(QString::fromUtf8("textLabelRemCt"));
        textLabelRemCt->setAlignment(Qt::AlignVCenter);

        gridLayout2->addWidget(textLabelRemCt, 1, 7, 1, 1);

        textLabelRem = new QLabel(groupBox1);
        textLabelRem->setObjectName(QString::fromUtf8("textLabelRem"));

        gridLayout2->addWidget(textLabelRem, 1, 6, 1, 1);

        textLabelErrCt = new QLabel(groupBox1);
        textLabelErrCt->setObjectName(QString::fromUtf8("textLabelErrCt"));
        textLabelErrCt->setAlignment(Qt::AlignVCenter);

        gridLayout2->addWidget(textLabelErrCt, 1, 5, 1, 1);

        textLabelErr = new QLabel(groupBox1);
        textLabelErr->setObjectName(QString::fromUtf8("textLabelErr"));

        gridLayout2->addWidget(textLabelErr, 1, 4, 1, 1);

        textLabelFailCt = new QLabel(groupBox1);
        textLabelFailCt->setObjectName(QString::fromUtf8("textLabelFailCt"));
        textLabelFailCt->setAlignment(Qt::AlignVCenter);

        gridLayout2->addWidget(textLabelFailCt, 1, 3, 1, 1);

        textLabelFail = new QLabel(groupBox1);
        textLabelFail->setObjectName(QString::fromUtf8("textLabelFail"));

        gridLayout2->addWidget(textLabelFail, 1, 2, 1, 1);

        textLabelRunCt = new QLabel(groupBox1);
        textLabelRunCt->setObjectName(QString::fromUtf8("textLabelRunCt"));
        textLabelRunCt->setAlignment(Qt::AlignVCenter);

        gridLayout2->addWidget(textLabelRunCt, 1, 1, 1, 1);

        textLabelRun = new QLabel(groupBox1);
        textLabelRun->setObjectName(QString::fromUtf8("textLabelRun"));

        gridLayout2->addWidget(textLabelRun, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox1, 1, 0, 1, 1);

        buttonGroup1 = new QGroupBox(TestGui__UnitTest);
        buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
        hboxLayout = new QHBoxLayout(buttonGroup1);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(5, 5, 5, 5);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabelTest = new QLabel(buttonGroup1);
        textLabelTest->setObjectName(QString::fromUtf8("textLabelTest"));

        hboxLayout->addWidget(textLabelTest);

        comboTests = new QComboBox(buttonGroup1);
        comboTests->setObjectName(QString::fromUtf8("comboTests"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboTests->sizePolicy().hasHeightForWidth());
        comboTests->setSizePolicy(sizePolicy);
        comboTests->setEditable(true);
        comboTests->setDuplicatesEnabled(false);

        hboxLayout->addWidget(comboTests);


        gridLayout->addWidget(buttonGroup1, 0, 0, 1, 1);

        QWidget::setTabOrder(comboTests, startButton);
        QWidget::setTabOrder(startButton, treeViewFailure);
        QWidget::setTabOrder(treeViewFailure, helpButton);
        QWidget::setTabOrder(helpButton, aboutButton);
        QWidget::setTabOrder(aboutButton, closeButton);

        retranslateUi(TestGui__UnitTest);
        QObject::connect(closeButton, SIGNAL(clicked()), TestGui__UnitTest, SLOT(close()));

        QMetaObject::connectSlotsByName(TestGui__UnitTest);
    } // setupUi

    void retranslateUi(QDialog *TestGui__UnitTest)
    {
        TestGui__UnitTest->setWindowTitle(QApplication::translate("TestGui::UnitTest", "FreeCAD UnitTest", 0, QApplication::UnicodeUTF8));
        groupBox2->setTitle(QApplication::translate("TestGui::UnitTest", "Failures and errors", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeViewFailure->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("TestGui::UnitTest", "Description", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("TestGui::UnitTest", "&Start", 0, QApplication::UnicodeUTF8));
        startButton->setShortcut(QApplication::translate("TestGui::UnitTest", "Alt+S", 0, QApplication::UnicodeUTF8));
        helpButton->setText(QApplication::translate("TestGui::UnitTest", "&Help", 0, QApplication::UnicodeUTF8));
        helpButton->setShortcut(QApplication::translate("TestGui::UnitTest", "F1", 0, QApplication::UnicodeUTF8));
        aboutButton->setText(QApplication::translate("TestGui::UnitTest", "&About", 0, QApplication::UnicodeUTF8));
        aboutButton->setShortcut(QApplication::translate("TestGui::UnitTest", "Alt+A", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("TestGui::UnitTest", "&Close", 0, QApplication::UnicodeUTF8));
        closeButton->setShortcut(QApplication::translate("TestGui::UnitTest", "Alt+C", 0, QApplication::UnicodeUTF8));
        textLabelStatus->setText(QApplication::translate("TestGui::UnitTest", "Idle", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("TestGui::UnitTest", "Progress", 0, QApplication::UnicodeUTF8));
        textLabelRemCt->setText(QApplication::translate("TestGui::UnitTest", "<font color=\"#0000ff\">0</font>", 0, QApplication::UnicodeUTF8));
        textLabelRem->setText(QApplication::translate("TestGui::UnitTest", "Remaining:", 0, QApplication::UnicodeUTF8));
        textLabelErrCt->setText(QApplication::translate("TestGui::UnitTest", "<font color=\"#0000ff\">0</font>", 0, QApplication::UnicodeUTF8));
        textLabelErr->setText(QApplication::translate("TestGui::UnitTest", "Errors:", 0, QApplication::UnicodeUTF8));
        textLabelFailCt->setText(QApplication::translate("TestGui::UnitTest", "<font color=\"#0000ff\">0</font>", 0, QApplication::UnicodeUTF8));
        textLabelFail->setText(QApplication::translate("TestGui::UnitTest", "Failures:", 0, QApplication::UnicodeUTF8));
        textLabelRunCt->setText(QApplication::translate("TestGui::UnitTest", "<font color=\"#0000ff\">0</font>", 0, QApplication::UnicodeUTF8));
        textLabelRun->setText(QApplication::translate("TestGui::UnitTest", "Run:", 0, QApplication::UnicodeUTF8));
        buttonGroup1->setTitle(QApplication::translate("TestGui::UnitTest", "Test", 0, QApplication::UnicodeUTF8));
        textLabelTest->setText(QApplication::translate("TestGui::UnitTest", "Select test name:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace TestGui

namespace TestGui {
namespace Ui {
    class UnitTest: public Ui_UnitTest {};
} // namespace Ui
} // namespace TestGui

#endif // UI_UNITTEST_H
