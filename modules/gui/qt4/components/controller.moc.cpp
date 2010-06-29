/****************************************************************************
** Meta object code from reading C++ file 'controller.hpp'
**
** Created: Sun Jun 27 17:23:57 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "controller.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AbstractController[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      38,   19,   19,   19, 0x05,
      57,   19,   19,   19, 0x05,
      81,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     108,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AbstractController[] = {
    "AbstractController\0\0inputExists(bool)\0"
    "inputPlaying(bool)\0inputIsRecordable(bool)\0"
    "inputIsTrickPlayable(bool)\0setStatus(int)\0"
};

const QMetaObject AbstractController::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_AbstractController,
      qt_meta_data_AbstractController, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbstractController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbstractController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbstractController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractController))
        return static_cast<void*>(const_cast< AbstractController*>(this));
    return QFrame::qt_metacast(_clname);
}

int AbstractController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: inputExists((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: inputPlaying((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: inputIsRecordable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: inputIsTrickPlayable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: setStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AbstractController::inputExists(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractController::inputPlaying(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AbstractController::inputIsRecordable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AbstractController::inputIsTrickPlayable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_AdvControlsWidget[] = {

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

static const char qt_meta_stringdata_AdvControlsWidget[] = {
    "AdvControlsWidget\0"
};

const QMetaObject AdvControlsWidget::staticMetaObject = {
    { &AbstractController::staticMetaObject, qt_meta_stringdata_AdvControlsWidget,
      qt_meta_data_AdvControlsWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AdvControlsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AdvControlsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AdvControlsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdvControlsWidget))
        return static_cast<void*>(const_cast< AdvControlsWidget*>(this));
    return AbstractController::qt_metacast(_clname);
}

int AdvControlsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_InputControlsWidget[] = {

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

static const char qt_meta_stringdata_InputControlsWidget[] = {
    "InputControlsWidget\0"
};

const QMetaObject InputControlsWidget::staticMetaObject = {
    { &AbstractController::staticMetaObject, qt_meta_stringdata_InputControlsWidget,
      qt_meta_data_InputControlsWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InputControlsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InputControlsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InputControlsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputControlsWidget))
        return static_cast<void*>(const_cast< InputControlsWidget*>(this));
    return AbstractController::qt_metacast(_clname);
}

int InputControlsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ControlsWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ControlsWidget[] = {
    "ControlsWidget\0\0advancedControlsToggled(bool)\0"
    "toggleAdvanced()\0"
};

const QMetaObject ControlsWidget::staticMetaObject = {
    { &AbstractController::staticMetaObject, qt_meta_stringdata_ControlsWidget,
      qt_meta_data_ControlsWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ControlsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ControlsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ControlsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ControlsWidget))
        return static_cast<void*>(const_cast< ControlsWidget*>(this));
    return AbstractController::qt_metacast(_clname);
}

int ControlsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: advancedControlsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: toggleAdvanced(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ControlsWidget::advancedControlsToggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_FullscreenControllerWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   51,   27,   27, 0x0a,
      86,   27,   27,   27, 0x08,
      96,   27,   27,   27, 0x08,
     110,   27,   27,   27, 0x08,
     120,   27,   27,   27, 0x08,
     134,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FullscreenControllerWidget[] = {
    "FullscreenControllerWidget\0\0"
    "keyPressed(QKeyEvent*)\0,\0"
    "setVoutList(vout_thread_t**,int)\0"
    "showFSC()\0planHideFSC()\0hideFSC()\0"
    "slowHideFSC()\0centerFSC(int)\0"
};

const QMetaObject FullscreenControllerWidget::staticMetaObject = {
    { &AbstractController::staticMetaObject, qt_meta_stringdata_FullscreenControllerWidget,
      qt_meta_data_FullscreenControllerWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FullscreenControllerWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FullscreenControllerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FullscreenControllerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FullscreenControllerWidget))
        return static_cast<void*>(const_cast< FullscreenControllerWidget*>(this));
    return AbstractController::qt_metacast(_clname);
}

int FullscreenControllerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: keyPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 1: setVoutList((*reinterpret_cast< vout_thread_t**(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: showFSC(); break;
        case 3: planHideFSC(); break;
        case 4: hideFSC(); break;
        case 5: slowHideFSC(); break;
        case 6: centerFSC((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void FullscreenControllerWidget::keyPressed(QKeyEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
