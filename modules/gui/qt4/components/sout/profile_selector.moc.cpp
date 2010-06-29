/****************************************************************************
** Meta object code from reading C++ file 'profile_selector.hpp'
**
** Created: Sun Jun 27 17:23:59 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "profile_selector.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profile_selector.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VLCProfileSelector[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   19,   19,   19, 0x08,
      50,   19,   19,   19, 0x08,
      64,   19,   19,   19, 0x08,
      82,   80,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VLCProfileSelector[] = {
    "VLCProfileSelector\0\0optionsChanged()\0"
    "newProfile()\0editProfile()\0deleteProfile()\0"
    "i\0updateOptions(int)\0"
};

const QMetaObject VLCProfileSelector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VLCProfileSelector,
      qt_meta_data_VLCProfileSelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VLCProfileSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VLCProfileSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VLCProfileSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VLCProfileSelector))
        return static_cast<void*>(const_cast< VLCProfileSelector*>(this));
    return QWidget::qt_metacast(_clname);
}

int VLCProfileSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: optionsChanged(); break;
        case 1: newProfile(); break;
        case 2: editProfile(); break;
        case 3: deleteProfile(); break;
        case 4: updateOptions((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void VLCProfileSelector::optionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_VLCProfileEditor[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      26,   17,   17,   17, 0x08,
      53,   17,   17,   17, 0x08,
      80,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VLCProfileEditor[] = {
    "VLCProfileEditor\0\0close()\0"
    "setVTranscodeOptions(bool)\0"
    "setATranscodeOptions(bool)\0"
    "setSTranscodeOptions(bool)\0"
};

const QMetaObject VLCProfileEditor::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_VLCProfileEditor,
      qt_meta_data_VLCProfileEditor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VLCProfileEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VLCProfileEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VLCProfileEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VLCProfileEditor))
        return static_cast<void*>(const_cast< VLCProfileEditor*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int VLCProfileEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: close(); break;
        case 1: setVTranscodeOptions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: setATranscodeOptions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: setSTranscodeOptions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
