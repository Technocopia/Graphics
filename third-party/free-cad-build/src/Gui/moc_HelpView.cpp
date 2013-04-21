/****************************************************************************
** Meta object code from reading C++ file 'HelpView.h'
**
** Created: Thu Apr 18 22:17:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/HelpView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HelpView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__DockWnd__TextBrowser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      57,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      81,   79,   26,   26, 0x08,
     108,   79,   26,   26, 0x08,
     134,   26,   26,   26, 0x08,
     151,  145,   26,   26, 0x08,
     171,   26,   26,   26, 0x08,
     217,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__DockWnd__TextBrowser[] = {
    "Gui::DockWnd::TextBrowser\0\0"
    "startExternalBrowser(QString)\0"
    "stateChanged(QString)\0b\0"
    "setBackwardAvailable(bool)\0"
    "setForwardAvailable(bool)\0done(bool)\0"
    "state\0onStateChanged(int)\0"
    "onResponseHeaderReceived(QHttpResponseHeader)\0"
    "onHighlighted(QString)\0"
};

void Gui::DockWnd::TextBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TextBrowser *_t = static_cast<TextBrowser *>(_o);
        switch (_id) {
        case 0: _t->startExternalBrowser((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->stateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setBackwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setForwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onResponseHeaderReceived((*reinterpret_cast< const QHttpResponseHeader(*)>(_a[1]))); break;
        case 7: _t->onHighlighted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::DockWnd::TextBrowser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::DockWnd::TextBrowser::staticMetaObject = {
    { &QTextBrowser::staticMetaObject, qt_meta_stringdata_Gui__DockWnd__TextBrowser,
      qt_meta_data_Gui__DockWnd__TextBrowser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::DockWnd::TextBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::DockWnd::TextBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::DockWnd::TextBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__DockWnd__TextBrowser))
        return static_cast<void*>(const_cast< TextBrowser*>(this));
    return QTextBrowser::qt_metacast(_clname);
}

int Gui::DockWnd::TextBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Gui::DockWnd::TextBrowser::startExternalBrowser(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gui::DockWnd::TextBrowser::stateChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_Gui__DockWnd__HelpView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   23,   23,   23, 0x08,
      55,   23,   23,   23, 0x08,
      91,   85,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__DockWnd__HelpView[] = {
    "Gui::DockWnd::HelpView\0\0setSource(QUrl)\0"
    "openHelpFile()\0startExternalBrowser(QString)\0"
    "state\0onStateChanged(QString)\0"
};

void Gui::DockWnd::HelpView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HelpView *_t = static_cast<HelpView *>(_o);
        switch (_id) {
        case 0: _t->setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->openHelpFile(); break;
        case 2: _t->startExternalBrowser((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onStateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::DockWnd::HelpView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::DockWnd::HelpView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui__DockWnd__HelpView,
      qt_meta_data_Gui__DockWnd__HelpView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::DockWnd::HelpView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::DockWnd::HelpView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::DockWnd::HelpView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__DockWnd__HelpView))
        return static_cast<void*>(const_cast< HelpView*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::DockWnd::HelpView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Gui::DockWnd::HelpView::setSource(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
