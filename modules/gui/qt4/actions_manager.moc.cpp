/****************************************************************************
** Meta object code from reading C++ file 'actions_manager.hpp'
**
** Created: Sun Jun 27 17:23:50 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "actions_manager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actions_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ActionsManager[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      34,   15,   15,   15, 0x0a,
      44,   15,   15,   15, 0x0a,
      56,   15,   15,   15, 0x0a,
      63,   15,   15,   15, 0x09,
      76,   15,   15,   15, 0x09,
      87,   15,   15,   15, 0x09,
      98,   15,   15,   15, 0x09,
     107,   15,   15,   15, 0x09,
     115,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ActionsManager[] = {
    "ActionsManager\0\0toggleMuteAudio()\0"
    "AudioUp()\0AudioDown()\0play()\0fullscreen()\0"
    "snapshot()\0playlist()\0record()\0frame()\0"
    "doAction(int)\0"
};

const QMetaObject ActionsManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ActionsManager,
      qt_meta_data_ActionsManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ActionsManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ActionsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ActionsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ActionsManager))
        return static_cast<void*>(const_cast< ActionsManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ActionsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: toggleMuteAudio(); break;
        case 1: AudioUp(); break;
        case 2: AudioDown(); break;
        case 3: play(); break;
        case 4: fullscreen(); break;
        case 5: snapshot(); break;
        case 6: playlist(); break;
        case 7: record(); break;
        case 8: frame(); break;
        case 9: doAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
