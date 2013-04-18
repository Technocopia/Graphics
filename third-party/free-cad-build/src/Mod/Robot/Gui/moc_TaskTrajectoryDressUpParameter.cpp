/****************************************************************************
** Meta object code from reading C++ file 'TaskTrajectoryDressUpParameter.h'
**
** Created: Thu Apr 18 07:26:58 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Robot/Gui/TaskTrajectoryDressUpParameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskTrajectoryDressUpParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobotGui__TaskTrajectoryDressUpParameter[] = {

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
      42,   41,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobotGui__TaskTrajectoryDressUpParameter[] = {
    "RobotGui::TaskTrajectoryDressUpParameter\0"
    "\0createPlacementDlg()\0"
};

void RobotGui::TaskTrajectoryDressUpParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskTrajectoryDressUpParameter *_t = static_cast<TaskTrajectoryDressUpParameter *>(_o);
        switch (_id) {
        case 0: _t->createPlacementDlg(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RobotGui::TaskTrajectoryDressUpParameter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobotGui::TaskTrajectoryDressUpParameter::staticMetaObject = {
    { &Gui::TaskView::TaskBox::staticMetaObject, qt_meta_stringdata_RobotGui__TaskTrajectoryDressUpParameter,
      qt_meta_data_RobotGui__TaskTrajectoryDressUpParameter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobotGui::TaskTrajectoryDressUpParameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobotGui::TaskTrajectoryDressUpParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobotGui::TaskTrajectoryDressUpParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobotGui__TaskTrajectoryDressUpParameter))
        return static_cast<void*>(const_cast< TaskTrajectoryDressUpParameter*>(this));
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int RobotGui::TaskTrajectoryDressUpParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskBox QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
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
