/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Finale - Copy (2)/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDotCalendarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDotCalendarENDCLASS = QtMocHelpers::stringData(
    "DotCalendar"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDotCalendarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject DotCalendar::staticMetaObject = { {
    QMetaObject::SuperData::link<QCalendarWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSDotCalendarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDotCalendarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDotCalendarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DotCalendar, std::true_type>
    >,
    nullptr
} };

void DotCalendar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *DotCalendar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DotCalendar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDotCalendarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCalendarWidget::qt_metacast(_clname);
}

int DotCalendar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCalendarWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "logoutRequested",
    "",
    "bacMotionStateChanged",
    "active",
    "fetchDeviceLocation",
    "mapObject",
    "fetchMyPosition",
    "on_btnNouveau_clicked",
    "on_btnAjouter_clicked",
    "on_btnAnnuler_Ajout_clicked",
    "on_btnModifier_clicked",
    "on_btnSave_clicked",
    "on_btnAnalyser_clicked",
    "on_btnSimulerBadge_clicked",
    "onRfidSerialDataReady",
    "on_btnSupprimer_clicked",
    "on_cbProjetStats_currentIndexChanged",
    "arg1",
    "on_btnFichePaie_clicked",
    "on_btnCommsSend_clicked",
    "on_btnLogout_clicked",
    "on_btnClient_clicked",
    "on_btn_ajouter_client_clicked",
    "on_btn_modifier_client_clicked",
    "on_btn_annuler_client_clicked",
    "on_btnNouveau_client_clicked",
    "onClientAdded",
    "matricule",
    "nom",
    "email",
    "type_contrat",
    "date_creation",
    "date_expiration",
    "telephone",
    "onClientModified",
    "row",
    "on_btnSave_add_clicked",
    "on_btnSave_mod_clicked",
    "exportStockExcel",
    "on_btnPrediction_clicked",
    "on_btnSave_Add_clicked",
    "on_btnSave_Mod_clicked",
    "handleMaintEditClicked",
    "handleMaintDeleteClicked",
    "goAffichage",
    "goAjout",
    "goModification",
    "goStatistiques",
    "on_prod_btnSave_Add_clicked",
    "on_prod_btnSave_Mod_clicked",
    "on_prod_btnUpload_Add_clicked",
    "on_prod_btnUpload_Mod_clicked",
    "applyProduitFilterAndSort",
    "on_prod_btnPdf_clicked",
    "on_prod_btnBacStatus_clicked",
    "on_prod_btnMap3D_clicked",
    "onGeminiPdfReply",
    "QNetworkReply*",
    "reply",
    "onProductImageDownloaded",
    "numSerie",
    "openStockMap3D",
    "on_prod_btnVideo3D_clicked",
    "on_prod_btn3DModel_clicked",
    "handleEditClicked",
    "handleDeleteClicked",
    "slot_toggleView",
    "on_pagination_cbSize_currentIndexChanged",
    "index",
    "on_pagination_btnPrev_clicked",
    "on_pagination_btnNext_clicked",
    "slot_toggleEmpView",
    "on_emp_pagination_cbSize_currentIndexChanged",
    "on_emp_pagination_btnPrev_clicked",
    "on_emp_pagination_btnNext_clicked",
    "slot_toggleStockView",
    "on_stock_pagination_cbSize_currentIndexChanged",
    "on_stock_pagination_btnPrev_clicked",
    "on_stock_pagination_btnNext_clicked",
    "slot_toggleClientView",
    "on_client_pagination_cbSize_currentIndexChanged",
    "on_client_pagination_btnPrev_clicked",
    "on_client_pagination_btnNext_clicked",
    "slot_toggleMaintView",
    "on_maint_pagination_cbSize_currentIndexChanged",
    "on_maint_pagination_btnPrev_clicked",
    "on_maint_pagination_btnNext_clicked",
    "slot_toggleCmdView",
    "on_cmd_pagination_cbSize_currentIndexChanged",
    "on_cmd_pagination_btnPrev_clicked",
    "on_cmd_pagination_btnNext_clicked",
    "loadCmdFromTableToForm",
    "QTableWidget*",
    "t",
    "on_btnSave_Mod_3_clicked",
    "on_btnSave_CmdMod_clicked",
    "on_btnCancel_Mod_3_clicked",
    "on_btnCancel_CmdMod_clicked",
    "on_btnMicrophone_clicked",
    "handleHighContrastToggle",
    "handleZoomInClicked",
    "handleZoomOutClicked",
    "onVoiceListeningStarted",
    "onVoiceListeningFinished",
    "onVoiceRecognized",
    "text",
    "onVoiceCommandRecognized",
    "command",
    "onVoiceError",
    "errorMsg",
    "onVoiceSpeechFinished",
    "handleVoiceAddIntervention",
    "handleVoiceModifyIntervention",
    "handleVoiceDeleteIntervention",
    "handleVoiceSearchIntervention",
    "searchTerm",
    "handleVoiceShowList",
    "handleVoiceExport",
    "handleVoiceHelp",
    "on_btnToggleSidebar_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      98,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  602,    2, 0x06,    1 /* Public */,
       3,    1,  603,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,  606,    2, 0x0a,    4 /* Public */,
       7,    0,  609,    2, 0x0a,    6 /* Public */,
       8,    0,  610,    2, 0x08,    7 /* Private */,
       9,    0,  611,    2, 0x08,    8 /* Private */,
      10,    0,  612,    2, 0x08,    9 /* Private */,
      11,    0,  613,    2, 0x08,   10 /* Private */,
      12,    0,  614,    2, 0x08,   11 /* Private */,
      13,    0,  615,    2, 0x08,   12 /* Private */,
      14,    0,  616,    2, 0x08,   13 /* Private */,
      15,    0,  617,    2, 0x08,   14 /* Private */,
      16,    0,  618,    2, 0x08,   15 /* Private */,
      17,    1,  619,    2, 0x08,   16 /* Private */,
      19,    0,  622,    2, 0x08,   18 /* Private */,
      20,    0,  623,    2, 0x08,   19 /* Private */,
      21,    0,  624,    2, 0x08,   20 /* Private */,
      22,    0,  625,    2, 0x08,   21 /* Private */,
      23,    0,  626,    2, 0x08,   22 /* Private */,
      24,    0,  627,    2, 0x08,   23 /* Private */,
      25,    0,  628,    2, 0x08,   24 /* Private */,
      26,    0,  629,    2, 0x08,   25 /* Private */,
      27,    7,  630,    2, 0x08,   26 /* Private */,
      35,    8,  645,    2, 0x08,   34 /* Private */,
      37,    0,  662,    2, 0x08,   43 /* Private */,
      38,    0,  663,    2, 0x08,   44 /* Private */,
      39,    0,  664,    2, 0x08,   45 /* Private */,
      40,    0,  665,    2, 0x08,   46 /* Private */,
      41,    0,  666,    2, 0x08,   47 /* Private */,
      42,    0,  667,    2, 0x08,   48 /* Private */,
      43,    0,  668,    2, 0x08,   49 /* Private */,
      44,    0,  669,    2, 0x08,   50 /* Private */,
      45,    0,  670,    2, 0x08,   51 /* Private */,
      46,    0,  671,    2, 0x08,   52 /* Private */,
      47,    0,  672,    2, 0x08,   53 /* Private */,
      48,    0,  673,    2, 0x08,   54 /* Private */,
      49,    0,  674,    2, 0x08,   55 /* Private */,
      50,    0,  675,    2, 0x08,   56 /* Private */,
      51,    0,  676,    2, 0x08,   57 /* Private */,
      52,    0,  677,    2, 0x08,   58 /* Private */,
      53,    0,  678,    2, 0x08,   59 /* Private */,
      54,    0,  679,    2, 0x08,   60 /* Private */,
      55,    0,  680,    2, 0x08,   61 /* Private */,
      56,    0,  681,    2, 0x08,   62 /* Private */,
      57,    1,  682,    2, 0x08,   63 /* Private */,
      60,    2,  685,    2, 0x08,   65 /* Private */,
      62,    0,  690,    2, 0x08,   68 /* Private */,
      63,    0,  691,    2, 0x08,   69 /* Private */,
      64,    0,  692,    2, 0x08,   70 /* Private */,
      65,    0,  693,    2, 0x08,   71 /* Private */,
      66,    0,  694,    2, 0x08,   72 /* Private */,
      67,    0,  695,    2, 0x08,   73 /* Private */,
      68,    1,  696,    2, 0x08,   74 /* Private */,
      70,    0,  699,    2, 0x08,   76 /* Private */,
      71,    0,  700,    2, 0x08,   77 /* Private */,
      72,    0,  701,    2, 0x08,   78 /* Private */,
      73,    1,  702,    2, 0x08,   79 /* Private */,
      74,    0,  705,    2, 0x08,   81 /* Private */,
      75,    0,  706,    2, 0x08,   82 /* Private */,
      76,    0,  707,    2, 0x08,   83 /* Private */,
      77,    1,  708,    2, 0x08,   84 /* Private */,
      78,    0,  711,    2, 0x08,   86 /* Private */,
      79,    0,  712,    2, 0x08,   87 /* Private */,
      80,    0,  713,    2, 0x08,   88 /* Private */,
      81,    1,  714,    2, 0x08,   89 /* Private */,
      82,    0,  717,    2, 0x08,   91 /* Private */,
      83,    0,  718,    2, 0x08,   92 /* Private */,
      84,    0,  719,    2, 0x08,   93 /* Private */,
      85,    1,  720,    2, 0x08,   94 /* Private */,
      86,    0,  723,    2, 0x08,   96 /* Private */,
      87,    0,  724,    2, 0x08,   97 /* Private */,
      88,    0,  725,    2, 0x08,   98 /* Private */,
      89,    1,  726,    2, 0x08,   99 /* Private */,
      90,    0,  729,    2, 0x08,  101 /* Private */,
      91,    0,  730,    2, 0x08,  102 /* Private */,
      92,    2,  731,    2, 0x08,  103 /* Private */,
      95,    0,  736,    2, 0x08,  106 /* Private */,
      96,    0,  737,    2, 0x08,  107 /* Private */,
      97,    0,  738,    2, 0x08,  108 /* Private */,
      98,    0,  739,    2, 0x08,  109 /* Private */,
      99,    0,  740,    2, 0x08,  110 /* Private */,
     100,    0,  741,    2, 0x08,  111 /* Private */,
     101,    0,  742,    2, 0x08,  112 /* Private */,
     102,    0,  743,    2, 0x08,  113 /* Private */,
     103,    0,  744,    2, 0x08,  114 /* Private */,
     104,    0,  745,    2, 0x08,  115 /* Private */,
     105,    1,  746,    2, 0x08,  116 /* Private */,
     107,    1,  749,    2, 0x08,  118 /* Private */,
     109,    1,  752,    2, 0x08,  120 /* Private */,
     111,    0,  755,    2, 0x08,  122 /* Private */,
     112,    0,  756,    2, 0x08,  123 /* Private */,
     113,    0,  757,    2, 0x08,  124 /* Private */,
     114,    0,  758,    2, 0x08,  125 /* Private */,
     115,    1,  759,    2, 0x08,  126 /* Private */,
     117,    0,  762,    2, 0x08,  128 /* Private */,
     118,    0,  763,    2, 0x08,  129 /* Private */,
     119,    0,  764,    2, 0x08,  130 /* Private */,
     120,    0,  765,    2, 0x08,  131 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    6,
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
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   28,   29,   30,   31,   32,   33,   34,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   36,   28,   29,   30,   31,   32,   33,   34,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void, 0x80000000 | 58, QMetaType::QString,   59,   61,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 93, QMetaType::Int,   94,   36,
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
    QMetaType::Void, QMetaType::QString,  106,
    QMetaType::Void, QMetaType::QString,  108,
    QMetaType::Void, QMetaType::QString,  110,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  116,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'logoutRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'bacMotionStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'fetchDeviceLocation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'fetchMyPosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnNouveau_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAjouter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAnnuler_Ajout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnModifier_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSave_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAnalyser_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSimulerBadge_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRfidSerialDataReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSupprimer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cbProjetStats_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_btnFichePaie_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnCommsSend_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnLogout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnClient_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_ajouter_client_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_modifier_client_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_annuler_client_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnNouveau_client_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClientAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onClientModified'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_btnSave_add_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSave_mod_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exportStockExcel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnPrediction_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSave_Add_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSave_Mod_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleMaintEditClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleMaintDeleteClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goAffichage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goAjout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goModification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goStatistiques'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_prod_btnSave_Add_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_prod_btnSave_Mod_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_prod_btnUpload_Add_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_prod_btnUpload_Mod_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'applyProduitFilterAndSort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_prod_btnPdf_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_prod_btnBacStatus_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_prod_btnMap3D_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onGeminiPdfReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'onProductImageDownloaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'openStockMap3D'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_prod_btnVideo3D_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_prod_btn3DModel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleEditClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleDeleteClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_toggleView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pagination_cbSize_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pagination_btnPrev_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pagination_btnNext_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_toggleEmpView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_emp_pagination_cbSize_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_emp_pagination_btnPrev_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_emp_pagination_btnNext_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_toggleStockView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stock_pagination_cbSize_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_stock_pagination_btnPrev_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stock_pagination_btnNext_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_toggleClientView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_client_pagination_cbSize_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_client_pagination_btnPrev_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_client_pagination_btnNext_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_toggleMaintView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_maint_pagination_cbSize_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_maint_pagination_btnPrev_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_maint_pagination_btnNext_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_toggleCmdView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cmd_pagination_cbSize_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_cmd_pagination_btnPrev_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cmd_pagination_btnNext_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadCmdFromTableToForm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btnSave_Mod_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSave_CmdMod_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnCancel_Mod_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnCancel_CmdMod_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnMicrophone_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleHighContrastToggle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleZoomInClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleZoomOutClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onVoiceListeningStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onVoiceListeningFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onVoiceRecognized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onVoiceCommandRecognized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onVoiceError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onVoiceSpeechFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleVoiceAddIntervention'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleVoiceModifyIntervention'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleVoiceDeleteIntervention'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleVoiceSearchIntervention'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'handleVoiceShowList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleVoiceExport'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleVoiceHelp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnToggleSidebar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logoutRequested(); break;
        case 1: _t->bacMotionStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->fetchDeviceLocation((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 3: _t->fetchMyPosition(); break;
        case 4: _t->on_btnNouveau_clicked(); break;
        case 5: _t->on_btnAjouter_clicked(); break;
        case 6: _t->on_btnAnnuler_Ajout_clicked(); break;
        case 7: _t->on_btnModifier_clicked(); break;
        case 8: _t->on_btnSave_clicked(); break;
        case 9: _t->on_btnAnalyser_clicked(); break;
        case 10: _t->on_btnSimulerBadge_clicked(); break;
        case 11: _t->onRfidSerialDataReady(); break;
        case 12: _t->on_btnSupprimer_clicked(); break;
        case 13: _t->on_cbProjetStats_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->on_btnFichePaie_clicked(); break;
        case 15: _t->on_btnCommsSend_clicked(); break;
        case 16: _t->on_btnLogout_clicked(); break;
        case 17: _t->on_btnClient_clicked(); break;
        case 18: _t->on_btn_ajouter_client_clicked(); break;
        case 19: _t->on_btn_modifier_client_clicked(); break;
        case 20: _t->on_btn_annuler_client_clicked(); break;
        case 21: _t->on_btnNouveau_client_clicked(); break;
        case 22: _t->onClientAdded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7]))); break;
        case 23: _t->onClientModified((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[8]))); break;
        case 24: _t->on_btnSave_add_clicked(); break;
        case 25: _t->on_btnSave_mod_clicked(); break;
        case 26: _t->exportStockExcel(); break;
        case 27: _t->on_btnPrediction_clicked(); break;
        case 28: _t->on_btnSave_Add_clicked(); break;
        case 29: _t->on_btnSave_Mod_clicked(); break;
        case 30: _t->handleMaintEditClicked(); break;
        case 31: _t->handleMaintDeleteClicked(); break;
        case 32: _t->goAffichage(); break;
        case 33: _t->goAjout(); break;
        case 34: _t->goModification(); break;
        case 35: _t->goStatistiques(); break;
        case 36: _t->on_prod_btnSave_Add_clicked(); break;
        case 37: _t->on_prod_btnSave_Mod_clicked(); break;
        case 38: _t->on_prod_btnUpload_Add_clicked(); break;
        case 39: _t->on_prod_btnUpload_Mod_clicked(); break;
        case 40: _t->applyProduitFilterAndSort(); break;
        case 41: _t->on_prod_btnPdf_clicked(); break;
        case 42: _t->on_prod_btnBacStatus_clicked(); break;
        case 43: _t->on_prod_btnMap3D_clicked(); break;
        case 44: _t->onGeminiPdfReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 45: _t->onProductImageDownloaded((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 46: _t->openStockMap3D(); break;
        case 47: _t->on_prod_btnVideo3D_clicked(); break;
        case 48: _t->on_prod_btn3DModel_clicked(); break;
        case 49: _t->handleEditClicked(); break;
        case 50: _t->handleDeleteClicked(); break;
        case 51: _t->slot_toggleView(); break;
        case 52: _t->on_pagination_cbSize_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 53: _t->on_pagination_btnPrev_clicked(); break;
        case 54: _t->on_pagination_btnNext_clicked(); break;
        case 55: _t->slot_toggleEmpView(); break;
        case 56: _t->on_emp_pagination_cbSize_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 57: _t->on_emp_pagination_btnPrev_clicked(); break;
        case 58: _t->on_emp_pagination_btnNext_clicked(); break;
        case 59: _t->slot_toggleStockView(); break;
        case 60: _t->on_stock_pagination_cbSize_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 61: _t->on_stock_pagination_btnPrev_clicked(); break;
        case 62: _t->on_stock_pagination_btnNext_clicked(); break;
        case 63: _t->slot_toggleClientView(); break;
        case 64: _t->on_client_pagination_cbSize_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 65: _t->on_client_pagination_btnPrev_clicked(); break;
        case 66: _t->on_client_pagination_btnNext_clicked(); break;
        case 67: _t->slot_toggleMaintView(); break;
        case 68: _t->on_maint_pagination_cbSize_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 69: _t->on_maint_pagination_btnPrev_clicked(); break;
        case 70: _t->on_maint_pagination_btnNext_clicked(); break;
        case 71: _t->slot_toggleCmdView(); break;
        case 72: _t->on_cmd_pagination_cbSize_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 73: _t->on_cmd_pagination_btnPrev_clicked(); break;
        case 74: _t->on_cmd_pagination_btnNext_clicked(); break;
        case 75: _t->loadCmdFromTableToForm((*reinterpret_cast< std::add_pointer_t<QTableWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 76: _t->on_btnSave_Mod_3_clicked(); break;
        case 77: _t->on_btnSave_CmdMod_clicked(); break;
        case 78: _t->on_btnCancel_Mod_3_clicked(); break;
        case 79: _t->on_btnCancel_CmdMod_clicked(); break;
        case 80: _t->on_btnMicrophone_clicked(); break;
        case 81: _t->handleHighContrastToggle(); break;
        case 82: _t->handleZoomInClicked(); break;
        case 83: _t->handleZoomOutClicked(); break;
        case 84: _t->onVoiceListeningStarted(); break;
        case 85: _t->onVoiceListeningFinished(); break;
        case 86: _t->onVoiceRecognized((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 87: _t->onVoiceCommandRecognized((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 88: _t->onVoiceError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 89: _t->onVoiceSpeechFinished(); break;
        case 90: _t->handleVoiceAddIntervention(); break;
        case 91: _t->handleVoiceModifyIntervention(); break;
        case 92: _t->handleVoiceDeleteIntervention(); break;
        case 93: _t->handleVoiceSearchIntervention((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 94: _t->handleVoiceShowList(); break;
        case 95: _t->handleVoiceExport(); break;
        case 96: _t->handleVoiceHelp(); break;
        case 97: _t->on_btnToggleSidebar_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTableWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::logoutRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (_t _q_method = &MainWindow::bacMotionStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 98)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 98;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 98)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 98;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::logoutRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::bacMotionStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
