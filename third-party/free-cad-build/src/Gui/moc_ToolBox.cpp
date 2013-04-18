/****************************************************************************
** Meta object code from reading C++ file 'ToolBox.h'
**
** Created: Thu Apr 18 07:04:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/ToolBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToolBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__DockWnd__ToolBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   23,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   23,   22,   22, 0x0a,
      75,   70,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Gui__DockWnd__ToolBox[] = {
    "Gui::DockWnd::ToolBox\0\0index\0"
    "currentChanged(int)\0setCurrentIndex(int)\0"
    "item\0setCurrentWidget(QWidget*)\0"
};

void Gui::DockWnd::ToolBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToolBox *_t = static_cast<ToolBox *>(_o);
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCurrentWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::DockWnd::ToolBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::DockWnd::ToolBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui__DockWnd__ToolBox,
      qt_meta_data_Gui__DockWnd__ToolBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::DockWnd::ToolBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::DockWnd::ToolBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::DockWnd::ToolBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__DockWnd__ToolBox))
        return static_cast<void*>(const_cast< ToolBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::DockWnd::ToolBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Gui::DockWnd::ToolBox::currentChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
