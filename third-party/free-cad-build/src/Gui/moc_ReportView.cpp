/****************************************************************************
** Meta object code from reading C++ file 'ReportView.h'
**
** Created: Thu Apr 18 07:04:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/ReportView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ReportView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__DockWnd__ReportView[] = {

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

static const char qt_meta_stringdata_Gui__DockWnd__ReportView[] = {
    "Gui::DockWnd::ReportView\0"
};

void Gui::DockWnd::ReportView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::DockWnd::ReportView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::DockWnd::ReportView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui__DockWnd__ReportView,
      qt_meta_data_Gui__DockWnd__ReportView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::DockWnd::ReportView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::DockWnd::ReportView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::DockWnd::ReportView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__DockWnd__ReportView))
        return static_cast<void*>(const_cast< ReportView*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::DockWnd::ReportView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__DockWnd__ReportOutput[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x0a,
      39,   27,   27,   27, 0x0a,
      55,   27,   27,   27, 0x0a,
      73,   27,   27,   27, 0x0a,
      91,   27,   27,   27, 0x0a,
     122,   27,   27,   27, 0x0a,
     153,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Gui__DockWnd__ReportOutput[] = {
    "Gui::DockWnd::ReportOutput\0\0onSaveAs()\0"
    "onToggleError()\0onToggleWarning()\0"
    "onToggleLogging()\0onToggleRedirectPythonStdout()\0"
    "onToggleRedirectPythonStderr()\0"
    "onToggleGoToEnd()\0"
};

void Gui::DockWnd::ReportOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReportOutput *_t = static_cast<ReportOutput *>(_o);
        switch (_id) {
        case 0: _t->onSaveAs(); break;
        case 1: _t->onToggleError(); break;
        case 2: _t->onToggleWarning(); break;
        case 3: _t->onToggleLogging(); break;
        case 4: _t->onToggleRedirectPythonStdout(); break;
        case 5: _t->onToggleRedirectPythonStderr(); break;
        case 6: _t->onToggleGoToEnd(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::DockWnd::ReportOutput::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::DockWnd::ReportOutput::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_Gui__DockWnd__ReportOutput,
      qt_meta_data_Gui__DockWnd__ReportOutput, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::DockWnd::ReportOutput::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::DockWnd::ReportOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::DockWnd::ReportOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__DockWnd__ReportOutput))
        return static_cast<void*>(const_cast< ReportOutput*>(this));
    if (!strcmp(_clname, "WindowParameter"))
        return static_cast< WindowParameter*>(const_cast< ReportOutput*>(this));
    if (!strcmp(_clname, "Base::ConsoleObserver"))
        return static_cast< Base::ConsoleObserver*>(const_cast< ReportOutput*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int Gui::DockWnd::ReportOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
