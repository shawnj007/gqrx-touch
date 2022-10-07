/****************************************************************************
** Meta object code from reading C++ file 'dockaudio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtgui/dockaudio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockaudio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DockAudio_t {
    QByteArrayData data[51];
    char stringdata0[821];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockAudio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockAudio_t qt_meta_stringdata_DockAudio = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DockAudio"
QT_MOC_LITERAL(1, 10, 16), // "audioGainChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "gain"
QT_MOC_LITERAL(4, 33, 21), // "audioStreamingStarted"
QT_MOC_LITERAL(5, 55, 4), // "host"
QT_MOC_LITERAL(6, 60, 4), // "port"
QT_MOC_LITERAL(7, 65, 6), // "stereo"
QT_MOC_LITERAL(8, 72, 21), // "audioStreamingStopped"
QT_MOC_LITERAL(9, 94, 15), // "audioRecStarted"
QT_MOC_LITERAL(10, 110, 8), // "filename"
QT_MOC_LITERAL(11, 119, 15), // "audioRecStopped"
QT_MOC_LITERAL(12, 135, 16), // "audioPlayStarted"
QT_MOC_LITERAL(13, 152, 16), // "audioPlayStopped"
QT_MOC_LITERAL(14, 169, 14), // "fftRateChanged"
QT_MOC_LITERAL(15, 184, 3), // "fps"
QT_MOC_LITERAL(16, 188, 18), // "startAudioRecorder"
QT_MOC_LITERAL(17, 207, 17), // "stopAudioRecorder"
QT_MOC_LITERAL(18, 225, 14), // "setRxFrequency"
QT_MOC_LITERAL(19, 240, 4), // "freq"
QT_MOC_LITERAL(20, 245, 13), // "setWfColormap"
QT_MOC_LITERAL(21, 259, 4), // "cmap"
QT_MOC_LITERAL(22, 264, 31), // "on_audioGainSlider_valueChanged"
QT_MOC_LITERAL(23, 296, 5), // "value"
QT_MOC_LITERAL(24, 302, 28), // "on_audioStreamButton_clicked"
QT_MOC_LITERAL(25, 331, 7), // "checked"
QT_MOC_LITERAL(26, 339, 25), // "on_audioRecButton_clicked"
QT_MOC_LITERAL(27, 365, 26), // "on_audioPlayButton_clicked"
QT_MOC_LITERAL(28, 392, 26), // "on_audioConfButton_clicked"
QT_MOC_LITERAL(29, 419, 26), // "on_audioMuteButton_clicked"
QT_MOC_LITERAL(30, 446, 20), // "setNewPandapterRange"
QT_MOC_LITERAL(31, 467, 3), // "min"
QT_MOC_LITERAL(32, 471, 3), // "max"
QT_MOC_LITERAL(33, 475, 20), // "setNewWaterfallRange"
QT_MOC_LITERAL(34, 496, 12), // "setNewRecDir"
QT_MOC_LITERAL(35, 509, 3), // "dir"
QT_MOC_LITERAL(36, 513, 13), // "setNewUdpHost"
QT_MOC_LITERAL(37, 527, 13), // "setNewUdpPort"
QT_MOC_LITERAL(38, 541, 15), // "setNewUdpStereo"
QT_MOC_LITERAL(39, 557, 7), // "enabled"
QT_MOC_LITERAL(40, 565, 30), // "on_fftSplitSlider_valueChanged"
QT_MOC_LITERAL(41, 596, 32), // "on_pandRangeSlider_valuesChanged"
QT_MOC_LITERAL(42, 629, 30), // "on_wfRangeSlider_valuesChanged"
QT_MOC_LITERAL(43, 660, 25), // "on_recDirEdit_textChanged"
QT_MOC_LITERAL(44, 686, 23), // "on_recDirButton_clicked"
QT_MOC_LITERAL(45, 710, 22), // "on_udpHost_textChanged"
QT_MOC_LITERAL(46, 733, 4), // "text"
QT_MOC_LITERAL(47, 738, 23), // "on_udpPort_valueChanged"
QT_MOC_LITERAL(48, 762, 25), // "on_udpStereo_stateChanged"
QT_MOC_LITERAL(49, 788, 5), // "state"
QT_MOC_LITERAL(50, 794, 26) // "on_audioLockButton_toggled"

    },
    "DockAudio\0audioGainChanged\0\0gain\0"
    "audioStreamingStarted\0host\0port\0stereo\0"
    "audioStreamingStopped\0audioRecStarted\0"
    "filename\0audioRecStopped\0audioPlayStarted\0"
    "audioPlayStopped\0fftRateChanged\0fps\0"
    "startAudioRecorder\0stopAudioRecorder\0"
    "setRxFrequency\0freq\0setWfColormap\0"
    "cmap\0on_audioGainSlider_valueChanged\0"
    "value\0on_audioStreamButton_clicked\0"
    "checked\0on_audioRecButton_clicked\0"
    "on_audioPlayButton_clicked\0"
    "on_audioConfButton_clicked\0"
    "on_audioMuteButton_clicked\0"
    "setNewPandapterRange\0min\0max\0"
    "setNewWaterfallRange\0setNewRecDir\0dir\0"
    "setNewUdpHost\0setNewUdpPort\0setNewUdpStereo\0"
    "enabled\0on_fftSplitSlider_valueChanged\0"
    "on_pandRangeSlider_valuesChanged\0"
    "on_wfRangeSlider_valuesChanged\0"
    "on_recDirEdit_textChanged\0"
    "on_recDirButton_clicked\0on_udpHost_textChanged\0"
    "text\0on_udpPort_valueChanged\0"
    "on_udpStereo_stateChanged\0state\0"
    "on_audioLockButton_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockAudio[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  179,    2, 0x06 /* Public */,
       4,    3,  182,    2, 0x06 /* Public */,
       8,    0,  189,    2, 0x06 /* Public */,
       9,    1,  190,    2, 0x06 /* Public */,
      11,    0,  193,    2, 0x06 /* Public */,
      12,    1,  194,    2, 0x06 /* Public */,
      13,    0,  197,    2, 0x06 /* Public */,
      14,    1,  198,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  201,    2, 0x0a /* Public */,
      17,    0,  202,    2, 0x0a /* Public */,
      18,    1,  203,    2, 0x0a /* Public */,
      20,    1,  206,    2, 0x0a /* Public */,
      22,    1,  209,    2, 0x08 /* Private */,
      24,    1,  212,    2, 0x08 /* Private */,
      26,    1,  215,    2, 0x08 /* Private */,
      27,    1,  218,    2, 0x08 /* Private */,
      28,    0,  221,    2, 0x08 /* Private */,
      29,    1,  222,    2, 0x08 /* Private */,
      30,    2,  225,    2, 0x08 /* Private */,
      33,    2,  230,    2, 0x08 /* Private */,
      34,    1,  235,    2, 0x08 /* Private */,
      36,    1,  238,    2, 0x08 /* Private */,
      37,    1,  241,    2, 0x08 /* Private */,
      38,    1,  244,    2, 0x08 /* Private */,
      40,    1,  247,    2, 0x08 /* Private */,
      41,    2,  250,    2, 0x08 /* Private */,
      42,    2,  255,    2, 0x08 /* Private */,
      43,    1,  260,    2, 0x08 /* Private */,
      44,    0,  263,    2, 0x08 /* Private */,
      45,    1,  264,    2, 0x08 /* Private */,
      47,    1,  267,    2, 0x08 /* Private */,
      48,    1,  270,    2, 0x08 /* Private */,
      50,    1,  273,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   31,   32,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   31,   32,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Bool,   25,

       0        // eod
};

