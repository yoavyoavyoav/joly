/****************************************************************************
** Meta object code from reading C++ file 'qtweetmentions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qtweetmentions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtweetmentions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QTweetMentions_t {
    QByteArrayData data[16];
    char stringdata[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QTweetMentions_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QTweetMentions_t qt_meta_stringdata_QTweetMentions = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 14),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 19),
QT_MOC_LITERAL(4, 51, 8),
QT_MOC_LITERAL(5, 60, 17),
QT_MOC_LITERAL(6, 78, 7),
QT_MOC_LITERAL(7, 86, 7),
QT_MOC_LITERAL(8, 94, 5),
QT_MOC_LITERAL(9, 100, 5),
QT_MOC_LITERAL(10, 106, 4),
QT_MOC_LITERAL(11, 111, 8),
QT_MOC_LITERAL(12, 120, 10),
QT_MOC_LITERAL(13, 131, 15),
QT_MOC_LITERAL(14, 147, 14),
QT_MOC_LITERAL(15, 162, 18)
    },
    "QTweetMentions\0parsedStatuses\0\0"
    "QList<QTweetStatus>\0statuses\0"
    "parseJsonFinished\0jsonDoc\0sinceID\0"
    "maxID\0count\0page\0trimUser\0includeRts\0"
    "includeEntities\0excludeReplies\0"
    "contributorDetails\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTweetMentions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       9,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonDocument,    6,

 // properties: name, type, flags
       7, QMetaType::LongLong, 0x00095103,
       8, QMetaType::LongLong, 0x00095103,
       9, QMetaType::Int, 0x00095103,
      10, QMetaType::Int, 0x00095103,
      11, QMetaType::Bool, 0x00095103,
      12, QMetaType::Bool, 0x00095103,
      13, QMetaType::Bool, 0x00095103,
      14, QMetaType::Bool, 0x00095103,
      15, QMetaType::Bool, 0x00095003,

       0        // eod
};

void QTweetMentions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTweetMentions *_t = static_cast<QTweetMentions *>(_o);
        switch (_id) {
        case 0: _t->parsedStatuses((*reinterpret_cast< const QList<QTweetStatus>(*)>(_a[1]))); break;
        case 1: _t->parseJsonFinished((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QTweetMentions::*_t)(const QList<QTweetStatus> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTweetMentions::parsedStatuses)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QTweetMentions::staticMetaObject = {
    { &QTweetNetBase::staticMetaObject, qt_meta_stringdata_QTweetMentions.data,
      qt_meta_data_QTweetMentions,  qt_static_metacall, 0, 0}
};


const QMetaObject *QTweetMentions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTweetMentions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTweetMentions.stringdata))
        return static_cast<void*>(const_cast< QTweetMentions*>(this));
    return QTweetNetBase::qt_metacast(_clname);
}

int QTweetMentions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint64*>(_v) = sinceID(); break;
        case 1: *reinterpret_cast< qint64*>(_v) = maxID(); break;
        case 2: *reinterpret_cast< int*>(_v) = count(); break;
        case 3: *reinterpret_cast< int*>(_v) = page(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isTrimUser(); break;
        case 5: *reinterpret_cast< bool*>(_v) = isIncludeRts(); break;
        case 6: *reinterpret_cast< bool*>(_v) = isIncludeEntities(); break;
        case 7: *reinterpret_cast< bool*>(_v) = isExcludeReplies(); break;
        case 8: *reinterpret_cast< bool*>(_v) = isContributorsDetails(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSinceID(*reinterpret_cast< qint64*>(_v)); break;
        case 1: setMaxID(*reinterpret_cast< qint64*>(_v)); break;
        case 2: setCount(*reinterpret_cast< int*>(_v)); break;
        case 3: setPage(*reinterpret_cast< int*>(_v)); break;
        case 4: setTrimUser(*reinterpret_cast< bool*>(_v)); break;
        case 5: setIncludeRts(*reinterpret_cast< bool*>(_v)); break;
        case 6: setIncludeEntities(*reinterpret_cast< bool*>(_v)); break;
        case 7: setExcludeReplies(*reinterpret_cast< bool*>(_v)); break;
        case 8: setContributorsDetails(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QTweetMentions::parsedStatuses(const QList<QTweetStatus> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE