/****************************************************************************
** Meta object code from reading C++ file 'DlgSettings3DViewPartImp.h'
**
** Created: Thu Apr 18 22:32:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Part/Gui/DlgSettings3DViewPartImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgSettings3DViewPartImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartGui__DlgSettings3DViewPart[] = {

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
      32,   31,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartGui__DlgSettings3DViewPart[] = {
    "PartGui::DlgSettings3DViewPart\0\0"
    "on_maxDeviation_valueChanged(double)\0"
};

void PartGui::DlgSettings3DViewPart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgSettings3DViewPart *_t = static_cast<DlgSettings3DViewPart *>(_o);
        switch (_id) {
        case 0: _t->on_maxDeviation_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartGui::DlgSettings3DViewPart::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::DlgSettings3DViewPart::staticMetaObject = {
    { &Gui::Dialog::PreferencePage::staticMetaObject, qt_meta_stringdata_PartGui__DlgSettings3DViewPart,
      qt_meta_data_PartGui__DlgSettings3DViewPart, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::DlgSettings3DViewPart::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::DlgSettings3DViewPart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::DlgSettings3DViewPart::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__DlgSettings3DViewPart))
        return static_cast<void*>(const_cast< DlgSettings3DViewPart*>(this));
    typedef Gui::Dialog::PreferencePage QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartGui::DlgSettings3DViewPart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::Dialog::PreferencePage QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
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
