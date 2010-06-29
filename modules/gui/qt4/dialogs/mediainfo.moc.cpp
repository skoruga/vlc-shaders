/****************************************************************************
** Meta object code from reading C++ file 'mediainfo.hpp'
**
** Created: Sun Jun 27 17:23:51 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mediainfo.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediainfo.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MediaInfoDialog[] = {

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
      17,   16,   16,   16, 0x08,
      46,   16,   16,   16, 0x08,
      61,   16,   16,   16, 0x08,
      69,   16,   16,   16, 0x08,
      86,   80,   16,   16, 0x08,
     105,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MediaInfoDialog[] = {
    "MediaInfoDialog\0\0updateAllTabs(input_item_t*)\0"
    "clearAllTabs()\0close()\0saveMeta()\0"
    "i_tab\0updateButtons(int)\0updateURI(QString)\0"
};

const QMetaObject MediaInfoDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_MediaInfoDialog,
      qt_meta_data_MediaInfoDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MediaInfoDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MediaInfoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MediaInfoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MediaInfoDialog))
        return static_cast<void*>(const_cast< MediaInfoDialog*>(this));
    if (!strcmp(_clname, "Singleton<MediaInfoDialog>"))
        return static_cast< Singleton<MediaInfoDialog>*>(const_cast< MediaInfoDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int MediaInfoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateAllTabs((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 1: clearAllTabs(); break;
        case 2: close(); break;
        case 3: saveMeta(); break;
        case 4: updateButtons((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: updateURI((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
