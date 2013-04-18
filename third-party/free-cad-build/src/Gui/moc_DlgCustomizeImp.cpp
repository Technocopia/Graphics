/****************************************************************************
** Meta object code from reading C++ file 'DlgCustomizeImp.h'
**
** Created: Thu Apr 18 07:04:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgCustomizeImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgCustomizeImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgCustomizeImp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,
      57,   29,   29,   29, 0x05,
      87,   29,   29,   29, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgCustomizeImp[] = {
    "Gui::Dialog::DlgCustomizeImp\0\0"
    "addMacroAction(QByteArray)\0"
    "removeMacroAction(QByteArray)\0"
    "modifyMacroAction(QByteArray)\0"
};

void Gui::Dialog::DlgCustomizeImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgCustomizeImp *_t = static_cast<DlgCustomizeImp *>(_o);
        switch (_id) {
        case 0: _t->addMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->removeMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->modifyMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgCustomizeImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgCustomizeImp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgCustomizeImp,
      qt_meta_data_Gui__Dialog__DlgCustomizeImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgCustomizeImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgCustomizeImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgCustomizeImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgCustomizeImp))
        return static_cast<void*>(const_cast< DlgCustomizeImp*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgCustomizeImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Gui::Dialog::DlgCustomizeImp::addMacroAction(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gui::Dialog::DlgCustomizeImp::removeMacroAction(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gui::Dialog::DlgCustomizeImp::modifyMacroAction(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
