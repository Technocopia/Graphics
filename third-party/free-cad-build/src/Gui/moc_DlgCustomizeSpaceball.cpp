/****************************************************************************
** Meta object code from reading C++ file 'DlgCustomizeSpaceball.h'
**
** Created: Thu Apr 18 07:04:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgCustomizeSpaceball.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgCustomizeSpaceball.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__ButtonView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   25,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   69,   24,   24, 0x08,
     139,   25,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__ButtonView[] = {
    "Gui::Dialog::ButtonView\0\0commandName\0"
    "changeCommandSelection(QString)\0"
    "selected,deselected\0"
    "goSelectionChanged(QItemSelection,QItemSelection)\0"
    "goChangedCommand(QString)\0"
};

void Gui::Dialog::ButtonView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ButtonView *_t = static_cast<ButtonView *>(_o);
        switch (_id) {
        case 0: _t->changeCommandSelection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->goSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 2: _t->goChangedCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::ButtonView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::ButtonView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_Gui__Dialog__ButtonView,
      qt_meta_data_Gui__Dialog__ButtonView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::ButtonView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::ButtonView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::ButtonView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__ButtonView))
        return static_cast<void*>(const_cast< ButtonView*>(this));
    return QListView::qt_metacast(_clname);
}

int Gui::Dialog::ButtonView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
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
void Gui::Dialog::ButtonView::changeCommandSelection(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Gui__Dialog__ButtonModel[] = {

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

static const char qt_meta_stringdata_Gui__Dialog__ButtonModel[] = {
    "Gui::Dialog::ButtonModel\0"
};

void Gui::Dialog::ButtonModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::Dialog::ButtonModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::ButtonModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_Gui__Dialog__ButtonModel,
      qt_meta_data_Gui__Dialog__ButtonModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::ButtonModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::ButtonModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::ButtonModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__ButtonModel))
        return static_cast<void*>(const_cast< ButtonModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int Gui::Dialog::ButtonModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__Dialog__CommandView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      38,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   26,   25,   25, 0x0a,
     102,   96,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__CommandView[] = {
    "Gui::Dialog::CommandView\0\0commandName\0"
    "changedCommand(QString)\0"
    "goChangeCommandSelection(QString)\0"
    "index\0goClicked(QModelIndex)\0"
};

void Gui::Dialog::CommandView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CommandView *_t = static_cast<CommandView *>(_o);
        switch (_id) {
        case 0: _t->changedCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->goChangeCommandSelection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->goClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::CommandView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::CommandView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_Gui__Dialog__CommandView,
      qt_meta_data_Gui__Dialog__CommandView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::CommandView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::CommandView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::CommandView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__CommandView))
        return static_cast<void*>(const_cast< CommandView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int Gui::Dialog::CommandView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
void Gui::Dialog::CommandView::changedCommand(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Gui__Dialog__CommandModel[] = {

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

static const char qt_meta_stringdata_Gui__Dialog__CommandModel[] = {
    "Gui::Dialog::CommandModel\0"
};

void Gui::Dialog::CommandModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::Dialog::CommandModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::CommandModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_Gui__Dialog__CommandModel,
      qt_meta_data_Gui__Dialog__CommandModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::CommandModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::CommandModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::CommandModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__CommandModel))
        return static_cast<void*>(const_cast< CommandModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int Gui::Dialog::CommandModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__Dialog__PrintModel[] = {

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

static const char qt_meta_stringdata_Gui__Dialog__PrintModel[] = {
    "Gui::Dialog::PrintModel\0"
};

void Gui::Dialog::PrintModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::Dialog::PrintModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::PrintModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_Gui__Dialog__PrintModel,
      qt_meta_data_Gui__Dialog__PrintModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::PrintModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::PrintModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::PrintModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__PrintModel))
        return static_cast<void*>(const_cast< PrintModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int Gui::Dialog::PrintModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__Dialog__DlgCustomizeSpaceball[] = {

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
      46,   36,   35,   35, 0x09,
      75,   36,   35,   35, 0x09,
     107,   36,   35,   35, 0x09,
     139,   35,   35,   35, 0x08,
     149,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgCustomizeSpaceball[] = {
    "Gui::Dialog::DlgCustomizeSpaceball\0\0"
    "macroName\0onAddMacroAction(QByteArray)\0"
    "onRemoveMacroAction(QByteArray)\0"
    "onModifyMacroAction(QByteArray)\0"
    "goClear()\0goPrint()\0"
};

void Gui::Dialog::DlgCustomizeSpaceball::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgCustomizeSpaceball *_t = static_cast<DlgCustomizeSpaceball *>(_o);
        switch (_id) {
        case 0: _t->onAddMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->onRemoveMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->onModifyMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->goClear(); break;
        case 4: _t->goPrint(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgCustomizeSpaceball::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgCustomizeSpaceball::staticMetaObject = {
    { &CustomizeActionPage::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgCustomizeSpaceball,
      qt_meta_data_Gui__Dialog__DlgCustomizeSpaceball, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgCustomizeSpaceball::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgCustomizeSpaceball::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgCustomizeSpaceball::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgCustomizeSpaceball))
        return static_cast<void*>(const_cast< DlgCustomizeSpaceball*>(this));
    return CustomizeActionPage::qt_metacast(_clname);
}

int Gui::Dialog::DlgCustomizeSpaceball::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
