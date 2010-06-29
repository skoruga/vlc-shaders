/****************************************************************************
** Meta object code from reading C++ file 'complete_preferences.hpp'
**
** Created: Sun Jun 27 17:23:56 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "complete_preferences.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'complete_preferences.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrefsTree[] = {

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

static const char qt_meta_stringdata_PrefsTree[] = {
    "PrefsTree\0"
};

const QMetaObject PrefsTree::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_PrefsTree,
      qt_meta_data_PrefsTree, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrefsTree::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrefsTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrefsTree::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrefsTree))
        return static_cast<void*>(const_cast< PrefsTree*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int PrefsTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_AdvPrefsPanel[] = {

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

static const char qt_meta_stringdata_AdvPrefsPanel[] = {
    "AdvPrefsPanel\0"
};

const QMetaObject AdvPrefsPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdvPrefsPanel,
      qt_meta_data_AdvPrefsPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AdvPrefsPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AdvPrefsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AdvPrefsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdvPrefsPanel))
        return static_cast<void*>(const_cast< AdvPrefsPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdvPrefsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
