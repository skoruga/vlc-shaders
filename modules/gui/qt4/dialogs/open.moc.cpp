/****************************************************************************
** Meta object code from reading C++ file 'open.hpp'
**
** Created: Sun Jun 27 17:23:54 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "open.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'open.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OpenDialog[] = {

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
      12,   11,   11,   11, 0x0a,
      26,   11,   11,   11, 0x0a,
      49,   33,   11,   11, 0x0a,
      62,   11,   11,   11, 0x2a,
      71,   11,   11,   11, 0x0a,
      81,   11,   11,   11, 0x0a,
      93,   11,   11,   11, 0x08,
     109,   11,   11,   11, 0x08,
     118,   11,   11,   11, 0x08,
     126,   11,   11,   11, 0x08,
     150,  148,   11,   11, 0x08,
     181,   11,   11,   11, 0x08,
     193,   11,   11,   11, 0x08,
     219,   11,   11,   11, 0x08,
     238,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OpenDialog[] = {
    "OpenDialog\0\0selectSlots()\0play()\0"
    "b_transode_only\0stream(bool)\0stream()\0"
    "enqueue()\0transcode()\0setMenuAction()\0"
    "cancel()\0close()\0toggleAdvancedPanel()\0"
    ",\0updateMRL(QStringList,QString)\0"
    "updateMRL()\0newCachingMethod(QString)\0"
    "signalCurrent(int)\0browseInputSlave()\0"
};

const QMetaObject OpenDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_OpenDialog,
      qt_meta_data_OpenDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenDialog))
        return static_cast<void*>(const_cast< OpenDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int OpenDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectSlots(); break;
        case 1: play(); break;
        case 2: stream((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: stream(); break;
        case 4: enqueue(); break;
        case 5: transcode(); break;
        case 6: setMenuAction(); break;
        case 7: cancel(); break;
        case 8: close(); break;
        case 9: toggleAdvancedPanel(); break;
        case 10: updateMRL((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: updateMRL(); break;
        case 12: newCachingMethod((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: signalCurrent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: browseInputSlave(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
