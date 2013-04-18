/****************************************************************************
** Meta object code from reading C++ file 'ImageView.h'
**
** Created: Thu Apr 18 07:13:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Image/Gui/ImageView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageGui__ImageView[] = {

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
      21,   20,   20,   20, 0x0a,
      32,   20,   20,   20, 0x0a,
      48,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ImageGui__ImageView[] = {
    "ImageGui::ImageView\0\0fitImage()\0"
    "oneToOneImage()\0drawGraphics()\0"
};

void ImageGui::ImageView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageView *_t = static_cast<ImageView *>(_o);
        switch (_id) {
        case 0: _t->fitImage(); break;
        case 1: _t->oneToOneImage(); break;
        case 2: _t->drawGraphics(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ImageGui::ImageView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImageGui::ImageView::staticMetaObject = {
    { &Gui::MDIView::staticMetaObject, qt_meta_stringdata_ImageGui__ImageView,
      qt_meta_data_ImageGui__ImageView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageGui::ImageView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageGui::ImageView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageGui::ImageView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageGui__ImageView))
        return static_cast<void*>(const_cast< ImageView*>(this));
    typedef Gui::MDIView QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int ImageGui::ImageView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::MDIView QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
