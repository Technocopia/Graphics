/****************************************************************************
** Meta object code from reading C++ file 'DlgEvaluateMeshImp.h'
**
** Created: Thu Apr 18 22:28:41 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Mesh/Gui/DlgEvaluateMeshImp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgEvaluateMeshImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeshGui__CleanupHandler[] = {

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
      25,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MeshGui__CleanupHandler[] = {
    "MeshGui::CleanupHandler\0\0cleanup()\0"
};

void MeshGui::CleanupHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CleanupHandler *_t = static_cast<CleanupHandler *>(_o);
        switch (_id) {
        case 0: _t->cleanup(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MeshGui::CleanupHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshGui::CleanupHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MeshGui__CleanupHandler,
      qt_meta_data_MeshGui__CleanupHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshGui::CleanupHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshGui::CleanupHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshGui::CleanupHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__CleanupHandler))
        return static_cast<void*>(const_cast< CleanupHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int MeshGui::CleanupHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_MeshGui__DlgEvaluateMeshImp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x09,
      65,   28,   28,   28, 0x09,
     103,   28,   28,   28, 0x09,
     140,   28,   28,   28, 0x09,
     180,   28,   28,   28, 0x09,
     222,   28,   28,   28, 0x09,
     263,   28,   28,   28, 0x09,
     304,   28,   28,   28, 0x09,
     347,   28,   28,   28, 0x09,
     389,   28,   28,   28, 0x09,
     426,   28,   28,   28, 0x09,
     465,   28,   28,   28, 0x09,
     503,   28,   28,   28, 0x09,
     540,   28,   28,   28, 0x09,
     578,   28,   28,   28, 0x09,
     615,   28,   28,   28, 0x09,
     647,   28,   28,   28, 0x09,
     681,   28,   28,   28, 0x09,
     714,   28,   28,   28, 0x09,
     755,   28,   28,   28, 0x09,
     798,   28,   28,   28, 0x09,
     840,   28,   28,   28, 0x09,
     870,   28,   28,   28, 0x09,
     902,   28,   28,   28, 0x09,
     933,   28,   28,   28, 0x09,
     965,   28,   28,   28, 0x09,
     996,   28,   28,   28, 0x09,
    1023,   28,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MeshGui__DlgEvaluateMeshImp[] = {
    "MeshGui::DlgEvaluateMeshImp\0\0"
    "on_checkOrientationButton_clicked()\0"
    "on_analyzeOrientationButton_clicked()\0"
    "on_repairOrientationButton_clicked()\0"
    "on_checkDuplicatedFacesButton_clicked()\0"
    "on_analyzeDuplicatedFacesButton_clicked()\0"
    "on_repairDuplicatedFacesButton_clicked()\0"
    "on_checkDuplicatedPointsButton_clicked()\0"
    "on_analyzeDuplicatedPointsButton_clicked()\0"
    "on_repairDuplicatedPointsButton_clicked()\0"
    "on_checkNonmanifoldsButton_clicked()\0"
    "on_analyzeNonmanifoldsButton_clicked()\0"
    "on_repairNonmanifoldsButton_clicked()\0"
    "on_checkDegenerationButton_clicked()\0"
    "on_analyzeDegeneratedButton_clicked()\0"
    "on_repairDegeneratedButton_clicked()\0"
    "on_checkIndicesButton_clicked()\0"
    "on_analyzeIndicesButton_clicked()\0"
    "on_repairIndicesButton_clicked()\0"
    "on_checkSelfIntersectionButton_clicked()\0"
    "on_analyzeSelfIntersectionButton_clicked()\0"
    "on_repairSelfIntersectionButton_clicked()\0"
    "on_checkFoldsButton_clicked()\0"
    "on_analyzeFoldsButton_clicked()\0"
    "on_repairFoldsButton_clicked()\0"
    "on_analyzeAllTogether_clicked()\0"
    "on_repairAllTogether_clicked()\0"
    "on_refreshButton_clicked()\0"
    "on_meshNameButton_activated(int)\0"
};

void MeshGui::DlgEvaluateMeshImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgEvaluateMeshImp *_t = static_cast<DlgEvaluateMeshImp *>(_o);
        switch (_id) {
        case 0: _t->on_checkOrientationButton_clicked(); break;
        case 1: _t->on_analyzeOrientationButton_clicked(); break;
        case 2: _t->on_repairOrientationButton_clicked(); break;
        case 3: _t->on_checkDuplicatedFacesButton_clicked(); break;
        case 4: _t->on_analyzeDuplicatedFacesButton_clicked(); break;
        case 5: _t->on_repairDuplicatedFacesButton_clicked(); break;
        case 6: _t->on_checkDuplicatedPointsButton_clicked(); break;
        case 7: _t->on_analyzeDuplicatedPointsButton_clicked(); break;
        case 8: _t->on_repairDuplicatedPointsButton_clicked(); break;
        case 9: _t->on_checkNonmanifoldsButton_clicked(); break;
        case 10: _t->on_analyzeNonmanifoldsButton_clicked(); break;
        case 11: _t->on_repairNonmanifoldsButton_clicked(); break;
        case 12: _t->on_checkDegenerationButton_clicked(); break;
        case 13: _t->on_analyzeDegeneratedButton_clicked(); break;
        case 14: _t->on_repairDegeneratedButton_clicked(); break;
        case 15: _t->on_checkIndicesButton_clicked(); break;
        case 16: _t->on_analyzeIndicesButton_clicked(); break;
        case 17: _t->on_repairIndicesButton_clicked(); break;
        case 18: _t->on_checkSelfIntersectionButton_clicked(); break;
        case 19: _t->on_analyzeSelfIntersectionButton_clicked(); break;
        case 20: _t->on_repairSelfIntersectionButton_clicked(); break;
        case 21: _t->on_checkFoldsButton_clicked(); break;
        case 22: _t->on_analyzeFoldsButton_clicked(); break;
        case 23: _t->on_repairFoldsButton_clicked(); break;
        case 24: _t->on_analyzeAllTogether_clicked(); break;
        case 25: _t->on_repairAllTogether_clicked(); break;
        case 26: _t->on_refreshButton_clicked(); break;
        case 27: _t->on_meshNameButton_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MeshGui::DlgEvaluateMeshImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshGui::DlgEvaluateMeshImp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MeshGui__DlgEvaluateMeshImp,
      qt_meta_data_MeshGui__DlgEvaluateMeshImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshGui::DlgEvaluateMeshImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshGui::DlgEvaluateMeshImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshGui::DlgEvaluateMeshImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__DlgEvaluateMeshImp))
        return static_cast<void*>(const_cast< DlgEvaluateMeshImp*>(this));
    if (!strcmp(_clname, "Ui_DlgEvaluateMesh"))
        return static_cast< Ui_DlgEvaluateMesh*>(const_cast< DlgEvaluateMeshImp*>(this));
    if (!strcmp(_clname, "App::DocumentObserver"))
        return static_cast< App::DocumentObserver*>(const_cast< DlgEvaluateMeshImp*>(this));
    return QDialog::qt_metacast(_clname);
}

int MeshGui::DlgEvaluateMeshImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
static const uint qt_meta_data_MeshGui__DockEvaluateMeshImp[] = {

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

static const char qt_meta_stringdata_MeshGui__DockEvaluateMeshImp[] = {
    "MeshGui::DockEvaluateMeshImp\0"
};

void MeshGui::DockEvaluateMeshImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MeshGui::DockEvaluateMeshImp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshGui::DockEvaluateMeshImp::staticMetaObject = {
    { &DlgEvaluateMeshImp::staticMetaObject, qt_meta_stringdata_MeshGui__DockEvaluateMeshImp,
      qt_meta_data_MeshGui__DockEvaluateMeshImp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshGui::DockEvaluateMeshImp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshGui::DockEvaluateMeshImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshGui::DockEvaluateMeshImp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__DockEvaluateMeshImp))
        return static_cast<void*>(const_cast< DockEvaluateMeshImp*>(this));
    return DlgEvaluateMeshImp::qt_metacast(_clname);
}

int MeshGui::DockEvaluateMeshImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DlgEvaluateMeshImp::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
