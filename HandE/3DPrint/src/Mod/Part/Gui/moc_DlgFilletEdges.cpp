/****************************************************************************
** Meta object code from reading C++ file 'DlgFilletEdges.h'
**
** Created: Thu Apr 18 22:32:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../free-cad/src/Mod/Part/Gui/DlgFilletEdges.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgFilletEdges.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartGui__FilletRadiusDelegate[] = {

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

static const char qt_meta_stringdata_PartGui__FilletRadiusDelegate[] = {
    "PartGui::FilletRadiusDelegate\0"
};

void PartGui::FilletRadiusDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartGui::FilletRadiusDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::FilletRadiusDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_PartGui__FilletRadiusDelegate,
      qt_meta_data_PartGui__FilletRadiusDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::FilletRadiusDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::FilletRadiusDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::FilletRadiusDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__FilletRadiusDelegate))
        return static_cast<void*>(const_cast< FilletRadiusDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int PartGui::FilletRadiusDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PartGui__FilletRadiusModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_PartGui__FilletRadiusModel[] = {
    "PartGui::FilletRadiusModel\0\0"
    "toggleCheckState(QModelIndex)\0"
};

void PartGui::FilletRadiusModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FilletRadiusModel *_t = static_cast<FilletRadiusModel *>(_o);
        switch (_id) {
        case 0: _t->toggleCheckState((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartGui::FilletRadiusModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::FilletRadiusModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_PartGui__FilletRadiusModel,
      qt_meta_data_PartGui__FilletRadiusModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::FilletRadiusModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::FilletRadiusModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::FilletRadiusModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__FilletRadiusModel))
        return static_cast<void*>(const_cast< FilletRadiusModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int PartGui::FilletRadiusModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PartGui::FilletRadiusModel::toggleCheckState(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_PartGui__DlgFilletEdges[] = {

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
      25,   24,   24,   24, 0x08,
      55,   24,   24,   24, 0x08,
      84,   24,   24,   24, 0x08,
     114,   24,   24,   24, 0x08,
     143,   24,   24,   24, 0x08,
     185,   24,   24,   24, 0x08,
     225,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PartGui__DlgFilletEdges[] = {
    "PartGui::DlgFilletEdges\0\0"
    "on_shapeObject_activated(int)\0"
    "on_selectAllButton_clicked()\0"
    "on_selectNoneButton_clicked()\0"
    "on_filletType_activated(int)\0"
    "on_filletStartRadius_valueChanged(double)\0"
    "on_filletEndRadius_valueChanged(double)\0"
    "toggleCheckState(QModelIndex)\0"
};

void PartGui::DlgFilletEdges::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgFilletEdges *_t = static_cast<DlgFilletEdges *>(_o);
        switch (_id) {
        case 0: _t->on_shapeObject_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_selectAllButton_clicked(); break;
        case 2: _t->on_selectNoneButton_clicked(); break;
        case 3: _t->on_filletType_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_filletStartRadius_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_filletEndRadius_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->toggleCheckState((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartGui::DlgFilletEdges::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::DlgFilletEdges::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PartGui__DlgFilletEdges,
      qt_meta_data_PartGui__DlgFilletEdges, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::DlgFilletEdges::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::DlgFilletEdges::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::DlgFilletEdges::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__DlgFilletEdges))
        return static_cast<void*>(const_cast< DlgFilletEdges*>(this));
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(const_cast< DlgFilletEdges*>(this));
    return QWidget::qt_metacast(_clname);
}

int PartGui::DlgFilletEdges::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_PartGui__FilletEdgesDialog[] = {

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

static const char qt_meta_stringdata_PartGui__FilletEdgesDialog[] = {
    "PartGui::FilletEdgesDialog\0"
};

void PartGui::FilletEdgesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartGui::FilletEdgesDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::FilletEdgesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PartGui__FilletEdgesDialog,
      qt_meta_data_PartGui__FilletEdgesDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::FilletEdgesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::FilletEdgesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::FilletEdgesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__FilletEdgesDialog))
        return static_cast<void*>(const_cast< FilletEdgesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PartGui::FilletEdgesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PartGui__DlgChamferEdges[] = {

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

static const char qt_meta_stringdata_PartGui__DlgChamferEdges[] = {
    "PartGui::DlgChamferEdges\0"
};

void PartGui::DlgChamferEdges::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartGui::DlgChamferEdges::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::DlgChamferEdges::staticMetaObject = {
    { &DlgFilletEdges::staticMetaObject, qt_meta_stringdata_PartGui__DlgChamferEdges,
      qt_meta_data_PartGui__DlgChamferEdges, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::DlgChamferEdges::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::DlgChamferEdges::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::DlgChamferEdges::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__DlgChamferEdges))
        return static_cast<void*>(const_cast< DlgChamferEdges*>(this));
    return DlgFilletEdges::qt_metacast(_clname);
}

int PartGui::DlgChamferEdges::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DlgFilletEdges::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PartGui__TaskFilletEdges[] = {

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

static const char qt_meta_stringdata_PartGui__TaskFilletEdges[] = {
    "PartGui::TaskFilletEdges\0"
};

void PartGui::TaskFilletEdges::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartGui::TaskFilletEdges::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::TaskFilletEdges::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_PartGui__TaskFilletEdges,
      qt_meta_data_PartGui__TaskFilletEdges, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::TaskFilletEdges::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::TaskFilletEdges::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::TaskFilletEdges::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__TaskFilletEdges))
        return static_cast<void*>(const_cast< TaskFilletEdges*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartGui::TaskFilletEdges::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PartGui__TaskChamferEdges[] = {

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

static const char qt_meta_stringdata_PartGui__TaskChamferEdges[] = {
    "PartGui::TaskChamferEdges\0"
};

void PartGui::TaskChamferEdges::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartGui::TaskChamferEdges::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartGui::TaskChamferEdges::staticMetaObject = {
    { &Gui::TaskView::TaskDialog::staticMetaObject, qt_meta_stringdata_PartGui__TaskChamferEdges,
      qt_meta_data_PartGui__TaskChamferEdges, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartGui::TaskChamferEdges::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartGui::TaskChamferEdges::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartGui::TaskChamferEdges::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__TaskChamferEdges))
        return static_cast<void*>(const_cast< TaskChamferEdges*>(this));
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PartGui::TaskChamferEdges::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Gui::TaskView::TaskDialog QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
