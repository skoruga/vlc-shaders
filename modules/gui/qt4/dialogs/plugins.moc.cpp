/****************************************************************************
** Meta object code from reading C++ file 'plugins.hpp'
**
** Created: Sun Jun 27 17:23:53 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "plugins.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugins.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PluginDialog[] = {

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

static const char qt_meta_stringdata_PluginDialog[] = {
    "PluginDialog\0"
};

const QMetaObject PluginDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_PluginDialog,
      qt_meta_data_PluginDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PluginDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PluginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PluginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginDialog))
        return static_cast<void*>(const_cast< PluginDialog*>(this));
    if (!strcmp(_clname, "Singleton<PluginDialog>"))
        return static_cast< Singleton<PluginDialog>*>(const_cast< PluginDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int PluginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PluginTab[] = {

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
      11,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PluginTab[] = {
    "PluginTab\0\0search(QString)\0"
};

const QMetaObject PluginTab::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_PluginTab,
      qt_meta_data_PluginTab, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PluginTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PluginTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PluginTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginTab))
        return static_cast<void*>(const_cast< PluginTab*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int PluginTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ExtensionTab[] = {

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
      14,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExtensionTab[] = {
    "ExtensionTab\0\0moreInformation()\0"
};

const QMetaObject ExtensionTab::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_ExtensionTab,
      qt_meta_data_ExtensionTab, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtensionTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtensionTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtensionTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionTab))
        return static_cast<void*>(const_cast< ExtensionTab*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int ExtensionTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: moreInformation(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ExtensionListModel[] = {

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
      20,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExtensionListModel[] = {
    "ExtensionListModel\0\0updateList()\0"
};

const QMetaObject ExtensionListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_ExtensionListModel,
      qt_meta_data_ExtensionListModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtensionListModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtensionListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtensionListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionListModel))
        return static_cast<void*>(const_cast< ExtensionListModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int ExtensionListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateList(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
