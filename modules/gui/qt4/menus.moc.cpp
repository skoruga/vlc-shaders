/****************************************************************************
** Meta object code from reading C++ file 'menus.hpp'
**
** Created: Sun Jun 27 17:23:49 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "menus.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menus.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MenuItemData[] = {

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

static const char qt_meta_stringdata_MenuItemData[] = {
    "MenuItemData\0"
};

const QMetaObject MenuItemData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MenuItemData,
      qt_meta_data_MenuItemData, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MenuItemData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MenuItemData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MenuItemData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MenuItemData))
        return static_cast<void*>(const_cast< MenuItemData*>(this));
    return QObject::qt_metacast(_clname);
}

int MenuItemData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QVLCMenu[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QVLCMenu[] = {
    "QVLCMenu\0\0updateRecents(intf_thread_t*)\0"
};

const QMetaObject QVLCMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QVLCMenu,
      qt_meta_data_QVLCMenu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QVLCMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QVLCMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QVLCMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCMenu))
        return static_cast<void*>(const_cast< QVLCMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int QVLCMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateRecents((*reinterpret_cast< intf_thread_t*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_MenuFunc[] = {

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

static const char qt_meta_stringdata_MenuFunc[] = {
    "MenuFunc\0"
};

const QMetaObject MenuFunc::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MenuFunc,
      qt_meta_data_MenuFunc, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MenuFunc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MenuFunc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MenuFunc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MenuFunc))
        return static_cast<void*>(const_cast< MenuFunc*>(this));
    return QObject::qt_metacast(_clname);
}

int MenuFunc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
