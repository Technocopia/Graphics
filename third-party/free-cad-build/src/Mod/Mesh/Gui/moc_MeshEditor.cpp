/****************************************************************************
** Meta object code from reading C++ file 'MeshEditor.h'
**
** Created: Thu Apr 18 07:15:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Mesh/Gui/MeshEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MeshEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeshGui__MeshFaceAddition[] = {

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
      27,   26,   26,   26, 0x0a,
      43,   26,   26,   26, 0x08,
      53,   26,   26,   26, 0x08,
      67,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MeshGui__MeshFaceAddition[] = {
    "MeshGui::MeshFaceAddition\0\0finishEditing()\0"
    "addFace()\0clearPoints()\0flipNormal()\0"
};

void MeshGui::MeshFaceAddition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MeshFaceAddition *_t = static_cast<MeshFaceAddition *>(_o);
        switch (_id) {
        case 0: _t->finishEditing(); break;
        case 1: _t->addFace(); break;
        case 2: _t->clearPoints(); break;
        case 3: _t->flipNormal(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MeshGui::MeshFaceAddition::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshGui::MeshFaceAddition::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MeshGui__MeshFaceAddition,
      qt_meta_data_MeshGui__MeshFaceAddition, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshGui::MeshFaceAddition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshGui::MeshFaceAddition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshGui::MeshFaceAddition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__MeshFaceAddition))
        return static_cast<void*>(const_cast< MeshFaceAddition*>(this));
    return QObject::qt_metacast(_clname);
}

int MeshGui::MeshFaceAddition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
