/****************************************************************************
** Meta object code from reading C++ file 'playlist.hpp'
**
** Created: Sun Jun 27 17:23:51 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlist.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlist.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaylistDialog[] = {

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

static const char qt_meta_stringdata_PlaylistDialog[] = {
    "PlaylistDialog\0"
};

const QMetaObject PlaylistDialog::staticMetaObject = {
    { &QVLCMW::staticMetaObject, qt_meta_stringdata_PlaylistDialog,
      qt_meta_data_PlaylistDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaylistDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaylistDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaylistDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistDialog))
        return static_cast<void*>(const_cast< PlaylistDialog*>(this));
    if (!strcmp(_clname, "Singleton<PlaylistDialog>"))
        return static_cast< Singleton<PlaylistDialog>*>(const_cast< PlaylistDialog*>(this));
    return QVLCMW::qt_metacast(_clname);
}

int PlaylistDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCMW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
