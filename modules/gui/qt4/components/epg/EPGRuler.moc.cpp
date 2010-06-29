/****************************************************************************
** Meta object code from reading C++ file 'EPGRuler.hpp'
**
** Created: Sun Jun 27 17:23:58 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EPGRuler.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EPGRuler.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EPGRuler[] = {

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
      16,   10,    9,    9, 0x0a,
      43,   33,    9,    9, 0x0a,
      76,   67,    9,    9, 0x0a,
     100,   93,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EPGRuler[] = {
    "EPGRuler\0\0scale\0setScale(double)\0"
    "startTime\0setStartTime(QDateTime)\0"
    "duration\0setDuration(int)\0offset\0"
    "setOffset(int)\0"
};

const QMetaObject EPGRuler::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EPGRuler,
      qt_meta_data_EPGRuler, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EPGRuler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EPGRuler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EPGRuler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EPGRuler))
        return static_cast<void*>(const_cast< EPGRuler*>(this));
    return QWidget::qt_metacast(_clname);
}

int EPGRuler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: setStartTime((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 2: setDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: setOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
