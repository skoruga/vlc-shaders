/****************************************************************************
** Meta object code from reading C++ file 'epg.hpp'
**
** Created: Sun Jun 27 17:23:52 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "epg.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'epg.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EpgDialog[] = {

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
      11,   10,   10,   10, 0x08,
      32,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EpgDialog[] = {
    "EpgDialog\0\0showEvent(EPGEvent*)\0"
    "updateInfos()\0"
};

const QMetaObject EpgDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_EpgDialog,
      qt_meta_data_EpgDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EpgDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EpgDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EpgDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EpgDialog))
        return static_cast<void*>(const_cast< EpgDialog*>(this));
    if (!strcmp(_clname, "Singleton<EpgDialog>"))
        return static_cast< Singleton<EpgDialog>*>(const_cast< EpgDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int EpgDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showEvent((*reinterpret_cast< EPGEvent*(*)>(_a[1]))); break;
        case 1: updateInfos(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
