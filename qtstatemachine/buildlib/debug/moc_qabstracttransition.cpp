/****************************************************************************
** Meta object code from reading C++ file 'qabstracttransition.h'
**
** Created: Mon Jul 19 15:00:21 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qabstracttransition.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstracttransition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtAbstractTransition[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   12, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // properties: name, type, flags
      30,   21, 0x00095009,
      54,   37, 0x0009500b,
      85,   61, 0x0009500b,

       0        // eod
};

static const char qt_meta_stringdata_QtAbstractTransition[] = {
    "QtAbstractTransition\0QtState*\0source\0"
    "QtAbstractState*\0target\0QList<QtAbstractState*>\0"
    "targets\0"
};

const QMetaObject QtAbstractTransition::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtAbstractTransition,
      qt_meta_data_QtAbstractTransition, 0 }
};

const QMetaObject *QtAbstractTransition::metaObject() const
{
    return &staticMetaObject;
}

void *QtAbstractTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtAbstractTransition))
        return static_cast<void*>(const_cast< QtAbstractTransition*>(this));
    return QObject::qt_metacast(_clname);
}

int QtAbstractTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QtState**>(_v) = sourceState(); break;
        case 1: *reinterpret_cast< QtAbstractState**>(_v) = targetState(); break;
        case 2: *reinterpret_cast< QList<QtAbstractState*>*>(_v) = targetStates(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setTargetState(*reinterpret_cast< QtAbstractState**>(_v)); break;
        case 2: setTargetStates(*reinterpret_cast< QList<QtAbstractState*>*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
