/****************************************************************************
** Meta object code from reading C++ file 'PropertyEditorMesh.h'
**
** Created: Thu Apr 18 07:15:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Mesh/Gui/PropertyEditorMesh.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyEditorMesh.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeshGui__PropertyMeshKernelItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      36,   32, 0x02095001,
      43,   32, 0x02095001,
      49,   32, 0x02095001,

       0        // eod
};

static const char qt_meta_stringdata_MeshGui__PropertyMeshKernelItem[] = {
    "MeshGui::PropertyMeshKernelItem\0int\0"
    "Points\0Edges\0Faces\0"
};

void MeshGui::PropertyMeshKernelItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MeshGui::PropertyMeshKernelItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshGui::PropertyMeshKernelItem::staticMetaObject = {
    { &Gui::PropertyEditor::PropertyItem::staticMetaObject, qt_meta_stringdata_MeshGui__PropertyMeshKernelItem,
      qt_meta_data_MeshGui__PropertyMeshKernelItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshGui::PropertyMeshKernelItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshGui::PropertyMeshKernelItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshGui::PropertyMeshKernelItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__PropertyMeshKernelItem))
        return static_cast<void*>(const_cast< PropertyMeshKernelItem*>(this));
    typedef Gui::PropertyEditor::PropertyItem QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int MeshGui::PropertyMeshKernelItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::PropertyEditor::PropertyItem QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = countPoints(); break;
        case 1: *reinterpret_cast< int*>(_v) = countEdges(); break;
        case 2: *reinterpret_cast< int*>(_v) = countFaces(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
