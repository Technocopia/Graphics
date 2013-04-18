/****************************************************************************
** Meta object code from reading C++ file 'Tessellation.h'
**
** Created: Thu Apr 18 07:28:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/MeshPart/Gui/Tessellation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Tessellation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeshPartGui__Tessellation[] = {

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

static const char qt_meta_stringdata_MeshPartGui__Tessellation[] = {
    "MeshPartGui::Tessellation\0"
};

void MeshPartGui::Tessellation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MeshPartGui::Tessellation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshPartGui::Tessellation::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MeshPartGui__Tessellation,
      qt_meta_data_MeshPartGui__Tessellation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshPartGui::Tessellation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshPartGui::Tessellation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshPartGui::Tessellation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshPartGui__Tessellation))
        return static_cast<void*>(const_cast< Tessellation*>(this));
    return QWidget::qt_metacast(_clname);
}

int MeshPartGui::Tessellation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_MeshPartGui__TaskTessellation[] = {

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

static const char qt_meta_stringdata_MeshPartGui__TaskTessellation[] = {
    "MeshPartGui::TaskTessellation\0"
};

void MeshPartGui::TaskTessellation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MeshPartGui::TaskTessellation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshPartGui::TaskTessellation::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_MeshPartGui__TaskTessellation,
      qt_meta_data_MeshPartGui__TaskTessellation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshPartGui::TaskTessellation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshPartGui::TaskTessellation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshPartGui::TaskTessellation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshPartGui__TaskTessellation))
        return static_cast<void*>(const_cast< TaskTessellation*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int MeshPartGui::TaskTessellation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
