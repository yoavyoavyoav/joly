/****************************************************************************
** Meta object code from reading C++ file 'qtweetgeosimilarplaces.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qtweetgeosimilarplaces.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtweetgeosimilarplaces.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QTweetGeoSimilarPlaces_t {
    QByteArrayData data[8];
    char stringdata[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QTweetGeoSimilarPlaces_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QTweetGeoSimilarPlaces_t qt_meta_stringdata_QTweetGeoSimilarPlaces = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 12),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 18),
QT_MOC_LITERAL(4, 56, 6),
QT_MOC_LITERAL(5, 63, 5),
QT_MOC_LITERAL(6, 69, 17),
QT_MOC_LITERAL(7, 87, 7)
    },
    "QTweetGeoSimilarPlaces\0parsedPlaces\0"
    "\0QList<QTweetPlace>\0places\0token\0"
    "parseJsonFinished\0jsonDoc\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTweetGeoSimilarPlaces[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       6,    1,   29,    2, 0x09,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonDocument,    7,

       0        // eod
};

void QTweetGeoSimilarPlaces::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTweetGeoSimilarPlaces *_t = static_cast<QTweetGeoSimilarPlaces *>(_o);
        switch (_id) {
        case 0: _t->parsedPlaces((*reinterpret_cast< const QList<QTweetPlace>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->parseJsonFinished((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QTweetGeoSimilarPlaces::*_t)(const QList<QTweetPlace> & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTweetGeoSimilarPlaces::parsedPlaces)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QTweetGeoSimilarPlaces::staticMetaObject = {
    { &QTweetNetBase::staticMetaObject, qt_meta_stringdata_QTweetGeoSimilarPlaces.data,
      qt_meta_data_QTweetGeoSimilarPlaces,  qt_static_metacall, 0, 0}
};


const QMetaObject *QTweetGeoSimilarPlaces::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTweetGeoSimilarPlaces::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTweetGeoSimilarPlaces.stringdata))
        return static_cast<void*>(const_cast< QTweetGeoSimilarPlaces*>(this));
    return QTweetNetBase::qt_metacast(_clname);
}

int QTweetGeoSimilarPlaces::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTweetNetBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QTweetGeoSimilarPlaces::parsedPlaces(const QList<QTweetPlace> & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
