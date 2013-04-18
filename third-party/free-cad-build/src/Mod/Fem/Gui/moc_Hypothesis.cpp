/****************************************************************************
** Meta object code from reading C++ file 'Hypothesis.h'
**
** Created: Thu Apr 18 07:30:39 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Fem/Gui/Hypothesis.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Hypothesis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FemGui__HypothesisWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_FemGui__HypothesisWidget[] = {
    "FemGui::HypothesisWidget\0"
};

void FemGui::HypothesisWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FemGui::HypothesisWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FemGui::HypothesisWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FemGui__HypothesisWidget,
      qt_meta_data_FemGui__HypothesisWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FemGui::HypothesisWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FemGui::HypothesisWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FemGui::HypothesisWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__HypothesisWidget))
        return static_cast<void*>(const_cast< HypothesisWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int FemGui::HypothesisWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_FemGui__TaskHypothesis[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_FemGui__TaskHypothesis[] = {
    "FemGui::TaskHypothesis\0"
};

void FemGui::TaskHypothesis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FemGui::TaskHypothesis::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FemGui::TaskHypothesis::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_FemGui__TaskHypothesis,
      qt_meta_data_FemGui__TaskHypothesis, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FemGui::TaskHypothesis::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FemGui::TaskHypothesis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FemGui::TaskHypothesis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskHypothesis))
        return static_cast<void*>(const_cast< TaskHypothesis*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int FemGui::TaskHypothesis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
