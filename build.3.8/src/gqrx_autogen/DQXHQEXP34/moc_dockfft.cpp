/****************************************************************************
** Meta object code from reading C++ file 'dockfft.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtgui/dockfft.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockfft.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DockFft_t {
    QByteArrayData data[61];
    char stringdata0[1058];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockFft_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockFft_t qt_meta_stringdata_DockFft = {
    {
QT_MOC_LITERAL(0, 0, 7), // "DockFft"
QT_MOC_LITERAL(1, 8, 14), // "fftSizeChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "size"
QT_MOC_LITERAL(4, 29, 14), // "fftRateChanged"
QT_MOC_LITERAL(5, 44, 3), // "fps"
QT_MOC_LITERAL(6, 48, 16), // "fftWindowChanged"
QT_MOC_LITERAL(7, 65, 6), // "window"
QT_MOC_LITERAL(8, 72, 13), // "wfSpanChanged"
QT_MOC_LITERAL(9, 86, 7), // "span_ms"
QT_MOC_LITERAL(10, 94, 15), // "fftSplitChanged"
QT_MOC_LITERAL(11, 110, 3), // "pct"
QT_MOC_LITERAL(12, 114, 14), // "fftZoomChanged"
QT_MOC_LITERAL(13, 129, 5), // "level"
QT_MOC_LITERAL(14, 135, 13), // "fftAvgChanged"
QT_MOC_LITERAL(15, 149, 4), // "gain"
QT_MOC_LITERAL(16, 154, 21), // "pandapterRangeChanged"
QT_MOC_LITERAL(17, 176, 3), // "min"
QT_MOC_LITERAL(18, 180, 3), // "max"
QT_MOC_LITERAL(19, 184, 21), // "waterfallRangeChanged"
QT_MOC_LITERAL(20, 206, 12), // "resetFftZoom"
QT_MOC_LITERAL(21, 219, 13), // "gotoFftCenter"
QT_MOC_LITERAL(22, 233, 13), // "gotoDemodFreq"
QT_MOC_LITERAL(23, 247, 15), // "fftColorChanged"
QT_MOC_LITERAL(24, 263, 14), // "fftFillToggled"
QT_MOC_LITERAL(25, 278, 4), // "fill"
QT_MOC_LITERAL(26, 283, 18), // "fftPeakHoldToggled"
QT_MOC_LITERAL(27, 302, 6), // "enable"
QT_MOC_LITERAL(28, 309, 20), // "peakDetectionToggled"
QT_MOC_LITERAL(29, 330, 7), // "enabled"
QT_MOC_LITERAL(30, 338, 15), // "bandPlanChanged"
QT_MOC_LITERAL(31, 354, 17), // "wfColormapChanged"
QT_MOC_LITERAL(32, 372, 4), // "cmap"
QT_MOC_LITERAL(33, 377, 17), // "setPandapterRange"
QT_MOC_LITERAL(34, 395, 17), // "setWaterfallRange"
QT_MOC_LITERAL(35, 413, 15), // "setWfResolution"
QT_MOC_LITERAL(36, 429, 13), // "msec_per_line"
QT_MOC_LITERAL(37, 443, 12), // "setZoomLevel"
QT_MOC_LITERAL(38, 456, 38), // "on_fftSizeComboBox_currentInd..."
QT_MOC_LITERAL(39, 495, 5), // "index"
QT_MOC_LITERAL(40, 501, 38), // "on_fftRateComboBox_currentInd..."
QT_MOC_LITERAL(41, 540, 37), // "on_fftWinComboBox_currentInde..."
QT_MOC_LITERAL(42, 578, 37), // "on_wfSpanComboBox_currentInde..."
QT_MOC_LITERAL(43, 616, 30), // "on_fftSplitSlider_valueChanged"
QT_MOC_LITERAL(44, 647, 5), // "value"
QT_MOC_LITERAL(45, 653, 28), // "on_fftAvgSlider_valueChanged"
QT_MOC_LITERAL(46, 682, 29), // "on_fftZoomSlider_valueChanged"
QT_MOC_LITERAL(47, 712, 32), // "on_pandRangeSlider_valuesChanged"
QT_MOC_LITERAL(48, 745, 30), // "on_wfRangeSlider_valuesChanged"
QT_MOC_LITERAL(49, 776, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(50, 799, 23), // "on_centerButton_clicked"
QT_MOC_LITERAL(51, 823, 22), // "on_demodButton_clicked"
QT_MOC_LITERAL(52, 846, 27), // "on_colorPicker_colorChanged"
QT_MOC_LITERAL(53, 874, 21), // "on_fillButton_toggled"
QT_MOC_LITERAL(54, 896, 7), // "checked"
QT_MOC_LITERAL(55, 904, 25), // "on_peakHoldButton_toggled"
QT_MOC_LITERAL(56, 930, 30), // "on_peakDetectionButton_toggled"
QT_MOC_LITERAL(57, 961, 21), // "on_lockButton_toggled"
QT_MOC_LITERAL(58, 983, 32), // "on_bandPlanCheckbox_stateChanged"
QT_MOC_LITERAL(59, 1016, 5), // "state"
QT_MOC_LITERAL(60, 1022, 35) // "on_cmapComboBox_currentIndexC..."

    },
    "DockFft\0fftSizeChanged\0\0size\0"
    "fftRateChanged\0fps\0fftWindowChanged\0"
    "window\0wfSpanChanged\0span_ms\0"
    "fftSplitChanged\0pct\0fftZoomChanged\0"
    "level\0fftAvgChanged\0gain\0pandapterRangeChanged\0"
    "min\0max\0waterfallRangeChanged\0"
    "resetFftZoom\0gotoFftCenter\0gotoDemodFreq\0"
    "fftColorChanged\0fftFillToggled\0fill\0"
    "fftPeakHoldToggled\0enable\0"
    "peakDetectionToggled\0enabled\0"
    "bandPlanChanged\0wfColormapChanged\0"
    "cmap\0setPandapterRange\0setWaterfallRange\0"
    "setWfResolution\0msec_per_line\0"
    "setZoomLevel\0on_fftSizeComboBox_currentIndexChanged\0"
    "index\0on_fftRateComboBox_currentIndexChanged\0"
    "on_fftWinComboBox_currentIndexChanged\0"
    "on_wfSpanComboBox_currentIndexChanged\0"
    "on_fftSplitSlider_valueChanged\0value\0"
    "on_fftAvgSlider_valueChanged\0"
    "on_fftZoomSlider_valueChanged\0"
    "on_pandRangeSlider_valuesChanged\0"
    "on_wfRangeSlider_valuesChanged\0"
    "on_resetButton_clicked\0on_centerButton_clicked\0"
    "on_demodButton_clicked\0"
    "on_colorPicker_colorChanged\0"
    "on_fillButton_toggled\0checked\0"
    "on_peakHoldButton_toggled\0"
    "on_peakDetectionButton_toggled\0"
    "on_lockButton_toggled\0"
    "on_bandPlanCheckbox_stateChanged\0state\0"
    "on_cmapComboBox_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockFft[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  219,    2, 0x06 /* Public */,
       4,    1,  222,    2, 0x06 /* Public */,
       6,    1,  225,    2, 0x06 /* Public */,
       8,    1,  228,    2, 0x06 /* Public */,
      10,    1,  231,    2, 0x06 /* Public */,
      12,    1,  234,    2, 0x06 /* Public */,
      14,    1,  237,    2, 0x06 /* Public */,
      16,    2,  240,    2, 0x06 /* Public */,
      19,    2,  245,    2, 0x06 /* Public */,
      20,    0,  250,    2, 0x06 /* Public */,
      21,    0,  251,    2, 0x06 /* Public */,
      22,    0,  252,    2, 0x06 /* Public */,
      23,    1,  253,    2, 0x06 /* Public */,
      24,    1,  256,    2, 0x06 /* Public */,
      26,    1,  259,    2, 0x06 /* Public */,
      28,    1,  262,    2, 0x06 /* Public */,
      30,    1,  265,    2, 0x06 /* Public */,
      31,    1,  268,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      33,    2,  271,    2, 0x0a /* Public */,
      34,    2,  276,    2, 0x0a /* Public */,
      35,    1,  281,    2, 0x0a /* Public */,
      37,    1,  284,    2, 0x0a /* Public */,
      38,    1,  287,    2, 0x08 /* Private */,
      40,    1,  290,    2, 0x08 /* Private */,
      41,    1,  293,    2, 0x08 /* Private */,
      42,    1,  296,    2, 0x08 /* Private */,
      43,    1,  299,    2, 0x08 /* Private */,
      45,    1,  302,    2, 0x08 /* Private */,
      46,    1,  305,    2, 0x08 /* Private */,
      47,    2,  308,    2, 0x08 /* Private */,
      48,    2,  313,    2, 0x08 /* Private */,
      49,    0,  318,    2, 0x08 /* Private */,
      50,    0,  319,    2, 0x08 /* Private */,
      51,    0,  320,    2, 0x08 /* Private */,
      52,    1,  321,    2, 0x08 /* Private */,
      53,    1,  324,    2, 0x08 /* Private */,
      55,    1,  327,    2, 0x08 /* Private */,
      56,    1,  330,    2, 0x08 /* Private */,
      57,    1,  333,    2, 0x08 /* Private */,
      58,    1,  336,    2, 0x08 /* Private */,
      60,    1,  339,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::ULongLong,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void, QMetaType::Float,   15,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   17,   18,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::QString,   32,

 // slots: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   17,   18,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   17,   18,
    QMetaType::Void, QMetaType::ULongLong,   36,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Void, QMetaType::Int,   39,

       0        // eod
};

