/****************************************************************************
** Meta object code from reading C++ file 'TrajectorySimulate.h'
**
** Created: Thu Apr 18 07:26:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Robot/Gui/TrajectorySimulate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TrajectorySimulate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobotGui__TrajectorySimulate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x08,
      38,   29,   29,   29, 0x08,
      45,   29,   29,   29, 0x08,
      51,   29,   29,   29, 0x08,
      58,   29,   29,   29, 0x08,
      68,   29,   29,   29, 0x08,
      74,   29,   29,   29, 0x08,
      92,   86,   29,   29, 0x08,
     112,  110,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobotGui__TrajectorySimulate[] = {
    "RobotGui::TrajectorySimulate\0\0start()\0"
    "stop()\0run()\0back()\0forward()\0end()\0"
    "timerDone()\0value\0valueChanged(int)\0"
    "d\0valueChanged(double)\0"
};

void RobotGui::TrajectorySimulate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TrajectorySimulate *_t = static_cast<TrajectorySimulate *>(_o);
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->stop(); break;
        case 2: _t->run(); break;
        case 3: _t->back(); break;
        case 4: _t->forward(); break;
        case 5: _t->end(); break;
        case 6: _t->timerDone(); break;
        case 7: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobotGui::TrajectorySimulate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobotGui::TrajectorySimulate::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RobotGui__TrajectorySimulate,
      qt_meta_data_RobotGui__TrajectorySimulate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobotGui::TrajectorySimulate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobotGui::TrajectorySimulate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobotGui::TrajectorySimulate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobotGui__TrajectorySimulate))
        return static_cast<void*>(const_cast< TrajectorySimulate*>(this));
    if (!strcmp(_clname, "Ui_DlgTrajectorySimulate"))
        return static_cast< Ui_DlgTrajectorySimulate*>(const_cast< TrajectorySimulate*>(this));
    return QDialog::qt_metacast(_clname);
}

int RobotGui::TrajectorySimulate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
