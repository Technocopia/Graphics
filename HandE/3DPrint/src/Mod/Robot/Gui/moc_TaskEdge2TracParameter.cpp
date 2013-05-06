/****************************************************************************
** Meta object code from reading C++ file 'TaskEdge2TracParameter.h'
**
** Created: Thu Apr 18 22:43:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Robot/Gui/TaskEdge2TracParameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskEdge2TracParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobotGui__TaskEdge2TracParameter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x08,
      51,   45,   33,   33, 0x08,
      78,   45,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobotGui__TaskEdge2TracParameter[] = {
    "RobotGui::TaskEdge2TracParameter\0\0"
    "hideShow()\0Value\0sizingValueChanged(double)\0"
    "orientationToggled(bool)\0"
};

void RobotGui::TaskEdge2TracParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskEdge2TracParameter *_t = static_cast<TaskEdge2TracParameter *>(_o);
        switch (_id) {
        case 0: _t->hideShow(); break;
        case 1: _t->sizingValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->orientationToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobotGui::TaskEdge2TracParameter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobotGui::TaskEdge2TracParameter::staticMetaObject = {
    { &Gui::TaskView::TaskBox::staticMetaObject, qt_meta_stringdata_RobotGui__TaskEdge2TracParameter,
      qt_meta_data_RobotGui__TaskEdge2TracParameter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobotGui::TaskEdge2TracParameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobotGui::TaskEdge2TracParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobotGui::TaskEdge2TracParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobotGui__TaskEdge2TracParameter))
        return static_cast<void*>(const_cast< TaskEdge2TracParameter*>(this));
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int RobotGui::TaskEdge2TracParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
