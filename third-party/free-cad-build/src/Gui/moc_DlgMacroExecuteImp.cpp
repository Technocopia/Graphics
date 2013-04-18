/****************************************************************************
** Meta object code from reading C++ file 'DlgMacroExecuteImp.h'
**
** Created: Thu Apr 18 07:04:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DlgMacroExecuteImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgMacroExecuteImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__Dialog__DlgMacroExecuteImp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x0a,
      73,   32,   32,   32, 0x0a,
      99,   32,   32,   32, 0x0a,
     125,   32,   32,   32, 0x0a,
     149,   32,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__Dialog__DlgMacroExecuteImp[] = {
    "Gui::Dialog::DlgMacroExecuteImp\0\0"
    "on_fileChooser_fileNameChanged(QString)\0"
    "on_createButton_clicked()\0"
    "on_deleteButton_clicked()\0"
    "on_editButton_clicked()\0"
    "on_macroListBox_currentItemChanged(QTreeWidgetItem*)\0"
};

void Gui::Dialog::DlgMacroExecuteImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgMacroExecuteImp *_t = static_cast<DlgMacroExecuteImp *>(_o);
        switch (_id) {
        case 0: _t->on_fileChooser_fileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_createButton_clicked(); break;
        case 2: _t->on_deleteButton_clicked(); break;
        case 3: _t->on_editButton_clicked(); break;
        case 4: _t->on_macroListBox_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::Dialog::DlgMacroExecuteImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::Dialog::DlgMacroExecuteImp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gui__Dialog__DlgMacroExecuteImp,
      qt_meta_data_Gui__Dialog__DlgMacroExecuteImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::Dialog::DlgMacroExecuteImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::Dialog::DlgMacroExecuteImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::Dialog::DlgMacroExecuteImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgMacroExecuteImp))
        return static_cast<void*>(const_cast< DlgMacroExecuteImp*>(this));
    if (!strcmp(_clname, "Ui_DlgMacroExecute"))
        return static_cast< Ui_DlgMacroExecute*>(const_cast< DlgMacroExecuteImp*>(this));
    if (!strcmp(_clname, "Gui::WindowParameter"))
        return static_cast< Gui::WindowParameter*>(const_cast< DlgMacroExecuteImp*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgMacroExecuteImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