void DockFft::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockFft *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fftSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->fftRateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->fftWindowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->wfSpanChanged((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 4: _t->fftSplitChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->fftZoomChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->fftAvgChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->pandapterRangeChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 8: _t->waterfallRangeChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 9: _t->resetFftZoom(); break;
        case 10: _t->gotoFftCenter(); break;
        case 11: _t->gotoDemodFreq(); break;
        case 12: _t->fftColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 13: _t->fftFillToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->fftPeakHoldToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->peakDetectionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->bandPlanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->wfColormapChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->setPandapterRange((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 19: _t->setWaterfallRange((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 20: _t->setWfResolution((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 21: _t->setZoomLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->on_fftSizeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_fftRateComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_fftWinComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_wfSpanComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_fftSplitSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->on_fftAvgSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->on_fftZoomSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->on_pandRangeSlider_valuesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 30: _t->on_wfRangeSlider_valuesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->on_resetButton_clicked(); break;
        case 32: _t->on_centerButton_clicked(); break;
        case 33: _t->on_demodButton_clicked(); break;
        case 34: _t->on_colorPicker_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 35: _t->on_fillButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->on_peakHoldButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->on_peakDetectionButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->on_lockButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->on_bandPlanCheckbox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->on_cmapComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockFft::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::fftSizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockFft::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::fftRateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockFft::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::fftWindowChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DockFft::*)(quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::wfSpanChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DockFft::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::fftSplitChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DockFft::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::fftZoomChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DockFft::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::fftAvgChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DockFft::*)(float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::pandapterRangeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DockFft::*)(float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::waterfallRangeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DockFft::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::resetFftZoom)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DockFft::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::gotoFftCenter)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DockFft::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::gotoDemodFreq)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DockFft::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::fftColorChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DockFft::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::fftFillToggled)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DockFft::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::fftPeakHoldToggled)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DockFft::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::peakDetectionToggled)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DockFft::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::bandPlanChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (DockFft::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFft::wfColormapChanged)) {
                *result = 17;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DockFft::staticMetaObject = { {
    &QDockWidget::staticMetaObject,
    qt_meta_stringdata_DockFft.data,
    qt_meta_data_DockFft,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DockFft::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockFft::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DockFft.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int DockFft::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void DockFft::fftSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DockFft::fftRateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DockFft::fftWindowChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DockFft::wfSpanChanged(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DockFft::fftSplitChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DockFft::fftZoomChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DockFft::fftAvgChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DockFft::pandapterRangeChanged(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DockFft::waterfallRangeChanged(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DockFft::resetFftZoom()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void DockFft::gotoFftCenter()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void DockFft::gotoDemodFreq()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void DockFft::fftColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DockFft::fftFillToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DockFft::fftPeakHoldToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DockFft::peakDetectionToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DockFft::bandPlanChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DockFft::wfColormapChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
