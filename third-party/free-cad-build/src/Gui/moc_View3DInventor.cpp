/****************************************************************************
** Meta object code from reading C++ file 'View3DInventor.h'
**
** Created: Thu Apr 18 07:04:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/View3DInventor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'View3DInventor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__GLOverlayWidget[] = {

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

static const char qt_meta_stringdata_Gui__GLOverlayWidget[] = {
    "Gui::GLOverlayWidget\0"
};

void Gui::GLOverlayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::GLOverlayWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::GLOverlayWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui__GLOverlayWidget,
      qt_meta_data_Gui__GLOverlayWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::GLOverlayWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::GLOverlayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::GLOverlayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__GLOverlayWidget))
        return static_cast<void*>(const_cast< GLOverlayWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::GLOverlayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__View3DInventor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      42,   40,   20,   20, 0x0a,
      78,   69,   20,   20, 0x0a,
      96,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__View3DInventor[] = {
    "Gui::View3DInventor\0\0setCursor(QCursor)\0"
    "s\0setCursor(Qt::CursorShape)\0filename\0"
    "dump(const char*)\0stopAnimating()\0"
};

void Gui::View3DInventor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        View3DInventor *_t = static_cast<View3DInventor *>(_o);
        switch (_id) {
        case 0: _t->setCursor((*reinterpret_cast< const QCursor(*)>(_a[1]))); break;
        case 1: _t->setCursor((*reinterpret_cast< Qt::CursorShape(*)>(_a[1]))); break;
        case 2: _t->dump((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 3: _t->stopAnimating(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::View3DInventor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::View3DInventor::staticMetaObject = {
    { &MDIView::staticMetaObject, qt_meta_stringdata_Gui__View3DInventor,
      qt_meta_data_Gui__View3DInventor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::View3DInventor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::View3DInventor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::View3DInventor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__View3DInventor))
        return static_cast<void*>(const_cast< View3DInventor*>(this));
    if (!strcmp(_clname, "ParameterGrp::ObserverType"))
        return static_cast< ParameterGrp::ObserverType*>(const_cast< View3DInventor*>(this));
    return MDIView::qt_metacast(_clname);
}

int Gui::View3DInventor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MDIView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
