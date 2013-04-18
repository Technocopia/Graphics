/****************************************************************************
** Meta object code from reading C++ file 'TaskAppearance.h'
**
** Created: Thu Apr 18 07:04:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../free-cad/src/Gui/TaskView/TaskAppearance.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskAppearance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__TaskView__TaskAppearance[] = {

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
      31,   30,   30,   30, 0x08,
      64,   30,   30,   30, 0x08,
      97,   30,   30,   30, 0x08,
     135,   30,   30,   30, 0x08,
     170,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__TaskView__TaskAppearance[] = {
    "Gui::TaskView::TaskAppearance\0\0"
    "on_changeMode_activated(QString)\0"
    "on_changePlot_activated(QString)\0"
    "on_spinTransparency_valueChanged(int)\0"
    "on_spinPointSize_valueChanged(int)\0"
    "on_spinLineWidth_valueChanged(int)\0"
};

void Gui::TaskView::TaskAppearance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskAppearance *_t = static_cast<TaskAppearance *>(_o);
        switch (_id) {
        case 0: _t->on_changeMode_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_changePlot_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_spinTransparency_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_spinPointSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_spinLineWidth_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::TaskView::TaskAppearance::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::TaskView::TaskAppearance::staticMetaObject = {
    { &TaskBox::staticMetaObject, qt_meta_stringdata_Gui__TaskView__TaskAppearance,
      qt_meta_data_Gui__TaskView__TaskAppearance, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::TaskView::TaskAppearance::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::TaskView::TaskAppearance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::TaskView::TaskAppearance::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__TaskView__TaskAppearance))
        return static_cast<void*>(const_cast< TaskAppearance*>(this));
    if (!strcmp(_clname, "Gui::SelectionSingleton::ObserverType"))
        return static_cast< Gui::SelectionSingleton::ObserverType*>(const_cast< TaskAppearance*>(this));
    return TaskBox::qt_metacast(_clname);
}

int Gui::TaskView::TaskAppearance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
