/********************************************************************************
** Form generated from reading UI file 'TaskOffset.ui'
**
** Created: Thu Apr 18 07:17:52 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKOFFSET_H
#define UI_TASKOFFSET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

namespace PartGui {

class Ui_TaskOffset
{
public:
    QGridLayout *gridLayout;
    QLabel *labelOffset;
    QDoubleSpinBox *spinOffset;
    QLabel *label_2;
    QComboBox *modeType;
    QLabel *label_3;
    QComboBox *joinType;
    QCheckBox *intersection;
    QCheckBox *selfIntersection;
    QCheckBox *fillOffset;
    QLabel *labelFaces;
    QPushButton *facesButton;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QCheckBox *updateView;

    void setupUi(QWidget *PartGui__TaskOffset)
    {
        if (PartGui__TaskOffset->objectName().isEmpty())
            PartGui__TaskOffset->setObjectName(QString::fromUtf8("PartGui__TaskOffset"));
        PartGui__TaskOffset->resize(264, 244);
        gridLayout = new QGridLayout(PartGui__TaskOffset);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelOffset = new QLabel(PartGui__TaskOffset);
        labelOffset->setObjectName(QString::fromUtf8("labelOffset"));

        gridLayout->addWidget(labelOffset, 0, 0, 1, 1);

        spinOffset = new QDoubleSpinBox(PartGui__TaskOffset);
        spinOffset->setObjectName(QString::fromUtf8("spinOffset"));

        gridLayout->addWidget(spinOffset, 0, 2, 1, 1);

        label_2 = new QLabel(PartGui__TaskOffset);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        modeType = new QComboBox(PartGui__TaskOffset);
        modeType->setObjectName(QString::fromUtf8("modeType"));

        gridLayout->addWidget(modeType, 1, 2, 1, 1);

        label_3 = new QLabel(PartGui__TaskOffset);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        joinType = new QComboBox(PartGui__TaskOffset);
        joinType->setObjectName(QString::fromUtf8("joinType"));

        gridLayout->addWidget(joinType, 2, 2, 1, 1);

        intersection = new QCheckBox(PartGui__TaskOffset);
        intersection->setObjectName(QString::fromUtf8("intersection"));

        gridLayout->addWidget(intersection, 3, 0, 1, 1);

        selfIntersection = new QCheckBox(PartGui__TaskOffset);
        selfIntersection->setObjectName(QString::fromUtf8("selfIntersection"));

        gridLayout->addWidget(selfIntersection, 4, 0, 1, 2);

        fillOffset = new QCheckBox(PartGui__TaskOffset);
        fillOffset->setObjectName(QString::fromUtf8("fillOffset"));

        gridLayout->addWidget(fillOffset, 5, 0, 1, 1);

        labelFaces = new QLabel(PartGui__TaskOffset);
        labelFaces->setObjectName(QString::fromUtf8("labelFaces"));
        labelFaces->setText(QString::fromUtf8(""));

        gridLayout->addWidget(labelFaces, 6, 0, 1, 3);

        facesButton = new QPushButton(PartGui__TaskOffset);
        facesButton->setObjectName(QString::fromUtf8("facesButton"));

        gridLayout->addWidget(facesButton, 7, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(152, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 1, 1, 2);

        line = new QFrame(PartGui__TaskOffset);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 8, 0, 1, 3);

        updateView = new QCheckBox(PartGui__TaskOffset);
        updateView->setObjectName(QString::fromUtf8("updateView"));
        updateView->setChecked(true);

        gridLayout->addWidget(updateView, 9, 0, 1, 1);

        QWidget::setTabOrder(spinOffset, modeType);
        QWidget::setTabOrder(modeType, joinType);
        QWidget::setTabOrder(joinType, intersection);
        QWidget::setTabOrder(intersection, selfIntersection);

        retranslateUi(PartGui__TaskOffset);

        QMetaObject::connectSlotsByName(PartGui__TaskOffset);
    } // setupUi

    void retranslateUi(QWidget *PartGui__TaskOffset)
    {
        PartGui__TaskOffset->setWindowTitle(QApplication::translate("PartGui::TaskOffset", "Offset", 0, QApplication::UnicodeUTF8));
        labelOffset->setText(QApplication::translate("PartGui::TaskOffset", "Offset", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PartGui::TaskOffset", "Mode", 0, QApplication::UnicodeUTF8));
        modeType->clear();
        modeType->insertItems(0, QStringList()
         << QApplication::translate("PartGui::TaskOffset", "Skin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::TaskOffset", "Pipe", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::TaskOffset", "RectoVerso", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("PartGui::TaskOffset", "Join type", 0, QApplication::UnicodeUTF8));
        joinType->clear();
        joinType->insertItems(0, QStringList()
         << QApplication::translate("PartGui::TaskOffset", "Arc", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::TaskOffset", "Tangent", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::TaskOffset", "Intersection", 0, QApplication::UnicodeUTF8)
        );
        intersection->setText(QApplication::translate("PartGui::TaskOffset", "Intersection", 0, QApplication::UnicodeUTF8));
        selfIntersection->setText(QApplication::translate("PartGui::TaskOffset", "Self-intersection", 0, QApplication::UnicodeUTF8));
        fillOffset->setText(QApplication::translate("PartGui::TaskOffset", "Fill offset", 0, QApplication::UnicodeUTF8));
        facesButton->setText(QApplication::translate("PartGui::TaskOffset", "Faces", 0, QApplication::UnicodeUTF8));
        updateView->setText(QApplication::translate("PartGui::TaskOffset", "Update view", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class TaskOffset: public Ui_TaskOffset {};
} // namespace Ui
} // namespace PartGui

#endif // UI_TASKOFFSET_H
