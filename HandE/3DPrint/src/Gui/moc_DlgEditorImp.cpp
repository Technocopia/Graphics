/****************************************************************************
** Meta object code from reading C++ file 'DlgEditorImp.h'
**
** Created: Thu Apr 18 22:16:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgEditorImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgEditorImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgSettingsEditorImp[] = {

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
      37,   35,   34,   34, 0x09,
      90,   34,   34,   34, 0x09,
     115,   34,   34,   34, 0x09,
     141,   34,   34,   34, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgSettingsEditorImp[] = {
    "Gui::Dialog::DlgSettingsEditorImp\0\0i\0"
    "on_displayItems_currentItemChanged(QTreeWidgetItem*)\0"
    "on_colorButton_changed()\0"
    "on_fontFamily_activated()\0"
    "on_fontSize_valueChanged()\0"
};

void Gui::Dialog::DlgSettingsEditorImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgSettingsEditorImp *_t = static_cast<DlgSettingsEditorImp *>(_o);
        switch (_id) {
        case 0: _t->on_displayItems_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_colorButton_changed(); break;
        case 2: _t->on_fontFamily_activated(); break;
        case 3: _t->on_fontSize_valueChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgSettingsEditorImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgSettingsEditorImp::staticMetaObject = {
    { &PreferencePage::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgSettingsEditorImp,
      qt_meta_data_Gui__Dialog__DlgSettingsEditorImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgSettingsEditorImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgSettingsEditorImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgSettingsEditorImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgSettingsEditorImp))
        return static_cast<void*>(const_cast< DlgSettingsEditorImp*>(this));
    if (!strcmp(_clname, "Ui_DlgEditorSettings"))
        return static_cast< Ui_DlgEditorSettings*>(const_cast< DlgSettingsEditorImp*>(this));
    return PreferencePage::qt_metacast(_clname);
}

int Gui::Dialog::DlgSettingsEditorImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PreferencePage::qt_metacall(_c, _id, _a);
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
