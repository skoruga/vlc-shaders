/****************************************************************************
** Meta object code from reading C++ file 'standardpanel.hpp'
**
** Created: Sun Jun 27 17:23:59 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "standardpanel.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'standardpanel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StandardPLPanel[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      43,   16,   16,   16, 0x0a,
      67,   16,   16,   16, 0x0a,
      80,   16,   16,   16, 0x08,
      98,   16,   16,   16, 0x08,
     127,   16,   16,   16, 0x08,
     146,   16,   16,   16, 0x08,
     175,  164,   16,   16, 0x08,
     191,   16,   16,   16, 0x08,
     217,   16,   16,   16, 0x08,
     237,   16,   16,   16, 0x08,
     260,   16,   16,   16, 0x08,
     274,   16,   16,   16, 0x08,
     287,   16,   16,   16, 0x08,
     309,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StandardPLPanel[] = {
    "StandardPLPanel\0\0setRoot(playlist_item_t*)\0"
    "browseInto(QModelIndex)\0browseInto()\0"
    "deleteSelection()\0handleExpansion(QModelIndex)\0"
    "handleRootChange()\0gotoPlayingItem()\0"
    "searchText\0search(QString)\0"
    "popupSelectColumn(QPoint)\0popupPlView(QPoint)\0"
    "toggleColumnShown(int)\0showView(int)\0"
    "cycleViews()\0activate(QModelIndex)\0"
    "browseInto(input_item_t*)\0"
};

const QMetaObject StandardPLPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StandardPLPanel,
      qt_meta_data_StandardPLPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StandardPLPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StandardPLPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StandardPLPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StandardPLPanel))
        return static_cast<void*>(const_cast< StandardPLPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int StandardPLPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setRoot((*reinterpret_cast< playlist_item_t*(*)>(_a[1]))); break;
        case 1: browseInto((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: browseInto(); break;
        case 3: deleteSelection(); break;
        case 4: handleExpansion((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: handleRootChange(); break;
        case 6: gotoPlayingItem(); break;
        case 7: search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: popupSelectColumn((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 9: popupPlView((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 10: toggleColumnShown((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: showView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: cycleViews(); break;
        case 13: activate((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: browseInto((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_LocationBar[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   12,   12,   12, 0x0a,
      59,   49,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LocationBar[] = {
    "LocationBar\0\0invoked(QModelIndex)\0"
    "setRootIndex()\0i_item_id\0invoke(int)\0"
};

const QMetaObject LocationBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LocationBar,
      qt_meta_data_LocationBar, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LocationBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LocationBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LocationBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LocationBar))
        return static_cast<void*>(const_cast< LocationBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int LocationBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: invoked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: setRootIndex(); break;
        case 2: invoke((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void LocationBar::invoked(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
