/****************************************************************************
** Meta object code from reading C++ file 'TaskOffset.h'
**
** Created: Thu Apr 18 07:17:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Part/Gui/TaskOffset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskOffset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartGui__OffsetWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,
      58,   22,   22,   22, 0x08,
      85,   22,   22,   22, 0x08,
     112,   22,   22,   22, 0x08,
     142,   22,   22,   22, 0x08,
     176,   22,   22,   22, 0x08,
     204,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartGui__OffsetWidget[] = {
    "PartGui::OffsetWidget\0\0"
    "on_spinOffset_valueChanged(double)\0"
    "on_modeType_activated(int)\0"
    "on_joinType_activated(int)\0"
    "on_intersection_toggled(bool)\0"
    "on_selfIntersection_toggled(bool)\0"
    "on_fillOffset_toggled(bool)\0"
    "on_updateView_toggled(bool)\0"
};

void PartGui::OffsetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OffsetWidget *_t = static_cast<OffsetWidget *>(_o);
        switch (_id) {
        case 0: _t->on_spinOffset_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->on_modeType_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_joinType_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_intersection_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_selfIntersection_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_fillOffset_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_updateView_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartGui::OffsetWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::OffsetWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PartGui__OffsetWidget,
      qt_meta_data_PartGui__OffsetWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::OffsetWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::OffsetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::OffsetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__OffsetWidget))
        return static_cast<void*>(const_cast< OffsetWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PartGui::OffsetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_PartGui__TaskOffset[] = {

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

static const char qt_meta_stringdata_PartGui__TaskOffset[] = {
    "PartGui::TaskOffset\0"
};

void PartGui::TaskOffset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartGui::TaskOffset::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::TaskOffset::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_PartGui__TaskOffset,
      qt_meta_data_PartGui__TaskOffset, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::TaskOffset::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::TaskOffset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::TaskOffset::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__TaskOffset))
        return static_cast<void*>(const_cast< TaskOffset*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartGui::TaskOffset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
