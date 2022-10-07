/****************************************************************************
** Meta object code from reading C++ file 'mainwindow_touch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "applications/gqrx/mainwindow_touch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow_touch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[135];
    char stringdata0[1837];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "setNewFrequency"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "rx_freq"
QT_MOC_LITERAL(4, 36, 14), // "loadConfigSlot"
QT_MOC_LITERAL(5, 51, 7), // "cfgfile"
QT_MOC_LITERAL(6, 59, 8), // "setLnbLo"
QT_MOC_LITERAL(7, 68, 8), // "freq_mhz"
QT_MOC_LITERAL(8, 77, 10), // "setAntenna"
QT_MOC_LITERAL(9, 88, 7), // "antenna"
QT_MOC_LITERAL(10, 96, 15), // "setFilterOffset"
QT_MOC_LITERAL(11, 112, 7), // "freq_hz"
QT_MOC_LITERAL(12, 120, 7), // "setGain"
QT_MOC_LITERAL(13, 128, 4), // "name"
QT_MOC_LITERAL(14, 133, 4), // "gain"
QT_MOC_LITERAL(15, 138, 11), // "setAutoGain"
QT_MOC_LITERAL(16, 150, 7), // "enabled"
QT_MOC_LITERAL(17, 158, 11), // "setFreqCorr"
QT_MOC_LITERAL(18, 170, 3), // "ppm"
QT_MOC_LITERAL(19, 174, 9), // "setIqSwap"
QT_MOC_LITERAL(20, 184, 8), // "reversed"
QT_MOC_LITERAL(21, 193, 10), // "setDcBlock"
QT_MOC_LITERAL(22, 204, 11), // "setDcCancel"
QT_MOC_LITERAL(23, 216, 12), // "setIqBalance"
QT_MOC_LITERAL(24, 229, 15), // "setIgnoreLimits"
QT_MOC_LITERAL(25, 245, 13), // "ignore_limits"
QT_MOC_LITERAL(26, 259, 16), // "setFreqCtrlReset"
QT_MOC_LITERAL(27, 276, 18), // "setInvertScrolling"
QT_MOC_LITERAL(28, 295, 11), // "selectDemod"
QT_MOC_LITERAL(29, 307, 5), // "demod"
QT_MOC_LITERAL(30, 313, 5), // "index"
QT_MOC_LITERAL(31, 319, 11), // "setFmMaxdev"
QT_MOC_LITERAL(32, 331, 7), // "max_dev"
QT_MOC_LITERAL(33, 339, 9), // "setFmEmph"
QT_MOC_LITERAL(34, 349, 3), // "tau"
QT_MOC_LITERAL(35, 353, 8), // "setAmDcr"
QT_MOC_LITERAL(36, 362, 11), // "setCwOffset"
QT_MOC_LITERAL(37, 374, 6), // "offset"
QT_MOC_LITERAL(38, 381, 12), // "setAmSyncDcr"
QT_MOC_LITERAL(39, 394, 14), // "setAmSyncPllBw"
QT_MOC_LITERAL(40, 409, 6), // "pll_bw"
QT_MOC_LITERAL(41, 416, 8), // "setAgcOn"
QT_MOC_LITERAL(42, 425, 6), // "agc_on"
QT_MOC_LITERAL(43, 432, 10), // "setAgcHang"
QT_MOC_LITERAL(44, 443, 8), // "use_hang"
QT_MOC_LITERAL(45, 452, 15), // "setAgcThreshold"
QT_MOC_LITERAL(46, 468, 9), // "threshold"
QT_MOC_LITERAL(47, 478, 11), // "setAgcSlope"
QT_MOC_LITERAL(48, 490, 6), // "factor"
QT_MOC_LITERAL(49, 497, 11), // "setAgcDecay"
QT_MOC_LITERAL(50, 509, 4), // "msec"
QT_MOC_LITERAL(51, 514, 10), // "setAgcGain"
QT_MOC_LITERAL(52, 525, 15), // "setNoiseBlanker"
QT_MOC_LITERAL(53, 541, 4), // "nbid"
QT_MOC_LITERAL(54, 546, 2), // "on"
QT_MOC_LITERAL(55, 549, 11), // "setSqlLevel"
QT_MOC_LITERAL(56, 561, 8), // "level_db"
QT_MOC_LITERAL(57, 570, 15), // "setSqlLevelAuto"
QT_MOC_LITERAL(58, 586, 12), // "setAudioGain"
QT_MOC_LITERAL(59, 599, 11), // "setPassband"
QT_MOC_LITERAL(60, 611, 9), // "bandwidth"
QT_MOC_LITERAL(61, 621, 13), // "startAudioRec"
QT_MOC_LITERAL(62, 635, 8), // "filename"
QT_MOC_LITERAL(63, 644, 12), // "stopAudioRec"
QT_MOC_LITERAL(64, 657, 18), // "startAudioPlayback"
QT_MOC_LITERAL(65, 676, 17), // "stopAudioPlayback"
QT_MOC_LITERAL(66, 694, 16), // "startAudioStream"
QT_MOC_LITERAL(67, 711, 8), // "udp_host"
QT_MOC_LITERAL(68, 720, 8), // "udp_port"
QT_MOC_LITERAL(69, 729, 6), // "stereo"
QT_MOC_LITERAL(70, 736, 18), // "stopAudioStreaming"
QT_MOC_LITERAL(71, 755, 16), // "startIqRecording"
QT_MOC_LITERAL(72, 772, 6), // "recdir"
QT_MOC_LITERAL(73, 779, 15), // "stopIqRecording"
QT_MOC_LITERAL(74, 795, 15), // "startIqPlayback"
QT_MOC_LITERAL(75, 811, 8), // "samprate"
QT_MOC_LITERAL(76, 820, 11), // "center_freq"
QT_MOC_LITERAL(77, 832, 14), // "stopIqPlayback"
QT_MOC_LITERAL(78, 847, 10), // "seekIqFile"
QT_MOC_LITERAL(79, 858, 8), // "seek_pos"
QT_MOC_LITERAL(80, 867, 12), // "setIqFftSize"
QT_MOC_LITERAL(81, 880, 4), // "size"
QT_MOC_LITERAL(82, 885, 12), // "setIqFftRate"
QT_MOC_LITERAL(83, 898, 3), // "fps"
QT_MOC_LITERAL(84, 902, 14), // "setIqFftWindow"
QT_MOC_LITERAL(85, 917, 4), // "type"
QT_MOC_LITERAL(86, 922, 13), // "setIqFftSplit"
QT_MOC_LITERAL(87, 936, 6), // "pct_wf"
QT_MOC_LITERAL(88, 943, 11), // "setIqFftAvg"
QT_MOC_LITERAL(89, 955, 3), // "avg"
QT_MOC_LITERAL(90, 959, 15), // "setAudioFftRate"
QT_MOC_LITERAL(91, 975, 11), // "setFftColor"
QT_MOC_LITERAL(92, 987, 5), // "color"
QT_MOC_LITERAL(93, 993, 10), // "setFftFill"
QT_MOC_LITERAL(94, 1004, 6), // "enable"
QT_MOC_LITERAL(95, 1011, 16), // "setPeakDetection"
QT_MOC_LITERAL(96, 1028, 14), // "setFftPeakHold"
QT_MOC_LITERAL(97, 1043, 13), // "setWfTimeSpan"
QT_MOC_LITERAL(98, 1057, 7), // "span_ms"
QT_MOC_LITERAL(99, 1065, 9), // "setWfSize"
QT_MOC_LITERAL(100, 1075, 23), // "on_plotter_newDemodFreq"
QT_MOC_LITERAL(101, 1099, 4), // "freq"
QT_MOC_LITERAL(102, 1104, 5), // "delta"
QT_MOC_LITERAL(103, 1110, 24), // "on_plotter_newFilterFreq"
QT_MOC_LITERAL(104, 1135, 3), // "low"
QT_MOC_LITERAL(105, 1139, 4), // "high"
QT_MOC_LITERAL(106, 1144, 13), // "setRdsDecoder"
QT_MOC_LITERAL(107, 1158, 7), // "checked"
QT_MOC_LITERAL(108, 1166, 19), // "onBookmarkActivated"
QT_MOC_LITERAL(109, 1186, 18), // "updateClusterSpots"
QT_MOC_LITERAL(110, 1205, 22), // "on_actionDSP_triggered"
QT_MOC_LITERAL(111, 1228, 27), // "on_actionIoConfig_triggered"
QT_MOC_LITERAL(112, 1256, 31), // "on_actionLoadSettings_triggered"
QT_MOC_LITERAL(113, 1288, 31), // "on_actionSaveSettings_triggered"
QT_MOC_LITERAL(114, 1320, 32), // "on_actionSaveWaterfall_triggered"
QT_MOC_LITERAL(115, 1353, 25), // "on_actionIqTool_triggered"
QT_MOC_LITERAL(116, 1379, 29), // "on_actionFullScreen_triggered"
QT_MOC_LITERAL(117, 1409, 32), // "on_actionRemoteControl_triggered"
QT_MOC_LITERAL(118, 1442, 31), // "on_actionRemoteConfig_triggered"
QT_MOC_LITERAL(119, 1474, 27), // "on_actionAFSK1200_triggered"
QT_MOC_LITERAL(120, 1502, 28), // "on_actionUserGroup_triggered"
QT_MOC_LITERAL(121, 1531, 23), // "on_actionNews_triggered"
QT_MOC_LITERAL(122, 1555, 33), // "on_actionRemoteProtocol_trigg..."
QT_MOC_LITERAL(123, 1589, 31), // "on_actionKbdShortcuts_triggered"
QT_MOC_LITERAL(124, 1621, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(125, 1646, 26), // "on_actionAboutQt_triggered"
QT_MOC_LITERAL(126, 1673, 30), // "on_actionAddBookmark_triggered"
QT_MOC_LITERAL(127, 1704, 29), // "on_actionDX_Cluster_triggered"
QT_MOC_LITERAL(128, 1734, 18), // "afsk1200win_closed"
QT_MOC_LITERAL(129, 1753, 15), // "firstTimeConfig"
QT_MOC_LITERAL(130, 1769, 14), // "decoderTimeout"
QT_MOC_LITERAL(131, 1784, 12), // "meterTimeout"
QT_MOC_LITERAL(132, 1797, 12), // "iqFftTimeout"
QT_MOC_LITERAL(133, 1810, 15), // "audioFftTimeout"
QT_MOC_LITERAL(134, 1826, 10) // "rdsTimeout"

    },
    "MainWindow\0setNewFrequency\0\0rx_freq\0"
    "loadConfigSlot\0cfgfile\0setLnbLo\0"
    "freq_mhz\0setAntenna\0antenna\0setFilterOffset\0"
    "freq_hz\0setGain\0name\0gain\0setAutoGain\0"
    "enabled\0setFreqCorr\0ppm\0setIqSwap\0"
    "reversed\0setDcBlock\0setDcCancel\0"
    "setIqBalance\0setIgnoreLimits\0ignore_limits\0"
    "setFreqCtrlReset\0setInvertScrolling\0"
    "selectDemod\0demod\0index\0setFmMaxdev\0"
    "max_dev\0setFmEmph\0tau\0setAmDcr\0"
    "setCwOffset\0offset\0setAmSyncDcr\0"
    "setAmSyncPllBw\0pll_bw\0setAgcOn\0agc_on\0"
    "setAgcHang\0use_hang\0setAgcThreshold\0"
    "threshold\0setAgcSlope\0factor\0setAgcDecay\0"
    "msec\0setAgcGain\0setNoiseBlanker\0nbid\0"
    "on\0setSqlLevel\0level_db\0setSqlLevelAuto\0"
    "setAudioGain\0setPassband\0bandwidth\0"
    "startAudioRec\0filename\0stopAudioRec\0"
    "startAudioPlayback\0stopAudioPlayback\0"
    "startAudioStream\0udp_host\0udp_port\0"
    "stereo\0stopAudioStreaming\0startIqRecording\0"
    "recdir\0stopIqRecording\0startIqPlayback\0"
    "samprate\0center_freq\0stopIqPlayback\0"
    "seekIqFile\0seek_pos\0setIqFftSize\0size\0"
    "setIqFftRate\0fps\0setIqFftWindow\0type\0"
    "setIqFftSplit\0pct_wf\0setIqFftAvg\0avg\0"
    "setAudioFftRate\0setFftColor\0color\0"
    "setFftFill\0enable\0setPeakDetection\0"
    "setFftPeakHold\0setWfTimeSpan\0span_ms\0"
    "setWfSize\0on_plotter_newDemodFreq\0"
    "freq\0delta\0on_plotter_newFilterFreq\0"
    "low\0high\0setRdsDecoder\0checked\0"
    "onBookmarkActivated\0updateClusterSpots\0"
    "on_actionDSP_triggered\0"
    "on_actionIoConfig_triggered\0"
    "on_actionLoadSettings_triggered\0"
    "on_actionSaveSettings_triggered\0"
    "on_actionSaveWaterfall_triggered\0"
    "on_actionIqTool_triggered\0"
    "on_actionFullScreen_triggered\0"
    "on_actionRemoteControl_triggered\0"
    "on_actionRemoteConfig_triggered\0"
    "on_actionAFSK1200_triggered\0"
    "on_actionUserGroup_triggered\0"
    "on_actionNews_triggered\0"
    "on_actionRemoteProtocol_triggered\0"
    "on_actionKbdShortcuts_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionAboutQt_triggered\0"
    "on_actionAddBookmark_triggered\0"
    "on_actionDX_Cluster_triggered\0"
    "afsk1200win_closed\0firstTimeConfig\0"
    "decoderTimeout\0meterTimeout\0iqFftTimeout\0"
    "audioFftTimeout\0rdsTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      87,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  449,    2, 0x0a /* Public */,
       4,    1,  452,    2, 0x08 /* Private */,
       6,    1,  455,    2, 0x08 /* Private */,
       8,    1,  458,    2, 0x08 /* Private */,
      10,    1,  461,    2, 0x08 /* Private */,
      12,    2,  464,    2, 0x08 /* Private */,
      15,    1,  469,    2, 0x08 /* Private */,
      17,    1,  472,    2, 0x08 /* Private */,
      19,    1,  475,    2, 0x08 /* Private */,
      21,    1,  478,    2, 0x08 /* Private */,
      22,    1,  481,    2, 0x08 /* Private */,
      23,    1,  484,    2, 0x08 /* Private */,
      24,    1,  487,    2, 0x08 /* Private */,
      26,    1,  490,    2, 0x08 /* Private */,
      27,    1,  493,    2, 0x08 /* Private */,
      28,    1,  496,    2, 0x08 /* Private */,
      28,    1,  499,    2, 0x08 /* Private */,
      31,    1,  502,    2, 0x08 /* Private */,
      33,    1,  505,    2, 0x08 /* Private */,
      35,    1,  508,    2, 0x08 /* Private */,
      36,    1,  511,    2, 0x08 /* Private */,
      38,    1,  514,    2, 0x08 /* Private */,
      39,    1,  517,    2, 0x08 /* Private */,
      41,    1,  520,    2, 0x08 /* Private */,
      43,    1,  523,    2, 0x08 /* Private */,
      45,    1,  526,    2, 0x08 /* Private */,
      47,    1,  529,    2, 0x08 /* Private */,
      49,    1,  532,    2, 0x08 /* Private */,
      51,    1,  535,    2, 0x08 /* Private */,
      52,    3,  538,    2, 0x08 /* Private */,
      55,    1,  545,    2, 0x08 /* Private */,
      57,    0,  548,    2, 0x08 /* Private */,
      58,    1,  549,    2, 0x08 /* Private */,
      59,    1,  552,    2, 0x08 /* Private */,
      61,    1,  555,    2, 0x08 /* Private */,
      63,    0,  558,    2, 0x08 /* Private */,
      64,    1,  559,    2, 0x08 /* Private */,
      65,    0,  562,    2, 0x08 /* Private */,
      66,    3,  563,    2, 0x08 /* Private */,
      70,    0,  570,    2, 0x08 /* Private */,
      71,    1,  571,    2, 0x08 /* Private */,
      73,    0,  574,    2, 0x08 /* Private */,
      74,    3,  575,    2, 0x08 /* Private */,
      77,    0,  582,    2, 0x08 /* Private */,
      78,    1,  583,    2, 0x08 /* Private */,
      80,    1,  586,    2, 0x08 /* Private */,
      82,    1,  589,    2, 0x08 /* Private */,
      84,    1,  592,    2, 0x08 /* Private */,
      86,    1,  595,    2, 0x08 /* Private */,
      88,    1,  598,    2, 0x08 /* Private */,
      90,    1,  601,    2, 0x08 /* Private */,
      91,    1,  604,    2, 0x08 /* Private */,
      93,    1,  607,    2, 0x08 /* Private */,
      95,    1,  610,    2, 0x08 /* Private */,
      96,    1,  613,    2, 0x08 /* Private */,
      97,    1,  616,    2, 0x08 /* Private */,
      99,    0,  619,    2, 0x08 /* Private */,
     100,    2,  620,    2, 0x08 /* Private */,
     103,    2,  625,    2, 0x08 /* Private */,
     106,    1,  630,    2, 0x08 /* Private */,
     108,    3,  633,    2, 0x08 /* Private */,
     109,    0,  640,    2, 0x08 /* Private */,
     110,    1,  641,    2, 0x08 /* Private */,
     111,    0,  644,    2, 0x08 /* Private */,
     112,    0,  645,    2, 0x08 /* Private */,
     113,    0,  646,    2, 0x08 /* Private */,
     114,    0,  647,    2, 0x08 /* Private */,
     115,    0,  648,    2, 0x08 /* Private */,
     116,    1,  649,    2, 0x08 /* Private */,
     117,    1,  652,    2, 0x08 /* Private */,
     118,    0,  655,    2, 0x08 /* Private */,
     119,    0,  656,    2, 0x08 /* Private */,
     120,    0,  657,    2, 0x08 /* Private */,
     121,    0,  658,    2, 0x08 /* Private */,
     122,    0,  659,    2, 0x08 /* Private */,
     123,    0,  660,    2, 0x08 /* Private */,
     124,    0,  661,    2, 0x08 /* Private */,
     125,    0,  662,    2, 0x08 /* Private */,
     126,    0,  663,    2, 0x08 /* Private */,
     127,    0,  664,    2, 0x08 /* Private */,
     128,    0,  665,    2, 0x08 /* Private */,
     129,    0,  666,    2, 0x08 /* Private */,
     130,    0,  667,    2, 0x08 /* Private */,
     131,    0,  668,    2, 0x08 /* Private */,
     132,    0,  669,    2, 0x08 /* Private */,
     133,    0,  670,    2, 0x08 /* Private */,
     134,    0,  671,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,   13,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::Float,   32,
    QMetaType::Void, QMetaType::Double,   34,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Float,   40,
    QMetaType::Void, QMetaType::Bool,   42,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Float,   53,   54,   46,
    QMetaType::Void, QMetaType::Double,   56,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Float,   14,
    QMetaType::Void, QMetaType::Int,   60,
    QMetaType::Void, QMetaType::QString,   62,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   62,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,   67,   68,   69,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   72,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::LongLong,   62,   75,   76,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   79,
    QMetaType::Void, QMetaType::Int,   81,
    QMetaType::Void, QMetaType::Int,   83,
    QMetaType::Void, QMetaType::Int,   85,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Float,   89,
    QMetaType::Void, QMetaType::Int,   83,
    QMetaType::Void, QMetaType::QColor,   92,
    QMetaType::Void, QMetaType::Bool,   94,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   94,
    QMetaType::Void, QMetaType::ULongLong,   98,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,  101,  102,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  104,  105,
    QMetaType::Void, QMetaType::Bool,  107,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString, QMetaType::Int,  101,   29,   60,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  107,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  107,
    QMetaType::Void, QMetaType::Bool,  107,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setNewFrequency((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->loadConfigSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setLnbLo((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setAntenna((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setFilterOffset((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->setGain((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->setAutoGain((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setFreqCorr((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setIqSwap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setDcBlock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setDcCancel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setIqBalance((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setIgnoreLimits((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setFreqCtrlReset((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setInvertScrolling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->selectDemod((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->selectDemod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setFmMaxdev((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->setFmEmph((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->setAmDcr((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->setCwOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->setAmSyncDcr((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->setAmSyncPllBw((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 23: _t->setAgcOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->setAgcHang((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->setAgcThreshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->setAgcSlope((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->setAgcDecay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->setAgcGain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->setNoiseBlanker((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 30: _t->setSqlLevel((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 31: { double _r = _t->setSqlLevelAuto();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->setAudioGain((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 33: _t->setPassband((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->startAudioRec((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->stopAudioRec(); break;
        case 36: _t->startAudioPlayback((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 37: _t->stopAudioPlayback(); break;
        case 38: _t->startAudioStream((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 39: _t->stopAudioStreaming(); break;
        case 40: _t->startIqRecording((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: _t->stopIqRecording(); break;
        case 42: _t->startIqPlayback((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 43: _t->stopIqPlayback(); break;
        case 44: _t->seekIqFile((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 45: _t->setIqFftSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->setIqFftRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->setIqFftWindow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->setIqFftSplit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->setIqFftAvg((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 50: _t->setAudioFftRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->setFftColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 52: _t->setFftFill((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->setPeakDetection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->setFftPeakHold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->setWfTimeSpan((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 56: _t->setWfSize(); break;
        case 57: _t->on_plotter_newDemodFreq((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 58: _t->on_plotter_newFilterFreq((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 59: _t->setRdsDecoder((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->onBookmarkActivated((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 61: _t->updateClusterSpots(); break;
        case 62: _t->on_actionDSP_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: { int _r = _t->on_actionIoConfig_triggered();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 64: _t->on_actionLoadSettings_triggered(); break;
        case 65: _t->on_actionSaveSettings_triggered(); break;
        case 66: _t->on_actionSaveWaterfall_triggered(); break;
        case 67: _t->on_actionIqTool_triggered(); break;
        case 68: _t->on_actionFullScreen_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 69: _t->on_actionRemoteControl_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: _t->on_actionRemoteConfig_triggered(); break;
        case 71: _t->on_actionAFSK1200_triggered(); break;
        case 72: _t->on_actionUserGroup_triggered(); break;
        case 73: _t->on_actionNews_triggered(); break;
        case 74: _t->on_actionRemoteProtocol_triggered(); break;
        case 75: _t->on_actionKbdShortcuts_triggered(); break;
        case 76: _t->on_actionAbout_triggered(); break;
        case 77: _t->on_actionAboutQt_triggered(); break;
        case 78: _t->on_actionAddBookmark_triggered(); break;
        case 79: _t->on_actionDX_Cluster_triggered(); break;
        case 80: _t->afsk1200win_closed(); break;
        case 81: { int _r = _t->firstTimeConfig();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 82: _t->decoderTimeout(); break;
        case 83: _t->meterTimeout(); break;
        case 84: _t->iqFftTimeout(); break;
        case 85: _t->audioFftTimeout(); break;
        case 86: _t->rdsTimeout(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 87)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 87;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 87)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 87;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
