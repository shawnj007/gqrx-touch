/****************************************************************************
** Meta object code from reading C++ file 'demod_options.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtgui/demod_options.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demod_options.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CDemodOptions_t {
    QByteArrayData data[22];
    char stringdata0[327];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDemodOptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDemodOptions_t qt_meta_stringdata_CDemodOptions = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CDemodOptions"
QT_MOC_LITERAL(1, 14, 16), // "fmMaxdevSelected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "max_dev"
QT_MOC_LITERAL(4, 40, 14), // "fmEmphSelected"
QT_MOC_LITERAL(5, 55, 3), // "tau"
QT_MOC_LITERAL(6, 59, 12), // "amDcrToggled"
QT_MOC_LITERAL(7, 72, 7), // "enabled"
QT_MOC_LITERAL(8, 80, 15), // "cwOffsetChanged"
QT_MOC_LITERAL(9, 96, 6), // "offset"
QT_MOC_LITERAL(10, 103, 16), // "amSyncDcrToggled"
QT_MOC_LITERAL(11, 120, 19), // "amSyncPllBwSelected"
QT_MOC_LITERAL(12, 140, 6), // "pll_bw"
QT_MOC_LITERAL(13, 147, 27), // "on_maxdevSelector_activated"
QT_MOC_LITERAL(14, 175, 5), // "index"
QT_MOC_LITERAL(15, 181, 25), // "on_emphSelector_activated"
QT_MOC_LITERAL(16, 207, 22), // "on_dcrCheckBox_toggled"
QT_MOC_LITERAL(17, 230, 7), // "checked"
QT_MOC_LITERAL(18, 238, 28), // "on_cwOffsetSpin_valueChanged"
QT_MOC_LITERAL(19, 267, 5), // "value"
QT_MOC_LITERAL(20, 273, 26), // "on_syncdcrCheckBox_toggled"
QT_MOC_LITERAL(21, 300, 26) // "on_pllBwSelector_activated"

    },
    "CDemodOptions\0fmMaxdevSelected\0\0max_dev\0"
    "fmEmphSelected\0tau\0amDcrToggled\0enabled\0"
    "cwOffsetChanged\0offset\0amSyncDcrToggled\0"
    "amSyncPllBwSelected\0pll_bw\0"
    "on_maxdevSelector_activated\0index\0"
    "on_emphSelector_activated\0"
    "on_dcrCheckBox_toggled\0checked\0"
    "on_cwOffsetSpin_valueChanged\0value\0"
    "on_syncdcrCheckBox_toggled\0"
    "on_pllBwSelector_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDemodOptions[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,
      10,    1,   86,    2, 0x06 /* Public */,
      11,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   92,    2, 0x08 /* Private */,
      15,    1,   95,    2, 0x08 /* Private */,
      16,    1,   98,    2, 0x08 /* Private */,
      18,    1,  101,    2, 0x08 /* Private */,
      20,    1,  104,    2, 0x08 /* Private */,
      21,    1,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Float,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void CDemodOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CDemodOptions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fmMaxdevSelected((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->fmEmphSelected((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->amDcrToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->cwOffsetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->amSyncDcrToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->amSyncPllBwSelected((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->on_maxdevSelector_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_emphSelector_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_dcrCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_cwOffsetSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_syncdcrCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_pllBwSelector_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CDemodOptions::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDemodOptions::fmMaxdevSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CDemodOptions::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDemodOptions::fmEmphSelected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CDemodOptions::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDemodOptions::amDcrToggled)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CDemodOptions::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDemodOptions::cwOffsetChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CDemodOptions::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDemodOptions::amSyncDcrToggled)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CDemodOptions::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDemodOptions::amSyncPllBwSelected)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CDemodOptions::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_CDemodOptions.data,
    qt_meta_data_CDemodOptions,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CDemodOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDemodOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CDemodOptions.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CDemodOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CDemodOptions::fmMaxdevSelected(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CDemodOptions::fmEmphSelected(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CDemodOptions::amDcrToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CDemodOptions::cwOffsetChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CDemodOptions::amSyncDcrToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CDemodOptions::amSyncPllBwSelected(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
