/****************************************************************************
** Meta object code from reading C++ file 'DlgPreferencesImp.h'
**
** Created: Thu Apr 18 07:04:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgPreferencesImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgPreferencesImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgPreferencesImp[] = {

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
      49,   32,   31,   31, 0x09,
      96,   31,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgPreferencesImp[] = {
    "Gui::Dialog::DlgPreferencesImp\0\0"
    "current,previous\0"
    "changeGroup(QListWidgetItem*,QListWidgetItem*)\0"
    "on_buttonApply_clicked()\0"
};

void Gui::Dialog::DlgPreferencesImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgPreferencesImp *_t = static_cast<DlgPreferencesImp *>(_o);
        switch (_id) {
        case 0: _t->changeGroup((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->on_buttonApply_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgPreferencesImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgPreferencesImp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgPreferencesImp,
      qt_meta_data_Gui__Dialog__DlgPreferencesImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgPreferencesImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgPreferencesImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgPreferencesImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgPreferencesImp))
        return static_cast<void*>(const_cast< DlgPreferencesImp*>(this));
    if (!strcmp(_clname, "Ui_DlgPreferences"))
        return static_cast< Ui_DlgPreferences*>(const_cast< DlgPreferencesImp*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgPreferencesImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
