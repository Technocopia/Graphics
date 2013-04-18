/****************************************************************************
** Meta object code from reading C++ file 'DlgRegularSolidImp.h'
**
** Created: Thu Apr 18 07:15:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Mesh/Gui/DlgRegularSolidImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgRegularSolidImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeshGui__DlgRegularSolidImp[] = {

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
      29,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MeshGui__DlgRegularSolidImp[] = {
    "MeshGui::DlgRegularSolidImp\0\0"
    "on_createSolidButton_clicked()\0"
};

void MeshGui::DlgRegularSolidImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgRegularSolidImp *_t = static_cast<DlgRegularSolidImp *>(_o);
        switch (_id) {
        case 0: _t->on_createSolidButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MeshGui::DlgRegularSolidImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshGui::DlgRegularSolidImp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MeshGui__DlgRegularSolidImp,
      qt_meta_data_MeshGui__DlgRegularSolidImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshGui::DlgRegularSolidImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshGui::DlgRegularSolidImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshGui::DlgRegularSolidImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__DlgRegularSolidImp))
        return static_cast<void*>(const_cast< DlgRegularSolidImp*>(this));
    if (!strcmp(_clname, "Ui_DlgRegularSolid"))
        return static_cast< Ui_DlgRegularSolid*>(const_cast< DlgRegularSolidImp*>(this));
    return QDialog::qt_metacast(_clname);
}

int MeshGui::DlgRegularSolidImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
