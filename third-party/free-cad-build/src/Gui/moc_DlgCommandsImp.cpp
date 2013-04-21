/****************************************************************************
** Meta object code from reading C++ file 'DlgCommandsImp.h'
**
** Created: Thu Apr 18 22:16:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgCommandsImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgCommandsImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgCustomCommandsImp[] = {

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
      37,   35,   34,   34, 0x09,
      72,   35,   34,   34, 0x09,
     104,   34,   34,   34, 0x09,
     133,   34,   34,   34, 0x09,
     165,   34,   34,   34, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgCustomCommandsImp[] = {
    "Gui::Dialog::DlgCustomCommandsImp\0\0i\0"
    "onGroupActivated(QTreeWidgetItem*)\0"
    "onDescription(QTreeWidgetItem*)\0"
    "onAddMacroAction(QByteArray)\0"
    "onRemoveMacroAction(QByteArray)\0"
    "onModifyMacroAction(QByteArray)\0"
};

void Gui::Dialog::DlgCustomCommandsImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgCustomCommandsImp *_t = static_cast<DlgCustomCommandsImp *>(_o);
        switch (_id) {
        case 0: _t->onGroupActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->onDescription((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->onAddMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->onRemoveMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->onModifyMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgCustomCommandsImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgCustomCommandsImp::staticMetaObject = {
    { &CustomizeActionPage::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgCustomCommandsImp,
      qt_meta_data_Gui__Dialog__DlgCustomCommandsImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgCustomCommandsImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgCustomCommandsImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgCustomCommandsImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgCustomCommandsImp))
        return static_cast<void*>(const_cast< DlgCustomCommandsImp*>(this));
    if (!strcmp(_clname, "Ui_DlgCustomCommands"))
        return static_cast< Ui_DlgCustomCommands*>(const_cast< DlgCustomCommandsImp*>(this));
    return CustomizeActionPage::qt_metacast(_clname);
}

int Gui::Dialog::DlgCustomCommandsImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomizeActionPage::qt_metacall(_c, _id, _a);
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
