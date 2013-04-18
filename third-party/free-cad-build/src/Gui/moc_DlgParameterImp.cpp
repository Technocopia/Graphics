/****************************************************************************
** Meta object code from reading C++ file 'DlgParameterImp.h'
**
** Created: Thu Apr 18 07:04:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgParameterImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgParameterImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgParameterImp[] = {

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
      30,   29,   29,   29, 0x09,
      56,   29,   29,   29, 0x09,
      86,   29,   29,   29, 0x09,
     120,   29,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgParameterImp[] = {
    "Gui::Dialog::DlgParameterImp\0\0"
    "onChangeParameterSet(int)\0"
    "on_buttonSaveToDisk_clicked()\0"
    "onGroupSelected(QTreeWidgetItem*)\0"
    "on_closeButton_clicked()\0"
};

void Gui::Dialog::DlgParameterImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgParameterImp *_t = static_cast<DlgParameterImp *>(_o);
        switch (_id) {
        case 0: _t->onChangeParameterSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_buttonSaveToDisk_clicked(); break;
        case 2: _t->onGroupSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_closeButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgParameterImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgParameterImp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgParameterImp,
      qt_meta_data_Gui__Dialog__DlgParameterImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgParameterImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgParameterImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgParameterImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgParameterImp))
        return static_cast<void*>(const_cast< DlgParameterImp*>(this));
    if (!strcmp(_clname, "Ui_DlgParameter"))
        return static_cast< Ui_DlgParameter*>(const_cast< DlgParameterImp*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgParameterImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_Gui__Dialog__ParameterGroup[] = {

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
      52,   28,   28,   28, 0x09,
      71,   28,   28,   28, 0x09,
      94,   28,   28,   28, 0x09,
     111,   28,   28,   28, 0x09,
     130,   28,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__ParameterGroup[] = {
    "Gui::Dialog::ParameterGroup\0\0"
    "onDeleteSelectedItem()\0onCreateSubgroup()\0"
    "onToggleSelectedItem()\0onExportToFile()\0"
    "onImportFromFile()\0onRenameSelectedItem()\0"
};

void Gui::Dialog::ParameterGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ParameterGroup *_t = static_cast<ParameterGroup *>(_o);
        switch (_id) {
        case 0: _t->onDeleteSelectedItem(); break;
        case 1: _t->onCreateSubgroup(); break;
        case 2: _t->onToggleSelectedItem(); break;
        case 3: _t->onExportToFile(); break;
        case 4: _t->onImportFromFile(); break;
        case 5: _t->onRenameSelectedItem(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::Dialog::ParameterGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::ParameterGroup::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_Gui__Dialog__ParameterGroup,
      qt_meta_data_Gui__Dialog__ParameterGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::ParameterGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::ParameterGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::ParameterGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__ParameterGroup))
        return static_cast<void*>(const_cast< ParameterGroup*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int Gui::Dialog::ParameterGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_Gui__Dialog__ParameterValue[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   29,   28,   28, 0x09,
      74,   28,   28,   28, 0x09,
      97,   28,   28,   28, 0x09,
     120,   28,   28,   28, 0x09,
     143,   28,   28,   28, 0x09,
     162,   28,   28,   28, 0x09,
     180,   28,   28,   28, 0x09,
     199,   28,   28,   28, 0x09,
     219,   28,   28,   28, 0x09,
     263,  243,  238,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__ParameterValue[] = {
    "Gui::Dialog::ParameterValue\0\0,\0"
    "onChangeSelectedItem(QTreeWidgetItem*,int)\0"
    "onChangeSelectedItem()\0onDeleteSelectedItem()\0"
    "onRenameSelectedItem()\0onCreateTextItem()\0"
    "onCreateIntItem()\0onCreateUIntItem()\0"
    "onCreateFloatItem()\0onCreateBoolItem()\0"
    "bool\0index,trigger,event\0"
    "edit(QModelIndex,EditTrigger,QEvent*)\0"
};

void Gui::Dialog::ParameterValue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ParameterValue *_t = static_cast<ParameterValue *>(_o);
        switch (_id) {
        case 0: _t->onChangeSelectedItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onChangeSelectedItem(); break;
        case 2: _t->onDeleteSelectedItem(); break;
        case 3: _t->onRenameSelectedItem(); break;
        case 4: _t->onCreateTextItem(); break;
        case 5: _t->onCreateIntItem(); break;
        case 6: _t->onCreateUIntItem(); break;
        case 7: _t->onCreateFloatItem(); break;
        case 8: _t->onCreateBoolItem(); break;
        case 9: { bool _r = _t->edit((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< EditTrigger(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::ParameterValue::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::ParameterValue::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_Gui__Dialog__ParameterValue,
      qt_meta_data_Gui__Dialog__ParameterValue, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::ParameterValue::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::ParameterValue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::ParameterValue::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__ParameterValue))
        return static_cast<void*>(const_cast< ParameterValue*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int Gui::Dialog::ParameterValue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
