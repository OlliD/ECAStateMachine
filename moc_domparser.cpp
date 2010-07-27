/****************************************************************************
** Meta object code from reading C++ file 'domparser.h'
**
** Created: Tue Jul 27 17:41:38 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "domparser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'domparser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DOMParser[] = {

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
      39,   11,   10,   10, 0x0a,
     116,  107,   10,   10, 0x0a,
     166,  144,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DOMParser[] = {
    "DOMParser\0\0document,tagName,parsedData\0"
    "parseElements(QDomDocument&,QString,QList<QMap<QString,QString> >*)\0"
    "document\0saveDocument(QDomDocument&)\0"
    "document,tagName,data\0"
    "modifyElement(QDomDocument&,QString,QString)\0"
};

const QMetaObject DOMParser::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_DOMParser,
      qt_meta_data_DOMParser, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DOMParser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DOMParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DOMParser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DOMParser))
        return static_cast<void*>(const_cast< DOMParser*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int DOMParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: parseElements((*reinterpret_cast< QDomDocument(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QList<QMap<QString,QString> >*(*)>(_a[3]))); break;
        case 1: saveDocument((*reinterpret_cast< QDomDocument(*)>(_a[1]))); break;
        case 2: modifyElement((*reinterpret_cast< QDomDocument(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
