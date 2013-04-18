/****************************************************************************
** Meta object code from reading C++ file 'TaskSketcherGeneral.h'
**
** Created: Thu Apr 18 07:24:50 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Sketcher/Gui/TaskSketcherGeneral.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskSketcherGeneral.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SketcherGui__TaskSketcherGeneral[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      39,   34,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   56,   33,   33, 0x0a,
      87,   81,   33,   33, 0x0a,
     107,   81,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SketcherGui__TaskSketcherGeneral[] = {
    "SketcherGui::TaskSketcherGeneral\0\0"
    "Type\0setGridSnap(int)\0val\0"
    "setGridSize(QString)\0state\0"
    "toggleGridSnap(int)\0toggleAutoconstraints(int)\0"
};

void SketcherGui::TaskSketcherGeneral::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskSketcherGeneral *_t = static_cast<TaskSketcherGeneral *>(_o);
        switch (_id) {
        case 0: _t->setGridSnap((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setGridSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->toggleGridSnap((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->toggleAutoconstraints((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SketcherGui::TaskSketcherGeneral::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SketcherGui::TaskSketcherGeneral::staticMetaObject = {
    { &Gui::TaskView::TaskBox::staticMetaObject, qt_meta_stringdata_SketcherGui__TaskSketcherGeneral,
      qt_meta_data_SketcherGui__TaskSketcherGeneral, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SketcherGui::TaskSketcherGeneral::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SketcherGui::TaskSketcherGeneral::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SketcherGui::TaskSketcherGeneral::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SketcherGui__TaskSketcherGeneral))
        return static_cast<void*>(const_cast< TaskSketcherGeneral*>(this));
    if (!strcmp(_clname, "Gui::SelectionSingleton::ObserverType"))
        return static_cast< Gui::SelectionSingleton::ObserverType*>(const_cast< TaskSketcherGeneral*>(this));
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int SketcherGui::TaskSketcherGeneral::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SketcherGui::TaskSketcherGeneral::setGridSnap(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