void DockAudio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockAudio *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->audioGainChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->audioStreamingStarted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->audioStreamingStopped(); break;
        case 3: _t->audioRecStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->audioRecStopped(); break;
        case 5: _t->audioPlayStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->audioPlayStopped(); break;
        case 7: _t->fftRateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->startAudioRecorder(); break;
        case 9: _t->stopAudioRecorder(); break;
        case 10: _t->setRxFrequency((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: _t->setWfColormap((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_audioGainSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_audioStreamButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_audioRecButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_audioPlayButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_audioConfButton_clicked(); break;
        case 17: _t->on_audioMuteButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->setNewPandapterRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->setNewWaterfallRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->setNewRecDir((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->setNewUdpHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->setNewUdpPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->setNewUdpStereo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->on_fftSplitSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_pandRangeSlider_valuesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->on_wfRangeSlider_valuesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->on_recDirEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->on_recDirButton_clicked(); break;
        case 29: _t->on_udpHost_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->on_udpPort_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->on_udpStereo_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->on_audioLockButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockAudio::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockAudio::audioGainChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockAudio::*)(const QString , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockAudio::audioStreamingStarted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockAudio::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockAudio::audioStreamingStopped)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DockAudio::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockAudio::audioRecStarted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DockAudio::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockAudio::audioRecStopped)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DockAudio::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockAudio::audioPlayStarted)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DockAudio::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockAudio::audioPlayStopped)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DockAudio::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockAudio::fftRateChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DockAudio::staticMetaObject = { {
    &QDockWidget::staticMetaObject,
    qt_meta_stringdata_DockAudio.data,
    qt_meta_data_DockAudio,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DockAudio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockAudio::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DockAudio.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int DockAudio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void DockAudio::audioGainChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DockAudio::audioStreamingStarted(const QString _t1, int _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DockAudio::audioStreamingStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DockAudio::audioRecStarted(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DockAudio::audioRecStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DockAudio::audioPlayStarted(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DockAudio::audioPlayStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void DockAudio::fftRateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
