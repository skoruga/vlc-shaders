/****************************************************************************
** Meta object code from reading C++ file 'extensions.hpp'
**
** Created: Sun Jun 27 17:23:55 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "extensions.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extensions.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExtensionsDialogProvider[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   26,   69,   25, 0x08,
     127,   26,  123,   25, 0x08,
     165,   26,   69,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExtensionsDialogProvider[] = {
    "ExtensionsDialogProvider\0\0p_dialog\0"
    "SignalDialog(extension_dialog_t*)\0"
    "ExtensionDialog*\0CreateExtDialog(extension_dialog_t*)\0"
    "int\0DestroyExtDialog(extension_dialog_t*)\0"
    "UpdateExtDialog(extension_dialog_t*)\0"
};

const QMetaObject ExtensionsDialogProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ExtensionsDialogProvider,
      qt_meta_data_ExtensionsDialogProvider, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtensionsDialogProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtensionsDialogProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtensionsDialogProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionsDialogProvider))
        return static_cast<void*>(const_cast< ExtensionsDialogProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int ExtensionsDialogProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SignalDialog((*reinterpret_cast< extension_dialog_t*(*)>(_a[1]))); break;
        case 1: { ExtensionDialog* _r = CreateExtDialog((*reinterpret_cast< extension_dialog_t*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ExtensionDialog**>(_a[0]) = _r; }  break;
        case 2: { int _r = DestroyExtDialog((*reinterpret_cast< extension_dialog_t*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { ExtensionDialog* _r = UpdateExtDialog((*reinterpret_cast< extension_dialog_t*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ExtensionDialog**>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ExtensionsDialogProvider::SignalDialog(extension_dialog_t * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ExtensionDialog[] = {

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
      26,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      72,   65,   61,   16, 0x08,
      95,   65,   16,   16, 0x08,
     115,   65,   16,   16, 0x08,
     139,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExtensionDialog[] = {
    "ExtensionDialog\0\0p_dialog\0"
    "destroyDialog(extension_dialog_t*)\0"
    "int\0object\0TriggerClick(QObject*)\0"
    "SyncInput(QObject*)\0SyncSelection(QObject*)\0"
    "parentDestroyed()\0"
};

const QMetaObject ExtensionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExtensionDialog,
      qt_meta_data_ExtensionDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtensionDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtensionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtensionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionDialog))
        return static_cast<void*>(const_cast< ExtensionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ExtensionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: destroyDialog((*reinterpret_cast< extension_dialog_t*(*)>(_a[1]))); break;
        case 1: { int _r = TriggerClick((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: SyncInput((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: SyncSelection((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: parentDestroyed(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ExtensionDialog::destroyDialog(extension_dialog_t * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_WidgetMapper[] = {

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

static const char qt_meta_stringdata_WidgetMapper[] = {
    "WidgetMapper\0"
};

const QMetaObject WidgetMapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WidgetMapper,
      qt_meta_data_WidgetMapper, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WidgetMapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WidgetMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WidgetMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetMapper))
        return static_cast<void*>(const_cast< WidgetMapper*>(this));
    return QObject::qt_metacast(_clname);
}

int WidgetMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
