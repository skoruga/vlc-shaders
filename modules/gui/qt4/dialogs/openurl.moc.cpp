/****************************************************************************
** Meta object code from reading C++ file 'openurl.hpp'
**
** Created: Sun Jun 27 17:23:54 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "openurl.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openurl.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OpenUrlDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      25,   14,   14,   14, 0x08,
      32,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OpenUrlDialog[] = {
    "OpenUrlDialog\0\0enqueue()\0play()\0close()\0"
};

const QMetaObject OpenUrlDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_OpenUrlDialog,
      qt_meta_data_OpenUrlDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenUrlDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenUrlDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenUrlDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenUrlDialog))
        return static_cast<void*>(const_cast< OpenUrlDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int OpenUrlDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: enqueue(); break;
        case 1: play(); break;
        case 2: close(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
