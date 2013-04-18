/****************************************************************************
** Meta object code from reading C++ file 'SketchOrientationDialog.h'
**
** Created: Thu Apr 18 07:24:50 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Sketcher/Gui/SketchOrientationDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SketchOrientationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SketcherGui__SketchOrientationDialog[] = {

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
      38,   37,   37,   37, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SketcherGui__SketchOrientationDialog[] = {
    "SketcherGui::SketchOrientationDialog\0"
    "\0onPreview()\0"
};

void SketcherGui::SketchOrientationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SketchOrientationDialog *_t = static_cast<SketchOrientationDialog *>(_o);
        switch (_id) {
        case 0: _t->onPreview(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SketcherGui::SketchOrientationDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SketcherGui::SketchOrientationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SketcherGui__SketchOrientationDialog,
      qt_meta_data_SketcherGui__SketchOrientationDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SketcherGui::SketchOrientationDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SketcherGui::SketchOrientationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SketcherGui::SketchOrientationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SketcherGui__SketchOrientationDialog))
        return static_cast<void*>(const_cast< SketchOrientationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SketcherGui::SketchOrientationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
