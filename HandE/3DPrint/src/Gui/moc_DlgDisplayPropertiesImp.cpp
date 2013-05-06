/****************************************************************************
** Meta object code from reading C++ file 'DlgDisplayPropertiesImp.h'
**
** Created: Thu Apr 18 22:16:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgDisplayPropertiesImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgDisplayPropertiesImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgDisplayPropertiesImp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   37,   37,   37, 0x08,
      75,   37,   37,   37, 0x08,
     108,   37,   37,   37, 0x08,
     141,   37,   37,   37, 0x08,
     166,   37,   37,   37, 0x08,
     204,   37,   37,   37, 0x08,
     239,   37,   37,   37, 0x08,
     268,   37,   37,   37, 0x08,
     303,   37,   37,   37, 0x08,
     345,   37,   37,   37, 0x08,
     384,   37,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgDisplayPropertiesImp[] = {
    "Gui::Dialog::DlgDisplayPropertiesImp\0"
    "\0on_changeMaterial_activated(QString)\0"
    "on_changeMode_activated(QString)\0"
    "on_changePlot_activated(QString)\0"
    "on_buttonColor_changed()\0"
    "on_spinTransparency_valueChanged(int)\0"
    "on_spinPointSize_valueChanged(int)\0"
    "on_buttonLineColor_changed()\0"
    "on_spinLineWidth_valueChanged(int)\0"
    "on_spinLineTransparency_valueChanged(int)\0"
    "on_buttonUserDefinedMaterial_clicked()\0"
    "on_buttonColorPlot_clicked()\0"
};

void Gui::Dialog::DlgDisplayPropertiesImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgDisplayPropertiesImp *_t = static_cast<DlgDisplayPropertiesImp *>(_o);
        switch (_id) {
        case 0: _t->on_changeMaterial_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_changeMode_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_changePlot_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_buttonColor_changed(); break;
        case 4: _t->on_spinTransparency_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_spinPointSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_buttonLineColor_changed(); break;
        case 7: _t->on_spinLineWidth_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_spinLineTransparency_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_buttonUserDefinedMaterial_clicked(); break;
        case 10: _t->on_buttonColorPlot_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgDisplayPropertiesImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgDisplayPropertiesImp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgDisplayPropertiesImp,
      qt_meta_data_Gui__Dialog__DlgDisplayPropertiesImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgDisplayPropertiesImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgDisplayPropertiesImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgDisplayPropertiesImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgDisplayPropertiesImp))
        return static_cast<void*>(const_cast< DlgDisplayPropertiesImp*>(this));
    if (!strcmp(_clname, "Ui_DlgDisplayProperties"))
        return static_cast< Ui_DlgDisplayProperties*>(const_cast< DlgDisplayPropertiesImp*>(this));
    if (!strcmp(_clname, "Gui::SelectionSingleton::ObserverType"))
        return static_cast< Gui::SelectionSingleton::ObserverType*>(const_cast< DlgDisplayPropertiesImp*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgDisplayPropertiesImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
