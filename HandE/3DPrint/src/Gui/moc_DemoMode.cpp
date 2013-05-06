/****************************************************************************
** Meta object code from reading C++ file 'DemoMode.h'
**
** Created: Thu Apr 18 22:16:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DemoMode.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DemoMode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DemoMode[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x09,
      47,   22,   22,   22, 0x09,
      71,   22,   22,   22, 0x09,
      99,   22,   22,   22, 0x09,
     127,   22,   22,   22, 0x09,
     160,   22,   22,   22, 0x09,
     193,   22,   22,   22, 0x09,
     222,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DemoMode[] = {
    "Gui::Dialog::DemoMode\0\0on_playButton_clicked()\0"
    "on_stopButton_clicked()\0"
    "on_fullscreen_toggled(bool)\0"
    "on_timerCheck_toggled(bool)\0"
    "on_speedSlider_valueChanged(int)\0"
    "on_angleSlider_valueChanged(int)\0"
    "on_timeout_valueChanged(int)\0onAutoPlay()\0"
};

void Gui::Dialog::DemoMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DemoMode *_t = static_cast<DemoMode *>(_o);
        switch (_id) {
        case 0: _t->on_playButton_clicked(); break;
        case 1: _t->on_stopButton_clicked(); break;
        case 2: _t->on_fullscreen_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_timerCheck_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_speedSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_angleSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_timeout_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onAutoPlay(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DemoMode::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DemoMode::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DemoMode,
      qt_meta_data_Gui__Dialog__DemoMode, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DemoMode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DemoMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DemoMode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DemoMode))
        return static_cast<void*>(const_cast< DemoMode*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DemoMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
