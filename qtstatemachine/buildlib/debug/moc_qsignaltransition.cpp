/****************************************************************************
** Meta object code from reading C++ file 'qsignaltransition.h'
**
** Created: Mon Jul 19 15:00:23 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qsignaltransition.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsignaltransition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtSignalTransition[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   12, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // properties: name, type, flags
      28,   19, 0x88095003,
      46,   35, 0x0c095103,

       0        // eod
};

static const char qt_meta_stringdata_QtSignalTransition[] = {
    "QtSignalTransition\0QObject*\0object\0"
    "QByteArray\0signal\0"
};

const QMetaObject QtSignalTransition::staticMetaObject = {
    { &QtTransition::staticMetaObject, qt_meta_stringdata_QtSignalTransition,
      qt_meta_data_QtSignalTransition, 0 }
};

const QMetaObject *QtSignalTransition::metaObject() const
{
    return &staticMetaObject;
}

void *QtSignalTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtSignalTransition))
        return static_cast<void*>(const_cast< QtSignalTransition*>(this));
    return QtTransition::qt_metacast(_clname);
}

int QtSignalTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtTransition::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = senderObject(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = signal(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSenderObject(*reinterpret_cast< QObject**>(_v)); break;
        case 1: setSignal(*reinterpret_cast< QByteArray*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
