/****************************************************************************
** Meta object code from reading C++ file 'TaskMirroredParameters.h'
**
** Created: Thu Apr 18 07:20:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/PartDesign/Gui/TaskMirroredParameters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskMirroredParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartDesignGui__TaskMirroredParameters[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   39,   38,   38, 0x08,
      63,   38,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartDesignGui__TaskMirroredParameters[] = {
    "PartDesignGui::TaskMirroredParameters\0"
    "\0num\0onPlaneChanged(int)\0onUpdateView(bool)\0"
};

void PartDesignGui::TaskMirroredParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskMirroredParameters *_t = static_cast<TaskMirroredParameters *>(_o);
        switch (_id) {
        case 0: _t->onPlaneChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onUpdateView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartDesignGui::TaskMirroredParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskMirroredParameters::staticMetaObject = {
    { &TaskTransformedParameters::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskMirroredParameters,
      qt_meta_data_PartDesignGui__TaskMirroredParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskMirroredParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskMirroredParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskMirroredParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskMirroredParameters))
        return static_cast<void*>(const_cast< TaskMirroredParameters*>(this));
    return TaskTransformedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskMirroredParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskTransformedParameters::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_PartDesignGui__TaskDlgMirroredParameters[] = {

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

static const char qt_meta_stringdata_PartDesignGui__TaskDlgMirroredParameters[] = {
    "PartDesignGui::TaskDlgMirroredParameters\0"
};

void PartDesignGui::TaskDlgMirroredParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartDesignGui::TaskDlgMirroredParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskDlgMirroredParameters::staticMetaObject = {
    { &TaskDlgTransformedParameters::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskDlgMirroredParameters,
      qt_meta_data_PartDesignGui__TaskDlgMirroredParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskDlgMirroredParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskDlgMirroredParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskDlgMirroredParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgMirroredParameters))
        return static_cast<void*>(const_cast< TaskDlgMirroredParameters*>(this));
    return TaskDlgTransformedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgMirroredParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgTransformedParameters::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
