/****************************************************************************
** Meta object code from reading C++ file 'DlgInputDialogImp.h'
**
** Created: Thu Apr 18 07:04:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgInputDialogImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgInputDialogImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgInputDialogImp[] = {

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
      34,   32,   31,   31, 0x09,
      55,   31,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgInputDialogImp[] = {
    "Gui::Dialog::DlgInputDialogImp\0\0s\0"
    "textChanged(QString)\0tryAccept()\0"
};

void Gui::Dialog::DlgInputDialogImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgInputDialogImp *_t = static_cast<DlgInputDialogImp *>(_o);
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->tryAccept(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgInputDialogImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgInputDialogImp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgInputDialogImp,
      qt_meta_data_Gui__Dialog__DlgInputDialogImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgInputDialogImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgInputDialogImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgInputDialogImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgInputDialogImp))
        return static_cast<void*>(const_cast< DlgInputDialogImp*>(this));
    if (!strcmp(_clname, "Ui_DlgInputDialog"))
        return static_cast< Ui_DlgInputDialog*>(const_cast< DlgInputDialogImp*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgInputDialogImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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