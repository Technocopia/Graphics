/****************************************************************************
** Meta object code from reading C++ file 'DlgToolbarsImp.h'
**
** Created: Thu Apr 18 07:04:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgToolbarsImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgToolbarsImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgCustomToolbars[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   32,   31,   31, 0x09,
      68,   32,   31,   31, 0x09,
      99,   31,   31,   31, 0x09,
     134,   31,   31,   31, 0x09,
     168,   31,   31,   31, 0x09,
     200,   31,   31,   31, 0x09,
     234,   31,   31,   31, 0x09,
     257,   31,   31,   31, 0x09,
     283,   31,   31,   31, 0x09,
     309,   31,   31,   31, 0x09,
     338,   31,   31,   31, 0x09,
     370,   31,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgCustomToolbars[] = {
    "Gui::Dialog::DlgCustomToolbars\0\0index\0"
    "on_categoryBox_activated(int)\0"
    "on_workbenchBox_activated(int)\0"
    "on_moveActionRightButton_clicked()\0"
    "on_moveActionLeftButton_clicked()\0"
    "on_moveActionUpButton_clicked()\0"
    "on_moveActionDownButton_clicked()\0"
    "on_newButton_clicked()\0on_renameButton_clicked()\0"
    "on_deleteButton_clicked()\0"
    "onAddMacroAction(QByteArray)\0"
    "onRemoveMacroAction(QByteArray)\0"
    "onModifyMacroAction(QByteArray)\0"
};

void Gui::Dialog::DlgCustomToolbars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgCustomToolbars *_t = static_cast<DlgCustomToolbars *>(_o);
        switch (_id) {
        case 0: _t->on_categoryBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_workbenchBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_moveActionRightButton_clicked(); break;
        case 3: _t->on_moveActionLeftButton_clicked(); break;
        case 4: _t->on_moveActionUpButton_clicked(); break;
        case 5: _t->on_moveActionDownButton_clicked(); break;
        case 6: _t->on_newButton_clicked(); break;
        case 7: _t->on_renameButton_clicked(); break;
        case 8: _t->on_deleteButton_clicked(); break;
        case 9: _t->onAddMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 10: _t->onRemoveMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 11: _t->onModifyMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgCustomToolbars::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgCustomToolbars::staticMetaObject = {
    { &CustomizeActionPage::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgCustomToolbars,
      qt_meta_data_Gui__Dialog__DlgCustomToolbars, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgCustomToolbars::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgCustomToolbars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgCustomToolbars::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgCustomToolbars))
        return static_cast<void*>(const_cast< DlgCustomToolbars*>(this));
    if (!strcmp(_clname, "Ui_DlgCustomToolbars"))
        return static_cast< Ui_DlgCustomToolbars*>(const_cast< DlgCustomToolbars*>(this));
    return CustomizeActionPage::qt_metacast(_clname);
}

int Gui::Dialog::DlgCustomToolbars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomizeActionPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
static const uint qt_meta_data_Gui__Dialog__DlgCustomToolbarsImp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgCustomToolbarsImp[] = {
    "Gui::Dialog::DlgCustomToolbarsImp\0"
};

void Gui::Dialog::DlgCustomToolbarsImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::Dialog::DlgCustomToolbarsImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgCustomToolbarsImp::staticMetaObject = {
    { &DlgCustomToolbars::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgCustomToolbarsImp,
      qt_meta_data_Gui__Dialog__DlgCustomToolbarsImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgCustomToolbarsImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgCustomToolbarsImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgCustomToolbarsImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgCustomToolbarsImp))
        return static_cast<void*>(const_cast< DlgCustomToolbarsImp*>(this));
    return DlgCustomToolbars::qt_metacast(_clname);
}

int Gui::Dialog::DlgCustomToolbarsImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DlgCustomToolbars::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__Dialog__DlgCustomToolBoxbarsImp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgCustomToolBoxbarsImp[] = {
    "Gui::Dialog::DlgCustomToolBoxbarsImp\0"
};

void Gui::Dialog::DlgCustomToolBoxbarsImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::Dialog::DlgCustomToolBoxbarsImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgCustomToolBoxbarsImp::staticMetaObject = {
    { &DlgCustomToolbars::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgCustomToolBoxbarsImp,
      qt_meta_data_Gui__Dialog__DlgCustomToolBoxbarsImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgCustomToolBoxbarsImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgCustomToolBoxbarsImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgCustomToolBoxbarsImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgCustomToolBoxbarsImp))
        return static_cast<void*>(const_cast< DlgCustomToolBoxbarsImp*>(this));
    return DlgCustomToolbars::qt_metacast(_clname);
}

int Gui::Dialog::DlgCustomToolBoxbarsImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DlgCustomToolbars::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
