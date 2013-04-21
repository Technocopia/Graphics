/****************************************************************************
** Meta object code from reading C++ file 'FileDialog.h'
**
** Created: Thu Apr 18 22:17:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/FileDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__FileDialog[] = {

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

static const char qt_meta_stringdata_Gui__FileDialog[] = {
    "Gui::FileDialog\0"
};

void Gui::FileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::FileDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::FileDialog::staticMetaObject = {
    { &QFileDialog::staticMetaObject, qt_meta_stringdata_Gui__FileDialog,
      qt_meta_data_Gui__FileDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::FileDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::FileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::FileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__FileDialog))
        return static_cast<void*>(const_cast< FileDialog*>(this));
    return QFileDialog::qt_metacast(_clname);
}

int Gui::FileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__FileOptionsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__FileOptionsDialog[] = {
    "Gui::FileOptionsDialog\0\0filterSelected(QString)\0"
    "toggleExtension()\0"
};

void Gui::FileOptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileOptionsDialog *_t = static_cast<FileOptionsDialog *>(_o);
        switch (_id) {
        case 0: _t->filterSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->toggleExtension(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::FileOptionsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::FileOptionsDialog::staticMetaObject = {
    { &QFileDialog::staticMetaObject, qt_meta_stringdata_Gui__FileOptionsDialog,
      qt_meta_data_Gui__FileOptionsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::FileOptionsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::FileOptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::FileOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__FileOptionsDialog))
        return static_cast<void*>(const_cast< FileOptionsDialog*>(this));
    return QFileDialog::qt_metacast(_clname);
}

int Gui::FileOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Gui::FileOptionsDialog::filterSelected(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Gui__FileChooser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   49, // properties
       1,   61, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      43,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      72,   69,   17,   17, 0x0a,
      95,   93,   17,   17, 0x0a,
     109,   17,   17,   17, 0x0a,
     128,   17,   17,   17, 0x0a,
     151,   17,   17,   17, 0x08,

 // properties: name, type, flags
     169,  164, 0x0009510b,
     182,  174, 0x0a095103,
     191,  174, 0x0a095103,
     198,  174, 0x0a095103,

 // enums: name, flags, count, data
     164, 0x0,    2,   65,

 // enum data: key, value
     209, uint(Gui::FileChooser::File),
     214, uint(Gui::FileChooser::Directory),

       0        // eod
};

static const char qt_meta_stringdata_Gui__FileChooser[] = {
    "Gui::FileChooser\0\0fileNameChanged(QString)\0"
    "fileNameSelected(QString)\0fn\0"
    "setFileName(QString)\0m\0setMode(Mode)\0"
    "setFilter(QString)\0setButtonText(QString)\0"
    "chooseFile()\0Mode\0mode\0QString\0fileName\0"
    "filter\0buttonText\0File\0Directory\0"
};

void Gui::FileChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileChooser *_t = static_cast<FileChooser *>(_o);
        switch (_id) {
        case 0: _t->fileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->fileNameSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setMode((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 4: _t->setFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setButtonText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->chooseFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::FileChooser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::FileChooser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui__FileChooser,
      qt_meta_data_Gui__FileChooser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::FileChooser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::FileChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::FileChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__FileChooser))
        return static_cast<void*>(const_cast< FileChooser*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::FileChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Mode*>(_v) = mode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = fileName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = filter(); break;
        case 3: *reinterpret_cast< QString*>(_v) = buttonText(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMode(*reinterpret_cast< Mode*>(_v)); break;
        case 1: setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 2: setFilter(*reinterpret_cast< QString*>(_v)); break;
        case 3: setButtonText(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Gui::FileChooser::fileNameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gui::FileChooser::fileNameSelected(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_Gui__SelectModule[] = {

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
      19,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__SelectModule[] = {
    "Gui::SelectModule\0\0onButtonClicked()\0"
};

void Gui::SelectModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SelectModule *_t = static_cast<SelectModule *>(_o);
        switch (_id) {
        case 0: _t->onButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::SelectModule::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::SelectModule::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gui__SelectModule,
      qt_meta_data_Gui__SelectModule, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::SelectModule::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::SelectModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::SelectModule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__SelectModule))
        return static_cast<void*>(const_cast< SelectModule*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gui::SelectModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
