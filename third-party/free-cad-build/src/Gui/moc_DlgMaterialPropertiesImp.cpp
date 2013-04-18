/****************************************************************************
** Meta object code from reading C++ file 'DlgMaterialPropertiesImp.h'
**
** Created: Thu Apr 18 07:04:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgMaterialPropertiesImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgMaterialPropertiesImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgMaterialPropertiesImp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   38,   38,   38, 0x0a,
      65,   38,   38,   38, 0x0a,
      91,   38,   38,   38, 0x0a,
     118,   38,   38,   38, 0x0a,
     145,   38,   38,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgMaterialPropertiesImp[] = {
    "Gui::Dialog::DlgMaterialPropertiesImp\0"
    "\0on_ambientColor_changed()\0"
    "on_diffuseColor_changed()\0"
    "on_emissiveColor_changed()\0"
    "on_specularColor_changed()\0"
    "on_shininess_valueChanged(int)\0"
};

void Gui::Dialog::DlgMaterialPropertiesImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgMaterialPropertiesImp *_t = static_cast<DlgMaterialPropertiesImp *>(_o);
        switch (_id) {
        case 0: _t->on_ambientColor_changed(); break;
        case 1: _t->on_diffuseColor_changed(); break;
        case 2: _t->on_emissiveColor_changed(); break;
        case 3: _t->on_specularColor_changed(); break;
        case 4: _t->on_shininess_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgMaterialPropertiesImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgMaterialPropertiesImp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgMaterialPropertiesImp,
      qt_meta_data_Gui__Dialog__DlgMaterialPropertiesImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgMaterialPropertiesImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgMaterialPropertiesImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgMaterialPropertiesImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgMaterialPropertiesImp))
        return static_cast<void*>(const_cast< DlgMaterialPropertiesImp*>(this));
    if (!strcmp(_clname, "Ui_DlgMaterialProperties"))
        return static_cast< Ui_DlgMaterialProperties*>(const_cast< DlgMaterialPropertiesImp*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgMaterialPropertiesImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
