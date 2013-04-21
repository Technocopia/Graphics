/****************************************************************************
** Meta object code from reading C++ file 'RemoveComponents.h'
**
** Created: Thu Apr 18 22:28:42 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Mesh/Gui/RemoveComponents.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RemoveComponents.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeshGui__RemoveComponents[] = {

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
      27,   26,   26,   26, 0x0a,
      53,   26,   26,   26, 0x0a,
      76,   26,   26,   26, 0x0a,
     106,   26,   26,   26, 0x0a,
     134,   26,   26,   26, 0x0a,
     162,   26,   26,   26, 0x0a,
     187,   26,   26,   26, 0x0a,
     219,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MeshGui__RemoveComponents[] = {
    "MeshGui::RemoveComponents\0\0"
    "on_selectRegion_clicked()\0"
    "on_selectAll_clicked()\0"
    "on_selectComponents_clicked()\0"
    "on_selectTriangle_clicked()\0"
    "on_deselectRegion_clicked()\0"
    "on_deselectAll_clicked()\0"
    "on_deselectComponents_clicked()\0"
    "on_deselectTriangle_clicked()\0"
};

void MeshGui::RemoveComponents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RemoveComponents *_t = static_cast<RemoveComponents *>(_o);
        switch (_id) {
        case 0: _t->on_selectRegion_clicked(); break;
        case 1: _t->on_selectAll_clicked(); break;
        case 2: _t->on_selectComponents_clicked(); break;
        case 3: _t->on_selectTriangle_clicked(); break;
        case 4: _t->on_deselectRegion_clicked(); break;
        case 5: _t->on_deselectAll_clicked(); break;
        case 6: _t->on_deselectComponents_clicked(); break;
        case 7: _t->on_deselectTriangle_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MeshGui::RemoveComponents::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshGui::RemoveComponents::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MeshGui__RemoveComponents,
      qt_meta_data_MeshGui__RemoveComponents, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshGui::RemoveComponents::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshGui::RemoveComponents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshGui::RemoveComponents::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__RemoveComponents))
        return static_cast<void*>(const_cast< RemoveComponents*>(this));
    return QWidget::qt_metacast(_clname);
}

int MeshGui::RemoveComponents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_MeshGui__RemoveComponentsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   33,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MeshGui__RemoveComponentsDialog[] = {
    "MeshGui::RemoveComponentsDialog\0\0btn\0"
    "clicked(QAbstractButton*)\0"
};

void MeshGui::RemoveComponentsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RemoveComponentsDialog *_t = static_cast<RemoveComponentsDialog *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MeshGui::RemoveComponentsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshGui::RemoveComponentsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MeshGui__RemoveComponentsDialog,
      qt_meta_data_MeshGui__RemoveComponentsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshGui::RemoveComponentsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshGui::RemoveComponentsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshGui::RemoveComponentsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__RemoveComponentsDialog))
        return static_cast<void*>(const_cast< RemoveComponentsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MeshGui::RemoveComponentsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_MeshGui__TaskRemoveComponents[] = {

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

static const char qt_meta_stringdata_MeshGui__TaskRemoveComponents[] = {
    "MeshGui::TaskRemoveComponents\0"
};

void MeshGui::TaskRemoveComponents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MeshGui::TaskRemoveComponents::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshGui::TaskRemoveComponents::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_MeshGui__TaskRemoveComponents,
      qt_meta_data_MeshGui__TaskRemoveComponents, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshGui::TaskRemoveComponents::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshGui::TaskRemoveComponents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshGui::TaskRemoveComponents::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__TaskRemoveComponents))
        return static_cast<void*>(const_cast< TaskRemoveComponents*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int MeshGui::TaskRemoveComponents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
