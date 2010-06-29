/****************************************************************************
** Meta object code from reading C++ file 'help.hpp'
**
** Created: Sun Jun 27 17:23:53 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "help.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'help.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HelpDialog[] = {

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
      12,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HelpDialog[] = {
    "HelpDialog\0\0close()\0"
};

const QMetaObject HelpDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_HelpDialog,
      qt_meta_data_HelpDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HelpDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HelpDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HelpDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HelpDialog))
        return static_cast<void*>(const_cast< HelpDialog*>(this));
    if (!strcmp(_clname, "Singleton<HelpDialog>"))
        return static_cast< Singleton<HelpDialog>*>(const_cast< HelpDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int HelpDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: close(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_AboutDialog[] = {

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
      13,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AboutDialog[] = {
    "AboutDialog\0\0close()\0"
};

const QMetaObject AboutDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_AboutDialog,
      qt_meta_data_AboutDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AboutDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AboutDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AboutDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AboutDialog))
        return static_cast<void*>(const_cast< AboutDialog*>(this));
    if (!strcmp(_clname, "Singleton<AboutDialog>"))
        return static_cast< Singleton<AboutDialog>*>(const_cast< AboutDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int AboutDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: close(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UpdateDialog[] = {

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
      14,   13,   13,   13, 0x08,
      22,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UpdateDialog[] = {
    "UpdateDialog\0\0close()\0UpdateOrDownload()\0"
};

const QMetaObject UpdateDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_UpdateDialog,
      qt_meta_data_UpdateDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UpdateDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UpdateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UpdateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateDialog))
        return static_cast<void*>(const_cast< UpdateDialog*>(this));
    if (!strcmp(_clname, "Singleton<UpdateDialog>"))
        return static_cast< Singleton<UpdateDialog>*>(const_cast< UpdateDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int UpdateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: close(); break;
        case 1: UpdateOrDownload(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
