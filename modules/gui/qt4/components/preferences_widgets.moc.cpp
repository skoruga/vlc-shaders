/****************************************************************************
** Meta object code from reading C++ file 'preferences_widgets.hpp'
**
** Created: Sun Jun 27 17:23:56 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "preferences_widgets.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferences_widgets.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InterfacePreviewWidget[] = {

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
      24,   23,   23,   23, 0x0a,
      57,   47,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_InterfacePreviewWidget[] = {
    "InterfacePreviewWidget\0\0setPreview(enum_style)\0"
    "b_minimal\0setNormalPreview(bool)\0"
};

const QMetaObject InterfacePreviewWidget::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_InterfacePreviewWidget,
      qt_meta_data_InterfacePreviewWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InterfacePreviewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InterfacePreviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InterfacePreviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InterfacePreviewWidget))
        return static_cast<void*>(const_cast< InterfacePreviewWidget*>(this));
    return QLabel::qt_metacast(_clname);
}

int InterfacePreviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setPreview((*reinterpret_cast< enum_style(*)>(_a[1]))); break;
        case 1: setNormalPreview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_ConfigControl[] = {

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

static const char qt_meta_stringdata_ConfigControl[] = {
    "ConfigControl\0"
};

const QMetaObject ConfigControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConfigControl,
      qt_meta_data_ConfigControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigControl))
        return static_cast<void*>(const_cast< ConfigControl*>(this));
    return QObject::qt_metacast(_clname);
}

int ConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_VIntConfigControl[] = {

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

static const char qt_meta_stringdata_VIntConfigControl[] = {
    "VIntConfigControl\0"
};

const QMetaObject VIntConfigControl::staticMetaObject = {
    { &ConfigControl::staticMetaObject, qt_meta_stringdata_VIntConfigControl,
      qt_meta_data_VIntConfigControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VIntConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VIntConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VIntConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VIntConfigControl))
        return static_cast<void*>(const_cast< VIntConfigControl*>(this));
    return ConfigControl::qt_metacast(_clname);
}

int VIntConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_IntegerConfigControl[] = {

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

static const char qt_meta_stringdata_IntegerConfigControl[] = {
    "IntegerConfigControl\0"
};

const QMetaObject IntegerConfigControl::staticMetaObject = {
    { &VIntConfigControl::staticMetaObject, qt_meta_stringdata_IntegerConfigControl,
      qt_meta_data_IntegerConfigControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IntegerConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IntegerConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IntegerConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IntegerConfigControl))
        return static_cast<void*>(const_cast< IntegerConfigControl*>(this));
    return VIntConfigControl::qt_metacast(_clname);
}

int IntegerConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_IntegerListConfigControl[] = {

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
      26,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IntegerListConfigControl[] = {
    "IntegerListConfigControl\0\0"
    "actionRequested(int)\0"
};

const QMetaObject IntegerListConfigControl::staticMetaObject = {
    { &VIntConfigControl::staticMetaObject, qt_meta_stringdata_IntegerListConfigControl,
      qt_meta_data_IntegerListConfigControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IntegerListConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IntegerListConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IntegerListConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IntegerListConfigControl))
        return static_cast<void*>(const_cast< IntegerListConfigControl*>(this));
    return VIntConfigControl::qt_metacast(_clname);
}

int IntegerListConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: actionRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_VFloatConfigControl[] = {

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

static const char qt_meta_stringdata_VFloatConfigControl[] = {
    "VFloatConfigControl\0"
};

const QMetaObject VFloatConfigControl::staticMetaObject = {
    { &ConfigControl::staticMetaObject, qt_meta_stringdata_VFloatConfigControl,
      qt_meta_data_VFloatConfigControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VFloatConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VFloatConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VFloatConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VFloatConfigControl))
        return static_cast<void*>(const_cast< VFloatConfigControl*>(this));
    return ConfigControl::qt_metacast(_clname);
}

int VFloatConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_FloatConfigControl[] = {

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

static const char qt_meta_stringdata_FloatConfigControl[] = {
    "FloatConfigControl\0"
};

const QMetaObject FloatConfigControl::staticMetaObject = {
    { &VFloatConfigControl::staticMetaObject, qt_meta_stringdata_FloatConfigControl,
      qt_meta_data_FloatConfigControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FloatConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FloatConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FloatConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FloatConfigControl))
        return static_cast<void*>(const_cast< FloatConfigControl*>(this));
    return VFloatConfigControl::qt_metacast(_clname);
}

int FloatConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VFloatConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_FloatRangeConfigControl[] = {

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

static const char qt_meta_stringdata_FloatRangeConfigControl[] = {
    "FloatRangeConfigControl\0"
};

const QMetaObject FloatRangeConfigControl::staticMetaObject = {
    { &FloatConfigControl::staticMetaObject, qt_meta_stringdata_FloatRangeConfigControl,
      qt_meta_data_FloatRangeConfigControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FloatRangeConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FloatRangeConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FloatRangeConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FloatRangeConfigControl))
        return static_cast<void*>(const_cast< FloatRangeConfigControl*>(this));
    return FloatConfigControl::qt_metacast(_clname);
}

int FloatRangeConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FloatConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_VStringConfigControl[] = {

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

static const char qt_meta_stringdata_VStringConfigControl[] = {
    "VStringConfigControl\0"
};

const QMetaObject VStringConfigControl::staticMetaObject = {
    { &ConfigControl::staticMetaObject, qt_meta_stringdata_VStringConfigControl,
      qt_meta_data_VStringConfigControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VStringConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VStringConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VStringConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VStringConfigControl))
        return static_cast<void*>(const_cast< VStringConfigControl*>(this));
    return ConfigControl::qt_metacast(_clname);
}

int VStringConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_StringConfigControl[] = {

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

static const char qt_meta_stringdata_StringConfigControl[] = {
    "StringConfigControl\0"
};

const QMetaObject StringConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_StringConfigControl,
      qt_meta_data_StringConfigControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StringConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StringConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StringConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StringConfigControl))
        return static_cast<void*>(const_cast< StringConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int StringConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_FileConfigControl[] = {

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
      19,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FileConfigControl[] = {
    "FileConfigControl\0\0updateField()\0"
};

const QMetaObject FileConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_FileConfigControl,
      qt_meta_data_FileConfigControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileConfigControl))
        return static_cast<void*>(const_cast< FileConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int FileConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateField(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_DirectoryConfigControl[] = {

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
      24,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DirectoryConfigControl[] = {
    "DirectoryConfigControl\0\0updateField()\0"
};

const QMetaObject DirectoryConfigControl::staticMetaObject = {
    { &FileConfigControl::staticMetaObject, qt_meta_stringdata_DirectoryConfigControl,
      qt_meta_data_DirectoryConfigControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DirectoryConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DirectoryConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DirectoryConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DirectoryConfigControl))
        return static_cast<void*>(const_cast< DirectoryConfigControl*>(this));
    return FileConfigControl::qt_metacast(_clname);
}

int DirectoryConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateField(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_FontConfigControl[] = {

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

static const char qt_meta_stringdata_FontConfigControl[] = {
    "FontConfigControl\0"
};

const QMetaObject FontConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_FontConfigControl,
      qt_meta_data_FontConfigControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FontConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FontConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FontConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FontConfigControl))
        return static_cast<void*>(const_cast< FontConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int FontConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ModuleListConfigControl[] = {

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
      25,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ModuleListConfigControl[] = {
    "ModuleListConfigControl\0\0onUpdate()\0"
};

const QMetaObject ModuleListConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_ModuleListConfigControl,
      qt_meta_data_ModuleListConfigControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModuleListConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModuleListConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModuleListConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModuleListConfigControl))
        return static_cast<void*>(const_cast< ModuleListConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int ModuleListConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onUpdate(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_StringListConfigControl[] = {

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
      25,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StringListConfigControl[] = {
    "StringListConfigControl\0\0actionRequested(int)\0"
};

const QMetaObject StringListConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_StringListConfigControl,
      qt_meta_data_StringListConfigControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StringListConfigControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StringListConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StringListConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StringListConfigControl))
        return static_cast<void*>(const_cast< StringListConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int StringListConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: actionRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_KeyShortcutEdit[] = {

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
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_KeyShortcutEdit[] = {
    "KeyShortcutEdit\0\0pressed()\0clear()\0"
};

const QMetaObject KeyShortcutEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_KeyShortcutEdit,
      qt_meta_data_KeyShortcutEdit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KeyShortcutEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KeyShortcutEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KeyShortcutEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KeyShortcutEdit))
        return static_cast<void*>(const_cast< KeyShortcutEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int KeyShortcutEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: pressed(); break;
        case 1: clear(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void KeyShortcutEdit::pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_KeySelectorControl[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      40,   32,   19,   19, 0x08,
      72,   19,   19,   19, 0x28,
     100,   19,   19,   19, 0x28,
     112,   32,   19,   19, 0x08,
     141,   19,   19,   19, 0x28,
     166,   19,   19,   19, 0x28,
     175,   19,   19,   19, 0x08,
     188,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_KeySelectorControl[] = {
    "KeySelectorControl\0\0setTheKey()\0,column\0"
    "selectKey(QTreeWidgetItem*,int)\0"
    "selectKey(QTreeWidgetItem*)\0selectKey()\0"
    "select(QTreeWidgetItem*,int)\0"
    "select(QTreeWidgetItem*)\0select()\0"
    "select1Key()\0filter(QString)\0"
};

const QMetaObject KeySelectorControl::staticMetaObject = {
    { &ConfigControl::staticMetaObject, qt_meta_stringdata_KeySelectorControl,
      qt_meta_data_KeySelectorControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KeySelectorControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KeySelectorControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KeySelectorControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KeySelectorControl))
        return static_cast<void*>(const_cast< KeySelectorControl*>(this));
    return ConfigControl::qt_metacast(_clname);
}

int KeySelectorControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setTheKey(); break;
        case 1: selectKey((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: selectKey((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: selectKey(); break;
        case 4: select((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: select((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 6: select(); break;
        case 7: select1Key(); break;
        case 8: filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
