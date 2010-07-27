/****************************************************************************
** Meta object code from reading C++ file 'smgui.h'
**
** Created: Tue Jul 27 19:04:35 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "smgui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SMGui[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    7,    6,    6, 0x0a,
      38,   36,    6,    6, 0x0a,
      67,   65,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SMGui[] = {
    "SMGui\0\0w\0setCurrentWidget(QWidget*)\0"
    "l\0setCurrentLayout(QLayout*)\0m\0"
    "setMenu(QMenuBar*)\0"
};

const QMetaObject SMGui::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SMGui,
      qt_meta_data_SMGui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SMGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SMGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SMGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SMGui))
        return static_cast<void*>(const_cast< SMGui*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SMGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setCurrentWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: setCurrentLayout((*reinterpret_cast< QLayout*(*)>(_a[1]))); break;
        case 2: setMenu((*reinterpret_cast< QMenuBar*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
