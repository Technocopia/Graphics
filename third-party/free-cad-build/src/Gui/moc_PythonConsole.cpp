/****************************************************************************
** Meta object code from reading C++ file 'PythonConsole.h'
**
** Created: Thu Apr 18 22:17:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/PythonConsole.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PythonConsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__PythonConsole[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   19,   19,   19, 0x0a,
      54,   19,   19,   19, 0x0a,
      73,   19,   19,   19, 0x0a,
      89,   19,   19,   19, 0x0a,
     105,   19,   19,   19, 0x0a,
     122,   19,   19,   19, 0x0a,
     140,  132,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__PythonConsole[] = {
    "Gui::PythonConsole\0\0pendingSource()\0"
    "onSaveHistoryAs()\0onInsertFileName()\0"
    "onCopyHistory()\0onCopyCommand()\0"
    "onClearConsole()\0onFlush()\0visible\0"
    "visibilityChanged(bool)\0"
};

void Gui::PythonConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonConsole *_t = static_cast<PythonConsole *>(_o);
        switch (_id) {
        case 0: _t->pendingSource(); break;
        case 1: _t->onSaveHistoryAs(); break;
        case 2: _t->onInsertFileName(); break;
        case 3: _t->onCopyHistory(); break;
        case 4: _t->onCopyCommand(); break;
        case 5: _t->onClearConsole(); break;
        case 6: _t->onFlush(); break;
        case 7: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::PythonConsole::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PythonConsole::staticMetaObject = {
    { &TextEdit::staticMetaObject, qt_meta_stringdata_Gui__PythonConsole,
      qt_meta_data_Gui__PythonConsole, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PythonConsole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PythonConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PythonConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PythonConsole))
        return static_cast<void*>(const_cast< PythonConsole*>(this));
    if (!strcmp(_clname, "WindowParameter"))
        return static_cast< WindowParameter*>(const_cast< PythonConsole*>(this));
    return TextEdit::qt_metacast(_clname);
}

int Gui::PythonConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Gui::PythonConsole::pendingSource()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_Gui__PythonInputField[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Gui__PythonInputField[] = {
    "Gui::PythonInputField\0\0textEntered()\0"
};

void Gui::PythonInputField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonInputField *_t = static_cast<PythonInputField *>(_o);
        switch (_id) {
        case 0: _t->textEntered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::PythonInputField::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PythonInputField::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui__PythonInputField,
      qt_meta_data_Gui__PythonInputField, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PythonInputField::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PythonInputField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PythonInputField::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PythonInputField))
        return static_cast<void*>(const_cast< PythonInputField*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::PythonInputField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Gui::PythonInputField::textEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
