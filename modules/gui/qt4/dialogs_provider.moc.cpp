/****************************************************************************
** Meta object code from reading C++ file 'dialogs_provider.hpp'
**
** Created: Sun Jun 27 17:23:50 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialogs_provider.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogs_provider.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogsProvider[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   16,   16,   16, 0x0a,
      55,   16,   16,   16, 0x0a,
      72,   16,   16,   16, 0x0a,
      90,   16,   16,   16, 0x0a,
     108,   16,   16,   16, 0x0a,
     127,   16,   16,   16, 0x0a,
     141,   16,   16,   16, 0x0a,
     158,   16,   16,   16, 0x0a,
     174,   16,   16,   16, 0x0a,
     191,   16,   16,   16, 0x0a,
     203,   16,   16,   16, 0x0a,
     216,   16,   16,   16, 0x0a,
     231,   16,   16,   16, 0x0a,
     245,   16,   16,   16, 0x0a,
     262,   16,   16,   16, 0x0a,
     287,   16,   16,   16, 0x0a,
     303,   16,   16,   16, 0x0a,
     318,   16,   16,   16, 0x0a,
     330,   16,   16,   16, 0x0a,
     373,   16,   16,   16, 0x0a,
     392,   16,   16,   16, 0x0a,
     415,   16,   16,   16, 0x0a,
     438,   16,   16,   16, 0x0a,
     451,   16,   16,   16, 0x0a,
     468,   16,   16,   16, 0x0a,
     485,   16,   16,   16, 0x0a,
     501,   16,   16,   16, 0x0a,
     517,   16,   16,   16, 0x0a,
     541,  537,   16,   16, 0x0a,
     561,   16,   16,   16, 0x2a,
     578,  537,   16,   16, 0x0a,
     598,   16,   16,   16, 0x2a,
     615,   16,   16,   16, 0x0a,
     627,   16,   16,   16, 0x0a,
     641,   16,   16,   16, 0x0a,
     683,  655,   16,   16, 0x0a,
     754,  734,   16,   16, 0x2a,
     804,  793,   16,   16, 0x2a,
     838,   16,   16,   16, 0x0a,
     864,   16,   16,   16, 0x0a,
     892,   16,   16,   16, 0x0a,
     908,   16,   16,   16, 0x0a,
     924,   16,   16,   16, 0x0a,
     944,   16,   16,   16, 0x0a,
     951,   16,   16,   16, 0x08,
     972,   16,   16,   16, 0x08,
     999,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogsProvider[] = {
    "DialogsProvider\0\0toolBarConfUpdated()\0"
    "playMRL(QString)\0playlistDialog()\0"
    "bookmarksDialog()\0mediaInfoDialog()\0"
    "mediaCodecDialog()\0prefsDialog()\0"
    "extendedDialog()\0synchroDialog()\0"
    "messagesDialog()\0vlmDialog()\0helpDialog()\0"
    "updateDialog()\0aboutDialog()\0"
    "gotoTimeDialog()\0podcastConfigureDialog()\0"
    "toolbarDialog()\0pluginDialog()\0"
    "epgDialog()\0openFileGenericDialog(intf_dialog_args_t*)\0"
    "simpleOpenDialog()\0simplePLAppendDialog()\0"
    "simpleMLAppendDialog()\0openDialog()\0"
    "openDiscDialog()\0openFileDialog()\0"
    "openUrlDialog()\0openNetDialog()\0"
    "openCaptureDialog()\0tab\0PLAppendDialog(int)\0"
    "PLAppendDialog()\0MLAppendDialog(int)\0"
    "MLAppendDialog()\0PLOpenDir()\0PLAppendDir()\0"
    "MLAppendDir()\0parent,mrl,b_stream,options\0"
    "streamingDialog(QWidget*,QString,bool,QStringList)\0"
    "parent,mrl,b_stream\0"
    "streamingDialog(QWidget*,QString,bool)\0"
    "parent,mrl\0streamingDialog(QWidget*,QString)\0"
    "openAndStreamingDialogs()\0"
    "openAndTranscodingDialogs()\0openAPlaylist()\0"
    "saveAPlaylist()\0loadSubtitlesFile()\0"
    "quit()\0menuAction(QObject*)\0"
    "menuUpdateAction(QObject*)\0"
    "SDMenuAction(QString)\0"
};

const QMetaObject DialogsProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DialogsProvider,
      qt_meta_data_DialogsProvider, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogsProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogsProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogsProvider))
        return static_cast<void*>(const_cast< DialogsProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int DialogsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: toolBarConfUpdated(); break;
        case 1: playMRL((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: playlistDialog(); break;
        case 3: bookmarksDialog(); break;
        case 4: mediaInfoDialog(); break;
        case 5: mediaCodecDialog(); break;
        case 6: prefsDialog(); break;
        case 7: extendedDialog(); break;
        case 8: synchroDialog(); break;
        case 9: messagesDialog(); break;
        case 10: vlmDialog(); break;
        case 11: helpDialog(); break;
        case 12: updateDialog(); break;
        case 13: aboutDialog(); break;
        case 14: gotoTimeDialog(); break;
        case 15: podcastConfigureDialog(); break;
        case 16: toolbarDialog(); break;
        case 17: pluginDialog(); break;
        case 18: epgDialog(); break;
        case 19: openFileGenericDialog((*reinterpret_cast< intf_dialog_args_t*(*)>(_a[1]))); break;
        case 20: simpleOpenDialog(); break;
        case 21: simplePLAppendDialog(); break;
        case 22: simpleMLAppendDialog(); break;
        case 23: openDialog(); break;
        case 24: openDiscDialog(); break;
        case 25: openFileDialog(); break;
        case 26: openUrlDialog(); break;
        case 27: openNetDialog(); break;
        case 28: openCaptureDialog(); break;
        case 29: PLAppendDialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: PLAppendDialog(); break;
        case 31: MLAppendDialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: MLAppendDialog(); break;
        case 33: PLOpenDir(); break;
        case 34: PLAppendDir(); break;
        case 35: MLAppendDir(); break;
        case 36: streamingDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QStringList(*)>(_a[4]))); break;
        case 37: streamingDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 38: streamingDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 39: openAndStreamingDialogs(); break;
        case 40: openAndTranscodingDialogs(); break;
        case 41: openAPlaylist(); break;
        case 42: saveAPlaylist(); break;
        case 43: loadSubtitlesFile(); break;
        case 44: quit(); break;
        case 45: menuAction((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 46: menuUpdateAction((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 47: SDMenuAction((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 48;
    }
    return _id;
}

// SIGNAL 0
void DialogsProvider::toolBarConfUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
