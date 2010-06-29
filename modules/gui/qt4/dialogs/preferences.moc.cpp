/****************************************************************************
** Meta object code from reading C++ file 'preferences.hpp'
**
** Created: Sun Jun 27 17:23:53 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "preferences.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferences.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrefsDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      27,   12,   12,   12, 0x08,
      38,   12,   12,   12, 0x08,
      71,   12,   12,   12, 0x08,
      94,   12,   12,   12, 0x08,
     101,   12,   12,   12, 0x08,
     110,   12,   12,   12, 0x08,
     118,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PrefsDialog[] = {
    "PrefsDialog\0\0setAdvanced()\0setSmall()\0"
    "changeAdvPanel(QTreeWidgetItem*)\0"
    "changeSimplePanel(int)\0save()\0cancel()\0"
    "reset()\0close()\0"
};

const QMetaObject PrefsDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_PrefsDialog,
      qt_meta_data_PrefsDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrefsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrefsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrefsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrefsDialog))
        return static_cast<void*>(const_cast< PrefsDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int PrefsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setAdvanced(); break;
        case 1: setSmall(); break;
        case 2: changeAdvPanel((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: changeSimplePanel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: save(); break;
        case 5: cancel(); break;
        case 6: reset(); break;
        case 7: close(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
