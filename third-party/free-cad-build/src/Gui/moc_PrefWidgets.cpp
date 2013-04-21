/****************************************************************************
** Meta object code from reading C++ file 'PrefWidgets.h'
**
** Created: Thu Apr 18 22:17:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/PrefWidgets.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PrefWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__PrefSpinBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      28,   17, 0x0c095003,
      38,   17, 0x0c095003,

       0        // eod
};

static const char qt_meta_stringdata_Gui__PrefSpinBox[] = {
    "Gui::PrefSpinBox\0QByteArray\0prefEntry\0"
    "prefPath\0"
};

void Gui::PrefSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::PrefSpinBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PrefSpinBox::staticMetaObject = {
    { &QSpinBox::staticMetaObject, qt_meta_stringdata_Gui__PrefSpinBox,
      qt_meta_data_Gui__PrefSpinBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PrefSpinBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PrefSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PrefSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PrefSpinBox))
        return static_cast<void*>(const_cast< PrefSpinBox*>(this));
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(const_cast< PrefSpinBox*>(this));
    return QSpinBox::qt_metacast(_clname);
}

int Gui::PrefSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = paramGrpPath(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_Gui__PrefDoubleSpinBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      34,   23, 0x0c095003,
      44,   23, 0x0c095003,

       0        // eod
};

static const char qt_meta_stringdata_Gui__PrefDoubleSpinBox[] = {
    "Gui::PrefDoubleSpinBox\0QByteArray\0"
    "prefEntry\0prefPath\0"
};

void Gui::PrefDoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::PrefDoubleSpinBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PrefDoubleSpinBox::staticMetaObject = {
    { &QDoubleSpinBox::staticMetaObject, qt_meta_stringdata_Gui__PrefDoubleSpinBox,
      qt_meta_data_Gui__PrefDoubleSpinBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PrefDoubleSpinBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PrefDoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PrefDoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PrefDoubleSpinBox))
        return static_cast<void*>(const_cast< PrefDoubleSpinBox*>(this));
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(const_cast< PrefDoubleSpinBox*>(this));
    return QDoubleSpinBox::qt_metacast(_clname);
}

int Gui::PrefDoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = paramGrpPath(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_Gui__PrefLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      29,   18, 0x0c095003,
      39,   18, 0x0c095003,

       0        // eod
};

static const char qt_meta_stringdata_Gui__PrefLineEdit[] = {
    "Gui::PrefLineEdit\0QByteArray\0prefEntry\0"
    "prefPath\0"
};

void Gui::PrefLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::PrefLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PrefLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_Gui__PrefLineEdit,
      qt_meta_data_Gui__PrefLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PrefLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PrefLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PrefLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PrefLineEdit))
        return static_cast<void*>(const_cast< PrefLineEdit*>(this));
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(const_cast< PrefLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int Gui::PrefLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = paramGrpPath(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_Gui__PrefFileChooser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      32,   21, 0x0c095003,
      42,   21, 0x0c095003,

       0        // eod
};

static const char qt_meta_stringdata_Gui__PrefFileChooser[] = {
    "Gui::PrefFileChooser\0QByteArray\0"
    "prefEntry\0prefPath\0"
};

void Gui::PrefFileChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::PrefFileChooser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PrefFileChooser::staticMetaObject = {
    { &FileChooser::staticMetaObject, qt_meta_stringdata_Gui__PrefFileChooser,
      qt_meta_data_Gui__PrefFileChooser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PrefFileChooser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PrefFileChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PrefFileChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PrefFileChooser))
        return static_cast<void*>(const_cast< PrefFileChooser*>(this));
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(const_cast< PrefFileChooser*>(this));
    return FileChooser::qt_metacast(_clname);
}

int Gui::PrefFileChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileChooser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = paramGrpPath(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_Gui__PrefComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      29,   18, 0x0c095003,
      39,   18, 0x0c095003,

       0        // eod
};

static const char qt_meta_stringdata_Gui__PrefComboBox[] = {
    "Gui::PrefComboBox\0QByteArray\0prefEntry\0"
    "prefPath\0"
};

void Gui::PrefComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::PrefComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PrefComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_Gui__PrefComboBox,
      qt_meta_data_Gui__PrefComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PrefComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PrefComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PrefComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PrefComboBox))
        return static_cast<void*>(const_cast< PrefComboBox*>(this));
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(const_cast< PrefComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int Gui::PrefComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = paramGrpPath(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_Gui__PrefCheckBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      29,   18, 0x0c095003,
      39,   18, 0x0c095003,

       0        // eod
};

static const char qt_meta_stringdata_Gui__PrefCheckBox[] = {
    "Gui::PrefCheckBox\0QByteArray\0prefEntry\0"
    "prefPath\0"
};

void Gui::PrefCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::PrefCheckBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PrefCheckBox::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_Gui__PrefCheckBox,
      qt_meta_data_Gui__PrefCheckBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PrefCheckBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PrefCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PrefCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PrefCheckBox))
        return static_cast<void*>(const_cast< PrefCheckBox*>(this));
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(const_cast< PrefCheckBox*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int Gui::PrefCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = paramGrpPath(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_Gui__PrefRadioButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      32,   21, 0x0c095003,
      42,   21, 0x0c095003,

       0        // eod
};

static const char qt_meta_stringdata_Gui__PrefRadioButton[] = {
    "Gui::PrefRadioButton\0QByteArray\0"
    "prefEntry\0prefPath\0"
};

void Gui::PrefRadioButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::PrefRadioButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PrefRadioButton::staticMetaObject = {
    { &QRadioButton::staticMetaObject, qt_meta_stringdata_Gui__PrefRadioButton,
      qt_meta_data_Gui__PrefRadioButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PrefRadioButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PrefRadioButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PrefRadioButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PrefRadioButton))
        return static_cast<void*>(const_cast< PrefRadioButton*>(this));
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(const_cast< PrefRadioButton*>(this));
    return QRadioButton::qt_metacast(_clname);
}

int Gui::PrefRadioButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRadioButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = paramGrpPath(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_Gui__PrefSlider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      27,   16, 0x0c095003,
      37,   16, 0x0c095003,

       0        // eod
};

static const char qt_meta_stringdata_Gui__PrefSlider[] = {
    "Gui::PrefSlider\0QByteArray\0prefEntry\0"
    "prefPath\0"
};

void Gui::PrefSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::PrefSlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PrefSlider::staticMetaObject = {
    { &QSlider::staticMetaObject, qt_meta_stringdata_Gui__PrefSlider,
      qt_meta_data_Gui__PrefSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PrefSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PrefSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PrefSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PrefSlider))
        return static_cast<void*>(const_cast< PrefSlider*>(this));
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(const_cast< PrefSlider*>(this));
    return QSlider::qt_metacast(_clname);
}

int Gui::PrefSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = paramGrpPath(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_Gui__PrefColorButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      32,   21, 0x0c095003,
      42,   21, 0x0c095003,

       0        // eod
};

static const char qt_meta_stringdata_Gui__PrefColorButton[] = {
    "Gui::PrefColorButton\0QByteArray\0"
    "prefEntry\0prefPath\0"
};

void Gui::PrefColorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::PrefColorButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PrefColorButton::staticMetaObject = {
    { &ColorButton::staticMetaObject, qt_meta_stringdata_Gui__PrefColorButton,
      qt_meta_data_Gui__PrefColorButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PrefColorButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PrefColorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PrefColorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PrefColorButton))
        return static_cast<void*>(const_cast< PrefColorButton*>(this));
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(const_cast< PrefColorButton*>(this));
    return ColorButton::qt_metacast(_clname);
}

int Gui::PrefColorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = paramGrpPath(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
