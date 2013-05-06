/********************************************************************************
** Form generated from reading UI file 'TrajectorySimulate.ui'
**
** Created: Thu Apr 18 22:43:15 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAJECTORYSIMULATE_H
#define UI_TRAJECTORYSIMULATE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

namespace RobotGui {

class Ui_DlgTrajectorySimulate
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *ButtonStepStart;
    QPushButton *ButtonStepBack;
    QPushButton *ButtonStepStop;
    QPushButton *ButtonStepRun;
    QPushButton *ButtonStepForward;
    QPushButton *ButtonStepEnd;
    QHBoxLayout *horizontalLayout;
    QSlider *timeSlider;
    QDoubleSpinBox *timeSpinBox;
    QSpinBox *Override;
    QSplitter *splitter;
    QTableWidget *trajectoryTable;
    QTextEdit *Output;

    void setupUi(QWidget *RobotGui__DlgTrajectorySimulate)
    {
        if (RobotGui__DlgTrajectorySimulate->objectName().isEmpty())
            RobotGui__DlgTrajectorySimulate->setObjectName(QString::fromUtf8("RobotGui__DlgTrajectorySimulate"));
        RobotGui__DlgTrajectorySimulate->resize(274, 466);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RobotGui__DlgTrajectorySimulate->sizePolicy().hasHeightForWidth());
        RobotGui__DlgTrajectorySimulate->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(RobotGui__DlgTrajectorySimulate);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(1);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ButtonStepStart = new QPushButton(RobotGui__DlgTrajectorySimulate);
        ButtonStepStart->setObjectName(QString::fromUtf8("ButtonStepStart"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ButtonStepStart->sizePolicy().hasHeightForWidth());
        ButtonStepStart->setSizePolicy(sizePolicy1);
        ButtonStepStart->setMinimumSize(QSize(30, 20));
        ButtonStepStart->setMaximumSize(QSize(35, 22));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        ButtonStepStart->setFont(font);

        hboxLayout->addWidget(ButtonStepStart);

        ButtonStepBack = new QPushButton(RobotGui__DlgTrajectorySimulate);
        ButtonStepBack->setObjectName(QString::fromUtf8("ButtonStepBack"));
        sizePolicy1.setHeightForWidth(ButtonStepBack->sizePolicy().hasHeightForWidth());
        ButtonStepBack->setSizePolicy(sizePolicy1);
        ButtonStepBack->setMinimumSize(QSize(30, 20));
        ButtonStepBack->setMaximumSize(QSize(35, 22));
        ButtonStepBack->setFont(font);

        hboxLayout->addWidget(ButtonStepBack);

        ButtonStepStop = new QPushButton(RobotGui__DlgTrajectorySimulate);
        ButtonStepStop->setObjectName(QString::fromUtf8("ButtonStepStop"));
        sizePolicy1.setHeightForWidth(ButtonStepStop->sizePolicy().hasHeightForWidth());
        ButtonStepStop->setSizePolicy(sizePolicy1);
        ButtonStepStop->setMinimumSize(QSize(30, 20));
        ButtonStepStop->setMaximumSize(QSize(35, 22));
        ButtonStepStop->setFont(font);

        hboxLayout->addWidget(ButtonStepStop);

        ButtonStepRun = new QPushButton(RobotGui__DlgTrajectorySimulate);
        ButtonStepRun->setObjectName(QString::fromUtf8("ButtonStepRun"));
        sizePolicy1.setHeightForWidth(ButtonStepRun->sizePolicy().hasHeightForWidth());
        ButtonStepRun->setSizePolicy(sizePolicy1);
        ButtonStepRun->setMinimumSize(QSize(30, 20));
        ButtonStepRun->setMaximumSize(QSize(35, 22));
        ButtonStepRun->setFont(font);

        hboxLayout->addWidget(ButtonStepRun);

        ButtonStepForward = new QPushButton(RobotGui__DlgTrajectorySimulate);
        ButtonStepForward->setObjectName(QString::fromUtf8("ButtonStepForward"));
        sizePolicy1.setHeightForWidth(ButtonStepForward->sizePolicy().hasHeightForWidth());
        ButtonStepForward->setSizePolicy(sizePolicy1);
        ButtonStepForward->setMinimumSize(QSize(30, 20));
        ButtonStepForward->setMaximumSize(QSize(35, 22));
        ButtonStepForward->setFont(font);

        hboxLayout->addWidget(ButtonStepForward);

        ButtonStepEnd = new QPushButton(RobotGui__DlgTrajectorySimulate);
        ButtonStepEnd->setObjectName(QString::fromUtf8("ButtonStepEnd"));
        sizePolicy1.setHeightForWidth(ButtonStepEnd->sizePolicy().hasHeightForWidth());
        ButtonStepEnd->setSizePolicy(sizePolicy1);
        ButtonStepEnd->setMinimumSize(QSize(30, 20));
        ButtonStepEnd->setMaximumSize(QSize(35, 22));
        ButtonStepEnd->setFont(font);

        hboxLayout->addWidget(ButtonStepEnd);


        verticalLayout->addLayout(hboxLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        timeSlider = new QSlider(RobotGui__DlgTrajectorySimulate);
        timeSlider->setObjectName(QString::fromUtf8("timeSlider"));
        timeSlider->setMaximum(999);
        timeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(timeSlider);

        timeSpinBox = new QDoubleSpinBox(RobotGui__DlgTrajectorySimulate);
        timeSpinBox->setObjectName(QString::fromUtf8("timeSpinBox"));

        horizontalLayout->addWidget(timeSpinBox);

        Override = new QSpinBox(RobotGui__DlgTrajectorySimulate);
        Override->setObjectName(QString::fromUtf8("Override"));
        Override->setMaximum(100);
        Override->setSingleStep(10);
        Override->setValue(100);

        horizontalLayout->addWidget(Override);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(RobotGui__DlgTrajectorySimulate);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        trajectoryTable = new QTableWidget(splitter);
        if (trajectoryTable->columnCount() < 5)
            trajectoryTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        trajectoryTable->setObjectName(QString::fromUtf8("trajectoryTable"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(trajectoryTable->sizePolicy().hasHeightForWidth());
        trajectoryTable->setSizePolicy(sizePolicy2);
        splitter->addWidget(trajectoryTable);
        trajectoryTable->horizontalHeader()->setDefaultSectionSize(40);
        trajectoryTable->verticalHeader()->setDefaultSectionSize(22);
        Output = new QTextEdit(splitter);
        Output->setObjectName(QString::fromUtf8("Output"));
        sizePolicy2.setHeightForWidth(Output->sizePolicy().hasHeightForWidth());
        Output->setSizePolicy(sizePolicy2);
        splitter->addWidget(Output);

        verticalLayout->addWidget(splitter);


        retranslateUi(RobotGui__DlgTrajectorySimulate);

        QMetaObject::connectSlotsByName(RobotGui__DlgTrajectorySimulate);
    } // setupUi

    void retranslateUi(QWidget *RobotGui__DlgTrajectorySimulate)
    {
        RobotGui__DlgTrajectorySimulate->setWindowTitle(QApplication::translate("RobotGui::DlgTrajectorySimulate", "Simulation", 0, QApplication::UnicodeUTF8));
        ButtonStepStart->setText(QApplication::translate("RobotGui::DlgTrajectorySimulate", "|<", 0, QApplication::UnicodeUTF8));
        ButtonStepBack->setText(QApplication::translate("RobotGui::DlgTrajectorySimulate", "<", 0, QApplication::UnicodeUTF8));
        ButtonStepStop->setText(QApplication::translate("RobotGui::DlgTrajectorySimulate", "||", 0, QApplication::UnicodeUTF8));
        ButtonStepRun->setText(QApplication::translate("RobotGui::DlgTrajectorySimulate", "|>", 0, QApplication::UnicodeUTF8));
        ButtonStepForward->setText(QApplication::translate("RobotGui::DlgTrajectorySimulate", ">", 0, QApplication::UnicodeUTF8));
        ButtonStepEnd->setText(QApplication::translate("RobotGui::DlgTrajectorySimulate", ">|", 0, QApplication::UnicodeUTF8));
        Override->setSuffix(QApplication::translate("RobotGui::DlgTrajectorySimulate", "%", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = trajectoryTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("RobotGui::DlgTrajectorySimulate", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = trajectoryTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("RobotGui::DlgTrajectorySimulate", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = trajectoryTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("RobotGui::DlgTrajectorySimulate", "C", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = trajectoryTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("RobotGui::DlgTrajectorySimulate", "V", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = trajectoryTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("RobotGui::DlgTrajectorySimulate", "A", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace RobotGui

namespace RobotGui {
namespace Ui {
    class DlgTrajectorySimulate: public Ui_DlgTrajectorySimulate {};
} // namespace Ui
} // namespace RobotGui

#endif // UI_TRAJECTORYSIMULATE_H
