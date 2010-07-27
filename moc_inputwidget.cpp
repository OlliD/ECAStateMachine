/****************************************************************************
** Meta object code from reading C++ file 'inputwidget.h'
**
** Created: Tue Jul 27 17:41:32 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inputwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InputWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      42,   29,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   12,   12,   12, 0x0a,
      78,   12,   12,   12, 0x0a,
     122,   12,   12,   12, 0x0a,
     181,  172,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_InputWidget[] = {
    "InputWidget\0\0buttonClicked()\0tagName,data\0"
    "submitData(QString,QString)\0click()\0"
    "createGuiWithDataSet(QMap<QString,QString>)\0"
    "createGuiWithList(QList<QMap<QString,QString> >*)\0"
    "fileName\0createGuiWithUiFile(QString)\0"
};

const QMetaObject InputWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InputWidget,
      qt_meta_data_InputWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InputWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InputWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InputWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputWidget))
        return static_cast<void*>(const_cast< InputWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int InputWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: buttonClicked(); break;
        case 1: submitData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: click(); break;
        case 3: createGuiWithDataSet((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 4: createGuiWithList((*reinterpret_cast< QList<QMap<QString,QString> >*(*)>(_a[1]))); break;
        case 5: createGuiWithUiFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void InputWidget::buttonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void InputWidget::submitData(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
