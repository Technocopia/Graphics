/****************************************************************************
** Meta object code from reading C++ file 'TaskShapeBuilder.h'
**
** Created: Thu Apr 18 07:17:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Part/Gui/TaskShapeBuilder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskShapeBuilder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartGui__ShapeBuilderWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x08,
      55,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartGui__ShapeBuilderWidget[] = {
    "PartGui::ShapeBuilderWidget\0\0"
    "on_createButton_clicked()\0switchMode(int)\0"
};

void PartGui::ShapeBuilderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShapeBuilderWidget *_t = static_cast<ShapeBuilderWidget *>(_o);
        switch (_id) {
        case 0: _t->on_createButton_clicked(); break;
        case 1: _t->switchMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartGui::ShapeBuilderWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::ShapeBuilderWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PartGui__ShapeBuilderWidget,
      qt_meta_data_PartGui__ShapeBuilderWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::ShapeBuilderWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::ShapeBuilderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::ShapeBuilderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__ShapeBuilderWidget))
        return static_cast<void*>(const_cast< ShapeBuilderWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PartGui::ShapeBuilderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_PartGui__TaskShapeBuilder[] = {

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

static const char qt_meta_stringdata_PartGui__TaskShapeBuilder[] = {
    "PartGui::TaskShapeBuilder\0"
};

void PartGui::TaskShapeBuilder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartGui::TaskShapeBuilder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::TaskShapeBuilder::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_PartGui__TaskShapeBuilder,
      qt_meta_data_PartGui__TaskShapeBuilder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::TaskShapeBuilder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::TaskShapeBuilder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::TaskShapeBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__TaskShapeBuilder))
        return static_cast<void*>(const_cast< TaskShapeBuilder*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartGui::TaskShapeBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
