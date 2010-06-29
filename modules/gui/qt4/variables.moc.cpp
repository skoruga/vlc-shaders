/****************************************************************************
** Meta object code from reading C++ file 'variables.hpp'
**
** Created: Sun Jun 27 17:23:51 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "variables.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'variables.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QVLCVariable[] = {

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

static const char qt_meta_stringdata_QVLCVariable[] = {
    "QVLCVariable\0"
};

const QMetaObject QVLCVariable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QVLCVariable,
      qt_meta_data_QVLCVariable, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QVLCVariable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QVLCVariable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QVLCVariable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCVariable))
        return static_cast<void*>(const_cast< QVLCVariable*>(this));
    return QObject::qt_metacast(_clname);
}

int QVLCVariable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QVLCPointer[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   13,   12,   12, 0x05,
      60,   58,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QVLCPointer[] = {
    "QVLCPointer\0\0,,\0"
    "pointerChanged(vlc_object_t*,void*,void*)\0"
    ",\0pointerChanged(vlc_object_t*,void*)\0"
};

const QMetaObject QVLCPointer::staticMetaObject = {
    { &QVLCVariable::staticMetaObject, qt_meta_stringdata_QVLCPointer,
      qt_meta_data_QVLCPointer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QVLCPointer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QVLCPointer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QVLCPointer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCPointer))
        return static_cast<void*>(const_cast< QVLCPointer*>(this));
    return QVLCVariable::qt_metacast(_clname);
}

int QVLCPointer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCVariable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: pointerChanged((*reinterpret_cast< vlc_object_t*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3]))); break;
        case 1: pointerChanged((*reinterpret_cast< vlc_object_t*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QVLCPointer::pointerChanged(vlc_object_t * _t1, void * _t2, void * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QVLCPointer::pointerChanged(vlc_object_t * _t1, void * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_QVLCInteger[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   13,   12,   12, 0x05,
      56,   54,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QVLCInteger[] = {
    "QVLCInteger\0\0,,\0integerChanged(vlc_object_t*,int,int)\0"
    ",\0integerChanged(vlc_object_t*,int)\0"
};

const QMetaObject QVLCInteger::staticMetaObject = {
    { &QVLCVariable::staticMetaObject, qt_meta_stringdata_QVLCInteger,
      qt_meta_data_QVLCInteger, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QVLCInteger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QVLCInteger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QVLCInteger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCInteger))
        return static_cast<void*>(const_cast< QVLCInteger*>(this));
    return QVLCVariable::qt_metacast(_clname);
}

int QVLCInteger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCVariable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: integerChanged((*reinterpret_cast< vlc_object_t*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: integerChanged((*reinterpret_cast< vlc_object_t*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QVLCInteger::integerChanged(vlc_object_t * _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QVLCInteger::integerChanged(vlc_object_t * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
