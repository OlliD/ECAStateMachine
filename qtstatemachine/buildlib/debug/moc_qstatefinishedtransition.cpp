/****************************************************************************
** Meta object code from reading C++ file 'qstatefinishedtransition.h'
**
** Created: Mon Jul 19 15:00:22 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qstatefinishedtransition.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qstatefinishedtransition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtStateFinishedTransition[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   12, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // properties: name, type, flags
      35,   26, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_QtStateFinishedTransition[] = {
    "QtStateFinishedTransition\0QtState*\0"
    "state\0"
};

const QMetaObject QtStateFinishedTransition::staticMetaObject = {
    { &QtTransition::staticMetaObject, qt_meta_stringdata_QtStateFinishedTransition,
      qt_meta_data_QtStateFinishedTransition, 0 }
};

const QMetaObject *QtStateFinishedTransition::metaObject() const
{
    return &staticMetaObject;
}

void *QtStateFinishedTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtStateFinishedTransition))
        return static_cast<void*>(const_cast< QtStateFinishedTransition*>(this));
    return QtTransition::qt_metacast(_clname);
}

int QtStateFinishedTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtTransition::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QtState**>(_v) = state(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setState(*reinterpret_cast< QtState**>(_v)); break;
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