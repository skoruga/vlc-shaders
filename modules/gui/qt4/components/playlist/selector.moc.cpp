/****************************************************************************
** Meta object code from reading C++ file 'selector.hpp'
**
** Created: Sun Jun 27 17:23:59 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "selector.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selector.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PLSelItem[] = {

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
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   10,   10,   10, 0x0a,
      43,   10,   10,   10, 0x0a,
      56,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PLSelItem[] = {
    "PLSelItem\0\0action(PLSelItem*)\0"
    "showAction()\0hideAction()\0triggerAction()\0"
};

const QMetaObject PLSelItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PLSelItem,
      qt_meta_data_PLSelItem, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PLSelItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PLSelItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PLSelItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PLSelItem))
        return static_cast<void*>(const_cast< PLSelItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int PLSelItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: action((*reinterpret_cast< PLSelItem*(*)>(_a[1]))); break;
        case 1: showAction(); break;
        case 2: hideAction(); break;
        case 3: triggerAction(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PLSelItem::action(PLSelItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_PLSelector[] = {

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
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   40,   11,   11, 0x08,
      75,   73,   11,   11, 0x08,
      96,   11,   11,   11, 0x08,
     115,   11,   11,   11, 0x08,
     146,   11,   11,   11, 0x08,
     169,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PLSelector[] = {
    "PLSelector\0\0activated(playlist_item_t*)\0"
    "item\0setSource(QTreeWidgetItem*)\0,\0"
    "plItemAdded(int,int)\0plItemRemoved(int)\0"
    "inputItemUpdate(input_item_t*)\0"
    "podcastAdd(PLSelItem*)\0podcastRemove(PLSelItem*)\0"
};

const QMetaObject PLSelector::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_PLSelector,
      qt_meta_data_PLSelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PLSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PLSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PLSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PLSelector))
        return static_cast<void*>(const_cast< PLSelector*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int PLSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: activated((*reinterpret_cast< playlist_item_t*(*)>(_a[1]))); break;
        case 1: setSource((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: plItemAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: plItemRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: inputItemUpdate((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 5: podcastAdd((*reinterpret_cast< PLSelItem*(*)>(_a[1]))); break;
        case 6: podcastRemove((*reinterpret_cast< PLSelItem*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PLSelector::activated(playlist_item_t * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
