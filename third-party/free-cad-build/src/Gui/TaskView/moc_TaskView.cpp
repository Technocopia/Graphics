/****************************************************************************
** Meta object code from reading C++ file 'TaskView.h'
**
** Created: Thu Apr 18 07:04:58 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../free-cad/src/Gui/TaskView/TaskView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__TaskView__TaskBox[] = {

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

static const char qt_meta_stringdata_Gui__TaskView__TaskBox[] = {
    "Gui::TaskView::TaskBox\0"
};

void Gui::TaskView::TaskBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::TaskView::TaskBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::TaskView::TaskBox::staticMetaObject = {
    { &iisTaskBox::staticMetaObject, qt_meta_stringdata_Gui__TaskView__TaskBox,
      qt_meta_data_Gui__TaskView__TaskBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::TaskView::TaskBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::TaskView::TaskBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::TaskView::TaskBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__TaskView__TaskBox))
        return static_cast<void*>(const_cast< TaskBox*>(this));
    if (!strcmp(_clname, "TaskContent"))
        return static_cast< TaskContent*>(const_cast< TaskBox*>(this));
    return iisTaskBox::qt_metacast(_clname);
}

int Gui::TaskView::TaskBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = iisTaskBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__TaskView__TaskWidget[] = {

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

static const char qt_meta_stringdata_Gui__TaskView__TaskWidget[] = {
    "Gui::TaskView::TaskWidget\0"
};

void Gui::TaskView::TaskWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::TaskView::TaskWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::TaskView::TaskWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui__TaskView__TaskWidget,
      qt_meta_data_Gui__TaskView__TaskWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::TaskView::TaskWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::TaskView::TaskWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::TaskView::TaskWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__TaskView__TaskWidget))
        return static_cast<void*>(const_cast< TaskWidget*>(this));
    if (!strcmp(_clname, "TaskContent"))
        return static_cast< TaskContent*>(const_cast< TaskWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::TaskView::TaskWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__TaskView__TaskView[] = {

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
      25,   24,   24,   24, 0x09,
      34,   24,   24,   24, 0x09,
      43,   24,   24,   24, 0x09,
      66,   59,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__TaskView__TaskView[] = {
    "Gui::TaskView::TaskView\0\0accept()\0"
    "reject()\0helpRequested()\0button\0"
    "clicked(QAbstractButton*)\0"
};

void Gui::TaskView::TaskView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskView *_t = static_cast<TaskView *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->helpRequested(); break;
        case 3: _t->clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::TaskView::TaskView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::TaskView::TaskView::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_Gui__TaskView__TaskView,
      qt_meta_data_Gui__TaskView__TaskView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::TaskView::TaskView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::TaskView::TaskView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::TaskView::TaskView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__TaskView__TaskView))
        return static_cast<void*>(const_cast< TaskView*>(this));
    if (!strcmp(_clname, "Gui::SelectionSingleton::ObserverType"))
        return static_cast< Gui::SelectionSingleton::ObserverType*>(const_cast< TaskView*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int Gui::TaskView::TaskView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
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
