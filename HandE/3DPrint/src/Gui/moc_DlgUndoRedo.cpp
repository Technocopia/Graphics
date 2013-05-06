/****************************************************************************
** Meta object code from reading C++ file 'DlgUndoRedo.h'
**
** Created: Thu Apr 18 22:16:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgUndoRedo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgUndoRedo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__UndoDialog[] = {

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
      25,   24,   24,   24, 0x09,
      38,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__UndoDialog[] = {
    "Gui::Dialog::UndoDialog\0\0onSelected()\0"
    "onFetchInfo()\0"
};

void Gui::Dialog::UndoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UndoDialog *_t = static_cast<UndoDialog *>(_o);
        switch (_id) {
        case 0: _t->onSelected(); break;
        case 1: _t->onFetchInfo(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::Dialog::UndoDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::UndoDialog::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_Gui__Dialog__UndoDialog,
      qt_meta_data_Gui__Dialog__UndoDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::UndoDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::UndoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::UndoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__UndoDialog))
        return static_cast<void*>(const_cast< UndoDialog*>(this));
    return QMenu::qt_metacast(_clname);
}

int Gui::Dialog::UndoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_Gui__Dialog__RedoDialog[] = {

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
      25,   24,   24,   24, 0x09,
      38,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__RedoDialog[] = {
    "Gui::Dialog::RedoDialog\0\0onSelected()\0"
    "onFetchInfo()\0"
};

void Gui::Dialog::RedoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RedoDialog *_t = static_cast<RedoDialog *>(_o);
        switch (_id) {
        case 0: _t->onSelected(); break;
        case 1: _t->onFetchInfo(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::Dialog::RedoDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::RedoDialog::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_Gui__Dialog__RedoDialog,
      qt_meta_data_Gui__Dialog__RedoDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::RedoDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::RedoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::RedoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__RedoDialog))
        return static_cast<void*>(const_cast< RedoDialog*>(this));
    return QMenu::qt_metacast(_clname);
}

int Gui::Dialog::RedoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
