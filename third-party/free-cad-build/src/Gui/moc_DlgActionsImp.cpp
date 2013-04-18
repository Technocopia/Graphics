/****************************************************************************
** Meta object code from reading C++ file 'DlgActionsImp.h'
**
** Created: Thu Apr 18 07:04:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgActionsImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgActionsImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgCustomActionsImp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x05,
      61,   33,   33,   33, 0x05,
      91,   33,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
     123,  121,   33,   33, 0x09,
     175,   33,   33,   33, 0x09,
     207,   33,   33,   33, 0x09,
     236,   33,   33,   33, 0x09,
     268,   33,   33,   33, 0x09,
     301,   33,   33,   33, 0x09,
     330,   33,   33,   33, 0x09,
     362,   33,   33,   33, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgCustomActionsImp[] = {
    "Gui::Dialog::DlgCustomActionsImp\0\0"
    "addMacroAction(QByteArray)\0"
    "removeMacroAction(QByteArray)\0"
    "modifyMacroAction(QByteArray)\0i\0"
    "on_actionListWidget_itemActivated(QTreeWidgetItem*)\0"
    "on_buttonChoosePixmap_clicked()\0"
    "on_buttonAddAction_clicked()\0"
    "on_buttonRemoveAction_clicked()\0"
    "on_buttonReplaceAction_clicked()\0"
    "onAddMacroAction(QByteArray)\0"
    "onRemoveMacroAction(QByteArray)\0"
    "onModifyMacroAction(QByteArray)\0"
};

void Gui::Dialog::DlgCustomActionsImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgCustomActionsImp *_t = static_cast<DlgCustomActionsImp *>(_o);
        switch (_id) {
        case 0: _t->addMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->removeMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->modifyMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->on_actionListWidget_itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_buttonChoosePixmap_clicked(); break;
        case 5: _t->on_buttonAddAction_clicked(); break;
        case 6: _t->on_buttonRemoveAction_clicked(); break;
        case 7: _t->on_buttonReplaceAction_clicked(); break;
        case 8: _t->onAddMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 9: _t->onRemoveMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 10: _t->onModifyMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgCustomActionsImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgCustomActionsImp::staticMetaObject = {
    { &CustomizeActionPage::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgCustomActionsImp,
      qt_meta_data_Gui__Dialog__DlgCustomActionsImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgCustomActionsImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgCustomActionsImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgCustomActionsImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgCustomActionsImp))
        return static_cast<void*>(const_cast< DlgCustomActionsImp*>(this));
    if (!strcmp(_clname, "Ui_DlgCustomActions"))
        return static_cast< Ui_DlgCustomActions*>(const_cast< DlgCustomActionsImp*>(this));
    return CustomizeActionPage::qt_metacast(_clname);
}

int Gui::Dialog::DlgCustomActionsImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomizeActionPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Gui::Dialog::DlgCustomActionsImp::addMacroAction(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gui::Dialog::DlgCustomActionsImp::removeMacroAction(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gui::Dialog::DlgCustomActionsImp::modifyMacroAction(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_Gui__Dialog__IconDialog[] = {

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
      25,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__IconDialog[] = {
    "Gui::Dialog::IconDialog\0\0onAddIconPath()\0"
};

void Gui::Dialog::IconDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IconDialog *_t = static_cast<IconDialog *>(_o);
        switch (_id) {
        case 0: _t->onAddIconPath(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::Dialog::IconDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::IconDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gui__Dialog__IconDialog,
      qt_meta_data_Gui__Dialog__IconDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::IconDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::IconDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::IconDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__IconDialog))
        return static_cast<void*>(const_cast< IconDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::IconDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
