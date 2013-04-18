/****************************************************************************
** Meta object code from reading C++ file 'TaskSweep.h'
**
** Created: Thu Apr 18 07:17:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Part/Gui/TaskSweep.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskSweep.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartGui__SweepWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   22,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartGui__SweepWidget[] = {
    "PartGui::SweepWidget\0\0,\0"
    "onCurrentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
};

void PartGui::SweepWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SweepWidget *_t = static_cast<SweepWidget *>(_o);
        switch (_id) {
        case 0: _t->onCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartGui::SweepWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::SweepWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PartGui__SweepWidget,
      qt_meta_data_PartGui__SweepWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::SweepWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::SweepWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::SweepWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__SweepWidget))
        return static_cast<void*>(const_cast< SweepWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PartGui::SweepWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_PartGui__TaskSweep[] = {

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

static const char qt_meta_stringdata_PartGui__TaskSweep[] = {
    "PartGui::TaskSweep\0"
};

void PartGui::TaskSweep::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartGui::TaskSweep::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::TaskSweep::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_PartGui__TaskSweep,
      qt_meta_data_PartGui__TaskSweep, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::TaskSweep::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::TaskSweep::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::TaskSweep::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__TaskSweep))
        return static_cast<void*>(const_cast< TaskSweep*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartGui::TaskSweep::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
