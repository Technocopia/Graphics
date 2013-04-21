/****************************************************************************
** Meta object code from reading C++ file 'TaskPocketParameters.h'
**
** Created: Thu Apr 18 22:35:40 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/PartDesign/Gui/TaskPocketParameters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskPocketParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartDesignGui__TaskPocketParameters[] = {

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
      37,   36,   36,   36, 0x08,
      61,   36,   36,   36, 0x08,
      85,   36,   36,   36, 0x08,
     112,  104,   36,   36, 0x08,
     131,   36,   36,   36, 0x28,
     151,  146,   36,   36, 0x08,
     171,   36,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartDesignGui__TaskPocketParameters[] = {
    "PartDesignGui::TaskPocketParameters\0"
    "\0onLengthChanged(double)\0"
    "onMidplaneChanged(bool)\0onModeChanged(int)\0"
    "pressed\0onButtonFace(bool)\0onButtonFace()\0"
    "text\0onFaceName(QString)\0onUpdateView(bool)\0"
};

void PartDesignGui::TaskPocketParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskPocketParameters *_t = static_cast<TaskPocketParameters *>(_o);
        switch (_id) {
        case 0: _t->onLengthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->onMidplaneChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onButtonFace((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->onButtonFace(); break;
        case 5: _t->onFaceName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onUpdateView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartDesignGui::TaskPocketParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskPocketParameters::staticMetaObject = {
    { &Gui::TaskView::TaskBox::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskPocketParameters,
      qt_meta_data_PartDesignGui__TaskPocketParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskPocketParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskPocketParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskPocketParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskPocketParameters))
        return static_cast<void*>(const_cast< TaskPocketParameters*>(this));
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(const_cast< TaskPocketParameters*>(this));
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartDesignGui::TaskPocketParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_PartDesignGui__TaskDlgPocketParameters[] = {

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

static const char qt_meta_stringdata_PartDesignGui__TaskDlgPocketParameters[] = {
    "PartDesignGui::TaskDlgPocketParameters\0"
};

void PartDesignGui::TaskDlgPocketParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartDesignGui::TaskDlgPocketParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskDlgPocketParameters::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskDlgPocketParameters,
      qt_meta_data_PartDesignGui__TaskDlgPocketParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskDlgPocketParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskDlgPocketParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskDlgPocketParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgPocketParameters))
        return static_cast<void*>(const_cast< TaskDlgPocketParameters*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgPocketParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
