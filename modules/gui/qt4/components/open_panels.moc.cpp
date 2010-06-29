/****************************************************************************
** Meta object code from reading C++ file 'open_panels.hpp'
**
** Created: Sun Jun 27 17:23:57 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "open_panels.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'open_panels.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OpenPanel[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   11,   10,   10, 0x05,
      52,   45,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OpenPanel[] = {
    "OpenPanel\0\0,\0mrlUpdated(QStringList,QString)\0"
    "method\0methodChanged(QString)\0updateMRL()\0"
};

const QMetaObject OpenPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OpenPanel,
      qt_meta_data_OpenPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenPanel))
        return static_cast<void*>(const_cast< OpenPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int OpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mrlUpdated((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: methodChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: updateMRL(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OpenPanel::mrlUpdated(const QStringList & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenPanel::methodChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_FileOpenBox[] = {

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
      13,   12,   12,   12, 0x0a,
      22,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FileOpenBox[] = {
    "FileOpenBox\0\0accept()\0reject()\0"
};

const QMetaObject FileOpenBox::staticMetaObject = {
    { &QFileDialog::staticMetaObject, qt_meta_stringdata_FileOpenBox,
      qt_meta_data_FileOpenBox, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileOpenBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileOpenBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileOpenBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileOpenBox))
        return static_cast<void*>(const_cast< FileOpenBox*>(this));
    return QFileDialog::qt_metacast(_clname);
}

int FileOpenBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        case 1: reject(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_FileOpenPanel[] = {

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
      15,   14,   14,   14, 0x0a,
      27,   14,   14,   14, 0x08,
      43,   14,   14,   14, 0x08,
      56,   14,   14,   14, 0x08,
      69,   14,   14,   14, 0x08,
      85,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FileOpenPanel[] = {
    "FileOpenPanel\0\0updateMRL()\0browseFileSub()\0"
    "browseFile()\0removeFile()\0updateButtons()\0"
    "toggleSubtitleFrame(bool)\0"
};

const QMetaObject FileOpenPanel::staticMetaObject = {
    { &OpenPanel::staticMetaObject, qt_meta_stringdata_FileOpenPanel,
      qt_meta_data_FileOpenPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileOpenPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileOpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileOpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileOpenPanel))
        return static_cast<void*>(const_cast< FileOpenPanel*>(this));
    return OpenPanel::qt_metacast(_clname);
}

int FileOpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OpenPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateMRL(); break;
        case 1: browseFileSub(); break;
        case 2: browseFile(); break;
        case 3: removeFile(); break;
        case 4: updateButtons(); break;
        case 5: toggleSubtitleFrame((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_NetOpenPanel[] = {

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
      14,   13,   13,   13, 0x0a,
      26,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NetOpenPanel[] = {
    "NetOpenPanel\0\0updateMRL()\0updateCompleter()\0"
};

const QMetaObject NetOpenPanel::staticMetaObject = {
    { &OpenPanel::staticMetaObject, qt_meta_stringdata_NetOpenPanel,
      qt_meta_data_NetOpenPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetOpenPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetOpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetOpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetOpenPanel))
        return static_cast<void*>(const_cast< NetOpenPanel*>(this));
    return OpenPanel::qt_metacast(_clname);
}

int NetOpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OpenPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateMRL(); break;
        case 1: updateCompleter(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_DiscOpenPanel[] = {

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
      15,   14,   14,   14, 0x0a,
      27,   14,   14,   14, 0x08,
      42,   14,   14,   14, 0x08,
      58,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DiscOpenPanel[] = {
    "DiscOpenPanel\0\0updateMRL()\0browseDevice()\0"
    "updateButtons()\0eject()\0"
};

const QMetaObject DiscOpenPanel::staticMetaObject = {
    { &OpenPanel::staticMetaObject, qt_meta_stringdata_DiscOpenPanel,
      qt_meta_data_DiscOpenPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DiscOpenPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DiscOpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DiscOpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DiscOpenPanel))
        return static_cast<void*>(const_cast< DiscOpenPanel*>(this));
    return OpenPanel::qt_metacast(_clname);
}

int DiscOpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OpenPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateMRL(); break;
        case 1: browseDevice(); break;
        case 2: updateButtons(); break;
        case 3: eject(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_CaptureOpenPanel[] = {

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
      18,   17,   17,   17, 0x0a,
      30,   17,   17,   17, 0x0a,
      43,   17,   17,   17, 0x08,
      59,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CaptureOpenPanel[] = {
    "CaptureOpenPanel\0\0updateMRL()\0"
    "initialize()\0updateButtons()\0"
    "advancedDialog()\0"
};

const QMetaObject CaptureOpenPanel::staticMetaObject = {
    { &OpenPanel::staticMetaObject, qt_meta_stringdata_CaptureOpenPanel,
      qt_meta_data_CaptureOpenPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CaptureOpenPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CaptureOpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CaptureOpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureOpenPanel))
        return static_cast<void*>(const_cast< CaptureOpenPanel*>(this));
    return OpenPanel::qt_metacast(_clname);
}

int CaptureOpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OpenPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateMRL(); break;
        case 1: initialize(); break;
        case 2: updateButtons(); break;
        case 3: advancedDialog(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
