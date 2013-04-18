/****************************************************************************
** Meta object code from reading C++ file 'MDIView.h'
**
** Created: Thu Apr 18 07:04:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/MDIView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MDIView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__MDIView[] = {

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
      16,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   37,   13,   13, 0x0a,
      62,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__MDIView[] = {
    "Gui::MDIView\0\0,\0message(QString,int)\0"
    "printer\0print(QPrinter*)\0"
    "windowStateChanged(MDIView*)\0"
};

void Gui::MDIView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MDIView *_t = static_cast<MDIView *>(_o);
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->print((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 2: _t->windowStateChanged((*reinterpret_cast< MDIView*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::MDIView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::MDIView::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Gui__MDIView,
      qt_meta_data_Gui__MDIView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::MDIView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::MDIView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::MDIView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__MDIView))
        return static_cast<void*>(const_cast< MDIView*>(this));
    if (!strcmp(_clname, "BaseView"))
        return static_cast< BaseView*>(const_cast< MDIView*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Gui::MDIView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void Gui::MDIView::message(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
