/****************************************************************************
** Meta object code from reading C++ file 'TaskGrooveParameters.h'
**
** Created: Thu Apr 18 07:20:50 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/PartDesign/Gui/TaskGrooveParameters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskGrooveParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartDesignGui__TaskGrooveParameters[] = {

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
      37,   36,   36,   36, 0x08,
      60,   36,   36,   36, 0x08,
      79,   36,   36,   36, 0x08,
      96,   36,   36,   36, 0x08,
     113,   36,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartDesignGui__TaskGrooveParameters[] = {
    "PartDesignGui::TaskGrooveParameters\0"
    "\0onAngleChanged(double)\0onAxisChanged(int)\0"
    "onMidplane(bool)\0onReversed(bool)\0"
    "onUpdateView(bool)\0"
};

void PartDesignGui::TaskGrooveParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskGrooveParameters *_t = static_cast<TaskGrooveParameters *>(_o);
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

const QMetaObjectExtraData PartDesignGui::TaskGrooveParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskGrooveParameters::staticMetaObject = {
    { &Gui::TaskView::TaskBox::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskGrooveParameters,
      qt_meta_data_PartDesignGui__TaskGrooveParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskGrooveParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskGrooveParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskGrooveParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskGrooveParameters))
        return static_cast<void*>(const_cast< TaskGrooveParameters*>(this));
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartDesignGui::TaskGrooveParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PartDesignGui__TaskDlgGrooveParameters[] = {

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

static const char qt_meta_stringdata_PartDesignGui__TaskDlgGrooveParameters[] = {
    "PartDesignGui::TaskDlgGrooveParameters\0"
};

void PartDesignGui::TaskDlgGrooveParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartDesignGui::TaskDlgGrooveParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskDlgGrooveParameters::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskDlgGrooveParameters,
      qt_meta_data_PartDesignGui__TaskDlgGrooveParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskDlgGrooveParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskDlgGrooveParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskDlgGrooveParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgGrooveParameters))
        return static_cast<void*>(const_cast< TaskDlgGrooveParameters*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgGrooveParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
