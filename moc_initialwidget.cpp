/****************************************************************************
** Meta object code from reading C++ file 'initialwidget.h'
**
** Created: Tue Jul 27 19:04:36 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "initialwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'initialwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InitialWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      37,   14,   14,   14, 0x05,
      57,   14,   14,   14, 0x05,
      85,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      99,   14,   14,   14, 0x0a,
     113,   14,   14,   14, 0x0a,
     120,   14,   14,   14, 0x0a,
     135,   14,   14,   14, 0x0a,
     144,   14,   14,   14, 0x0a,
     157,   14,   14,   14, 0x0a,
     164,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_InitialWidget[] = {
    "InitialWidget\0\0changeWidget(QString)\0"
    "fileLoaded(QString)\0startButtonClicked(QString)\0"
    "quitClicked()\0startEngine()\0open()\0"
    "openDataFile()\0change()\0testChange()\0"
    "init()\0quitApp()\0"
};

const QMetaObject InitialWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InitialWidget,
      qt_meta_data_InitialWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InitialWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InitialWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InitialWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InitialWidget))
        return static_cast<void*>(const_cast< InitialWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int InitialWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeWidget((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: fileLoaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: startButtonClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: quitClicked(); break;
        case 4: startEngine(); break;
        case 5: open(); break;
        case 6: openDataFile(); break;
        case 7: change(); break;
        case 8: testChange(); break;
        case 9: init(); break;
        case 10: quitApp(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void InitialWidget::changeWidget(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InitialWidget::fileLoaded(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InitialWidget::startButtonClicked(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InitialWidget::quitClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
