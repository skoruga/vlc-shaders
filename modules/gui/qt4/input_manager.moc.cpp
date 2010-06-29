/****************************************************************************
** Meta object code from reading C++ file 'input_manager.hpp'
**
** Created: Sun Jun 27 17:23:50 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "input_manager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'input_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InputManager[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   14,   13,   13, 0x05,
      56,   52,   13,   13, 0x05,
      77,   13,   13,   13, 0x05,
      96,   13,   13,   13, 0x05,
     117,   13,   13,   13, 0x05,
     136,   13,   13,   13, 0x05,
     157,   13,   13,   13, 0x05,
     190,   13,   13,   13, 0x05,
     217,   13,   13,   13, 0x05,
     251,   13,   13,   13, 0x05,
     278,   13,   13,   13, 0x05,
     298,   13,   13,   13, 0x05,
     317,   13,   13,   13, 0x05,
     345,   13,   13,   13, 0x05,
     368,   13,   13,   13, 0x05,
     392,   13,   13,   13, 0x05,
     428,   13,   13,   13, 0x05,
     451,  449,   13,   13, 0x05,
     474,   13,   13,   13, 0x05,
     507,  492,   13,   13, 0x05,
     544,   13,   13,   13, 0x05,
     561,   13,   13,   13, 0x05,
     580,   13,   13,   13, 0x05,
     602,   13,   13,   13, 0x05,
     626,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     639,   13,   13,   13, 0x0a,
     665,   13,   13,   13, 0x0a,
     685,   13,   13,   13, 0x0a,
     695,   13,   13,   13, 0x0a,
     704,   13,   13,   13, 0x0a,
     713,   13,   13,   13, 0x0a,
     728,   13,   13,   13, 0x0a,
     743,   13,   13,   13, 0x0a,
     756,   13,   13,   13, 0x0a,
     769,   13,   13,   13, 0x0a,
     779,   13,   13,   13, 0x0a,
     789,   13,   13,   13, 0x0a,
     803,   13,   13,   13, 0x0a,
     817,   13,   13,   13, 0x0a,
     831,   13,   13,   13, 0x0a,
     849,   13,   13,   13, 0x0a,
     876,   13,   13,   13, 0x0a,
     899,   13,   13,   13, 0x0a,
     909,   13,   13,   13, 0x08,
     927,   14,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InputManager[] = {
    "InputManager\0\0,,\0positionUpdated(float,int64_t,int)\0"
    "pos\0seekRequested(float)\0rateChanged(float)\0"
    "nameChanged(QString)\0titleChanged(bool)\0"
    "chapterChanged(bool)\0"
    "statisticsUpdated(input_item_t*)\0"
    "infoChanged(input_item_t*)\0"
    "currentMetaChanged(input_item_t*)\0"
    "metaChanged(input_item_t*)\0"
    "artChanged(QString)\0statusChanged(int)\0"
    "recordingStateChanged(bool)\0"
    "teletextPossible(bool)\0teletextActivated(bool)\0"
    "teletextTransparencyActivated(bool)\0"
    "newTelexPageSet(int)\0,\0AtoBchanged(bool,bool)\0"
    "voutChanged(bool)\0pp_vout,i_vout\0"
    "voutListChanged(vout_thread_t**,int)\0"
    "synchroChanged()\0bookmarksChanged()\0"
    "cachingChanged(float)\0encryptionChanged(bool)\0"
    "epgChanged()\0setInput(input_thread_t*)\0"
    "sliderUpdate(float)\0reverse()\0slower()\0"
    "faster()\0littlefaster()\0littleslower()\0"
    "normalRate()\0setRate(int)\0jumpFwd()\0"
    "jumpBwd()\0sectionNext()\0sectionPrev()\0"
    "sectionMenu()\0telexSetPage(int)\0"
    "telexSetTransparency(bool)\0"
    "activateTeletext(bool)\0setAtoB()\0"
    "togglePlayPause()\0AtoBLoop(float,int64_t,int)\0"
};

const QMetaObject InputManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InputManager,
      qt_meta_data_InputManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InputManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InputManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InputManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputManager))
        return static_cast<void*>(const_cast< InputManager*>(this));
    return QObject::qt_metacast(_clname);
}

int InputManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: positionUpdated((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: seekRequested((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: rateChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: titleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: chapterChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: statisticsUpdated((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 7: infoChanged((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 8: currentMetaChanged((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 9: metaChanged((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 10: artChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: statusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: recordingStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: teletextPossible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: teletextActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: teletextTransparencyActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: newTelexPageSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: AtoBchanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: voutChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: voutListChanged((*reinterpret_cast< vout_thread_t**(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: synchroChanged(); break;
        case 21: bookmarksChanged(); break;
        case 22: cachingChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 23: encryptionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: epgChanged(); break;
        case 25: setInput((*reinterpret_cast< input_thread_t*(*)>(_a[1]))); break;
        case 26: sliderUpdate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 27: reverse(); break;
        case 28: slower(); break;
        case 29: faster(); break;
        case 30: littlefaster(); break;
        case 31: littleslower(); break;
        case 32: normalRate(); break;
        case 33: setRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: jumpFwd(); break;
        case 35: jumpBwd(); break;
        case 36: sectionNext(); break;
        case 37: sectionPrev(); break;
        case 38: sectionMenu(); break;
        case 39: telexSetPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: telexSetTransparency((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: activateTeletext((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: setAtoB(); break;
        case 43: togglePlayPause(); break;
        case 44: AtoBLoop((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 45;
    }
    return _id;
}

// SIGNAL 0
void InputManager::positionUpdated(float _t1, int64_t _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InputManager::seekRequested(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InputManager::rateChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InputManager::nameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void InputManager::titleChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void InputManager::chapterChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void InputManager::statisticsUpdated(input_item_t * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void InputManager::infoChanged(input_item_t * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void InputManager::currentMetaChanged(input_item_t * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void InputManager::metaChanged(input_item_t * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void InputManager::artChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void InputManager::statusChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void InputManager::recordingStateChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void InputManager::teletextPossible(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void InputManager::teletextActivated(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void InputManager::teletextTransparencyActivated(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void InputManager::newTelexPageSet(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void InputManager::AtoBchanged(bool _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void InputManager::voutChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void InputManager::voutListChanged(vout_thread_t * * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void InputManager::synchroChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, 0);
}

// SIGNAL 21
void InputManager::bookmarksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, 0);
}

// SIGNAL 22
void InputManager::cachingChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void InputManager::encryptionChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void InputManager::epgChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, 0);
}
static const uint qt_meta_data_MainInputManager[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      48,   17,   17,   17, 0x05,
      64,   17,   17,   17, 0x05,
      99,   83,   17,   17, 0x05,
     136,  129,   17,   17, 0x05,
     161,   17,   17,   17, 0x05,
     181,   17,   17,   17, 0x05,
     204,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     236,   17,   17,   17, 0x0a,
     254,   17,   17,   17, 0x0a,
     261,   17,   17,   17, 0x0a,
     269,   17,   17,   17, 0x0a,
     284,   17,   17,   17, 0x0a,
     291,   17,   17,   17, 0x0a,
     298,   17,   17,   17, 0x0a,
     305,   17,   17,   17, 0x0a,
     328,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainInputManager[] = {
    "MainInputManager\0\0inputChanged(input_thread_t*)\0"
    "volumeChanged()\0soundMuteChanged()\0"
    "itemId,parentId\0playlistItemAppended(int,int)\0"
    "itemId\0playlistItemRemoved(int)\0"
    "randomChanged(bool)\0repeatLoopChanged(int)\0"
    "leafBecameParent(input_item_t*)\0"
    "togglePlayPause()\0play()\0pause()\0"
    "toggleRandom()\0stop()\0next()\0prev()\0"
    "activatePlayQuit(bool)\0loopRepeatLoopStatus()\0"
};

const QMetaObject MainInputManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MainInputManager,
      qt_meta_data_MainInputManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainInputManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainInputManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainInputManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainInputManager))
        return static_cast<void*>(const_cast< MainInputManager*>(this));
    return QObject::qt_metacast(_clname);
}

int MainInputManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: inputChanged((*reinterpret_cast< input_thread_t*(*)>(_a[1]))); break;
        case 1: volumeChanged(); break;
        case 2: soundMuteChanged(); break;
        case 3: playlistItemAppended((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: playlistItemRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: randomChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: repeatLoopChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: leafBecameParent((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 8: togglePlayPause(); break;
        case 9: play(); break;
        case 10: pause(); break;
        case 11: toggleRandom(); break;
        case 12: stop(); break;
        case 13: next(); break;
        case 14: prev(); break;
        case 15: activatePlayQuit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: loopRepeatLoopStatus(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MainInputManager::inputChanged(input_thread_t * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainInputManager::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MainInputManager::soundMuteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MainInputManager::playlistItemAppended(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainInputManager::playlistItemRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainInputManager::randomChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainInputManager::repeatLoopChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainInputManager::leafBecameParent(input_item_t * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
