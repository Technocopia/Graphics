/****************************************************************************
** Meta object code from reading C++ file 'CrossSections.h'
**
** Created: Thu Apr 18 07:17:53 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Part/Gui/CrossSections.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CrossSections.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartGui__CrossSections[] = {

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
      24,   23,   23,   23, 0x08,
      45,   23,   23,   23, 0x08,
      66,   23,   23,   23, 0x08,
      87,   23,   23,   23, 0x08,
     120,   23,   23,   23, 0x08,
     153,   23,   23,   23, 0x08,
     188,   23,   23,   23, 0x08,
     220,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartGui__CrossSections[] = {
    "PartGui::CrossSections\0\0on_xyPlane_clicked()\0"
    "on_xzPlane_clicked()\0on_yzPlane_clicked()\0"
    "on_position_valueChanged(double)\0"
    "on_distance_valueChanged(double)\0"
    "on_countSections_valueChanged(int)\0"
    "on_checkBothSides_toggled(bool)\0"
    "on_sectionsBox_toggled(bool)\0"
};

void PartGui::CrossSections::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CrossSections *_t = static_cast<CrossSections *>(_o);
        switch (_id) {
        case 0: _t->on_xyPlane_clicked(); break;
        case 1: _t->on_xzPlane_clicked(); break;
        case 2: _t->on_yzPlane_clicked(); break;
        case 3: _t->on_position_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->on_distance_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_countSections_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_checkBothSides_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_sectionsBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartGui::CrossSections::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::CrossSections::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PartGui__CrossSections,
      qt_meta_data_PartGui__CrossSections, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::CrossSections::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::CrossSections::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::CrossSections::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__CrossSections))
        return static_cast<void*>(const_cast< CrossSections*>(this));
    return QDialog::qt_metacast(_clname);
}

int PartGui::CrossSections::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_PartGui__TaskCrossSections[] = {

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

static const char qt_meta_stringdata_PartGui__TaskCrossSections[] = {
    "PartGui::TaskCrossSections\0"
};

void PartGui::TaskCrossSections::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartGui::TaskCrossSections::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::TaskCrossSections::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_PartGui__TaskCrossSections,
      qt_meta_data_PartGui__TaskCrossSections, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::TaskCrossSections::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::TaskCrossSections::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::TaskCrossSections::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__TaskCrossSections))
        return static_cast<void*>(const_cast< TaskCrossSections*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartGui::TaskCrossSections::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
