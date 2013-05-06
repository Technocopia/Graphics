/****************************************************************************
** Meta object code from reading C++ file 'PropertyView.h'
**
** Created: Thu Apr 18 22:17:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/PropertyView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__PropertyView[] = {

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

static const char qt_meta_stringdata_Gui__PropertyView[] = {
    "Gui::PropertyView\0"
};

void Gui::PropertyView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::PropertyView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PropertyView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui__PropertyView,
      qt_meta_data_Gui__PropertyView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PropertyView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PropertyView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PropertyView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PropertyView))
        return static_cast<void*>(const_cast< PropertyView*>(this));
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(const_cast< PropertyView*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::PropertyView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__DockWnd__PropertyDockView[] = {

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

static const char qt_meta_stringdata_Gui__DockWnd__PropertyDockView[] = {
    "Gui::DockWnd::PropertyDockView\0"
};

void Gui::DockWnd::PropertyDockView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::DockWnd::PropertyDockView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::DockWnd::PropertyDockView::staticMetaObject = {
    { &Gui::DockWindow::staticMetaObject, qt_meta_stringdata_Gui__DockWnd__PropertyDockView,
      qt_meta_data_Gui__DockWnd__PropertyDockView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::DockWnd::PropertyDockView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::DockWnd::PropertyDockView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::DockWnd::PropertyDockView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__DockWnd__PropertyDockView))
        return static_cast<void*>(const_cast< PropertyDockView*>(this));
    typedef Gui::DockWindow QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Gui::DockWnd::PropertyDockView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::DockWindow QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
