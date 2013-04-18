/****************************************************************************
** Meta object code from reading C++ file 'PropertyItemDelegate.h'
**
** Created: Thu Apr 18 07:04:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../free-cad/src/Gui/propertyeditor/PropertyItemDelegate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyItemDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__PropertyEditor__PropertyItemDelegate[] = {

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
      43,   42,   42,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Gui__PropertyEditor__PropertyItemDelegate[] = {
    "Gui::PropertyEditor::PropertyItemDelegate\0"
    "\0valueChanged()\0"
};

void Gui::PropertyEditor::PropertyItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PropertyItemDelegate *_t = static_cast<PropertyItemDelegate *>(_o);
        switch (_id) {
        case 0: _t->valueChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::PropertyEditor::PropertyItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PropertyEditor::PropertyItemDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_Gui__PropertyEditor__PropertyItemDelegate,
      qt_meta_data_Gui__PropertyEditor__PropertyItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PropertyEditor::PropertyItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PropertyEditor::PropertyItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PropertyEditor__PropertyItemDelegate))
        return static_cast<void*>(const_cast< PropertyItemDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
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
