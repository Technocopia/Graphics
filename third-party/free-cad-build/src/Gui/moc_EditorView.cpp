/****************************************************************************
** Meta object code from reading C++ file 'EditorView.h'
**
** Created: Thu Apr 18 07:04:55 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/EditorView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditorView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__EditorView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   16,   16,   16, 0x08,
      91,   58,   16,   16, 0x08,
     119,   16,   16,   16, 0x08,
     139,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__EditorView[] = {
    "Gui::EditorView\0\0changeFileName(QString)\0"
    "checkTimestamp()\0position,charsRemoved,charsAdded\0"
    "contentsChange(int,int,int)\0"
    "undoAvailable(bool)\0redoAvailable(bool)\0"
};

void Gui::EditorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditorView *_t = static_cast<EditorView *>(_o);
        switch (_id) {
        case 0: _t->changeFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->checkTimestamp(); break;
        case 2: _t->contentsChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->undoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->redoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::EditorView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::EditorView::staticMetaObject = {
    { &MDIView::staticMetaObject, qt_meta_stringdata_Gui__EditorView,
      qt_meta_data_Gui__EditorView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::EditorView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::EditorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::EditorView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__EditorView))
        return static_cast<void*>(const_cast< EditorView*>(this));
    if (!strcmp(_clname, "WindowParameter"))
        return static_cast< WindowParameter*>(const_cast< EditorView*>(this));
    return MDIView::qt_metacast(_clname);
}

int Gui::EditorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MDIView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Gui::EditorView::changeFileName(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Gui__PythonEditorView[] = {

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
      23,   22,   22,   22, 0x0a,
      39,   22,   22,   22, 0x0a,
      52,   22,   22,   22, 0x0a,
      76,   71,   22,   22, 0x0a,
      97,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Gui__PythonEditorView[] = {
    "Gui::PythonEditorView\0\0executeScript()\0"
    "startDebug()\0toggleBreakpoint()\0line\0"
    "showDebugMarker(int)\0hideDebugMarker()\0"
};

void Gui::PythonEditorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonEditorView *_t = static_cast<PythonEditorView *>(_o);
        switch (_id) {
        case 0: _t->executeScript(); break;
        case 1: _t->startDebug(); break;
        case 2: _t->toggleBreakpoint(); break;
        case 3: _t->showDebugMarker((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->hideDebugMarker(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::PythonEditorView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PythonEditorView::staticMetaObject = {
    { &EditorView::staticMetaObject, qt_meta_stringdata_Gui__PythonEditorView,
      qt_meta_data_Gui__PythonEditorView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PythonEditorView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PythonEditorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PythonEditorView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PythonEditorView))
        return static_cast<void*>(const_cast< PythonEditorView*>(this));
    return EditorView::qt_metacast(_clname);
}

int Gui::PythonEditorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditorView::qt_metacall(_c, _id, _a);
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
