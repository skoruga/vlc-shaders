/****************************************************************************
** Meta object code from reading C++ file 'bookmarks.hpp'
**
** Created: Sun Jun 27 17:23:51 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bookmarks.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarks.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BookmarksDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      26,   16,   16,   16, 0x08,
      32,   16,   16,   16, 0x08,
      38,   16,   16,   16, 0x08,
      58,   46,   16,   16, 0x08,
      85,   16,   16,   16, 0x08,
     101,   95,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BookmarksDialog[] = {
    "BookmarksDialog\0\0update()\0add()\0del()\0"
    "clear()\0item,column\0edit(QTreeWidgetItem*,int)\0"
    "extract()\0index\0activateItem(QModelIndex)\0"
};

const QMetaObject BookmarksDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_BookmarksDialog,
      qt_meta_data_BookmarksDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarksDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarksDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarksDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarksDialog))
        return static_cast<void*>(const_cast< BookmarksDialog*>(this));
    if (!strcmp(_clname, "Singleton<BookmarksDialog>"))
        return static_cast< Singleton<BookmarksDialog>*>(const_cast< BookmarksDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int BookmarksDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update(); break;
        case 1: add(); break;
        case 2: del(); break;
        case 3: clear(); break;
        case 4: edit((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: extract(); break;
        case 6: activateItem((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
