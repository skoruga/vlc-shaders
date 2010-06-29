/****************************************************************************
** Meta object code from reading C++ file 'external.hpp'
**
** Created: Sun Jun 27 17:23:52 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "external.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'external.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogHandler[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      48,   46,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,   46,   14,   14, 0x08,
     101,   46,   14,   14, 0x08,
     138,   46,   14,   14, 0x08,
     172,   46,   14,   14, 0x08,
     207,   46,   14,   14, 0x08,
     245,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogHandler[] = {
    "DialogHandler\0\0progressBarDestroyed(QWidget*)\0"
    ",\0error(QString,QString)\0"
    "displayError(QString,QString)\0"
    "displayCritical(vlc_object_t*,void*)\0"
    "requestLogin(vlc_object_t*,void*)\0"
    "requestAnswer(vlc_object_t*,void*)\0"
    "startProgressBar(vlc_object_t*,void*)\0"
    "stopProgressBar(QWidget*)\0"
};

const QMetaObject DialogHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DialogHandler,
      qt_meta_data_DialogHandler, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogHandler))
        return static_cast<void*>(const_cast< DialogHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int DialogHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: progressBarDestroyed((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: displayError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: displayCritical((*reinterpret_cast< vlc_object_t*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 4: requestLogin((*reinterpret_cast< vlc_object_t*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 5: requestAnswer((*reinterpret_cast< vlc_object_t*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 6: startProgressBar((*reinterpret_cast< vlc_object_t*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 7: stopProgressBar((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DialogHandler::progressBarDestroyed(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DialogHandler::error(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_QVLCProgressDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      36,   19,   19,   19, 0x05,
      55,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QVLCProgressDialog[] = {
    "QVLCProgressDialog\0\0progressed(int)\0"
    "described(QString)\0destroyed()\0"
    "saveCancel()\0"
};

const QMetaObject QVLCProgressDialog::staticMetaObject = {
    { &QProgressDialog::staticMetaObject, qt_meta_stringdata_QVLCProgressDialog,
      qt_meta_data_QVLCProgressDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QVLCProgressDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QVLCProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QVLCProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCProgressDialog))
        return static_cast<void*>(const_cast< QVLCProgressDialog*>(this));
    return QProgressDialog::qt_metacast(_clname);
}

int QVLCProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: progressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: described((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: destroyed(); break;
        case 3: saveCancel(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QVLCProgressDialog::progressed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QVLCProgressDialog::described(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QVLCProgressDialog::destroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
