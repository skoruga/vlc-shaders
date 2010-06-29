/****************************************************************************
** Meta object code from reading C++ file 'simple_preferences.hpp'
**
** Created: Sun Jun 27 17:23:56 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "simple_preferences.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simple_preferences.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SPrefsCatList[] = {

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
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SPrefsCatList[] = {
    "SPrefsCatList\0\0currentItemChanged(int)\0"
    "switchPanel(int)\0"
};

const QMetaObject SPrefsCatList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SPrefsCatList,
      qt_meta_data_SPrefsCatList, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SPrefsCatList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SPrefsCatList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SPrefsCatList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SPrefsCatList))
        return static_cast<void*>(const_cast< SPrefsCatList*>(this));
    return QWidget::qt_metacast(_clname);
}

int SPrefsCatList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentItemChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: switchPanel((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SPrefsCatList::currentItemChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_SPrefsPanel[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      33,   12,   12,   12, 0x08,
      57,   12,   12,   12, 0x08,
      80,   12,   12,   12, 0x08,
      93,   12,   12,   12, 0x08,
     104,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SPrefsPanel[] = {
    "SPrefsPanel\0\0lastfm_Changed(int)\0"
    "updateAudioOptions(int)\0updateAudioVolume(int)\0"
    "assoDialog()\0saveAsso()\0changeStyle(QString)\0"
};

const QMetaObject SPrefsPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SPrefsPanel,
      qt_meta_data_SPrefsPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SPrefsPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SPrefsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SPrefsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SPrefsPanel))
        return static_cast<void*>(const_cast< SPrefsPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int SPrefsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: lastfm_Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: updateAudioOptions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: updateAudioVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: assoDialog(); break;
        case 4: saveAsso(); break;
        case 5: changeStyle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
