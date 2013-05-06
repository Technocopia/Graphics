/****************************************************************************
** Meta object code from reading C++ file 'Tree.h'
**
** Created: Thu Apr 18 22:17:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/Tree.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Tree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__TreeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x09,
      33,   16,   16,   16, 0x09,
      51,   16,   16,   16, 0x09,
      80,   16,   16,   16, 0x09,
      97,   16,   16,   16, 0x09,
     115,   16,   16,   16, 0x08,
     145,  140,   16,   16, 0x08,
     177,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__TreeWidget[] = {
    "Gui::TreeWidget\0\0onCreateGroup()\0"
    "onRelabelObject()\0onActivateDocument(QAction*)\0"
    "onStartEditing()\0onFinishEditing()\0"
    "onItemSelectionChanged()\0item\0"
    "onItemEntered(QTreeWidgetItem*)\0"
    "onTestStatus()\0"
};

void Gui::TreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TreeWidget *_t = static_cast<TreeWidget *>(_o);
        switch (_id) {
        case 0: _t->onCreateGroup(); break;
        case 1: _t->onRelabelObject(); break;
        case 2: _t->onActivateDocument((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->onStartEditing(); break;
        case 4: _t->onFinishEditing(); break;
        case 5: _t->onItemSelectionChanged(); break;
        case 6: _t->onItemEntered((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->onTestStatus(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::TreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::TreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_Gui__TreeWidget,
      qt_meta_data_Gui__TreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::TreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::TreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::TreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__TreeWidget))
        return static_cast<void*>(const_cast< TreeWidget*>(this));
    if (!strcmp(_clname, "SelectionObserver"))
        return static_cast< SelectionObserver*>(const_cast< TreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int Gui::TreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_Gui__TreeDockWidget[] = {

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

static const char qt_meta_stringdata_Gui__TreeDockWidget[] = {
    "Gui::TreeDockWidget\0"
};

void Gui::TreeDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::TreeDockWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::TreeDockWidget::staticMetaObject = {
    { &Gui::DockWindow::staticMetaObject, qt_meta_stringdata_Gui__TreeDockWidget,
      qt_meta_data_Gui__TreeDockWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::TreeDockWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::TreeDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::TreeDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__TreeDockWidget))
        return static_cast<void*>(const_cast< TreeDockWidget*>(this));
    typedef Gui::DockWindow QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Gui::TreeDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::DockWindow QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
