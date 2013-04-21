/****************************************************************************
** Meta object code from reading C++ file 'DlgPartImportIgesImp.h'
**
** Created: Thu Apr 18 22:32:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Part/Gui/DlgPartImportIgesImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgPartImportIgesImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartGui__DlgPartImportIgesImp[] = {

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
      31,   30,   30,   30, 0x0a,
      41,   30,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PartGui__DlgPartImportIgesImp[] = {
    "PartGui::DlgPartImportIgesImp\0\0OnApply()\0"
    "onChooseFileName()\0"
};

void PartGui::DlgPartImportIgesImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgPartImportIgesImp *_t = static_cast<DlgPartImportIgesImp *>(_o);
        switch (_id) {
        case 0: _t->OnApply(); break;
        case 1: _t->onChooseFileName(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartGui::DlgPartImportIgesImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::DlgPartImportIgesImp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PartGui__DlgPartImportIgesImp,
      qt_meta_data_PartGui__DlgPartImportIgesImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::DlgPartImportIgesImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::DlgPartImportIgesImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::DlgPartImportIgesImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__DlgPartImportIgesImp))
        return static_cast<void*>(const_cast< DlgPartImportIgesImp*>(this));
    if (!strcmp(_clname, "Ui_DlgPartImportIges"))
        return static_cast< Ui_DlgPartImportIges*>(const_cast< DlgPartImportIgesImp*>(this));
    return QDialog::qt_metacast(_clname);
}

int PartGui::DlgPartImportIgesImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
