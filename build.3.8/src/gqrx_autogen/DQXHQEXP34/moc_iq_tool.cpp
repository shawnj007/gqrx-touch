/****************************************************************************
** Meta object code from reading C++ file 'iq_tool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtgui/iq_tool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iq_tool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CIqTool_t {
    QByteArrayData data[25];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CIqTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CIqTool_t qt_meta_stringdata_CIqTool = {
    {
QT_MOC_LITERAL(0, 0, 7), // "CIqTool"
QT_MOC_LITERAL(1, 8, 14), // "startRecording"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "recdir"
QT_MOC_LITERAL(4, 31, 13), // "stopRecording"
QT_MOC_LITERAL(5, 45, 13), // "startPlayback"
QT_MOC_LITERAL(6, 59, 8), // "filename"
QT_MOC_LITERAL(7, 68, 8), // "samprate"
QT_MOC_LITERAL(8, 77, 11), // "center_freq"
QT_MOC_LITERAL(9, 89, 12), // "stopPlayback"
QT_MOC_LITERAL(10, 102, 4), // "seek"
QT_MOC_LITERAL(11, 107, 8), // "seek_pos"
QT_MOC_LITERAL(12, 116, 15), // "cancelRecording"
QT_MOC_LITERAL(13, 132, 14), // "cancelPlayback"
QT_MOC_LITERAL(14, 147, 25), // "on_recDirEdit_textChanged"
QT_MOC_LITERAL(15, 173, 4), // "text"
QT_MOC_LITERAL(16, 178, 23), // "on_recDirButton_clicked"
QT_MOC_LITERAL(17, 202, 20), // "on_recButton_clicked"
QT_MOC_LITERAL(18, 223, 7), // "checked"
QT_MOC_LITERAL(19, 231, 21), // "on_playButton_clicked"
QT_MOC_LITERAL(20, 253, 22), // "on_slider_valueChanged"
QT_MOC_LITERAL(21, 276, 5), // "value"
QT_MOC_LITERAL(22, 282, 32), // "on_listWidget_currentTextChanged"
QT_MOC_LITERAL(23, 315, 11), // "currentText"
QT_MOC_LITERAL(24, 327, 15) // "timeoutFunction"

    },
    "CIqTool\0startRecording\0\0recdir\0"
    "stopRecording\0startPlayback\0filename\0"
    "samprate\0center_freq\0stopPlayback\0"
    "seek\0seek_pos\0cancelRecording\0"
    "cancelPlayback\0on_recDirEdit_textChanged\0"
    "text\0on_recDirButton_clicked\0"
    "on_recButton_clicked\0checked\0"
    "on_playButton_clicked\0on_slider_valueChanged\0"
    "value\0on_listWidget_currentTextChanged\0"
    "currentText\0timeoutFunction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CIqTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    0,   87,    2, 0x06 /* Public */,
       5,    3,   88,    2, 0x06 /* Public */,
       9,    0,   95,    2, 0x06 /* Public */,
      10,    1,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   99,    2, 0x0a /* Public */,
      13,    0,  100,    2, 0x0a /* Public */,
      14,    1,  101,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    1,  105,    2, 0x08 /* Private */,
      19,    1,  108,    2, 0x08 /* Private */,
      20,    1,  111,    2, 0x08 /* Private */,
      22,    1,  114,    2, 0x08 /* Private */,
      24,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::LongLong,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,

       0        // eod
};

void CIqTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CIqTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startRecording((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->stopRecording(); break;
        case 2: _t->startPlayback((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 3: _t->stopPlayback(); break;
        case 4: _t->seek((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->cancelRecording(); break;
        case 6: _t->cancelPlayback(); break;
        case 7: _t->on_recDirEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_recDirButton_clicked(); break;
        case 9: _t->on_recButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_playButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_listWidget_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->timeoutFunction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CIqTool::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CIqTool::startRecording)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CIqTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CIqTool::stopRecording)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CIqTool::*)(const QString , float , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CIqTool::startPlayback)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CIqTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CIqTool::stopPlayback)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CIqTool::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CIqTool::seek)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CIqTool::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_CIqTool.data,
    qt_meta_data_CIqTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CIqTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CIqTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CIqTool.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CIqTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void CIqTool::startRecording(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CIqTool::stopRecording()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CIqTool::startPlayback(const QString _t1, float _t2, qint64 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CIqTool::stopPlayback()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CIqTool::seek(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
