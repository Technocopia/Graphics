/****************************************************************************
** Meta object code from reading C++ file 'Widgets.h'
**
** Created: Thu Apr 18 07:04:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/Widgets.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Widgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__CommandIconView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   52,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gui__CommandIconView[] = {
    "Gui::CommandIconView\0\0"
    "emitSelectionChanged(QString)\0item,\0"
    "onSelectionChanged(QListWidgetItem*,QListWidgetItem*)\0"
};

void Gui::CommandIconView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CommandIconView *_t = static_cast<CommandIconView *>(_o);
        switch (_id) {
        case 0: _t->emitSelectionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onSelectionChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::CommandIconView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::CommandIconView::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_Gui__CommandIconView,
      qt_meta_data_Gui__CommandIconView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::CommandIconView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::CommandIconView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::CommandIconView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__CommandIconView))
        return static_cast<void*>(const_cast< CommandIconView*>(this));
    return QListWidget::qt_metacast(_clname);
}

int Gui::CommandIconView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Gui::CommandIconView::emitSelectionChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Gui__ActionSelector[] = {

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
      21,   20,   20,   20, 0x08,
      44,   20,   20,   20, 0x08,
      70,   20,   20,   20, 0x08,
      92,   20,   20,   20, 0x08,
     118,  116,   20,   20, 0x08,
     186,  174,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__ActionSelector[] = {
    "Gui::ActionSelector\0\0on_addButton_clicked()\0"
    "on_removeButton_clicked()\0"
    "on_upButton_clicked()\0on_downButton_clicked()\0"
    ",\0onCurrentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "item,column\0onItemDoubleClicked(QTreeWidgetItem*,int)\0"
};

void Gui::ActionSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ActionSelector *_t = static_cast<ActionSelector *>(_o);
        switch (_id) {
        case 0: _t->on_addButton_clicked(); break;
        case 1: _t->on_removeButton_clicked(); break;
        case 2: _t->on_upButton_clicked(); break;
        case 3: _t->on_downButton_clicked(); break;
        case 4: _t->onCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 5: _t->onItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::ActionSelector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::ActionSelector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui__ActionSelector,
      qt_meta_data_Gui__ActionSelector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::ActionSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::ActionSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::ActionSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__ActionSelector))
        return static_cast<void*>(const_cast< ActionSelector*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::ActionSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_Gui__AccelLineEdit[] = {

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

static const char qt_meta_stringdata_Gui__AccelLineEdit[] = {
    "Gui::AccelLineEdit\0"
};

void Gui::AccelLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::AccelLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::AccelLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_Gui__AccelLineEdit,
      qt_meta_data_Gui__AccelLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::AccelLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::AccelLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::AccelLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__AccelLineEdit))
        return static_cast<void*>(const_cast< AccelLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int Gui::AccelLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__CheckListDialog[] = {

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

static const char qt_meta_stringdata_Gui__CheckListDialog[] = {
    "Gui::CheckListDialog\0"
};

void Gui::CheckListDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::CheckListDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::CheckListDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gui__CheckListDialog,
      qt_meta_data_Gui__CheckListDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::CheckListDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::CheckListDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::CheckListDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__CheckListDialog))
        return static_cast<void*>(const_cast< CheckListDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gui::CheckListDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__ColorButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   17,   17,   17, 0x0a,
      44,   17,   17,   17, 0x08,
      66,   17,   17,   17, 0x08,

 // properties: name, type, flags
      86,   79, 0x43095103,
      97,   92, 0x01095103,
     114,   92, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_Gui__ColorButton[] = {
    "Gui::ColorButton\0\0changed()\0onChooseColor()\0"
    "onColorChosen(QColor)\0onRejected()\0"
    "QColor\0color\0bool\0allowChangeColor\0"
    "drawFrame\0"
};

void Gui::ColorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorButton *_t = static_cast<ColorButton *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->onChooseColor(); break;
        case 2: _t->onColorChosen((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->onRejected(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::ColorButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::ColorButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_Gui__ColorButton,
      qt_meta_data_Gui__ColorButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::ColorButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::ColorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::ColorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__ColorButton))
        return static_cast<void*>(const_cast< ColorButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int Gui::ColorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = color(); break;
        case 1: *reinterpret_cast< bool*>(_v) = allowChangeColor(); break;
        case 2: *reinterpret_cast< bool*>(_v) = drawFrame(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setAllowChangeColor(*reinterpret_cast< bool*>(_v)); break;
        case 2: setDrawFrame(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Gui::ColorButton::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_Gui__UrlLabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   15,   14,   14, 0x0a,

 // properties: name, type, flags
      41,   33, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_Gui__UrlLabel[] = {
    "Gui::UrlLabel\0\0u\0setUrl(QString)\0"
    "QString\0url\0"
};

void Gui::UrlLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UrlLabel *_t = static_cast<UrlLabel *>(_o);
        switch (_id) {
        case 0: _t->setUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::UrlLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::UrlLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_Gui__UrlLabel,
      qt_meta_data_Gui__UrlLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::UrlLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::UrlLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::UrlLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__UrlLabel))
        return static_cast<void*>(const_cast< UrlLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int Gui::UrlLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = url(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setUrl(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_Gui__LabelButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   17,   17,   17, 0x0a,
      60,   17,   17,   17, 0x09,

 // properties: name, type, flags
      78,   69, 0xff095103,

       0        // eod
};

static const char qt_meta_stringdata_Gui__LabelButton[] = {
    "Gui::LabelButton\0\0valueChanged(QVariant)\0"
    "setValue(QVariant)\0browse()\0QVariant\0"
    "value\0"
};

void Gui::LabelButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LabelButton *_t = static_cast<LabelButton *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->browse(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::LabelButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::LabelButton::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui__LabelButton,
      qt_meta_data_Gui__LabelButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::LabelButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::LabelButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::LabelButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__LabelButton))
        return static_cast<void*>(const_cast< LabelButton*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::LabelButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = value(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValue(*reinterpret_cast< QVariant*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Gui::LabelButton::valueChanged(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Gui__StatusWidget[] = {

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

static const char qt_meta_stringdata_Gui__StatusWidget[] = {
    "Gui::StatusWidget\0"
};

void Gui::StatusWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::StatusWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::StatusWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui__StatusWidget,
      qt_meta_data_Gui__StatusWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::StatusWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::StatusWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::StatusWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__StatusWidget))
        return static_cast<void*>(const_cast< StatusWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::StatusWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__LabelEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   17,   17,   17, 0x0a,
      56,   17,   17,   17, 0x0a,
      79,   17,   17,   17, 0x08,

 // properties: name, type, flags
     100,   92, 0x0a095103,
     105,   92, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_Gui__LabelEditor[] = {
    "Gui::LabelEditor\0\0textChanged(QString)\0"
    "setText(QString)\0setButtonText(QString)\0"
    "changeText()\0QString\0text\0buttonText\0"
};

void Gui::LabelEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LabelEditor *_t = static_cast<LabelEditor *>(_o);
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setButtonText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->changeText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::LabelEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::LabelEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui__LabelEditor,
      qt_meta_data_Gui__LabelEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::LabelEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::LabelEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::LabelEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__LabelEditor))
        return static_cast<void*>(const_cast< LabelEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::LabelEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = text(); break;
        case 1: *reinterpret_cast< QString*>(_v) = buttonText(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: setButtonText(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Gui::LabelEditor::textChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
