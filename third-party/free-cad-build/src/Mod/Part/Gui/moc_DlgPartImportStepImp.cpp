/****************************************************************************
** Meta object code from reading C++ file 'DlgPartImportStepImp.h'
**
** Created: Thu Apr 18 22:32:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Part/Gui/DlgPartImportStepImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgPartImportStepImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartGui__DlgPartImportStepImp[] = {

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

static const char qt_meta_stringdata_PartGui__DlgPartImportStepImp[] = {
    "PartGui::DlgPartImportStepImp\0\0OnApply()\0"
    "onChooseFileName()\0"
};

void PartGui::DlgPartImportStepImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgPartImportStepImp *_t = static_cast<DlgPartImportStepImp *>(_o);
        switch (_id) {
        case 0: _t->OnApply(); break;
        case 1: _t->onChooseFileName(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartGui::DlgPartImportStepImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::DlgPartImportStepImp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PartGui__DlgPartImportStepImp,
      qt_meta_data_PartGui__DlgPartImportStepImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::DlgPartImportStepImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::DlgPartImportStepImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::DlgPartImportStepImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__DlgPartImportStepImp))
        return static_cast<void*>(const_cast< DlgPartImportStepImp*>(this));
    if (!strcmp(_clname, "Ui_DlgPartImportStep"))
        return static_cast< Ui_DlgPartImportStep*>(const_cast< DlgPartImportStepImp*>(this));
    return QDialog::qt_metacast(_clname);
}

int PartGui::DlgPartImportStepImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
