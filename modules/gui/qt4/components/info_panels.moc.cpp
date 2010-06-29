/****************************************************************************
** Meta object code from reading C++ file 'info_panels.hpp'
**
** Created: Sun Jun 27 17:23:56 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "info_panels.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'info_panels.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MetaPanel[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      27,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   10,   10,   10, 0x0a,
      59,   10,   10,   10, 0x0a,
      67,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MetaPanel[] = {
    "MetaPanel\0\0uriSet(QString)\0editing()\0"
    "update(input_item_t*)\0clear()\0"
    "enterEditMode()\0"
};

const QMetaObject MetaPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MetaPanel,
      qt_meta_data_MetaPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MetaPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MetaPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MetaPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MetaPanel))
        return static_cast<void*>(const_cast< MetaPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int MetaPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: uriSet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: editing(); break;
        case 2: update((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 3: clear(); break;
        case 4: enterEditMode(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MetaPanel::uriSet(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MetaPanel::editing()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_ExtraMetaPanel[] = {

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
      16,   15,   15,   15, 0x0a,
      38,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ExtraMetaPanel[] = {
    "ExtraMetaPanel\0\0update(input_item_t*)\0"
    "clear()\0"
};

const QMetaObject ExtraMetaPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ExtraMetaPanel,
      qt_meta_data_ExtraMetaPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtraMetaPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtraMetaPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtraMetaPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtraMetaPanel))
        return static_cast<void*>(const_cast< ExtraMetaPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int ExtraMetaPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 1: clear(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_InputStatsPanel[] = {

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
      17,   16,   16,   16, 0x0a,
      39,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_InputStatsPanel[] = {
    "InputStatsPanel\0\0update(input_item_t*)\0"
    "clear()\0"
};

const QMetaObject InputStatsPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InputStatsPanel,
      qt_meta_data_InputStatsPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InputStatsPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InputStatsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InputStatsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputStatsPanel))
        return static_cast<void*>(const_cast< InputStatsPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int InputStatsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 1: clear(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_InfoPanel[] = {

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
      11,   10,   10,   10, 0x0a,
      33,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_InfoPanel[] = {
    "InfoPanel\0\0update(input_item_t*)\0"
    "clear()\0"
};

const QMetaObject InfoPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InfoPanel,
      qt_meta_data_InfoPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InfoPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InfoPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InfoPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InfoPanel))
        return static_cast<void*>(const_cast< InfoPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int InfoPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 1: clear(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
