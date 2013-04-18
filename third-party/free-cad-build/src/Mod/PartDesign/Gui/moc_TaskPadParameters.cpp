/****************************************************************************
** Meta object code from reading C++ file 'TaskPadParameters.h'
**
** Created: Thu Apr 18 07:20:48 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/PartDesign/Gui/TaskPadParameters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskPadParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartDesignGui__TaskPadParameters[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x08,
      58,   33,   33,   33, 0x08,
      75,   33,   33,   33, 0x08,
      92,   33,   33,   33, 0x08,
     117,   33,   33,   33, 0x08,
     144,  136,   33,   33, 0x08,
     163,   33,   33,   33, 0x28,
     183,  178,   33,   33, 0x08,
     203,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartDesignGui__TaskPadParameters[] = {
    "PartDesignGui::TaskPadParameters\0\0"
    "onLengthChanged(double)\0onMidplane(bool)\0"
    "onReversed(bool)\0onLength2Changed(double)\0"
    "onModeChanged(int)\0pressed\0"
    "onButtonFace(bool)\0onButtonFace()\0"
    "text\0onFaceName(QString)\0onUpdateView(bool)\0"
};

void PartDesignGui::TaskPadParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskPadParameters *_t = static_cast<TaskPadParameters *>(_o);
        switch (_id) {
        case 0: _t->onLengthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->onMidplane((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onReversed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onLength2Changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->onModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onButtonFace((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 6: _t->onButtonFace(); break;
        case 7: _t->onFaceName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->onUpdateView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartDesignGui::TaskPadParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskPadParameters::staticMetaObject = {
    { &Gui::TaskView::TaskBox::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskPadParameters,
      qt_meta_data_PartDesignGui__TaskPadParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskPadParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskPadParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskPadParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskPadParameters))
        return static_cast<void*>(const_cast< TaskPadParameters*>(this));
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(const_cast< TaskPadParameters*>(this));
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartDesignGui::TaskPadParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_PartDesignGui__TaskDlgPadParameters[] = {

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

static const char qt_meta_stringdata_PartDesignGui__TaskDlgPadParameters[] = {
    "PartDesignGui::TaskDlgPadParameters\0"
};

void PartDesignGui::TaskDlgPadParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartDesignGui::TaskDlgPadParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskDlgPadParameters::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskDlgPadParameters,
      qt_meta_data_PartDesignGui__TaskDlgPadParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskDlgPadParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskDlgPadParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskDlgPadParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgPadParameters))
        return static_cast<void*>(const_cast< TaskDlgPadParameters*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgPadParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
