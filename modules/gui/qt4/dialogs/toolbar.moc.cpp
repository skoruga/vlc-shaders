/****************************************************************************
** Meta object code from reading C++ file 'toolbar.hpp'
**
** Created: Sun Jun 27 17:23:54 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toolbar.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolbar.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WidgetListing[] = {

 // content:
       4,       // revision
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

static const char qt_meta_stringdata_WidgetListing[] = {
    "WidgetListing\0"
};

const QMetaObject WidgetListing::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_WidgetListing,
      qt_meta_data_WidgetListing, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WidgetListing::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WidgetListing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WidgetListing::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetListing))
        return static_cast<void*>(const_cast< WidgetListing*>(this));
    return QListWidget::qt_metacast(_clname);
}

int WidgetListing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ToolbarEditDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      32,   18,   18,   18, 0x08,
      48,   18,   18,   18, 0x08,
      67,   18,   18,   18, 0x08,
      76,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToolbarEditDialog[] = {
    "ToolbarEditDialog\0\0newProfile()\0"
    "deleteProfile()\0changeProfile(int)\0"
    "cancel()\0close()\0"
};

const QMetaObject ToolbarEditDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_ToolbarEditDialog,
      qt_meta_data_ToolbarEditDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToolbarEditDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToolbarEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToolbarEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToolbarEditDialog))
        return static_cast<void*>(const_cast< ToolbarEditDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int ToolbarEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newProfile(); break;
        case 1: deleteProfile(); break;
        case 2: changeProfile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: cancel(); break;
        case 4: close(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_DroppingController[] = {

 // content:
       4,       // revision
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

static const char qt_meta_stringdata_DroppingController[] = {
    "DroppingController\0"
};

const QMetaObject DroppingController::staticMetaObject = {
    { &AbstractController::staticMetaObject, qt_meta_stringdata_DroppingController,
      qt_meta_data_DroppingController, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DroppingController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DroppingController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DroppingController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DroppingController))
        return static_cast<void*>(const_cast< DroppingController*>(this));
    return AbstractController::qt_metacast(_clname);
}

int DroppingController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
