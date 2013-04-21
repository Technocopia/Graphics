/****************************************************************************
** Meta object code from reading C++ file 'DrawingView.h'
**
** Created: Thu Apr 18 22:39:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Drawing/Gui/DrawingView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DrawingView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DrawingGui__SvgView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   21,   20,   20, 0x0a,
      85,   78,   20,   20, 0x0a,
     109,   78,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DrawingGui__SvgView[] = {
    "DrawingGui::SvgView\0\0highQualityAntialiasing\0"
    "setHighQualityAntialiasing(bool)\0"
    "enable\0setViewBackground(bool)\0"
    "setViewOutline(bool)\0"
};

void DrawingGui::SvgView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SvgView *_t = static_cast<SvgView *>(_o);
        switch (_id) {
        case 0: _t->setHighQualityAntialiasing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setViewBackground((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setViewOutline((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DrawingGui::SvgView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DrawingGui::SvgView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_DrawingGui__SvgView,
      qt_meta_data_DrawingGui__SvgView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DrawingGui::SvgView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DrawingGui::SvgView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DrawingGui::SvgView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DrawingGui__SvgView))
        return static_cast<void*>(const_cast< SvgView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int DrawingGui::SvgView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_DrawingGui__DrawingView[] = {

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
      30,   25,   24,   24, 0x0a,
      44,   24,   24,   24, 0x2a,
      58,   51,   24,   24, 0x0a,
      80,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DrawingGui__DrawingView[] = {
    "DrawingGui::DrawingView\0\0path\0"
    "load(QString)\0load()\0action\0"
    "setRenderer(QAction*)\0viewAll()\0"
};

void DrawingGui::DrawingView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DrawingView *_t = static_cast<DrawingView *>(_o);
        switch (_id) {
        case 0: _t->load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->load(); break;
        case 2: _t->setRenderer((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->viewAll(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DrawingGui::DrawingView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DrawingGui::DrawingView::staticMetaObject = {
    { &Gui::MDIView::staticMetaObject, qt_meta_stringdata_DrawingGui__DrawingView,
      qt_meta_data_DrawingGui__DrawingView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DrawingGui::DrawingView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DrawingGui::DrawingView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DrawingGui::DrawingView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DrawingGui__DrawingView))
        return static_cast<void*>(const_cast< DrawingView*>(this));
    typedef Gui::MDIView QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int DrawingGui::DrawingView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::MDIView QMocSuperClass;
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
QT_END_MOC_NAMESPACE
