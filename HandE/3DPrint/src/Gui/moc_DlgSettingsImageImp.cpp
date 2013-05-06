/****************************************************************************
** Meta object code from reading C++ file 'DlgSettingsImageImp.h'
**
** Created: Thu Apr 18 22:17:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgSettingsImageImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgSettingsImageImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgSettingsImageImp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x0a,
      60,   33,   33,   33, 0x09,
      91,   33,   33,   33, 0x09,
     119,   33,   33,   33, 0x09,
     148,   33,   33,   33, 0x09,
     176,   33,   33,   33, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgSettingsImageImp[] = {
    "Gui::Dialog::DlgSettingsImageImp\0\0"
    "onSelectedFilter(QString)\0"
    "on_buttonRatioScreen_clicked()\0"
    "on_buttonRatio4x3_clicked()\0"
    "on_buttonRatio16x9_clicked()\0"
    "on_buttonRatio1x1_clicked()\0"
    "on_standardSizeBox_activated(int)\0"
};

void Gui::Dialog::DlgSettingsImageImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgSettingsImageImp *_t = static_cast<DlgSettingsImageImp *>(_o);
        switch (_id) {
        case 0: _t->onSelectedFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_buttonRatioScreen_clicked(); break;
        case 2: _t->on_buttonRatio4x3_clicked(); break;
        case 3: _t->on_buttonRatio16x9_clicked(); break;
        case 4: _t->on_buttonRatio1x1_clicked(); break;
        case 5: _t->on_standardSizeBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgSettingsImageImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgSettingsImageImp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgSettingsImageImp,
      qt_meta_data_Gui__Dialog__DlgSettingsImageImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgSettingsImageImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgSettingsImageImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgSettingsImageImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgSettingsImageImp))
        return static_cast<void*>(const_cast< DlgSettingsImageImp*>(this));
    if (!strcmp(_clname, "Ui::DlgSettingsImage"))
        return static_cast< Ui::DlgSettingsImage*>(const_cast< DlgSettingsImageImp*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::Dialog::DlgSettingsImageImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
