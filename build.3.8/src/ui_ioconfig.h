/********************************************************************************
** Form generated from reading UI file 'ioconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IOCONFIG_H
#define UI_IOCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CIoConfig
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxInput;
    QFormLayout *formLayout;
    QLabel *inDevLabel1;
    QComboBox *inDevCombo;
    QLabel *inDevLabel2;
    QLabel *inSrLabel;
    QComboBox *inSrCombo;
    QLabel *loLabel;
    QDoubleSpinBox *loSpinBox;
    QLineEdit *inDevEdit;
    QDoubleSpinBox *bwSpinBox;
    QLabel *bwLabel;
    QLabel *label;
    QComboBox *decimCombo;
    QLabel *label_2;
    QLabel *sampRateLabel;
    QFrame *line;
    QGroupBox *groupBoxOutput;
    QFormLayout *formLayout_2;
    QLabel *outDevLabel;
    QComboBox *outDevCombo;
    QLabel *outSrLabel;
    QComboBox *outSrCombo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CIoConfig)
    {
        if (CIoConfig->objectName().isEmpty())
            CIoConfig->setObjectName(QString::fromUtf8("CIoConfig"));
        CIoConfig->resize(322, 438);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/flash.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CIoConfig->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CIoConfig);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBoxInput = new QGroupBox(CIoConfig);
        groupBoxInput->setObjectName(QString::fromUtf8("groupBoxInput"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        groupBoxInput->setFont(font);
        groupBoxInput->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBoxInput->setFlat(false);
        formLayout = new QFormLayout(groupBoxInput);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inDevLabel1 = new QLabel(groupBoxInput);
        inDevLabel1->setObjectName(QString::fromUtf8("inDevLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inDevLabel1->sizePolicy().hasHeightForWidth());
        inDevLabel1->setSizePolicy(sizePolicy);
        inDevLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, inDevLabel1);

        inDevCombo = new QComboBox(groupBoxInput);
        inDevCombo->setObjectName(QString::fromUtf8("inDevCombo"));
        inDevCombo->setEnabled(true);
        inDevCombo->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        inDevCombo->setMinimumContentsLength(15);

        formLayout->setWidget(0, QFormLayout::FieldRole, inDevCombo);

        inDevLabel2 = new QLabel(groupBoxInput);
        inDevLabel2->setObjectName(QString::fromUtf8("inDevLabel2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, inDevLabel2);

        inSrLabel = new QLabel(groupBoxInput);
        inSrLabel->setObjectName(QString::fromUtf8("inSrLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, inSrLabel);

        inSrCombo = new QComboBox(groupBoxInput);
        inSrCombo->setObjectName(QString::fromUtf8("inSrCombo"));
        inSrCombo->setEditable(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, inSrCombo);

        loLabel = new QLabel(groupBoxInput);
        loLabel->setObjectName(QString::fromUtf8("loLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, loLabel);

        loSpinBox = new QDoubleSpinBox(groupBoxInput);
        loSpinBox->setObjectName(QString::fromUtf8("loSpinBox"));
        loSpinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        loSpinBox->setDecimals(6);
        loSpinBox->setMinimum(-500000.000000000000000);
        loSpinBox->setMaximum(500000.000000000000000);

        formLayout->setWidget(6, QFormLayout::FieldRole, loSpinBox);

        inDevEdit = new QLineEdit(groupBoxInput);
        inDevEdit->setObjectName(QString::fromUtf8("inDevEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, inDevEdit);

        bwSpinBox = new QDoubleSpinBox(groupBoxInput);
        bwSpinBox->setObjectName(QString::fromUtf8("bwSpinBox"));
        bwSpinBox->setDecimals(6);
        bwSpinBox->setMaximum(100.000000000000000);
        bwSpinBox->setSingleStep(0.100000000000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, bwSpinBox);

        bwLabel = new QLabel(groupBoxInput);
        bwLabel->setObjectName(QString::fromUtf8("bwLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, bwLabel);

        label = new QLabel(groupBoxInput);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        decimCombo = new QComboBox(groupBoxInput);
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->setObjectName(QString::fromUtf8("decimCombo"));

        formLayout->setWidget(3, QFormLayout::FieldRole, decimCombo);

        label_2 = new QLabel(groupBoxInput);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        sampRateLabel = new QLabel(groupBoxInput);
        sampRateLabel->setObjectName(QString::fromUtf8("sampRateLabel"));
        sampRateLabel->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, sampRateLabel);


        verticalLayout->addWidget(groupBoxInput);

        line = new QFrame(CIoConfig);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        groupBoxOutput = new QGroupBox(CIoConfig);
        groupBoxOutput->setObjectName(QString::fromUtf8("groupBoxOutput"));
        formLayout_2 = new QFormLayout(groupBoxOutput);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        outDevLabel = new QLabel(groupBoxOutput);
        outDevLabel->setObjectName(QString::fromUtf8("outDevLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, outDevLabel);

        outDevCombo = new QComboBox(groupBoxOutput);
        outDevCombo->addItem(QString());
        outDevCombo->setObjectName(QString::fromUtf8("outDevCombo"));
        outDevCombo->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        outDevCombo->setMinimumContentsLength(15);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, outDevCombo);

        outSrLabel = new QLabel(groupBoxOutput);
        outSrLabel->setObjectName(QString::fromUtf8("outSrLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, outSrLabel);

        outSrCombo = new QComboBox(groupBoxOutput);
        outSrCombo->addItem(QString());
        outSrCombo->setObjectName(QString::fromUtf8("outSrCombo"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, outSrCombo);


        verticalLayout->addWidget(groupBoxOutput);

        buttonBox = new QDialogButtonBox(CIoConfig);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(inDevCombo, inDevEdit);
        QWidget::setTabOrder(inDevEdit, inSrCombo);
        QWidget::setTabOrder(inSrCombo, decimCombo);
        QWidget::setTabOrder(decimCombo, bwSpinBox);
        QWidget::setTabOrder(bwSpinBox, loSpinBox);
        QWidget::setTabOrder(loSpinBox, outDevCombo);
        QWidget::setTabOrder(outDevCombo, outSrCombo);

        retranslateUi(CIoConfig);
        QObject::connect(buttonBox, SIGNAL(accepted()), CIoConfig, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CIoConfig, SLOT(reject()));

        QMetaObject::connectSlotsByName(CIoConfig);
    } // setupUi

    void retranslateUi(QDialog *CIoConfig)
    {
        CIoConfig->setWindowTitle(QApplication::translate("CIoConfig", "Configure I/O devices", nullptr));
        groupBoxInput->setTitle(QApplication::translate("CIoConfig", "I/Q input", nullptr));
        inDevLabel1->setText(QApplication::translate("CIoConfig", "Device", nullptr));
#ifndef QT_NO_TOOLTIP
        inDevCombo->setToolTip(QApplication::translate("CIoConfig", "Select an input device", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        inDevLabel2->setToolTip(QApplication::translate("CIoConfig", "Device arguments", nullptr));
#endif // QT_NO_TOOLTIP
        inDevLabel2->setText(QApplication::translate("CIoConfig", "Device string", nullptr));
        inSrLabel->setText(QApplication::translate("CIoConfig", "Input rate", nullptr));
#ifndef QT_NO_TOOLTIP
        inSrCombo->setToolTip(QApplication::translate("CIoConfig", "Select the sample rate of the input source", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        loLabel->setToolTip(QApplication::translate("CIoConfig", "LNB LO frequency. Use negative frequency for upconverters.", nullptr));
#endif // QT_NO_TOOLTIP
        loLabel->setText(QApplication::translate("CIoConfig", "LNB LO", nullptr));
#ifndef QT_NO_TOOLTIP
        loSpinBox->setToolTip(QApplication::translate("CIoConfig", "LNB LO frequency. Use negative frequency for upconverters.", nullptr));
#endif // QT_NO_TOOLTIP
        loSpinBox->setSuffix(QApplication::translate("CIoConfig", " MHz", nullptr));
#ifndef QT_NO_TOOLTIP
        inDevEdit->setToolTip(QApplication::translate("CIoConfig", "<html><head/><body><p>The device argument is a delimited string used to locate devices on your system. Use the device id or name (if applicable) to specify a certain device or list of devices. If left blank, the first device found will be used.</p><p>Examples (some arguments may be optional):</p><p>fcd=0<br/>rtl=0<br/>rtl=0,rtl_xtal=28.80001e6,tuner_xtal=26e6,buffers=64 ...<br/>rtl_tcp=127.0.0.1:1234,psize=16384<br/>plutosdr,uri=usb:6.36.5<br/>file=/path/to/file.ext,freq=428e6,rate=1e6,repeat=true,throttle=true ... </p><p>You can test the device strings in gnuradio-companion.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        inDevEdit->setText(QString());
#ifndef QT_NO_TOOLTIP
        bwSpinBox->setToolTip(QApplication::translate("CIoConfig", "Analog bandwidth (leave at 0 for default)", nullptr));
#endif // QT_NO_TOOLTIP
        bwSpinBox->setSuffix(QApplication::translate("CIoConfig", " MHz", nullptr));
#ifndef QT_NO_TOOLTIP
        bwLabel->setToolTip(QApplication::translate("CIoConfig", "Analog bandwidth (leave at 0 for default)", nullptr));
#endif // QT_NO_TOOLTIP
        bwLabel->setText(QApplication::translate("CIoConfig", "Bandwidth", nullptr));
        label->setText(QApplication::translate("CIoConfig", "Decimation", nullptr));
        decimCombo->setItemText(0, QApplication::translate("CIoConfig", "None", nullptr));
        decimCombo->setItemText(1, QApplication::translate("CIoConfig", "2", nullptr));
        decimCombo->setItemText(2, QApplication::translate("CIoConfig", "4", nullptr));
        decimCombo->setItemText(3, QApplication::translate("CIoConfig", "8", nullptr));
        decimCombo->setItemText(4, QApplication::translate("CIoConfig", "16", nullptr));
        decimCombo->setItemText(5, QApplication::translate("CIoConfig", "32", nullptr));
        decimCombo->setItemText(6, QApplication::translate("CIoConfig", "64", nullptr));
        decimCombo->setItemText(7, QApplication::translate("CIoConfig", "128", nullptr));
        decimCombo->setItemText(8, QApplication::translate("CIoConfig", "256", nullptr));
        decimCombo->setItemText(9, QApplication::translate("CIoConfig", "512", nullptr));

#ifndef QT_NO_TOOLTIP
        decimCombo->setToolTip(QApplication::translate("CIoConfig", "Input decimation", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("CIoConfig", "Sample rate", nullptr));
#ifndef QT_NO_TOOLTIP
        sampRateLabel->setToolTip(QApplication::translate("CIoConfig", "The sample rate after decimation", nullptr));
#endif // QT_NO_TOOLTIP
        sampRateLabel->setText(QApplication::translate("CIoConfig", " 0 Msps", nullptr));
        groupBoxOutput->setTitle(QApplication::translate("CIoConfig", "Audio output", nullptr));
        outDevLabel->setText(QApplication::translate("CIoConfig", "Device", nullptr));
        outDevCombo->setItemText(0, QApplication::translate("CIoConfig", "Default", nullptr));

#ifndef QT_NO_TOOLTIP
        outDevCombo->setToolTip(QApplication::translate("CIoConfig", "Select which device to use for audio output.\n"
"Leave it at default unless you know what you are doing.", nullptr));
#endif // QT_NO_TOOLTIP
        outSrLabel->setText(QApplication::translate("CIoConfig", "Sample rate", nullptr));
        outSrCombo->setItemText(0, QApplication::translate("CIoConfig", "48 kHz", nullptr));

#ifndef QT_NO_TOOLTIP
        outSrCombo->setToolTip(QApplication::translate("CIoConfig", "Select the audio sample rate", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class CIoConfig: public Ui_CIoConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IOCONFIG_H
