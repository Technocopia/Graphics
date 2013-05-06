/****************************************************************************
** Meta object code from reading C++ file 'DlgKeyboardImp.h'
**
** Created: Thu Apr 18 22:16:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgKeyboardImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgKeyboardImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgCustomKeyboardImp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   35,   34,   34, 0x09,
      71,   34,   34,   34, 0x09,
     129,   34,   34,   34, 0x09,
     155,   34,   34,   34, 0x09,
     180,   34,   34,   34, 0x09,
     208,   34,   34,   34, 0x09,
     245,   34,   34,   34, 0x09,
     274,   34,   34,   34, 0x09,
     306,   34,   34,   34, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgCustomKeyboardImp[] = {
    "Gui::Dialog::DlgCustomKeyboardImp\0\0"
    "index\0on_categoryBox_activated(int)\0"
    "on_commandTreeWidget_currentItemChanged(QTreeWidgetItem*)\0"
    "on_buttonAssign_clicked()\0"
    "on_buttonReset_clicked()\0"
    "on_buttonResetAll_clicked()\0"
    "on_editShortcut_textChanged(QString)\0"
    "onAddMacroAction(QByteArray)\0"
    "onRemoveMacroAction(QByteArray)\0"
    "onModifyMacroAction(QByteArray)\0"
};

void Gui::Dialog::DlgCustomKeyboardImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgCustomKeyboardImp *_t = static_cast<DlgCustomKeyboardImp *>(_o);
        switch (_id) {
        case 0: _t->on_categoryBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_commandTreeWidget_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_buttonAssign_clicked(); break;
        case 3: _t->on_buttonReset_clicked(); break;
        case 4: _t->on_buttonResetAll_clicked(); break;
        case 5: _t->on_editShortcut_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onAddMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 7: _t->onRemoveMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 8: _t->onModifyMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgCustomKeyboardImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgCustomKeyboardImp::staticMetaObject = {
    { &CustomizeActionPage::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgCustomKeyboardImp,
      qt_meta_data_Gui__Dialog__DlgCustomKeyboardImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgCustomKeyboardImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgCustomKeyboardImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgCustomKeyboardImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgCustomKeyboardImp))
        return static_cast<void*>(const_cast< DlgCustomKeyboardImp*>(this));
    if (!strcmp(_clname, "Ui_DlgCustomKeyboard"))
        return static_cast< Ui_DlgCustomKeyboard*>(const_cast< DlgCustomKeyboardImp*>(this));
    return CustomizeActionPage::qt_metacast(_clname);
}

int Gui::Dialog::DlgCustomKeyboardImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomizeActionPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
