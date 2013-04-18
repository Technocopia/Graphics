/****************************************************************************
** Meta object code from reading C++ file 'ProgressBar.h'
**
** Created: Thu Apr 18 07:04:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/ProgressBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProgressBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__ProgressBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   18,   17,   17, 0x0a,
      50,   17,   45,   17, 0x0a,
      61,   17,   17,   17, 0x09,
      75,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__ProgressBar[] = {
    "Gui::ProgressBar\0\0ms\0setMinimumDuration(int)\0"
    "bool\0canAbort()\0delayedShow()\0"
    "aboutToShow()\0"
};

void Gui::ProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProgressBar *_t = static_cast<ProgressBar *>(_o);
        switch (_id) {
        case 0: _t->setMinimumDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { bool _r = _t->canAbort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->delayedShow(); break;
        case 3: _t->aboutToShow(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::ProgressBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::ProgressBar::staticMetaObject = {
    { &QProgressBar::staticMetaObject, qt_meta_stringdata_Gui__ProgressBar,
      qt_meta_data_Gui__ProgressBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::ProgressBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::ProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::ProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__ProgressBar))
        return static_cast<void*>(const_cast< ProgressBar*>(this));
    return QProgressBar::qt_metacast(_clname);
}

int Gui::ProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
