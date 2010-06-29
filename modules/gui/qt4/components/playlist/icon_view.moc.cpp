/****************************************************************************
** Meta object code from reading C++ file 'icon_view.hpp'
**
** Created: Sun Jun 27 17:23:58 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "icon_view.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icon_view.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlIconViewItemDelegate[] = {

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

static const char qt_meta_stringdata_PlIconViewItemDelegate[] = {
    "PlIconViewItemDelegate\0"
};

const QMetaObject PlIconViewItemDelegate::staticMetaObject = {
    { &AbstractPlViewItemDelegate::staticMetaObject, qt_meta_stringdata_PlIconViewItemDelegate,
      qt_meta_data_PlIconViewItemDelegate, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlIconViewItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlIconViewItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlIconViewItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlIconViewItemDelegate))
        return static_cast<void*>(const_cast< PlIconViewItemDelegate*>(this));
    return AbstractPlViewItemDelegate::qt_metacast(_clname);
}

int PlIconViewItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPlViewItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PlListViewItemDelegate[] = {

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

static const char qt_meta_stringdata_PlListViewItemDelegate[] = {
    "PlListViewItemDelegate\0"
};

const QMetaObject PlListViewItemDelegate::staticMetaObject = {
    { &AbstractPlViewItemDelegate::staticMetaObject, qt_meta_stringdata_PlListViewItemDelegate,
      qt_meta_data_PlListViewItemDelegate, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlListViewItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlListViewItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlListViewItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlListViewItemDelegate))
        return static_cast<void*>(const_cast< PlListViewItemDelegate*>(this));
    return AbstractPlViewItemDelegate::qt_metacast(_clname);
}

int PlListViewItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPlViewItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PlIconView[] = {

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

static const char qt_meta_stringdata_PlIconView[] = {
    "PlIconView\0"
};

const QMetaObject PlIconView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_PlIconView,
      qt_meta_data_PlIconView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlIconView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlIconView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlIconView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlIconView))
        return static_cast<void*>(const_cast< PlIconView*>(this));
    return QListView::qt_metacast(_clname);
}

int PlIconView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PlListView[] = {

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

static const char qt_meta_stringdata_PlListView[] = {
    "PlListView\0"
};

const QMetaObject PlListView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_PlListView,
      qt_meta_data_PlListView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlListView))
        return static_cast<void*>(const_cast< PlListView*>(this));
    return QListView::qt_metacast(_clname);
}

int PlListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PlTreeView[] = {

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

static const char qt_meta_stringdata_PlTreeView[] = {
    "PlTreeView\0"
};

const QMetaObject PlTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_PlTreeView,
      qt_meta_data_PlTreeView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlTreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlTreeView))
        return static_cast<void*>(const_cast< PlTreeView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int PlTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
