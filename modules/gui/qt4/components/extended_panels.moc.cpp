/****************************************************************************
** Meta object code from reading C++ file 'extended_panels.hpp'
**
** Created: Sun Jun 27 17:23:56 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "extended_panels.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extended_panels.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExtVideo[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      26,    9,    9,    9, 0x08,
      48,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExtVideo[] = {
    "ExtVideo\0\0updateFilters()\0"
    "updateFilterOptions()\0cropChange()\0"
};

const QMetaObject ExtVideo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ExtVideo,
      qt_meta_data_ExtVideo, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtVideo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtVideo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtVideo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtVideo))
        return static_cast<void*>(const_cast< ExtVideo*>(this));
    return QObject::qt_metacast(_clname);
}

int ExtVideo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateFilters(); break;
        case 1: updateFilterOptions(); break;
        case 2: cropChange(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_ExtV4l2[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      25,   19,    8,    8, 0x08,
      42,   19,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExtV4l2[] = {
    "ExtV4l2\0\0Refresh()\0value\0ValueChange(int)\0"
    "ValueChange(bool)\0"
};

const QMetaObject ExtV4l2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ExtV4l2,
      qt_meta_data_ExtV4l2, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtV4l2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtV4l2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtV4l2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtV4l2))
        return static_cast<void*>(const_cast< ExtV4l2*>(this));
    return QWidget::qt_metacast(_clname);
}

int ExtV4l2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Refresh(); break;
        case 1: ValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: ValueChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_Equalizer[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      24,   10,   10,   10, 0x08,
      33,   10,   10,   10, 0x08,
      44,   10,   10,   10, 0x08,
      56,   10,   10,   10, 0x08,
      71,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Equalizer[] = {
    "Equalizer\0\0enable(bool)\0enable()\0"
    "set2Pass()\0setPreamp()\0setCoreBands()\0"
    "setCorePreset(int)\0"
};

const QMetaObject Equalizer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Equalizer,
      qt_meta_data_Equalizer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Equalizer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Equalizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Equalizer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Equalizer))
        return static_cast<void*>(const_cast< Equalizer*>(this));
    return QWidget::qt_metacast(_clname);
}

int Equalizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: enable(); break;
        case 2: set2Pass(); break;
        case 3: setPreamp(); break;
        case 4: setCoreBands(); break;
        case 5: setCorePreset((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_Spatializer[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      26,   12,   12,   12, 0x08,
      35,   12,   12,   12, 0x08,
      53,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Spatializer[] = {
    "Spatializer\0\0enable(bool)\0enable()\0"
    "setValues(float*)\0setInitValues()\0"
};

const QMetaObject Spatializer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Spatializer,
      qt_meta_data_Spatializer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Spatializer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Spatializer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Spatializer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Spatializer))
        return static_cast<void*>(const_cast< Spatializer*>(this));
    return QWidget::qt_metacast(_clname);
}

int Spatializer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: enable(); break;
        case 2: setValues((*reinterpret_cast< float*(*)>(_a[1]))); break;
        case 3: setInitValues(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_SyncControls[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      23,   13,   13,   13, 0x08,
      44,   13,   13,   13, 0x08,
      64,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SyncControls[] = {
    "SyncControls\0\0update()\0advanceAudio(double)\0"
    "advanceSubs(double)\0adjustSubsSpeed(double)\0"
};

const QMetaObject SyncControls::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SyncControls,
      qt_meta_data_SyncControls, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SyncControls::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SyncControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SyncControls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SyncControls))
        return static_cast<void*>(const_cast< SyncControls*>(this));
    return QWidget::qt_metacast(_clname);
}

int SyncControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update(); break;
        case 1: advanceAudio((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: advanceSubs((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: adjustSubsSpeed((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
