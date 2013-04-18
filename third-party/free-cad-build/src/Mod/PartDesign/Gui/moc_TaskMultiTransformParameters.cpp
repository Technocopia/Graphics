/****************************************************************************
** Meta object code from reading C++ file 'TaskMultiTransformParameters.h'
**
** Created: Thu Apr 18 07:20:53 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/PartDesign/Gui/TaskMultiTransformParameters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskMultiTransformParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartDesignGui__TaskMultiTransformParameters[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   44,   44,   44, 0x08,
      65,   44,   44,   44, 0x08,
      89,   83,   44,   44, 0x08,
     123,   44,   44,   44, 0x08,
     148,   44,   44,   44, 0x08,
     178,   44,   44,   44, 0x08,
     207,   44,   44,   44, 0x08,
     230,   44,   44,   44, 0x08,
     241,   44,   44,   44, 0x08,
     254,   44,   44,   44, 0x08,
     274,   44,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartDesignGui__TaskMultiTransformParameters[] = {
    "PartDesignGui::TaskMultiTransformParameters\0"
    "\0onTransformDelete()\0onTransformEdit()\0"
    "index\0onTransformActivated(QModelIndex)\0"
    "onTransformAddMirrored()\0"
    "onTransformAddLinearPattern()\0"
    "onTransformAddPolarPattern()\0"
    "onTransformAddScaled()\0onMoveUp()\0"
    "onMoveDown()\0onSubTaskButtonOK()\0"
    "onUpdateView(bool)\0"
};

void PartDesignGui::TaskMultiTransformParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskMultiTransformParameters *_t = static_cast<TaskMultiTransformParameters *>(_o);
        switch (_id) {
        case 0: _t->onTransformDelete(); break;
        case 1: _t->onTransformEdit(); break;
        case 2: _t->onTransformActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->onTransformAddMirrored(); break;
        case 4: _t->onTransformAddLinearPattern(); break;
        case 5: _t->onTransformAddPolarPattern(); break;
        case 6: _t->onTransformAddScaled(); break;
        case 7: _t->onMoveUp(); break;
        case 8: _t->onMoveDown(); break;
        case 9: _t->onSubTaskButtonOK(); break;
        case 10: _t->onUpdateView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartDesignGui::TaskMultiTransformParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskMultiTransformParameters::staticMetaObject = {
    { &TaskTransformedParameters::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskMultiTransformParameters,
      qt_meta_data_PartDesignGui__TaskMultiTransformParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskMultiTransformParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskMultiTransformParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskMultiTransformParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskMultiTransformParameters))
        return static_cast<void*>(const_cast< TaskMultiTransformParameters*>(this));
    return TaskTransformedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskMultiTransformParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskTransformedParameters::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
static const uint qt_meta_data_PartDesignGui__TaskDlgMultiTransformParameters[] = {

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

static const char qt_meta_stringdata_PartDesignGui__TaskDlgMultiTransformParameters[] = {
    "PartDesignGui::TaskDlgMultiTransformParameters\0"
};

void PartDesignGui::TaskDlgMultiTransformParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartDesignGui::TaskDlgMultiTransformParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskDlgMultiTransformParameters::staticMetaObject = {
    { &TaskDlgTransformedParameters::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskDlgMultiTransformParameters,
      qt_meta_data_PartDesignGui__TaskDlgMultiTransformParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskDlgMultiTransformParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskDlgMultiTransformParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskDlgMultiTransformParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgMultiTransformParameters))
        return static_cast<void*>(const_cast< TaskDlgMultiTransformParameters*>(this));
    return TaskDlgTransformedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgMultiTransformParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgTransformedParameters::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
