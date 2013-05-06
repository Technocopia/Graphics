/****************************************************************************
** Meta object code from reading C++ file 'TaskDraftParameters.h'
**
** Created: Thu Apr 18 22:35:41 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/PartDesign/Gui/TaskDraftParameters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskDraftParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartDesignGui__TaskDraftParameters[] = {

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
      42,   36,   35,   35, 0x08,
      74,   65,   35,   35, 0x08,
     106,   98,   35,   35, 0x08,
     128,   98,   35,   35, 0x08,
     153,   98,   35,   35, 0x08,
     173,   98,   35,   35, 0x08,
     192,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartDesignGui__TaskDraftParameters[] = {
    "PartDesignGui::TaskDraftParameters\0\0"
    "angle\0onAngleChanged(double)\0reversed\0"
    "onReversedChanged(bool)\0checked\0"
    "onButtonFaceAdd(bool)\0onButtonFaceRemove(bool)\0"
    "onButtonPlane(bool)\0onButtonLine(bool)\0"
    "onFaceDeleted()\0"
};

void PartDesignGui::TaskDraftParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskDraftParameters *_t = static_cast<TaskDraftParameters *>(_o);
        switch (_id) {
        case 0: _t->onAngleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->onReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onButtonFaceAdd((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->onButtonFaceRemove((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->onButtonPlane((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->onButtonLine((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 6: _t->onFaceDeleted(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartDesignGui::TaskDraftParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskDraftParameters::staticMetaObject = {
    { &Gui::TaskView::TaskBox::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskDraftParameters,
      qt_meta_data_PartDesignGui__TaskDraftParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskDraftParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskDraftParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskDraftParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDraftParameters))
        return static_cast<void*>(const_cast< TaskDraftParameters*>(this));
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(const_cast< TaskDraftParameters*>(this));
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartDesignGui::TaskDraftParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PartDesignGui__TaskDlgDraftParameters[] = {

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

static const char qt_meta_stringdata_PartDesignGui__TaskDlgDraftParameters[] = {
    "PartDesignGui::TaskDlgDraftParameters\0"
};

void PartDesignGui::TaskDlgDraftParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartDesignGui::TaskDlgDraftParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartDesignGui::TaskDlgDraftParameters::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_PartDesignGui__TaskDlgDraftParameters,
      qt_meta_data_PartDesignGui__TaskDlgDraftParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartDesignGui::TaskDlgDraftParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartDesignGui::TaskDlgDraftParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartDesignGui::TaskDlgDraftParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgDraftParameters))
        return static_cast<void*>(const_cast< TaskDlgDraftParameters*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgDraftParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
