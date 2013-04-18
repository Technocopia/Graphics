/****************************************************************************
** Meta object code from reading C++ file 'TaskLinearPatternParameters.h'
**
** Created: Thu Apr 18 07:20:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/PartDesign/Gui/TaskLinearPatternParameters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskLinearPatternParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartDesignGui__TaskLinearPatternParameters[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      48,   44,   43,   43, 0x08,
      75,   72,   43,   43, 0x08,
      98,   96,   43,   43, 0x08,
     117,  115,   43,   43, 0x08,
     136,   43,   43,   43, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartDesignGui__TaskLinearPatternParameters[] = {
    "PartDesignGui::TaskLinearPatternParameters\0"
    "\0num\0onDirectionChanged(int)\0on\0"
    "onCheckReverse(bool)\0l\0onLength(double)\0"
    "n\0onOccurrences(int)\0onUpdateView(bool)\0"
};

void PartDesignGui::TaskLinearPatternParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskLinearPatternParameters *_t = static_cast<TaskLinearPatternParameters *>(_o);
        switch (_id) {
        case 0: _t->onDirectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onCheckReverse((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->onLength((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 3: _t->onOccurrences((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->onUpdateView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartDesignGui::TaskLinearPatternParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskLinearPatternParameters::staticMetaObject = {
    { &TaskTransformedParameters::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskLinearPatternParameters,
      qt_meta_data_PartDesignGui__TaskLinearPatternParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskLinearPatternParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskLinearPatternParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskLinearPatternParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskLinearPatternParameters))
        return static_cast<void*>(const_cast< TaskLinearPatternParameters*>(this));
    return TaskTransformedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskLinearPatternParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskTransformedParameters::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_PartDesignGui__TaskDlgLinearPatternParameters[] = {

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

static const char qt_meta_stringdata_PartDesignGui__TaskDlgLinearPatternParameters[] = {
    "PartDesignGui::TaskDlgLinearPatternParameters\0"
};

void PartDesignGui::TaskDlgLinearPatternParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartDesignGui::TaskDlgLinearPatternParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskDlgLinearPatternParameters::staticMetaObject = {
    { &TaskDlgTransformedParameters::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskDlgLinearPatternParameters,
      qt_meta_data_PartDesignGui__TaskDlgLinearPatternParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskDlgLinearPatternParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskDlgLinearPatternParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskDlgLinearPatternParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgLinearPatternParameters))
        return static_cast<void*>(const_cast< TaskDlgLinearPatternParameters*>(this));
    return TaskDlgTransformedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgLinearPatternParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgTransformedParameters::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
