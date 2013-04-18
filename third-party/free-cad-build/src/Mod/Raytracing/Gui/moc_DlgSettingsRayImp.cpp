/****************************************************************************
** Meta object code from reading C++ file 'DlgSettingsRayImp.h'
**
** Created: Thu Apr 18 07:23:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Raytracing/Gui/DlgSettingsRayImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgSettingsRayImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RaytracingGui__DlgSettingsRayImp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_RaytracingGui__DlgSettingsRayImp[] = {
    "RaytracingGui::DlgSettingsRayImp\0"
};

void RaytracingGui::DlgSettingsRayImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RaytracingGui::DlgSettingsRayImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RaytracingGui::DlgSettingsRayImp::staticMetaObject = {
    { &Gui::Dialog::PreferencePage::staticMetaObject, qt_meta_stringdata_RaytracingGui__DlgSettingsRayImp,
      qt_meta_data_RaytracingGui__DlgSettingsRayImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RaytracingGui::DlgSettingsRayImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RaytracingGui::DlgSettingsRayImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RaytracingGui::DlgSettingsRayImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RaytracingGui__DlgSettingsRayImp))
        return static_cast<void*>(const_cast< DlgSettingsRayImp*>(this));
    if (!strcmp(_clname, "Ui_DlgSettingsRay"))
        return static_cast< Ui_DlgSettingsRay*>(const_cast< DlgSettingsRayImp*>(this));
    typedef Gui::Dialog::PreferencePage QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int RaytracingGui::DlgSettingsRayImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::Dialog::PreferencePage QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
