/****************************************************************************
** Meta object code from reading C++ file 'NetworkRetriever.h'
**
** Created: Thu Apr 18 07:04:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/NetworkRetriever.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkRetriever.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__NetworkRetriever[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   22,   22,   22, 0x08,
      52,   50,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__NetworkRetriever[] = {
    "Gui::NetworkRetriever\0\0wgetExited()\0"
    "testFailure()\0,\0wgetFinished(int,QProcess::ExitStatus)\0"
};

void Gui::NetworkRetriever::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NetworkRetriever *_t = static_cast<NetworkRetriever *>(_o);
        switch (_id) {
        case 0: _t->wgetExited(); break;
        case 1: _t->testFailure(); break;
        case 2: _t->wgetFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::NetworkRetriever::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::NetworkRetriever::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Gui__NetworkRetriever,
      qt_meta_data_Gui__NetworkRetriever, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::NetworkRetriever::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::NetworkRetriever::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::NetworkRetriever::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__NetworkRetriever))
        return static_cast<void*>(const_cast< NetworkRetriever*>(this));
    return QObject::qt_metacast(_clname);
}

int Gui::NetworkRetriever::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Gui::NetworkRetriever::wgetExited()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_Gui__StdCmdDownloadOnlineHelp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__StdCmdDownloadOnlineHelp[] = {
    "Gui::StdCmdDownloadOnlineHelp\0\0"
    "wgetFinished()\0"
};

void Gui::StdCmdDownloadOnlineHelp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StdCmdDownloadOnlineHelp *_t = static_cast<StdCmdDownloadOnlineHelp *>(_o);
        switch (_id) {
        case 0: _t->wgetFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::StdCmdDownloadOnlineHelp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::StdCmdDownloadOnlineHelp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Gui__StdCmdDownloadOnlineHelp,
      qt_meta_data_Gui__StdCmdDownloadOnlineHelp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::StdCmdDownloadOnlineHelp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::StdCmdDownloadOnlineHelp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::StdCmdDownloadOnlineHelp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__StdCmdDownloadOnlineHelp))
        return static_cast<void*>(const_cast< StdCmdDownloadOnlineHelp*>(this));
    if (!strcmp(_clname, "Command"))
        return static_cast< Command*>(const_cast< StdCmdDownloadOnlineHelp*>(this));
    return QObject::qt_metacast(_clname);
}

int Gui::StdCmdDownloadOnlineHelp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
