/****************************************************************************
** Meta object code from reading C++ file 'qeventtransition.h'
**
** Created: Mon Jul 19 15:00:23 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qeventtransition.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qeventtransition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtEventTransition[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   12, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // properties: name, type, flags
      27,   18, 0x88095003,

       0        // eod
};

static const char qt_meta_stringdata_QtEventTransition[] = {
    "QtEventTransition\0QObject*\0object\0"
};

const QMetaObject QtEventTransition::staticMetaObject = {
    { &QtTransition::staticMetaObject, qt_meta_stringdata_QtEventTransition,
      qt_meta_data_QtEventTransition, 0 }
};

const QMetaObject *QtEventTransition::metaObject() const
{
    return &staticMetaObject;
}

void *QtEventTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtEventTransition))
        return static_cast<void*>(const_cast< QtEventTransition*>(this));
    return QtTransition::qt_metacast(_clname);
}

int QtEventTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtTransition::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = eventSource(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEventSource(*reinterpret_cast< QObject**>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
