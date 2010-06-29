/****************************************************************************
** Meta object code from reading C++ file 'interface_widgets.hpp'
**
** Created: Sun Jun 27 17:23:57 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "interface_widgets.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interface_widgets.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VideoWidget[] = {

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
      15,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   13,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_VideoWidget[] = {
    "VideoWidget\0\0,\0sizeChanged(int,int)\0"
    "SetSizing(uint,uint)\0"
};

const QMetaObject VideoWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_VideoWidget,
      qt_meta_data_VideoWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VideoWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VideoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VideoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VideoWidget))
        return static_cast<void*>(const_cast< VideoWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int VideoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sizeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: SetSizing((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void VideoWidget::sizeChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_BackgroundWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      27,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BackgroundWidget[] = {
    "BackgroundWidget\0\0toggle()\0"
    "updateArt(QString)\0"
};

const QMetaObject BackgroundWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BackgroundWidget,
      qt_meta_data_BackgroundWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BackgroundWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BackgroundWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BackgroundWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BackgroundWidget))
        return static_cast<void*>(const_cast< BackgroundWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int BackgroundWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: toggle(); break;
        case 1: updateArt((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_TimeLabel[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   36,   10,   10, 0x08,
      94,   90,   10,   10, 0x08,
     120,   10,   10,   10, 0x08,
     143,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TimeLabel[] = {
    "TimeLabel\0\0timeLabelDoubleClicked()\0"
    "pos,time,length\0setDisplayPosition(float,int64_t,int)\0"
    "pos\0setDisplayPosition(float)\0"
    "updateBuffering(float)\0updateBuffering()\0"
};

const QMetaObject TimeLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_TimeLabel,
      qt_meta_data_TimeLabel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TimeLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TimeLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TimeLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimeLabel))
        return static_cast<void*>(const_cast< TimeLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int TimeLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: timeLabelDoubleClicked(); break;
        case 1: setDisplayPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: setDisplayPosition((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: updateBuffering((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: updateBuffering(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TimeLabel::timeLabelDoubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_SpeedLabel[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      34,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SpeedLabel[] = {
    "SpeedLabel\0\0showSpeedMenu(QPoint)\0"
    "setRate(float)\0"
};

const QMetaObject SpeedLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_SpeedLabel,
      qt_meta_data_SpeedLabel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpeedLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpeedLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpeedLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedLabel))
        return static_cast<void*>(const_cast< SpeedLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int SpeedLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showSpeedMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: setRate((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_SpeedControlWidget[] = {

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
      20,   19,   19,   19, 0x0a,
      38,   19,   19,   19, 0x08,
      54,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SpeedControlWidget[] = {
    "SpeedControlWidget\0\0activateOnState()\0"
    "updateRate(int)\0resetRate()\0"
};

const QMetaObject SpeedControlWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SpeedControlWidget,
      qt_meta_data_SpeedControlWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpeedControlWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpeedControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpeedControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedControlWidget))
        return static_cast<void*>(const_cast< SpeedControlWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int SpeedControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: activateOnState(); break;
        case 1: updateRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: resetRate(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_CoverArtLabel[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   14,   14,   14, 0x0a,
      49,   14,   14,   14, 0x0a,
      58,   14,   14,   14, 0x0a,
      81,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CoverArtLabel[] = {
    "CoverArtLabel\0\0updateRequested()\0"
    "requestUpdate()\0update()\0"
    "showArtUpdate(QString)\0askForUpdate()\0"
};

const QMetaObject CoverArtLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_CoverArtLabel,
      qt_meta_data_CoverArtLabel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CoverArtLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CoverArtLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CoverArtLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CoverArtLabel))
        return static_cast<void*>(const_cast< CoverArtLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int CoverArtLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateRequested(); break;
        case 1: requestUpdate(); break;
        case 2: update(); break;
        case 3: showArtUpdate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: askForUpdate(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CoverArtLabel::updateRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
