/****************************************************************************
** Meta object code from reading C++ file 'TaskSelectLinkProperty.h'
**
** Created: Thu Apr 18 22:17:04 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../free-cad/src/Gui/TaskView/TaskSelectLinkProperty.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskSelectLinkProperty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__TaskView__TaskSelectLinkProperty[] = {

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
      39,   38,   38,   38, 0x05,
      58,   38,   38,   38, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   38,   38,   38, 0x08,
     104,   38,   38,   38, 0x08,
     125,   38,   38,   38, 0x08,
     149,   38,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__TaskView__TaskSelectLinkProperty[] = {
    "Gui::TaskView::TaskSelectLinkProperty\0"
    "\0emitSelectionFit()\0emitSelectionMisfit()\0"
    "on_Remove_clicked(bool)\0on_Add_clicked(bool)\0"
    "on_Invert_clicked(bool)\0on_Help_clicked(bool)\0"
};

void Gui::TaskView::TaskSelectLinkProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskSelectLinkProperty *_t = static_cast<TaskSelectLinkProperty *>(_o);
        switch (_id) {
        case 0: _t->emitSelectionFit(); break;
        case 1: _t->emitSelectionMisfit(); break;
        case 2: _t->on_Remove_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_Add_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_Invert_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_Help_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::TaskView::TaskSelectLinkProperty::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::TaskView::TaskSelectLinkProperty::staticMetaObject = {
    { &TaskBox::staticMetaObject, qt_meta_stringdata_Gui__TaskView__TaskSelectLinkProperty,
      qt_meta_data_Gui__TaskView__TaskSelectLinkProperty, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::TaskView::TaskSelectLinkProperty::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::TaskView::TaskSelectLinkProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::TaskView::TaskSelectLinkProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__TaskView__TaskSelectLinkProperty))
        return static_cast<void*>(const_cast< TaskSelectLinkProperty*>(this));
    if (!strcmp(_clname, "Gui::SelectionSingleton::ObserverType"))
        return static_cast< Gui::SelectionSingleton::ObserverType*>(const_cast< TaskSelectLinkProperty*>(this));
    return TaskBox::qt_metacast(_clname);
}

int Gui::TaskView::TaskSelectLinkProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskBox::qt_metacall(_c, _id, _a);
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
void Gui::TaskView::TaskSelectLinkProperty::emitSelectionFit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Gui::TaskView::TaskSelectLinkProperty::emitSelectionMisfit()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
