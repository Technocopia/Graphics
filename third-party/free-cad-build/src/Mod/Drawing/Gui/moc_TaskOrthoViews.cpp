/****************************************************************************
** Meta object code from reading C++ file 'TaskOrthoViews.h'
**
** Created: Thu Apr 18 22:39:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Drawing/Gui/TaskOrthoViews.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskOrthoViews.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DrawingGui__TaskOrthoViews[] = {

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
      28,   27,   27,   27, 0x09,
      44,   27,   27,   27, 0x09,
      59,   27,   27,   27, 0x09,
      76,   27,   27,   27, 0x09,
      99,   27,   27,   27, 0x09,
     111,   27,   27,   27, 0x09,
     123,   27,   27,   27, 0x09,
     140,   27,   27,   27, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DrawingGui__TaskOrthoViews[] = {
    "DrawingGui::TaskOrthoViews\0\0setPrimary(int)\0"
    "setRotate(int)\0cb_toggled(bool)\0"
    "projectionChanged(int)\0hidden(int)\0"
    "smooth(int)\0toggle_auto(int)\0"
    "data_entered()\0"
};

void DrawingGui::TaskOrthoViews::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskOrthoViews *_t = static_cast<TaskOrthoViews *>(_o);
        switch (_id) {
        case 0: _t->setPrimary((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setRotate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->cb_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->projectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->hidden((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->smooth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->toggle_auto((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->data_entered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DrawingGui::TaskOrthoViews::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DrawingGui::TaskOrthoViews::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DrawingGui__TaskOrthoViews,
      qt_meta_data_DrawingGui__TaskOrthoViews, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DrawingGui::TaskOrthoViews::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DrawingGui::TaskOrthoViews::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DrawingGui::TaskOrthoViews::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DrawingGui__TaskOrthoViews))
        return static_cast<void*>(const_cast< TaskOrthoViews*>(this));
    return QWidget::qt_metacast(_clname);
}

int DrawingGui::TaskOrthoViews::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_DrawingGui__TaskDlgOrthoViews[] = {

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

static const char qt_meta_stringdata_DrawingGui__TaskDlgOrthoViews[] = {
    "DrawingGui::TaskDlgOrthoViews\0"
};

void DrawingGui::TaskDlgOrthoViews::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DrawingGui::TaskDlgOrthoViews::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DrawingGui::TaskDlgOrthoViews::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_DrawingGui__TaskDlgOrthoViews,
      qt_meta_data_DrawingGui__TaskDlgOrthoViews, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DrawingGui::TaskDlgOrthoViews::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DrawingGui::TaskDlgOrthoViews::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DrawingGui::TaskDlgOrthoViews::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DrawingGui__TaskDlgOrthoViews))
        return static_cast<void*>(const_cast< TaskDlgOrthoViews*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int DrawingGui::TaskDlgOrthoViews::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
