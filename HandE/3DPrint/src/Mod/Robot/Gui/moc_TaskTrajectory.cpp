/****************************************************************************
** Meta object code from reading C++ file 'TaskTrajectory.h'
**
** Created: Thu Apr 18 22:43:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Robot/Gui/TaskTrajectory.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskTrajectory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobotGui__TaskTrajectory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      48,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     113,   25,   25,   25, 0x08,
     121,   25,   25,   25, 0x08,
     128,   25,   25,   25, 0x08,
     134,   25,   25,   25, 0x08,
     141,   25,   25,   25, 0x08,
     151,   25,   25,   25, 0x08,
     157,   25,   25,   25, 0x08,
     175,  169,   25,   25, 0x08,
     195,  193,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobotGui__TaskTrajectory[] = {
    "RobotGui::TaskTrajectory\0\0"
    "A1,A2,A3,A4,A5,A6,Tcp\0"
    "axisChanged(float,float,float,float,float,float,Base::Placement)\0"
    "start()\0stop()\0run()\0back()\0forward()\0"
    "end()\0timerDone()\0value\0valueChanged(int)\0"
    "d\0valueChanged(double)\0"
};

void RobotGui::TaskTrajectory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskTrajectory *_t = static_cast<TaskTrajectory *>(_o);
        switch (_id) {
        case 0: _t->axisChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< const Base::Placement(*)>(_a[7]))); break;
        case 1: _t->start(); break;
        case 2: _t->stop(); break;
        case 3: _t->run(); break;
        case 4: _t->back(); break;
        case 5: _t->forward(); break;
        case 6: _t->end(); break;
        case 7: _t->timerDone(); break;
        case 8: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobotGui::TaskTrajectory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobotGui::TaskTrajectory::staticMetaObject = {
    { &Gui::TaskView::TaskBox::staticMetaObject, qt_meta_stringdata_RobotGui__TaskTrajectory,
      qt_meta_data_RobotGui__TaskTrajectory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobotGui::TaskTrajectory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobotGui::TaskTrajectory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobotGui::TaskTrajectory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobotGui__TaskTrajectory))
        return static_cast<void*>(const_cast< TaskTrajectory*>(this));
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int RobotGui::TaskTrajectory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void RobotGui::TaskTrajectory::axisChanged(float _t1, float _t2, float _t3, float _t4, float _t5, float _t6, const Base::Placement & _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
