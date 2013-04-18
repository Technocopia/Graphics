/****************************************************************************
** Meta object code from reading C++ file 'Action.h'
**
** Created: Thu Apr 18 07:04:48 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/Action.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Action.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Action[] = {

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
      13,   12,   12,   12, 0x0a,
      27,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Action[] = {
    "Gui::Action\0\0onActivated()\0onToggled(bool)\0"
};

void Gui::Action::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Action *_t = static_cast<Action *>(_o);
        switch (_id) {
        case 0: _t->onActivated(); break;
        case 1: _t->onToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Action::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Action::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Gui__Action,
      qt_meta_data_Gui__Action, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Action::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Action::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Action::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Action))
        return static_cast<void*>(const_cast< Action*>(this));
    return QObject::qt_metacast(_clname);
}

int Gui::Action::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_Gui__ActionGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      32,   17,   17,   17, 0x0a,
      49,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Gui__ActionGroup[] = {
    "Gui::ActionGroup\0\0onActivated()\0"
    "onActivated(int)\0onActivated(QAction*)\0"
};

void Gui::ActionGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ActionGroup *_t = static_cast<ActionGroup *>(_o);
        switch (_id) {
        case 0: _t->onActivated(); break;
        case 1: _t->onActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::ActionGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::ActionGroup::staticMetaObject = {
    { &Action::staticMetaObject, qt_meta_stringdata_Gui__ActionGroup,
      qt_meta_data_Gui__ActionGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::ActionGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::ActionGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::ActionGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__ActionGroup))
        return static_cast<void*>(const_cast< ActionGroup*>(this));
    return Action::qt_metacast(_clname);
}

int Gui::ActionGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Action::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_Gui__WorkbenchComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      41,   23,   23,   23, 0x0a,
      63,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__WorkbenchComboBox[] = {
    "Gui::WorkbenchComboBox\0\0onActivated(int)\0"
    "onActivated(QAction*)\0"
    "onWorkbenchActivated(QString)\0"
};

void Gui::WorkbenchComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WorkbenchComboBox *_t = static_cast<WorkbenchComboBox *>(_o);
        switch (_id) {
        case 0: _t->onActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->onWorkbenchActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::WorkbenchComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::WorkbenchComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_Gui__WorkbenchComboBox,
      qt_meta_data_Gui__WorkbenchComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::WorkbenchComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::WorkbenchComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::WorkbenchComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__WorkbenchComboBox))
        return static_cast<void*>(const_cast< WorkbenchComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int Gui::WorkbenchComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_Gui__WorkbenchGroup[] = {

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

static const char qt_meta_stringdata_Gui__WorkbenchGroup[] = {
    "Gui::WorkbenchGroup\0"
};

void Gui::WorkbenchGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::WorkbenchGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::WorkbenchGroup::staticMetaObject = {
    { &ActionGroup::staticMetaObject, qt_meta_stringdata_Gui__WorkbenchGroup,
      qt_meta_data_Gui__WorkbenchGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::WorkbenchGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::WorkbenchGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::WorkbenchGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__WorkbenchGroup))
        return static_cast<void*>(const_cast< WorkbenchGroup*>(this));
    return ActionGroup::qt_metacast(_clname);
}

int Gui::WorkbenchGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__RecentFilesAction[] = {

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

static const char qt_meta_stringdata_Gui__RecentFilesAction[] = {
    "Gui::RecentFilesAction\0"
};

void Gui::RecentFilesAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::RecentFilesAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::RecentFilesAction::staticMetaObject = {
    { &ActionGroup::staticMetaObject, qt_meta_stringdata_Gui__RecentFilesAction,
      qt_meta_data_Gui__RecentFilesAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::RecentFilesAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::RecentFilesAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::RecentFilesAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__RecentFilesAction))
        return static_cast<void*>(const_cast< RecentFilesAction*>(this));
    return ActionGroup::qt_metacast(_clname);
}

int Gui::RecentFilesAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__UndoAction[] = {

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

static const char qt_meta_stringdata_Gui__UndoAction[] = {
    "Gui::UndoAction\0"
};

void Gui::UndoAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::UndoAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::UndoAction::staticMetaObject = {
    { &Action::staticMetaObject, qt_meta_stringdata_Gui__UndoAction,
      qt_meta_data_Gui__UndoAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::UndoAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::UndoAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::UndoAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__UndoAction))
        return static_cast<void*>(const_cast< UndoAction*>(this));
    return Action::qt_metacast(_clname);
}

int Gui::UndoAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Action::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__RedoAction[] = {

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

static const char qt_meta_stringdata_Gui__RedoAction[] = {
    "Gui::RedoAction\0"
};

void Gui::RedoAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::RedoAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::RedoAction::staticMetaObject = {
    { &Action::staticMetaObject, qt_meta_stringdata_Gui__RedoAction,
      qt_meta_data_Gui__RedoAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::RedoAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::RedoAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::RedoAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__RedoAction))
        return static_cast<void*>(const_cast< RedoAction*>(this));
    return Action::qt_metacast(_clname);
}

int Gui::RedoAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Action::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__DockWidgetAction[] = {

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

static const char qt_meta_stringdata_Gui__DockWidgetAction[] = {
    "Gui::DockWidgetAction\0"
};

void Gui::DockWidgetAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::DockWidgetAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::DockWidgetAction::staticMetaObject = {
    { &Action::staticMetaObject, qt_meta_stringdata_Gui__DockWidgetAction,
      qt_meta_data_Gui__DockWidgetAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::DockWidgetAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::DockWidgetAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::DockWidgetAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__DockWidgetAction))
        return static_cast<void*>(const_cast< DockWidgetAction*>(this));
    return Action::qt_metacast(_clname);
}

int Gui::DockWidgetAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Action::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__ToolBarAction[] = {

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

static const char qt_meta_stringdata_Gui__ToolBarAction[] = {
    "Gui::ToolBarAction\0"
};

void Gui::ToolBarAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::ToolBarAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::ToolBarAction::staticMetaObject = {
    { &Action::staticMetaObject, qt_meta_stringdata_Gui__ToolBarAction,
      qt_meta_data_Gui__ToolBarAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::ToolBarAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::ToolBarAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::ToolBarAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__ToolBarAction))
        return static_cast<void*>(const_cast< ToolBarAction*>(this));
    return Action::qt_metacast(_clname);
}

int Gui::ToolBarAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Action::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__WindowAction[] = {

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

static const char qt_meta_stringdata_Gui__WindowAction[] = {
    "Gui::WindowAction\0"
};

void Gui::WindowAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::WindowAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::WindowAction::staticMetaObject = {
    { &ActionGroup::staticMetaObject, qt_meta_stringdata_Gui__WindowAction,
      qt_meta_data_Gui__WindowAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::WindowAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::WindowAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::WindowAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__WindowAction))
        return static_cast<void*>(const_cast< WindowAction*>(this));
    return ActionGroup::qt_metacast(_clname);
}

int Gui::WindowAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
