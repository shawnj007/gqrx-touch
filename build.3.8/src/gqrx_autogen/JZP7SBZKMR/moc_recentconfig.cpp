/****************************************************************************
** Meta object code from reading C++ file 'recentconfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "applications/gqrx/recentconfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recentconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RecentConfig_t {
    QByteArrayData data[10];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RecentConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RecentConfig_t qt_meta_stringdata_RecentConfig = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RecentConfig"
QT_MOC_LITERAL(1, 13, 10), // "loadConfig"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "filename"
QT_MOC_LITERAL(4, 34, 11), // "configSaved"
QT_MOC_LITERAL(5, 46, 12), // "configLoaded"
QT_MOC_LITERAL(6, 59, 13), // "onConfigSaved"
QT_MOC_LITERAL(7, 73, 14), // "onConfigLoaded"
QT_MOC_LITERAL(8, 88, 12), // "onMenuAction"
QT_MOC_LITERAL(9, 101, 5) // "index"

    },
    "RecentConfig\0loadConfig\0\0filename\0"
    "configSaved\0configLoaded\0onConfigSaved\0"
    "onConfigLoaded\0onMenuAction\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RecentConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   53,    2, 0x09 /* Protected */,
       7,    1,   56,    2, 0x09 /* Protected */,
       8,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void RecentConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RecentConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadConfig((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->configSaved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->configLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onConfigSaved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onConfigLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onMenuAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RecentConfig::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RecentConfig::loadConfig)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RecentConfig::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RecentConfig::configSaved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RecentConfig::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RecentConfig::configLoaded)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RecentConfig::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_RecentConfig.data,
    qt_meta_data_RecentConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RecentConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecentConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RecentConfig.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RecentConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RecentConfig::loadConfig(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< RecentConfig *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RecentConfig::configSaved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RecentConfig::configLoaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
