/****************************************************************************
** Meta object code from reading C++ file 'TaskScaledParameters.h'
**
** Created: Thu Apr 18 07:20:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/PartDesign/Gui/TaskScaledParameters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskScaledParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartDesignGui__TaskScaledParameters[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   37,   36,   36, 0x08,
      58,   56,   36,   36, 0x08,
      77,   36,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartDesignGui__TaskScaledParameters[] = {
    "PartDesignGui::TaskScaledParameters\0"
    "\0f\0onFactor(double)\0n\0onOccurrences(int)\0"
    "onUpdateView(bool)\0"
};

void PartDesignGui::TaskScaledParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskScaledParameters *_t = static_cast<TaskScaledParameters *>(_o);
        switch (_id) {
        case 0: _t->onFactor((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 1: _t->onOccurrences((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->onUpdateView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartDesignGui::TaskScaledParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskScaledParameters::staticMetaObject = {
    { &TaskTransformedParameters::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskScaledParameters,
      qt_meta_data_PartDesignGui__TaskScaledParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskScaledParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskScaledParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskScaledParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskScaledParameters))
        return static_cast<void*>(const_cast< TaskScaledParameters*>(this));
    return TaskTransformedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskScaledParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskTransformedParameters::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_PartDesignGui__TaskDlgScaledParameters[] = {

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

static const char qt_meta_stringdata_PartDesignGui__TaskDlgScaledParameters[] = {
    "PartDesignGui::TaskDlgScaledParameters\0"
};

void PartDesignGui::TaskDlgScaledParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartDesignGui::TaskDlgScaledParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskDlgScaledParameters::staticMetaObject = {
    { &TaskDlgTransformedParameters::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskDlgScaledParameters,
      qt_meta_data_PartDesignGui__TaskDlgScaledParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskDlgScaledParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskDlgScaledParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskDlgScaledParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgScaledParameters))
        return static_cast<void*>(const_cast< TaskDlgScaledParameters*>(this));
    return TaskDlgTransformedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgScaledParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgTransformedParameters::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
