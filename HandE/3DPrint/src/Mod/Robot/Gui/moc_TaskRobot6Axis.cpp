/****************************************************************************
** Meta object code from reading C++ file 'TaskRobot6Axis.h'
**
** Created: Thu Apr 18 22:43:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Robot/Gui/TaskRobot6Axis.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskRobot6Axis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobotGui__TaskRobot6Axis[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      48,   26,   25,   25, 0x08,
     115,  109,   25,   25, 0x08,
     135,  109,   25,   25, 0x08,
     155,  109,   25,   25, 0x08,
     175,  109,   25,   25, 0x08,
     195,  109,   25,   25, 0x08,
     215,  109,   25,   25, 0x08,
     235,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobotGui__TaskRobot6Axis[] = {
    "RobotGui::TaskRobot6Axis\0\0"
    "A1,A2,A3,A4,A5,A6,Tcp\0"
    "setAxis(float,float,float,float,float,float,Base::Placement)\0"
    "value\0changeSliderA1(int)\0changeSliderA2(int)\0"
    "changeSliderA3(int)\0changeSliderA4(int)\0"
    "changeSliderA5(int)\0changeSliderA6(int)\0"
    "createPlacementDlg()\0"
};

void RobotGui::TaskRobot6Axis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskRobot6Axis *_t = static_cast<TaskRobot6Axis *>(_o);
        switch (_id) {
        case 0: _t->setAxis((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< const Base::Placement(*)>(_a[7]))); break;
        case 1: _t->changeSliderA1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeSliderA2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->changeSliderA3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->changeSliderA4((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->changeSliderA5((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->changeSliderA6((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->createPlacementDlg(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobotGui::TaskRobot6Axis::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobotGui::TaskRobot6Axis::staticMetaObject = {
    { &Gui::TaskView::TaskBox::staticMetaObject, qt_meta_stringdata_RobotGui__TaskRobot6Axis,
      qt_meta_data_RobotGui__TaskRobot6Axis, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobotGui::TaskRobot6Axis::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobotGui::TaskRobot6Axis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobotGui::TaskRobot6Axis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobotGui__TaskRobot6Axis))
        return static_cast<void*>(const_cast< TaskRobot6Axis*>(this));
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int RobotGui::TaskRobot6Axis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
