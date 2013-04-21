/****************************************************************************
** Meta object code from reading C++ file 'DlgMacroRecordImp.h'
**
** Created: Thu Apr 18 22:16:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgMacroRecordImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgMacroRecordImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgMacroRecordImp[] = {

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
      32,   31,   31,   31, 0x09,
      57,   31,   31,   31, 0x09,
      81,   31,   31,   31, 0x09,
     107,   31,   31,   31, 0x09,
     140,   31,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgMacroRecordImp[] = {
    "Gui::Dialog::DlgMacroRecordImp\0\0"
    "on_buttonStart_clicked()\0"
    "on_buttonStop_clicked()\0"
    "on_buttonCancel_clicked()\0"
    "on_pushButtonChooseDir_clicked()\0"
    "on_lineEditMacroPath_textChanged(QString)\0"
};

void Gui::Dialog::DlgMacroRecordImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgMacroRecordImp *_t = static_cast<DlgMacroRecordImp *>(_o);
        switch (_id) {
        case 0: _t->on_buttonStart_clicked(); break;
        case 1: _t->on_buttonStop_clicked(); break;
        case 2: _t->on_buttonCancel_clicked(); break;
        case 3: _t->on_pushButtonChooseDir_clicked(); break;
        case 4: _t->on_lineEditMacroPath_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgMacroRecordImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgMacroRecordImp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgMacroRecordImp,
      qt_meta_data_Gui__Dialog__DlgMacroRecordImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgMacroRecordImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgMacroRecordImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgMacroRecordImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgMacroRecordImp))
        return static_cast<void*>(const_cast< DlgMacroRecordImp*>(this));
    if (!strcmp(_clname, "Ui_DlgMacroRecord"))
        return static_cast< Ui_DlgMacroRecord*>(const_cast< DlgMacroRecordImp*>(this));
    if (!strcmp(_clname, "Gui::WindowParameter"))
        return static_cast< Gui::WindowParameter*>(const_cast< DlgMacroRecordImp*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgMacroRecordImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
