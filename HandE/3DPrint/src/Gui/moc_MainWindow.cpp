/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created: Thu Apr 18 22:17:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      29,   16,   16,   16, 0x05,
      58,   16,   16,   16, 0x05,
      86,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,  105,   16,   16, 0x0a,
     137,   16,   16,   16, 0x0a,
     152,   16,   16,   16, 0x0a,
     159,   16,   16,   16, 0x0a,
     169,   16,   16,   16, 0x0a,
     189,   16,   16,   16, 0x0a,
     207,   16,   16,   16, 0x0a,
     228,   16,   16,   16, 0x0a,
     253,   16,   16,   16, 0x0a,
     280,   16,   16,   16, 0x0a,
     292,   16,   16,   16, 0x0a,
     315,   16,   16,   16, 0x0a,
     352,  336,   16,   16, 0x0a,
     385,  377,   16,   16, 0x2a,
     413,  406,   16,   16, 0x08,
     444,   16,   16,   16, 0x08,
     484,  478,   16,   16, 0x08,
     507,   16,   16,   16, 0x08,
     534,   16,   16,   16, 0x08,
     561,   16,   16,   16, 0x08,
     591,   16,   16,   16, 0x08,
     607,   16,   16,   16, 0x08,
     624,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__MainWindow[] = {
    "Gui::MainWindow\0\0timeEvent()\0"
    "windowStateChanged(MDIView*)\0"
    "workbenchActivated(QString)\0"
    "mainWindowClosed()\0i,text\0"
    "setPaneText(int,QString)\0arrangeIcons()\0"
    "tile()\0cascade()\0closeActiveWindow()\0"
    "closeAllWindows()\0activateNextWindow()\0"
    "activatePreviousWindow()\0"
    "activateWorkbench(QString)\0whatsThis()\0"
    "switchToTopLevelMode()\0switchToDockedMode()\0"
    "message,timeout\0showMessage(QString,int)\0"
    "message\0showMessage(QString)\0window\0"
    "onSetActiveSubWindow(QWidget*)\0"
    "onWindowActivated(QMdiSubWindow*)\0"
    "index\0tabCloseRequested(int)\0"
    "onWindowsMenuAboutToShow()\0"
    "onToolBarMenuAboutToShow()\0"
    "onDockWindowMenuAboutToShow()\0"
    "updateActions()\0showMainWindow()\0"
    "delayedStartup()\0"
};

void Gui::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->timeEvent(); break;
        case 1: _t->windowStateChanged((*reinterpret_cast< MDIView*(*)>(_a[1]))); break;
        case 2: _t->workbenchActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mainWindowClosed(); break;
        case 4: _t->setPaneText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->arrangeIcons(); break;
        case 6: _t->tile(); break;
        case 7: _t->cascade(); break;
        case 8: _t->closeActiveWindow(); break;
        case 9: _t->closeAllWindows(); break;
        case 10: _t->activateNextWindow(); break;
        case 11: _t->activatePreviousWindow(); break;
        case 12: _t->activateWorkbench((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->whatsThis(); break;
        case 14: _t->switchToTopLevelMode(); break;
        case 15: _t->switchToDockedMode(); break;
        case 16: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->onSetActiveSubWindow((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 19: _t->onWindowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 20: _t->tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->onWindowsMenuAboutToShow(); break;
        case 22: _t->onToolBarMenuAboutToShow(); break;
        case 23: _t->onDockWindowMenuAboutToShow(); break;
        case 24: _t->updateActions(); break;
        case 25: _t->showMainWindow(); break;
        case 26: _t->delayedStartup(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Gui__MainWindow,
      qt_meta_data_Gui__MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Gui::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void Gui::MainWindow::timeEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Gui::MainWindow::windowStateChanged(MDIView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gui::MainWindow::workbenchActivated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Gui::MainWindow::mainWindowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
