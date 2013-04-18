/****************************************************************************
** Meta object code from reading C++ file 'TaskRevolutionParameters.h'
**
** Created: Thu Apr 18 07:20:50 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/PartDesign/Gui/TaskRevolutionParameters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskRevolutionParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartDesignGui__TaskRevolutionParameters[] = {

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
      41,   40,   40,   40, 0x08,
      64,   40,   40,   40, 0x08,
      83,   40,   40,   40, 0x08,
     100,   40,   40,   40, 0x08,
     117,   40,   40,   40, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartDesignGui__TaskRevolutionParameters[] = {
    "PartDesignGui::TaskRevolutionParameters\0"
    "\0onAngleChanged(double)\0onAxisChanged(int)\0"
    "onMidplane(bool)\0onReversed(bool)\0"
    "onUpdateView(bool)\0"
};

void PartDesignGui::TaskRevolutionParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskRevolutionParameters *_t = static_cast<TaskRevolutionParameters *>(_o);
        switch (_id) {
        case 0: _t->onAngleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->onAxisChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onMidplane((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onReversed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onUpdateView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartDesignGui::TaskRevolutionParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskRevolutionParameters::staticMetaObject = {
    { &Gui::TaskView::TaskBox::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskRevolutionParameters,
      qt_meta_data_PartDesignGui__TaskRevolutionParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskRevolutionParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskRevolutionParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskRevolutionParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskRevolutionParameters))
        return static_cast<void*>(const_cast< TaskRevolutionParameters*>(this));
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartDesignGui::TaskRevolutionParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_PartDesignGui__TaskDlgRevolutionParameters[] = {

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

static const char qt_meta_stringdata_PartDesignGui__TaskDlgRevolutionParameters[] = {
    "PartDesignGui::TaskDlgRevolutionParameters\0"
};

void PartDesignGui::TaskDlgRevolutionParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartDesignGui::TaskDlgRevolutionParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskDlgRevolutionParameters::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskDlgRevolutionParameters,
      qt_meta_data_PartDesignGui__TaskDlgRevolutionParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskDlgRevolutionParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskDlgRevolutionParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskDlgRevolutionParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgRevolutionParameters))
        return static_cast<void*>(const_cast< TaskDlgRevolutionParameters*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgRevolutionParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
