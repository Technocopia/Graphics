/****************************************************************************
** Meta object code from reading C++ file 'DlgRunExternal.h'
**
** Created: Thu Apr 18 22:16:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgRunExternal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgRunExternal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgRunExternal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x09,
      38,   28,   28,   28, 0x09,
      47,   28,   28,   28, 0x09,
      55,   28,   28,   28, 0x09,
      86,   66,   28,   28, 0x09,
     121,   28,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgRunExternal[] = {
    "Gui::Dialog::DlgRunExternal\0\0reject()\0"
    "accept()\0abort()\0advanced()\0"
    "exitCode,exitStatus\0"
    "finished(int,QProcess::ExitStatus)\0"
    "on_chooseProgram_clicked()\0"
};

void Gui::Dialog::DlgRunExternal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgRunExternal *_t = static_cast<DlgRunExternal *>(_o);
        switch (_id) {
        case 0: _t->reject(); break;
        case 1: _t->accept(); break;
        case 2: _t->abort(); break;
        case 3: _t->advanced(); break;
        case 4: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 5: _t->on_chooseProgram_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgRunExternal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgRunExternal::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgRunExternal,
      qt_meta_data_Gui__Dialog__DlgRunExternal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgRunExternal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgRunExternal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgRunExternal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgRunExternal))
        return static_cast<void*>(const_cast< DlgRunExternal*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgRunExternal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
