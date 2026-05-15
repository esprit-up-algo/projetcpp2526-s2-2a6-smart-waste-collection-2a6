/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
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
      95,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  584,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,  585,    2, 0x0a,    2 /* Public */,
       5,    0,  588,    2, 0x0a,    4 /* Public */,
       6,    0,  589,    2, 0x08,    5 /* Private */,
       7,    0,  590,    2, 0x08,    6 /* Private */,
       8,    0,  591,    2, 0x08,    7 /* Private */,
       9,    0,  592,    2, 0x08,    8 /* Private */,
      10,    0,  593,    2, 0x08,    9 /* Private */,
      11,    0,  594,    2, 0x08,   10 /* Private */,
      12,    0,  595,    2, 0x08,   11 /* Private */,
      13,    0,  596,    2, 0x08,   12 /* Private */,
      14,    1,  597,    2, 0x08,   13 /* Private */,
      16,    0,  600,    2, 0x08,   15 /* Private */,
      17,    0,  601,    2, 0x08,   16 /* Private */,
      18,    0,  602,    2, 0x08,   17 /* Private */,
      19,    0,  603,    2, 0x08,   18 /* Private */,
      20,    0,  604,    2, 0x08,   19 /* Private */,
      21,    0,  605,    2, 0x08,   20 /* Private */,
      22,    0,  606,    2, 0x08,   21 /* Private */,
      23,    0,  607,    2, 0x08,   22 /* Private */,
      24,    7,  608,    2, 0x08,   23 /* Private */,
      32,    8,  623,    2, 0x08,   31 /* Private */,
      34,    0,  640,    2, 0x08,   40 /* Private */,
      35,    0,  641,    2, 0x08,   41 /* Private */,
      36,    0,  642,    2, 0x08,   42 /* Private */,
      37,    0,  643,    2, 0x08,   43 /* Private */,
      38,    0,  644,    2, 0x08,   44 /* Private */,
      39,    0,  645,    2, 0x08,   45 /* Private */,
      40,    0,  646,    2, 0x08,   46 /* Private */,
      41,    0,  647,    2, 0x08,   47 /* Private */,
      42,    0,  648,    2, 0x08,   48 /* Private */,
      43,    0,  649,    2, 0x08,   49 /* Private */,
      44,    0,  650,    2, 0x08,   50 /* Private */,
      45,    0,  651,    2, 0x08,   51 /* Private */,
      46,    0,  652,    2, 0x08,   52 /* Private */,
      47,    0,  653,    2, 0x08,   53 /* Private */,
      48,    0,  654,    2, 0x08,   54 /* Private */,
      49,    0,  655,    2, 0x08,   55 /* Private */,
      50,    0,  656,    2, 0x08,   56 /* Private */,
      51,    0,  657,    2, 0x08,   57 /* Private */,
      52,    0,  658,    2, 0x08,   58 /* Private */,
      53,    1,  659,    2, 0x08,   59 /* Private */,
      56,    2,  662,    2, 0x08,   61 /* Private */,
      58,    0,  667,    2, 0x08,   64 /* Private */,
      59,    0,  668,    2, 0x08,   65 /* Private */,
      60,    0,  669,    2, 0x08,   66 /* Private */,
      61,    0,  670,    2, 0x08,   67 /* Private */,
      62,    0,  671,    2, 0x08,   68 /* Private */,
      63,    0,  672,    2, 0x08,   69 /* Private */,
      64,    1,  673,    2, 0x08,   70 /* Private */,
      66,    0,  676,    2, 0x08,   72 /* Private */,
      67,    0,  677,    2, 0x08,   73 /* Private */,
      68,    0,  678,    2, 0x08,   74 /* Private */,
      69,    1,  679,    2, 0x08,   75 /* Private */,
      70,    0,  682,    2, 0x08,   77 /* Private */,
      71,    0,  683,    2, 0x08,   78 /* Private */,
      72,    0,  684,    2, 0x08,   79 /* Private */,
      73,    1,  685,    2, 0x08,   80 /* Private */,
      74,    0,  688,    2, 0x08,   82 /* Private */,
      75,    0,  689,    2, 0x08,   83 /* Private */,
      76,    0,  690,    2, 0x08,   84 /* Private */,
      77,    1,  691,    2, 0x08,   85 /* Private */,
      78,    0,  694,    2, 0x08,   87 /* Private */,
      79,    0,  695,    2, 0x08,   88 /* Private */,
      80,    0,  696,    2, 0x08,   89 /* Private */,
      81,    1,  697,    2, 0x08,   90 /* Private */,
      82,    0,  700,    2, 0x08,   92 /* Private */,
      83,    0,  701,    2, 0x08,   93 /* Private */,
      84,    0,  702,    2, 0x08,   94 /* Private */,
      85,    1,  703,    2, 0x08,   95 /* Private */,
      86,    0,  706,    2, 0x08,   97 /* Private */,
      87,    0,  707,    2, 0x08,   98 /* Private */,
      88,    2,  708,    2, 0x08,   99 /* Private */,
      91,    0,  713,    2, 0x08,  102 /* Private */,
      92,    0,  714,    2, 0x08,  103 /* Private */,
      93,    0,  715,    2, 0x08,  104 /* Private */,
      94,    0,  716,    2, 0x08,  105 /* Private */,
      95,    0,  717,    2, 0x08,  106 /* Private */,
      96,    0,  718,    2, 0x08,  107 /* Private */,
      97,    0,  719,    2, 0x08,  108 /* Private */,
      98,    0,  720,    2, 0x08,  109 /* Private */,
      99,    0,  721,    2, 0x08,  110 /* Private */,
     100,    0,  722,    2, 0x08,  111 /* Private */,
     101,    1,  723,    2, 0x08,  112 /* Private */,
     103,    1,  726,    2, 0x08,  114 /* Private */,
     105,    1,  729,    2, 0x08,  116 /* Private */,
     107,    0,  732,    2, 0x08,  118 /* Private */,
     108,    0,  733,    2, 0x08,  119 /* Private */,
     109,    0,  734,    2, 0x08,  120 /* Private */,
     110,    0,  735,    2, 0x08,  121 /* Private */,
     111,    1,  736,    2, 0x08,  122 /* Private */,
     113,    0,  739,    2, 0x08,  124 /* Private */,
     114,    0,  740,    2, 0x08,  125 /* Private */,
     115,    0,  741,    2, 0x08,  126 /* Private */,
     116,    0,  742,    2, 0x08,  127 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   26,   27,   28,   29,   30,   31,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   33,   25,   26,   27,   28,   29,   30,   31,
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
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54, QMetaType::QString,   55,   57,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 89, QMetaType::Int,   90,   33,
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
    QMetaType::Void, QMetaType::QString,  102,
    QMetaType::Void, QMetaType::QString,  104,
    QMetaType::Void, QMetaType::QString,  106,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  112,
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
        case 1: _t->fetchDeviceLocation((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 2: _t->fetchMyPosition(); break;
        case 3: _t->on_btnNouveau_clicked(); break;
        case 4: _t->on_btnAjouter_clicked(); break;
        case 5: _t->on_btnAnnuler_Ajout_clicked(); break;
        case 6: _t->on_btnModifier_clicked(); break;
        case 7: _t->on_btnSave_clicked(); break;
        case 8: _t->on_btnAnalyser_clicked(); break;
        case 9: _t->on_btnSimulerBadge_clicked(); break;
        case 10: _t->on_btnSupprimer_clicked(); break;
        case 11: _t->on_cbProjetStats_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->on_btnFichePaie_clicked(); break;
        case 13: _t->on_btnCommsSend_clicked(); break;
        case 14: _t->on_btnLogout_clicked(); break;
        case 15: _t->on_btnClient_clicked(); break;
        case 16: _t->on_btn_ajouter_client_clicked(); break;
        case 17: _t->on_btn_modifier_client_clicked(); break;
        case 18: _t->on_btn_annuler_client_clicked(); break;
        case 19: _t->on_btnNouveau_client_clicked(); break;
        case 20: _t->onClientAdded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7]))); break;
        case 21: _t->onClientModified((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[8]))); break;
        case 22: _t->on_btnSave_add_clicked(); break;
        case 23: _t->on_btnSave_mod_clicked(); break;
        case 24: _t->exportStockExcel(); break;
        case 25: _t->on_btnPrediction_clicked(); break;
        case 26: _t->on_btnSave_Add_clicked(); break;
        case 27: _t->on_btnSave_Mod_clicked(); break;
        case 28: _t->handleMaintEditClicked(); break;
        case 29: _t->handleMaintDeleteClicked(); break;
        case 30: _t->goAffichage(); break;
        case 31: _t->goAjout(); break;
        case 32: _t->goModification(); break;
        case 33: _t->goStatistiques(); break;
        case 34: _t->on_prod_btnSave_Add_clicked(); break;
        case 35: _t->on_prod_btnSave_Mod_clicked(); break;
        case 36: _t->on_prod_btnUpload_Add_clicked(); break;
        case 37: _t->on_prod_btnUpload_Mod_clicked(); break;
        case 38: _t->applyProduitFilterAndSort(); break;
        case 39: _t->on_prod_btnPdf_clicked(); break;
        case 40: _t->on_prod_btnMap3D_clicked(); break;
        case 41: _t->onGeminiPdfReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 42: _t->onProductImageDownloaded((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 43: _t->openStockMap3D(); break;
        case 44: _t->on_prod_btnVideo3D_clicked(); break;
        case 45: _t->on_prod_btn3DModel_clicked(); break;
        case 46: _t->handleEditClicked(); break;
        case 47: _t->handleDeleteClicked(); break;
        case 48: _t->slot_toggleView(); break;
        case 49: _t->on_pagination_cbSize_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 50: _t->on_pagination_btnPrev_clicked(); break;
        case 51: _t->on_pagination_btnNext_clicked(); break;
        case 52: _t->slot_toggleEmpView(); break;
        case 53: _t->on_emp_pagination_cbSize_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 54: _t->on_emp_pagination_btnPrev_clicked(); break;
        case 55: _t->on_emp_pagination_btnNext_clicked(); break;
        case 56: _t->slot_toggleStockView(); break;
        case 57: _t->on_stock_pagination_cbSize_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 58: _t->on_stock_pagination_btnPrev_clicked(); break;
        case 59: _t->on_stock_pagination_btnNext_clicked(); break;
        case 60: _t->slot_toggleClientView(); break;
        case 61: _t->on_client_pagination_cbSize_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 62: _t->on_client_pagination_btnPrev_clicked(); break;
        case 63: _t->on_client_pagination_btnNext_clicked(); break;
        case 64: _t->slot_toggleMaintView(); break;
        case 65: _t->on_maint_pagination_cbSize_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 66: _t->on_maint_pagination_btnPrev_clicked(); break;
        case 67: _t->on_maint_pagination_btnNext_clicked(); break;
        case 68: _t->slot_toggleCmdView(); break;
        case 69: _t->on_cmd_pagination_cbSize_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 70: _t->on_cmd_pagination_btnPrev_clicked(); break;
        case 71: _t->on_cmd_pagination_btnNext_clicked(); break;
        case 72: _t->loadCmdFromTableToForm((*reinterpret_cast< std::add_pointer_t<QTableWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 73: _t->on_btnSave_Mod_3_clicked(); break;
        case 74: _t->on_btnSave_CmdMod_clicked(); break;
        case 75: _t->on_btnCancel_Mod_3_clicked(); break;
        case 76: _t->on_btnCancel_CmdMod_clicked(); break;
        case 77: _t->on_btnMicrophone_clicked(); break;
        case 78: _t->handleHighContrastToggle(); break;
        case 79: _t->handleZoomInClicked(); break;
        case 80: _t->handleZoomOutClicked(); break;
        case 81: _t->onVoiceListeningStarted(); break;
        case 82: _t->onVoiceListeningFinished(); break;
        case 83: _t->onVoiceRecognized((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 84: _t->onVoiceCommandRecognized((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 85: _t->onVoiceError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 86: _t->onVoiceSpeechFinished(); break;
        case 87: _t->handleVoiceAddIntervention(); break;
        case 88: _t->handleVoiceModifyIntervention(); break;
        case 89: _t->handleVoiceDeleteIntervention(); break;
        case 90: _t->handleVoiceSearchIntervention((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 91: _t->handleVoiceShowList(); break;
        case 92: _t->handleVoiceExport(); break;
        case 93: _t->handleVoiceHelp(); break;
        case 94: _t->on_btnToggleSidebar_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 72:
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
        if (_id < 95)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 95;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 95)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 95;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::logoutRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
