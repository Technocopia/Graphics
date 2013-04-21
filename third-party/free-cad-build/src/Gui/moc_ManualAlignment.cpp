/****************************************************************************
** Meta object code from reading C++ file 'ManualAlignment.h'
**
** Created: Thu Apr 18 22:16:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/ManualAlignment.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ManualAlignment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__ManualAlignment[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      37,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   21,   21,   21, 0x09,
      60,   21,   21,   21, 0x09,
      70,   21,   21,   21, 0x09,
      98,   21,   21,   21, 0x09,
     123,   21,   21,   21, 0x09,
     133,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__ManualAlignment[] = {
    "Gui::ManualAlignment\0\0emitCanceled()\0"
    "emitFinished()\0reset()\0onAlign()\0"
    "onRemoveLastPointMoveable()\0"
    "onRemoveLastPointFixed()\0onClear()\0"
    "onCancel()\0"
};

void Gui::ManualAlignment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ManualAlignment *_t = static_cast<ManualAlignment *>(_o);
        switch (_id) {
        case 0: _t->emitCanceled(); break;
        case 1: _t->emitFinished(); break;
        case 2: _t->reset(); break;
        case 3: _t->onAlign(); break;
        case 4: _t->onRemoveLastPointMoveable(); break;
        case 5: _t->onRemoveLastPointFixed(); break;
        case 6: _t->onClear(); break;
        case 7: _t->onCancel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::ManualAlignment::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::ManualAlignment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Gui__ManualAlignment,
      qt_meta_data_Gui__ManualAlignment, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::ManualAlignment::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::ManualAlignment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::ManualAlignment::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__ManualAlignment))
        return static_cast<void*>(const_cast< ManualAlignment*>(this));
    return QObject::qt_metacast(_clname);
}

int Gui::ManualAlignment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Gui::ManualAlignment::emitCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Gui::ManualAlignment::emitFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
