/****************************************************************************
** Meta object code from reading C++ file 'DlgTipOfTheDayImp.h'
**
** Created: Thu Apr 18 07:04:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgTipOfTheDayImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgTipOfTheDayImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgTipOfTheDayImp[] = {

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
      32,   31,   31,   31, 0x0a,
      59,   31,   31,   31, 0x09,
      78,   72,   31,   31, 0x09,
      98,   31,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgTipOfTheDayImp[] = {
    "Gui::Dialog::DlgTipOfTheDayImp\0\0"
    "on_buttonNextTip_clicked()\0onDone(bool)\0"
    "state\0onStateChanged(int)\0"
    "onResponseHeaderReceived(QHttpResponseHeader)\0"
};

void Gui::Dialog::DlgTipOfTheDayImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgTipOfTheDayImp *_t = static_cast<DlgTipOfTheDayImp *>(_o);
        switch (_id) {
        case 0: _t->on_buttonNextTip_clicked(); break;
        case 1: _t->onDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onResponseHeaderReceived((*reinterpret_cast< const QHttpResponseHeader(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgTipOfTheDayImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgTipOfTheDayImp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgTipOfTheDayImp,
      qt_meta_data_Gui__Dialog__DlgTipOfTheDayImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgTipOfTheDayImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgTipOfTheDayImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgTipOfTheDayImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgTipOfTheDayImp))
        return static_cast<void*>(const_cast< DlgTipOfTheDayImp*>(this));
    if (!strcmp(_clname, "Ui_DlgTipOfTheDay"))
        return static_cast< Ui_DlgTipOfTheDay*>(const_cast< DlgTipOfTheDayImp*>(this));
    if (!strcmp(_clname, "WindowParameter"))
        return static_cast< WindowParameter*>(const_cast< DlgTipOfTheDayImp*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgTipOfTheDayImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
