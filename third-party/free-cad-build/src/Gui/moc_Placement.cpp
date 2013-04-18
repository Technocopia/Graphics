/****************************************************************************
** Meta object code from reading C++ file 'Placement.h'
**
** Created: Thu Apr 18 07:04:50 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/Placement.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Placement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__Placement[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   24,   23,   23, 0x05,
      64,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      83,   23,   23,   23, 0x08,
     108,   23,   23,   23, 0x08,
     151,   23,   23,   23, 0x08,
     175,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__Placement[] = {
    "Gui::Dialog::Placement\0\0,,\0"
    "placementChanged(QVariant,bool,bool)\0"
    "directionChanged()\0on_applyButton_clicked()\0"
    "on_applyIncrementalPlacement_toggled(bool)\0"
    "onPlacementChanged(int)\0"
    "on_resetButton_clicked()\0"
};

void Gui::Dialog::Placement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Placement *_t = static_cast<Placement *>(_o);
        switch (_id) {
        case 0: _t->placementChanged((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->directionChanged(); break;
        case 2: _t->on_applyButton_clicked(); break;
        case 3: _t->on_applyIncrementalPlacement_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onPlacementChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_resetButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::Placement::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::Placement::staticMetaObject = {
    { &Gui::LocationDialog::staticMetaObject, qt_meta_stringdata_Gui__Dialog__Placement,
      qt_meta_data_Gui__Dialog__Placement, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::Placement::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::Placement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::Placement::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__Placement))
        return static_cast<void*>(const_cast< Placement*>(this));
    typedef Gui::LocationDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Gui::Dialog::Placement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::LocationDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Gui::Dialog::Placement::placementChanged(const QVariant & _t1, bool _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gui::Dialog::Placement::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_Gui__Dialog__DockablePlacement[] = {

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

static const char qt_meta_stringdata_Gui__Dialog__DockablePlacement[] = {
    "Gui::Dialog::DockablePlacement\0"
};

void Gui::Dialog::DockablePlacement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::Dialog::DockablePlacement::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DockablePlacement::staticMetaObject = {
    { &Placement::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DockablePlacement,
      qt_meta_data_Gui__Dialog__DockablePlacement, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DockablePlacement::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DockablePlacement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DockablePlacement::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DockablePlacement))
        return static_cast<void*>(const_cast< DockablePlacement*>(this));
    return Placement::qt_metacast(_clname);
}

int Gui::Dialog::DockablePlacement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Placement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__Dialog__TaskPlacement[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   28,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   28,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__TaskPlacement[] = {
    "Gui::Dialog::TaskPlacement\0\0,,\0"
    "placementChanged(QVariant,bool,bool)\0"
    "slotPlacementChanged(QVariant,bool,bool)\0"
};

void Gui::Dialog::TaskPlacement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskPlacement *_t = static_cast<TaskPlacement *>(_o);
        switch (_id) {
        case 0: _t->placementChanged((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->slotPlacementChanged((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::TaskPlacement::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::TaskPlacement::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_Gui__Dialog__TaskPlacement,
      qt_meta_data_Gui__Dialog__TaskPlacement, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::TaskPlacement::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::TaskPlacement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::TaskPlacement::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__TaskPlacement))
        return static_cast<void*>(const_cast< TaskPlacement*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Gui::Dialog::TaskPlacement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Gui::Dialog::TaskPlacement::placementChanged(const QVariant & _t1, bool _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
