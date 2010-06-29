/****************************************************************************
** Meta object code from reading C++ file 'EPGView.hpp'
**
** Created: Sun Jun 27 17:23:58 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EPGView.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EPGView.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EPGView[] = {

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
      19,    9,    8,    8, 0x05,
      55,   47,    8,    8, 0x05,
      76,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     107,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EPGView[] = {
    "EPGView\0\0startTime\0startTimeChanged(QDateTime)\0"
    "seconds\0durationChanged(int)\0"
    "eventFocusedChanged(EPGEvent*)\0"
    "eventFocused(EPGEvent*)\0"
};

const QMetaObject EPGView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_EPGView,
      qt_meta_data_EPGView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EPGView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EPGView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EPGView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EPGView))
        return static_cast<void*>(const_cast< EPGView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int EPGView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 1: durationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: eventFocusedChanged((*reinterpret_cast< EPGEvent*(*)>(_a[1]))); break;
        case 3: eventFocused((*reinterpret_cast< EPGEvent*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void EPGView::startTimeChanged(const QDateTime & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EPGView::durationChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EPGView::eventFocusedChanged(EPGEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
