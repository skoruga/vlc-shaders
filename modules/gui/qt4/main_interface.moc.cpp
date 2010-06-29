/****************************************************************************
** Meta object code from reading C++ file 'main_interface.hpp'
**
** Created: Sun Jun 27 17:23:49 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "main_interface.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_interface.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainInterface[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      49,   15,   14,   14, 0x05,
      89,   14,   14,   14, 0x05,
     109,  107,   14,   14, 0x05,
     137,   14,   14,   14, 0x05,
     165,   14,   14,   14, 0x05,
     185,   14,   14,   14, 0x05,
     210,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     252,  243,   14,   14, 0x0a,
     271,   14,   14,   14, 0x2a,
     286,   14,   14,   14, 0x0a,
     310,   14,   14,   14, 0x0a,
     327,   14,   14,   14, 0x0a,
     353,   14,   14,   14, 0x0a,
     377,   14,   14,   14, 0x0a,
     405,   14,   14,   14, 0x0a,
     417,   14,   14,   14, 0x0a,
     435,   14,   14,   14, 0x0a,
     462,   15,   14,   14, 0x0a,
     503,   14,   14,   14, 0x0a,
     522,   14,   14,   14, 0x08,
     530,   14,   14,   14, 0x08,
     549,   14,   14,   14, 0x08,
     568,   14,   14,   14, 0x08,
     591,  585,   14,   14, 0x08,
     619,   14,   14,   14, 0x28,
     640,   14,   14,   14, 0x08,
     694,   14,   14,   14, 0x08,
     728,   14,   14,   14, 0x08,
     760,   14,   14,   14, 0x08,
     783,   14,   14,   14, 0x08,
     810,   14,   14,   14, 0x08,
     835,  831,   14,   14, 0x08,
     856,  107,   14,   14, 0x08,
     880,   14,   14,   14, 0x08,
     905,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainInterface[] = {
    "MainInterface\0\0p_id,pi_x,pi_y,pi_width,pi_height\0"
    "askGetVideo(WId*,int*,int*,uint*,uint*)\0"
    "askReleaseVideo()\0,\0askVideoToResize(uint,uint)\0"
    "askVideoSetFullScreen(bool)\0"
    "askVideoOnTop(bool)\0minimalViewToggled(bool)\0"
    "fullscreenInterfaceToggled(bool)\0"
    "b_docked\0dockPlaylist(bool)\0dockPlaylist()\0"
    "toggleMinimalView(bool)\0togglePlaylist()\0"
    "toggleUpdateSystrayMenu()\0"
    "toggleAdvancedButtons()\0"
    "toggleInterfaceFullScreen()\0toggleFSC()\0"
    "popupMenu(QPoint)\0changeThumbbarButtons(int)\0"
    "getVideoSlot(WId*,int*,int*,uint*,uint*)\0"
    "releaseVideoSlot()\0debug()\0"
    "destroyPopupMenu()\0recreateToolbars()\0"
    "setName(QString)\0title\0"
    "setVLCWindowsTitle(QString)\0"
    "setVLCWindowsTitle()\0"
    "handleSystrayClick(QSystemTrayIcon::ActivationReason)\0"
    "updateSystrayTooltipName(QString)\0"
    "updateSystrayTooltipStatus(int)\0"
    "showCryptedLabel(bool)\0"
    "handleKeyPress(QKeyEvent*)\0"
    "showBuffering(float)\0w,h\0resizeStack(int,int)\0"
    "setVideoSize(uint,uint)\0"
    "setVideoFullScreen(bool)\0setVideoOnTop(bool)\0"
};

const QMetaObject MainInterface::staticMetaObject = {
    { &QVLCMW::staticMetaObject, qt_meta_stringdata_MainInterface,
      qt_meta_data_MainInterface, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainInterface))
        return static_cast<void*>(const_cast< MainInterface*>(this));
    return QVLCMW::qt_metacast(_clname);
}

int MainInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCMW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: askGetVideo((*reinterpret_cast< WId*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< uint*(*)>(_a[4])),(*reinterpret_cast< uint*(*)>(_a[5]))); break;
        case 1: askReleaseVideo(); break;
        case 2: askVideoToResize((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 3: askVideoSetFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: askVideoOnTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: minimalViewToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: fullscreenInterfaceToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: dockPlaylist((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: dockPlaylist(); break;
        case 9: toggleMinimalView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: togglePlaylist(); break;
        case 11: toggleUpdateSystrayMenu(); break;
        case 12: toggleAdvancedButtons(); break;
        case 13: toggleInterfaceFullScreen(); break;
        case 14: toggleFSC(); break;
        case 15: popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 16: changeThumbbarButtons((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: getVideoSlot((*reinterpret_cast< WId*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< uint*(*)>(_a[4])),(*reinterpret_cast< uint*(*)>(_a[5]))); break;
        case 18: releaseVideoSlot(); break;
        case 19: debug(); break;
        case 20: destroyPopupMenu(); break;
        case 21: recreateToolbars(); break;
        case 22: setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: setVLCWindowsTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: setVLCWindowsTitle(); break;
        case 25: handleSystrayClick((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 26: updateSystrayTooltipName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: updateSystrayTooltipStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: showCryptedLabel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: handleKeyPress((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 30: showBuffering((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 31: resizeStack((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: setVideoSize((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 33: setVideoFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: setVideoOnTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void MainInterface::askGetVideo(WId * _t1, int * _t2, int * _t3, unsigned  * _t4, unsigned  * _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainInterface::askReleaseVideo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MainInterface::askVideoToResize(unsigned int _t1, unsigned int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainInterface::askVideoSetFullScreen(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainInterface::askVideoOnTop(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainInterface::minimalViewToggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainInterface::fullscreenInterfaceToggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
