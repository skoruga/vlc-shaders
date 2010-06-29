/****************************************************************************
** Meta object code from reading C++ file 'playlist_model.hpp'
**
** Created: Sun Jun 27 17:23:58 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlist_model.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlist_model.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PLModel[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      37,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   51,    8,    8, 0x0a,
      90,   83,    8,    8, 0x0a,
     121,    8,    8,    8, 0x08,
     133,    8,    8,    8, 0x08,
     144,    8,    8,    8, 0x08,
     156,    8,    8,    8, 0x08,
     170,    8,    8,    8, 0x08,
     182,    8,    8,    8, 0x08,
     197,    8,    8,    8, 0x08,
     219,  212,    8,    8, 0x08,
     234,    8,    8,    8, 0x08,
     280,  272,    8,    8, 0x08,
     325,  320,    8,    8, 0x08,
     361,  349,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PLModel[] = {
    "PLModel\0\0currentChanged(QModelIndex)\0"
    "rootChanged()\0index\0activateItem(QModelIndex)\0"
    "p_item\0activateItem(playlist_item_t*)\0"
    "popupPlay()\0popupDel()\0popupInfo()\0"
    "popupStream()\0popupSave()\0popupExplore()\0"
    "popupAddNode()\0column\0popupSort(int)\0"
    "processInputItemUpdate(input_item_t*)\0"
    "p_input\0processInputItemUpdate(input_thread_t*)\0"
    "i_id\0processItemRemoval(int)\0item,parent\0"
    "processItemAppend(int,int)\0"
};

const QMetaObject PLModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_PLModel,
      qt_meta_data_PLModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PLModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PLModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PLModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PLModel))
        return static_cast<void*>(const_cast< PLModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int PLModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: rootChanged(); break;
        case 2: activateItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: activateItem((*reinterpret_cast< playlist_item_t*(*)>(_a[1]))); break;
        case 4: popupPlay(); break;
        case 5: popupDel(); break;
        case 6: popupInfo(); break;
        case 7: popupStream(); break;
        case 8: popupSave(); break;
        case 9: popupExplore(); break;
        case 10: popupAddNode(); break;
        case 11: popupSort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: processInputItemUpdate((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 13: processInputItemUpdate((*reinterpret_cast< input_thread_t*(*)>(_a[1]))); break;
        case 14: processItemRemoval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: processItemAppend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void PLModel::currentChanged(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PLModel::rootChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_PlMimeData[] = {

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

static const char qt_meta_stringdata_PlMimeData[] = {
    "PlMimeData\0"
};

const QMetaObject PlMimeData::staticMetaObject = {
    { &QMimeData::staticMetaObject, qt_meta_stringdata_PlMimeData,
      qt_meta_data_PlMimeData, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlMimeData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlMimeData))
        return static_cast<void*>(const_cast< PlMimeData*>(this));
    return QMimeData::qt_metacast(_clname);
}

int PlMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
