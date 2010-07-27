/****************************************************************************
** Meta object code from reading C++ file 'smengine.h'
**
** Created: Tue Jul 27 20:04:50 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "smengine.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SMEngine[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      19,    9,    9,    9, 0x05,
      39,   37,    9,    9, 0x05,
      61,   59,    9,    9, 0x05,
      81,    9,    9,    9, 0x05,
      95,    9,    9,    9, 0x05,
     108,    9,    9,    9, 0x05,
     120,    9,    9,    9, 0x05,
     137,    9,    9,    9, 0x05,
     151,    9,    9,    9, 0x05,
     201,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     250,    9,    9,    9, 0x0a,
     265,  263,    9,    9, 0x0a,
     295,    9,    9,    9, 0x2a,
     317,    9,    9,    9, 0x0a,
     352,  339,    9,    9, 0x0a,
     384,    9,    9,    9, 0x0a,
     402,    9,    9,    9, 0x0a,
     414,  263,    9,    9, 0x0a,
     449,    9,    9,    9, 0x2a,
     476,    9,    9,    9, 0x0a,
     497,    9,    9,    9, 0x0a,
     518,  508,    9,    9, 0x0a,
     539,    9,    9,    9, 0x0a,
     567,  554,    9,    9, 0x0a,
     594,    9,    9,    9, 0x08,
     611,  604,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SMEngine[] = {
    "SMEngine\0\0showMe()\0setLabel(QString)\0"
    "w\0setWidget(QWidget*)\0l\0setLayout(QLayout*)\0"
    "breakIsOver()\0yesClicked()\0noClicked()\0"
    "confirnClicked()\0skipClicked()\0"
    "createGuiWithList(QList<QMap<QString,QString> >*)\0"
    "createInputGuiWithDataSet(QMap<QString,QString>)\0"
    "repaintGui()\0,\0changeWidget(QString,QString)\0"
    "changeWidget(QString)\0parseXMLFile(QString)\0"
    "label,widget\0showInfoWidget(QString,QString)\0"
    "showInputWidget()\0addLayout()\0"
    "addWidgetToLayout(QString,QString)\0"
    "addWidgetToLayout(QString)\0"
    "toggleFirstUse(bool)\0finished()\0"
    "murmlspec\0executeSpec(QString)\0"
    "acceptButton()\0tagName,data\0"
    "saveToDom(QString,QString)\0timeOut()\0"
    "button\0emitClickSignal(int)\0"
};

const QMetaObject SMEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SMEngine,
      qt_meta_data_SMEngine, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SMEngine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SMEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SMEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SMEngine))
        return static_cast<void*>(const_cast< SMEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int SMEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showMe(); break;
        case 1: setLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: setWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 3: setLayout((*reinterpret_cast< QLayout*(*)>(_a[1]))); break;
        case 4: breakIsOver(); break;
        case 5: yesClicked(); break;
        case 6: noClicked(); break;
        case 7: confirnClicked(); break;
        case 8: skipClicked(); break;
        case 9: createGuiWithList((*reinterpret_cast< QList<QMap<QString,QString> >*(*)>(_a[1]))); break;
        case 10: createInputGuiWithDataSet((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 11: repaintGui(); break;
        case 12: changeWidget((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: changeWidget((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: parseXMLFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: showInfoWidget((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: showInputWidget(); break;
        case 17: addLayout(); break;
        case 18: addWidgetToLayout((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: addWidgetToLayout((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: toggleFirstUse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: finished(); break;
        case 22: executeSpec((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: acceptButton(); break;
        case 24: saveToDom((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 25: timeOut(); break;
        case 26: emitClickSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void SMEngine::showMe()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SMEngine::setLabel(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SMEngine::setWidget(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SMEngine::setLayout(QLayout * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SMEngine::breakIsOver()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void SMEngine::yesClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void SMEngine::noClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void SMEngine::confirnClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void SMEngine::skipClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void SMEngine::createGuiWithList(QList<QMap<QString,QString> > * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SMEngine::createInputGuiWithDataSet(QMap<QString,QString> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
