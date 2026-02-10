/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartMarket
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_root;
    QStackedWidget *SWSmartMarket;
    QWidget *PModule1;
    QHBoxLayout *horizontalLayout_Main;
    QFrame *sidebar;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_logo;
    QPushButton *btnAccueil;
    QPushButton *btnStock;
    QPushButton *btnProduits;
    QPushButton *btnEmployes;
    QPushButton *btnStatistiques;
    QPushButton *btnMaintenance;
    QSpacerItem *verticalSpacer;
    QWidget *contentArea;
    QVBoxLayout *verticalLayout_Main;
    QStackedWidget *stackedWidget;
    QWidget *affichage;
    QHBoxLayout *horizontalLayout_Split;
    QVBoxLayout *verticalLayout_Left;
    QHBoxLayout *horizontalLayout_Header;
    QLabel *label_Title;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnNouveau;
    QSpacerItem *horizontalSpacer_User;
    QFrame *frameUser;
    QVBoxLayout *verticalLayout_User;
    QLabel *lblUserName;
    QLabel *lblUserRole;
    QHBoxLayout *horizontalLayout_Search;
    QLineEdit *txtSearch;
    QComboBox *cbSort;
    QTableWidget *tableEmployes;
    QVBoxLayout *verticalLayout_Right;
    QLabel *label_StatTitle;
    QFrame *statCard;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_10;
    QLabel *lblStatNumber;
    QFrame *statCard_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_12;
    QLabel *lblStatWorkload;
    QFrame *statCard_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_14;
    QLabel *lblStatAvailability;
    QFrame *actionCard;
    QVBoxLayout *verticalLayout_Actions;
    QLabel *label_Actions;
    QPushButton *btnFichePaie;
    QPushButton *btnGoMission;
    QPushButton *btnGoPointage;
    QPushButton *btnGoStats;
    QSpacerItem *verticalSpacer_Right;
    QWidget *modification;
    QGridLayout *gridLayout_Modif;
    QHBoxLayout *headerLayout_Modif;
    QSpacerItem *horizontalSpacer_HeaderModif;
    QFrame *frameUser_Modif;
    QVBoxLayout *verticalLayout_User_Modif;
    QLabel *lblUserName_Modif;
    QLabel *lblUserRole_Modif;
    QFrame *cardFrame;
    QHBoxLayout *horizontalLayout_ModifFrame;
    QVBoxLayout *verticalLayout_Photo_Modif;
    QLabel *imageLabel;
    QPushButton *btnUploadPhoto;
    QSpacerItem *verticalSpacer_Photo;
    QVBoxLayout *verticalLayout_FormRight;
    QFormLayout *formLayout_Modif;
    QLabel *lblMatricule;
    QLineEdit *txtMatricule;
    QLabel *lblNom;
    QLineEdit *txtNom;
    QLabel *lblSpecialite;
    QComboBox *cbSpecialite;
    QLabel *lblStatut;
    QComboBox *cbStatut;
    QLabel *lblSalaire_Modif;
    QVBoxLayout *verticalLayout_Salaire_Modif;
    QSlider *sliderSalaire_Modif;
    QLabel *lblValSalaire_Modif;
    QLabel *label;
    QLineEdit *txtEmailModif;
    QSpacerItem *verticalSpacer_Form;
    QHBoxLayout *horizontalLayout_Buttons;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer_Buttons;
    QPushButton *btnAnnuler;
    QPushButton *btnSave;
    QWidget *ajout;
    QGridLayout *gridLayout_Ajout;
    QHBoxLayout *headerLayout_Ajout;
    QSpacerItem *horizontalSpacer_HeaderAjout;
    QFrame *frameUser_Ajout;
    QVBoxLayout *verticalLayout_User_Ajout;
    QLabel *lblUserName_Ajout;
    QLabel *lblUserRole_Ajout;
    QFrame *cardFrame_2;
    QHBoxLayout *horizontalLayout_AjoutFrame;
    QVBoxLayout *verticalLayout_Photo_Ajout;
    QLabel *imageLabel_2;
    QPushButton *btnUploadPhoto_Ajout;
    QSpacerItem *verticalSpacer_Photo_Ajout;
    QVBoxLayout *verticalLayout_FormRight_2;
    QFormLayout *formLayout_Ajout;
    QLabel *label_7;
    QLineEdit *txtNom_Ajout;
    QLabel *label_8;
    QComboBox *cbSpecialite_Ajout;
    QLabel *label_9;
    QComboBox *cbStatut_Ajout;
    QLabel *lblSalaire_Ajout;
    QVBoxLayout *verticalLayout_Salaire_Ajout;
    QSlider *sliderSalaire_Ajout;
    QLabel *lblValSalaire_Ajout;
    QLineEdit *txtEmailAjout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_Form_2;
    QHBoxLayout *horizontalLayout_Buttons_2;
    QSpacerItem *horizontalSpacer_Buttons_2;
    QPushButton *btnAnnuler_Ajout;
    QPushButton *btnAjouter;
    QWidget *mission;
    QVBoxLayout *verticalLayout_Mission;
    QLabel *lblTitreMission;
    QLineEdit *txtMission;
    QPushButton *btnAnalyser;
    QLabel *lblResultat;
    QTableWidget *tableResultat;
    QSpacerItem *verticalSpacer_Mission;
    QPushButton *btnAnnulerMission;
    QWidget *pointage;
    QVBoxLayout *verticalLayout_Pointage;
    QLabel *lblTitrePointage;
    QLabel *lblStatutRFID;
    QPushButton *btnSimulerBadge;
    QLabel *lblLog;
    QTableWidget *tablePointage;
    QSpacerItem *verticalSpacer_Pointage;
    QPushButton *btnAnnulerPointage;
    QWidget *statistiques;
    QVBoxLayout *verticalLayout_StatsPage;
    QHBoxLayout *horizontalLayout_Stats;
    QChartView *chartViewAbsence;
    QChartView *chartViewWorkload;
    QChartView *chartViewTasks;
    QComboBox *cbProjetStats;
    QSpacerItem *verticalSpacer_Stats;
    QPushButton *btnAnnulerStats;
    QWidget *PModule2;
    QHBoxLayout *prod_rootLayout;
    QFrame *prod_leftSidebar;
    QVBoxLayout *prod_verticalLayout_1;
    QLabel *prod_label_1;
    QSpacerItem *spacerItem;
    QPushButton *prod_btnhome_1;
    QPushButton *prod_btnstock_1;
    QPushButton *prod_btnproduit_1;
    QPushButton *prod_btnclient_1;
    QPushButton *prod_btnemploye_1;
    QPushButton *prod_btnmaintenance_1;
    QPushButton *prod_btncmd_1;
    QSpacerItem *spacerItem1;
    QVBoxLayout *prod_mainAreaLayout;
    QFrame *prod_horizontalLayoutWidget_1;
    QHBoxLayout *prod_horizontalLayout_1;
    QLabel *prod_lb_1;
    QSpacerItem *spacerItem2;
    QLabel *prod_user_1;
    QSpacerItem *spacerItem3;
    QPushButton *prod_btnnotif_1;
    QPushButton *prod_btnprofil_1;
    QHBoxLayout *prod_dashboard_hLayout;
    QVBoxLayout *prod_dashboardRightLayout;
    QHBoxLayout *prod_contentLayout;
    QStackedWidget *prod_stackedWidget;
    QWidget *prod_affichage;
    QHBoxLayout *prod_affichageLayout;
    QVBoxLayout *prod_tableLayout;
    QHBoxLayout *prod_searchRow;
    QSpacerItem *spacerItem4;
    QLabel *prod_lblSort;
    QComboBox *prod_cbSort;
    QLineEdit *prod_searchInput;
    QPushButton *prod_btnAddProduct;
    QTableWidget *prod_tableProduits;
    QFrame *prod_rightSidebar;
    QVBoxLayout *prod_rightLayout;
    QLabel *prod_lblFunc;
    QFrame *prod_stat1;
    QVBoxLayout *vboxLayout;
    QLabel *prod_st_val1;
    QLabel *prod_st_lbl1;
    QFrame *prod_stat2;
    QVBoxLayout *vboxLayout1;
    QLabel *prod_st_val2;
    QLabel *prod_st_lbl2;
    QFrame *prod_stat3;
    QVBoxLayout *vboxLayout2;
    QLabel *prod_st_val3;
    QLabel *prod_st_lbl3;
    QFrame *prod_statsPreview;
    QVBoxLayout *prod_statsPreviewLayout;
    QLabel *prod_lblStatsTitle;
    QFrame *prod_miniStatsFrame;
    QVBoxLayout *prod_miniStatsLayout;
    QHBoxLayout *prod_rowMiniLayout1;
    QLabel *prod_lblMini1;
    QProgressBar *prod_pbTrend;
    QHBoxLayout *prod_rowMiniLayout2;
    QLabel *prod_lblMini2;
    QProgressBar *prod_pbStock;
    QPushButton *prod_btnOpenStats;
    QPushButton *prod_btnMap3D;
    QPushButton *prod_btnVideo3D;
    QSpacerItem *spacerItem5;
    QLabel *prod_lblExport;
    QPushButton *prod_btnPdf;
    QPushButton *prod_btnCsv;
    QSpacerItem *spacerItem6;
    QWidget *prod_ajout;
    QHBoxLayout *prod_ajout_hLayout;
    QVBoxLayout *prod_addRightLayout;
    QHBoxLayout *prod_hl_add_split;
    QVBoxLayout *prod_vl_img_add;
    QLabel *prod_lblImgPreview_Add;
    QPushButton *prod_btnUpload_Add;
    QSpacerItem *spacerItem7;
    QFrame *prod_cardAdd;
    QVBoxLayout *prod_verticalLayout_Add;
    QLabel *prod_lblTitleAdd;
    QGridLayout *prod_gl_inputs;
    QLabel *prod_l1;
    QLineEdit *prod_ln_ref_add;
    QLabel *prod_l2;
    QComboBox *prod_cb_model_add;
    QLabel *prod_l_px;
    QDoubleSpinBox *prod_dsb_price_add;
    QLabel *prod_l_qty;
    QSpinBox *prod_sb_qty_add;
    QLabel *prod_l_stat;
    QComboBox *prod_cb_status_add;
    QHBoxLayout *prod_hl_sliders;
    QVBoxLayout *prod_vl_bat;
    QHBoxLayout *prod_horizontalLayout;
    QLabel *prod_l_bat;
    QLabel *prod_label;
    QSlider *prod_slider_bat_add;
    QVBoxLayout *prod_vl_cap;
    QHBoxLayout *prod_horizontalLayout_4;
    QLabel *prod_l_cap;
    QLabel *prod_label_4;
    QSlider *prod_slider_cap_add;
    QGroupBox *prod_gb_characteristics;
    QVBoxLayout *prod_vl_characteristics;
    QListWidget *prod_lstCharacteristics;
    QLabel *prod_l5;
    QFrame *prod_mapFrame;
    QGridLayout *prod_gl_map_add;
    QLabel *prod_zoneA;
    QPushButton *prod_btn_a1;
    QPushButton *prod_btn_a2;
    QPushButton *prod_btn_a3;
    QLabel *prod_zoneB;
    QPushButton *prod_btn_b1;
    QPushButton *prod_btn_b2;
    QPushButton *prod_btn_b3;
    QLabel *prod_zoneC;
    QPushButton *prod_btn_c2;
    QPushButton *prod_btn_c3;
    QPushButton *prod_btn_a2_2;
    QHBoxLayout *prod_btns_add;
    QPushButton *prod_btnSave_Add;
    QPushButton *prod_btnCancel_Add;
    QWidget *prod_modification;
    QHBoxLayout *prod_modifier_hLayout;
    QVBoxLayout *prod_modRightLayout;
    QHBoxLayout *prod_hl_mod_split;
    QLabel *prod_imgBin;
    QFrame *prod_cardMod;
    QVBoxLayout *prod_verticalLayout_Mod;
    QLabel *prod_lblTitleMod;
    QGridLayout *prod_gl_inputs_mod;
    QSpinBox *prod_sb_qty_mod;
    QLabel *prod_l_stat_m;
    QLabel *prod_l_qty_m;
    QComboBox *prod_cb_model_mod;
    QComboBox *prod_cb_status_mod;
    QDoubleSpinBox *prod_dsb_price_mod;
    QLineEdit *prod_ln_ref_mod;
    QLabel *prod_l2_m;
    QLabel *prod_l_px_m;
    QLabel *prod_l1_m;
    QHBoxLayout *prod_hl_sliders_mod;
    QVBoxLayout *prod_vl_bat_mod;
    QLabel *prod_l_bat_m;
    QSlider *prod_slider_bat_mod;
    QVBoxLayout *prod_vl_cap_mod;
    QLabel *prod_l_cap_m;
    QSlider *prod_slider_cap_mod;
    QGroupBox *prod_gb_characteristics_mod;
    QVBoxLayout *prod_vl_characteristics_mod;
    QListWidget *prod_lstCharacteristics_mod;
    QLabel *prod_l5_m;
    QFrame *prod_depotMapFrame_mod;
    QGridLayout *prod_gl_map_mod;
    QLabel *prod_zoneAm;
    QPushButton *prod_btn_a1_m;
    QPushButton *prod_btn_a3_m;
    QLabel *prod_zoneBm;
    QPushButton *prod_btn_b1_m;
    QPushButton *prod_btn_b2_m;
    QPushButton *prod_btn_b3_m;
    QLabel *prod_zoneCm;
    QPushButton *prod_btn_c1_m;
    QPushButton *prod_btn_c2_m;
    QPushButton *prod_btn_c3_m;
    QPushButton *prod_btn_a2_3;
    QHBoxLayout *prod_btns_mod;
    QPushButton *prod_btnSave_Mod;
    QPushButton *prod_btnCancel_Mod;
    QWidget *prod_statistiques;
    QVBoxLayout *prod_statsPopupLayout;
    QHBoxLayout *prod_statsHeaderLayout;
    QPushButton *prod_btnReturnStats;
    QSpacerItem *prod_horizontalSpacer_Stats;
    QLabel *prod_lblStatsHeader;
    QLabel *prod_lblStatsSub;
    QHBoxLayout *prod_graphsLayout;
    QFrame *prod_graphFrame1;
    QVBoxLayout *prod_graphFrame1Layout;
    QLabel *prod_graphFrame1Title;
    QFrame *prod_graphFrame1Plot;
    QVBoxLayout *prod_graphFrame1PlotLayout;
    QLabel *prod_graphFrame1Hint;
    QFrame *prod_graphFrame2;
    QVBoxLayout *prod_graphFrame2Layout;
    QLabel *prod_graphFrame2Title;
    QFrame *prod_graphFrame2Plot;
    QVBoxLayout *prod_graphFrame2PlotLayout;
    QLabel *prod_graphFrame2Hint;
    QLabel *prod_lblStatsNote;
    QSpacerItem *spacerItem8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SmartMarket)
    {
        if (SmartMarket->objectName().isEmpty())
            SmartMarket->setObjectName("SmartMarket");
        SmartMarket->resize(1200, 800);
        centralwidget = new QWidget(SmartMarket);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_root = new QVBoxLayout(centralwidget);
        verticalLayout_root->setObjectName("verticalLayout_root");
        SWSmartMarket = new QStackedWidget(centralwidget);
        SWSmartMarket->setObjectName("SWSmartMarket");
        PModule1 = new QWidget();
        PModule1->setObjectName("PModule1");
        horizontalLayout_Main = new QHBoxLayout(PModule1);
        horizontalLayout_Main->setSpacing(0);
        horizontalLayout_Main->setObjectName("horizontalLayout_Main");
        horizontalLayout_Main->setContentsMargins(0, 0, 0, 0);
        sidebar = new QFrame(PModule1);
        sidebar->setObjectName("sidebar");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sidebar->sizePolicy().hasHeightForWidth());
        sidebar->setSizePolicy(sizePolicy);
        sidebar->setMinimumSize(QSize(250, 0));
        sidebar->setMaximumSize(QSize(250, 16777215));
        sidebar->setFrameShape(QFrame::Shape::StyledPanel);
        sidebar->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(sidebar);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_logo = new QLabel(sidebar);
        label_logo->setObjectName("label_logo");
        label_logo->setMinimumSize(QSize(0, 100));
        label_logo->setPixmap(QPixmap(QString::fromUtf8(":/Gemini_Generated_Image_8k5i7p8k5i7p8k5i-removebg-preview (2).png")));
        label_logo->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_logo);

        btnAccueil = new QPushButton(sidebar);
        btnAccueil->setObjectName("btnAccueil");

        verticalLayout_4->addWidget(btnAccueil);

        btnStock = new QPushButton(sidebar);
        btnStock->setObjectName("btnStock");

        verticalLayout_4->addWidget(btnStock);

        btnProduits = new QPushButton(sidebar);
        btnProduits->setObjectName("btnProduits");

        verticalLayout_4->addWidget(btnProduits);

        btnEmployes = new QPushButton(sidebar);
        btnEmployes->setObjectName("btnEmployes");

        verticalLayout_4->addWidget(btnEmployes);

        btnStatistiques = new QPushButton(sidebar);
        btnStatistiques->setObjectName("btnStatistiques");

        verticalLayout_4->addWidget(btnStatistiques);

        btnMaintenance = new QPushButton(sidebar);
        btnMaintenance->setObjectName("btnMaintenance");

        verticalLayout_4->addWidget(btnMaintenance);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_Main->addWidget(sidebar);

        contentArea = new QWidget(PModule1);
        contentArea->setObjectName("contentArea");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(contentArea->sizePolicy().hasHeightForWidth());
        contentArea->setSizePolicy(sizePolicy1);
        verticalLayout_Main = new QVBoxLayout(contentArea);
        verticalLayout_Main->setObjectName("verticalLayout_Main");
        stackedWidget = new QStackedWidget(contentArea);
        stackedWidget->setObjectName("stackedWidget");
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        affichage = new QWidget();
        affichage->setObjectName("affichage");
        horizontalLayout_Split = new QHBoxLayout(affichage);
        horizontalLayout_Split->setObjectName("horizontalLayout_Split");
        verticalLayout_Left = new QVBoxLayout();
        verticalLayout_Left->setObjectName("verticalLayout_Left");
        horizontalLayout_Header = new QHBoxLayout();
        horizontalLayout_Header->setObjectName("horizontalLayout_Header");
        label_Title = new QLabel(affichage);
        label_Title->setObjectName("label_Title");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(18);
        font.setWeight(QFont::DemiBold);
        label_Title->setFont(font);

        horizontalLayout_Header->addWidget(label_Title);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_Header->addItem(horizontalSpacer);

        btnNouveau = new QPushButton(affichage);
        btnNouveau->setObjectName("btnNouveau");
        btnNouveau->setMinimumSize(QSize(0, 40));
        btnNouveau->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_Header->addWidget(btnNouveau);

        horizontalSpacer_User = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_Header->addItem(horizontalSpacer_User);

        frameUser = new QFrame(affichage);
        frameUser->setObjectName("frameUser");
        frameUser->setFrameShape(QFrame::Shape::NoFrame);
        verticalLayout_User = new QVBoxLayout(frameUser);
        verticalLayout_User->setSpacing(2);
        verticalLayout_User->setObjectName("verticalLayout_User");
        verticalLayout_User->setContentsMargins(0, 0, 5, 0);
        lblUserName = new QLabel(frameUser);
        lblUserName->setObjectName("lblUserName");
        lblUserName->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_User->addWidget(lblUserName);

        lblUserRole = new QLabel(frameUser);
        lblUserRole->setObjectName("lblUserRole");
        lblUserRole->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_User->addWidget(lblUserRole);


        horizontalLayout_Header->addWidget(frameUser);


        verticalLayout_Left->addLayout(horizontalLayout_Header);

        horizontalLayout_Search = new QHBoxLayout();
        horizontalLayout_Search->setObjectName("horizontalLayout_Search");
        txtSearch = new QLineEdit(affichage);
        txtSearch->setObjectName("txtSearch");
        txtSearch->setMinimumSize(QSize(0, 40));

        horizontalLayout_Search->addWidget(txtSearch);

        cbSort = new QComboBox(affichage);
        cbSort->addItem(QString());
        cbSort->addItem(QString());
        cbSort->addItem(QString());
        cbSort->addItem(QString());
        cbSort->setObjectName("cbSort");
        cbSort->setMinimumSize(QSize(180, 40));

        horizontalLayout_Search->addWidget(cbSort);


        verticalLayout_Left->addLayout(horizontalLayout_Search);

        tableEmployes = new QTableWidget(affichage);
        if (tableEmployes->columnCount() < 5)
            tableEmployes->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableEmployes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableEmployes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableEmployes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableEmployes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableEmployes->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableEmployes->rowCount() < 4)
            tableEmployes->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableEmployes->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableEmployes->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableEmployes->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableEmployes->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableEmployes->setItem(0, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableEmployes->setItem(0, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableEmployes->setItem(0, 2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableEmployes->setItem(0, 3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        tableEmployes->setItem(0, 4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableEmployes->setItem(1, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableEmployes->setItem(1, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableEmployes->setItem(1, 2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableEmployes->setItem(1, 3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        tableEmployes->setItem(1, 4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableEmployes->setItem(2, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableEmployes->setItem(2, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableEmployes->setItem(2, 2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableEmployes->setItem(2, 3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignCenter);
        tableEmployes->setItem(2, 4, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableEmployes->setItem(3, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableEmployes->setItem(3, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableEmployes->setItem(3, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableEmployes->setItem(3, 3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignCenter);
        tableEmployes->setItem(3, 4, __qtablewidgetitem28);
        tableEmployes->setObjectName("tableEmployes");
        sizePolicy1.setHeightForWidth(tableEmployes->sizePolicy().hasHeightForWidth());
        tableEmployes->setSizePolicy(sizePolicy1);
        tableEmployes->setAlternatingRowColors(true);
        tableEmployes->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableEmployes->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        tableEmployes->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        tableEmployes->setShowGrid(false);
        tableEmployes->horizontalHeader()->setStretchLastSection(true);
        tableEmployes->verticalHeader()->setVisible(false);

        verticalLayout_Left->addWidget(tableEmployes);


        horizontalLayout_Split->addLayout(verticalLayout_Left);

        verticalLayout_Right = new QVBoxLayout();
        verticalLayout_Right->setSpacing(20);
        verticalLayout_Right->setObjectName("verticalLayout_Right");
        verticalLayout_Right->setContentsMargins(15, -1, -1, -1);
        label_StatTitle = new QLabel(affichage);
        label_StatTitle->setObjectName("label_StatTitle");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(12);
        font1.setWeight(QFont::DemiBold);
        label_StatTitle->setFont(font1);

        verticalLayout_Right->addWidget(label_StatTitle);

        statCard = new QFrame(affichage);
        statCard->setObjectName("statCard");
        statCard->setFrameShape(QFrame::Shape::StyledPanel);
        verticalLayout_5 = new QVBoxLayout(statCard);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_10 = new QLabel(statCard);
        label_10->setObjectName("label_10");

        verticalLayout_5->addWidget(label_10);

        lblStatNumber = new QLabel(statCard);
        lblStatNumber->setObjectName("lblStatNumber");

        verticalLayout_5->addWidget(lblStatNumber);


        verticalLayout_Right->addWidget(statCard);

        statCard_2 = new QFrame(affichage);
        statCard_2->setObjectName("statCard_2");
        statCard_2->setFrameShape(QFrame::Shape::StyledPanel);
        verticalLayout_6 = new QVBoxLayout(statCard_2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_12 = new QLabel(statCard_2);
        label_12->setObjectName("label_12");

        verticalLayout_6->addWidget(label_12);

        lblStatWorkload = new QLabel(statCard_2);
        lblStatWorkload->setObjectName("lblStatWorkload");

        verticalLayout_6->addWidget(lblStatWorkload);


        verticalLayout_Right->addWidget(statCard_2);

        statCard_3 = new QFrame(affichage);
        statCard_3->setObjectName("statCard_3");
        statCard_3->setFrameShape(QFrame::Shape::StyledPanel);
        verticalLayout_7 = new QVBoxLayout(statCard_3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_14 = new QLabel(statCard_3);
        label_14->setObjectName("label_14");

        verticalLayout_7->addWidget(label_14);

        lblStatAvailability = new QLabel(statCard_3);
        lblStatAvailability->setObjectName("lblStatAvailability");

        verticalLayout_7->addWidget(lblStatAvailability);


        verticalLayout_Right->addWidget(statCard_3);

        actionCard = new QFrame(affichage);
        actionCard->setObjectName("actionCard");
        actionCard->setFrameShape(QFrame::Shape::StyledPanel);
        verticalLayout_Actions = new QVBoxLayout(actionCard);
        verticalLayout_Actions->setSpacing(15);
        verticalLayout_Actions->setObjectName("verticalLayout_Actions");
        label_Actions = new QLabel(actionCard);
        label_Actions->setObjectName("label_Actions");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setBold(true);
        label_Actions->setFont(font2);

        verticalLayout_Actions->addWidget(label_Actions);

        btnFichePaie = new QPushButton(actionCard);
        btnFichePaie->setObjectName("btnFichePaie");
        btnFichePaie->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Actions->addWidget(btnFichePaie);

        btnGoMission = new QPushButton(actionCard);
        btnGoMission->setObjectName("btnGoMission");
        btnGoMission->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Actions->addWidget(btnGoMission);

        btnGoPointage = new QPushButton(actionCard);
        btnGoPointage->setObjectName("btnGoPointage");
        btnGoPointage->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Actions->addWidget(btnGoPointage);

        btnGoStats = new QPushButton(actionCard);
        btnGoStats->setObjectName("btnGoStats");
        btnGoStats->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Actions->addWidget(btnGoStats);


        verticalLayout_Right->addWidget(actionCard);

        verticalSpacer_Right = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_Right->addItem(verticalSpacer_Right);


        horizontalLayout_Split->addLayout(verticalLayout_Right);

        horizontalLayout_Split->setStretch(0, 3);
        horizontalLayout_Split->setStretch(1, 1);
        stackedWidget->addWidget(affichage);
        modification = new QWidget();
        modification->setObjectName("modification");
        gridLayout_Modif = new QGridLayout(modification);
        gridLayout_Modif->setObjectName("gridLayout_Modif");
        headerLayout_Modif = new QHBoxLayout();
        headerLayout_Modif->setObjectName("headerLayout_Modif");
        horizontalSpacer_HeaderModif = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        headerLayout_Modif->addItem(horizontalSpacer_HeaderModif);

        frameUser_Modif = new QFrame(modification);
        frameUser_Modif->setObjectName("frameUser_Modif");
        frameUser_Modif->setFrameShape(QFrame::Shape::NoFrame);
        verticalLayout_User_Modif = new QVBoxLayout(frameUser_Modif);
        verticalLayout_User_Modif->setSpacing(2);
        verticalLayout_User_Modif->setObjectName("verticalLayout_User_Modif");
        verticalLayout_User_Modif->setContentsMargins(0, 0, 5, 0);
        lblUserName_Modif = new QLabel(frameUser_Modif);
        lblUserName_Modif->setObjectName("lblUserName_Modif");
        lblUserName_Modif->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_User_Modif->addWidget(lblUserName_Modif);

        lblUserRole_Modif = new QLabel(frameUser_Modif);
        lblUserRole_Modif->setObjectName("lblUserRole_Modif");
        lblUserRole_Modif->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_User_Modif->addWidget(lblUserRole_Modif);


        headerLayout_Modif->addWidget(frameUser_Modif);


        gridLayout_Modif->addLayout(headerLayout_Modif, 0, 0, 1, 2);

        cardFrame = new QFrame(modification);
        cardFrame->setObjectName("cardFrame");
        cardFrame->setFrameShape(QFrame::Shape::StyledPanel);
        cardFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_ModifFrame = new QHBoxLayout(cardFrame);
        horizontalLayout_ModifFrame->setObjectName("horizontalLayout_ModifFrame");
        verticalLayout_Photo_Modif = new QVBoxLayout();
        verticalLayout_Photo_Modif->setSpacing(10);
        verticalLayout_Photo_Modif->setObjectName("verticalLayout_Photo_Modif");
        imageLabel = new QLabel(cardFrame);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setMinimumSize(QSize(200, 300));
        imageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_Photo_Modif->addWidget(imageLabel);

        btnUploadPhoto = new QPushButton(cardFrame);
        btnUploadPhoto->setObjectName("btnUploadPhoto");
        btnUploadPhoto->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Photo_Modif->addWidget(btnUploadPhoto);

        verticalSpacer_Photo = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_Photo_Modif->addItem(verticalSpacer_Photo);


        horizontalLayout_ModifFrame->addLayout(verticalLayout_Photo_Modif);

        verticalLayout_FormRight = new QVBoxLayout();
        verticalLayout_FormRight->setObjectName("verticalLayout_FormRight");
        formLayout_Modif = new QFormLayout();
        formLayout_Modif->setObjectName("formLayout_Modif");
        formLayout_Modif->setVerticalSpacing(65);
        lblMatricule = new QLabel(cardFrame);
        lblMatricule->setObjectName("lblMatricule");

        formLayout_Modif->setWidget(0, QFormLayout::LabelRole, lblMatricule);

        txtMatricule = new QLineEdit(cardFrame);
        txtMatricule->setObjectName("txtMatricule");
        txtMatricule->setReadOnly(true);

        formLayout_Modif->setWidget(0, QFormLayout::FieldRole, txtMatricule);

        lblNom = new QLabel(cardFrame);
        lblNom->setObjectName("lblNom");

        formLayout_Modif->setWidget(2, QFormLayout::LabelRole, lblNom);

        txtNom = new QLineEdit(cardFrame);
        txtNom->setObjectName("txtNom");

        formLayout_Modif->setWidget(2, QFormLayout::FieldRole, txtNom);

        lblSpecialite = new QLabel(cardFrame);
        lblSpecialite->setObjectName("lblSpecialite");

        formLayout_Modif->setWidget(3, QFormLayout::LabelRole, lblSpecialite);

        cbSpecialite = new QComboBox(cardFrame);
        cbSpecialite->addItem(QString());
        cbSpecialite->addItem(QString());
        cbSpecialite->addItem(QString());
        cbSpecialite->setObjectName("cbSpecialite");

        formLayout_Modif->setWidget(3, QFormLayout::FieldRole, cbSpecialite);

        lblStatut = new QLabel(cardFrame);
        lblStatut->setObjectName("lblStatut");

        formLayout_Modif->setWidget(4, QFormLayout::LabelRole, lblStatut);

        cbStatut = new QComboBox(cardFrame);
        cbStatut->addItem(QString());
        cbStatut->addItem(QString());
        cbStatut->addItem(QString());
        cbStatut->setObjectName("cbStatut");

        formLayout_Modif->setWidget(4, QFormLayout::FieldRole, cbStatut);

        lblSalaire_Modif = new QLabel(cardFrame);
        lblSalaire_Modif->setObjectName("lblSalaire_Modif");

        formLayout_Modif->setWidget(5, QFormLayout::LabelRole, lblSalaire_Modif);

        verticalLayout_Salaire_Modif = new QVBoxLayout();
        verticalLayout_Salaire_Modif->setObjectName("verticalLayout_Salaire_Modif");
        sliderSalaire_Modif = new QSlider(cardFrame);
        sliderSalaire_Modif->setObjectName("sliderSalaire_Modif");
        sliderSalaire_Modif->setMinimum(600);
        sliderSalaire_Modif->setMaximum(5000);
        sliderSalaire_Modif->setValue(1200);
        sliderSalaire_Modif->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_Salaire_Modif->addWidget(sliderSalaire_Modif);

        lblValSalaire_Modif = new QLabel(cardFrame);
        lblValSalaire_Modif->setObjectName("lblValSalaire_Modif");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(8);
        font3.setWeight(QFont::DemiBold);
        lblValSalaire_Modif->setFont(font3);
        lblValSalaire_Modif->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_Salaire_Modif->addWidget(lblValSalaire_Modif);


        formLayout_Modif->setLayout(5, QFormLayout::FieldRole, verticalLayout_Salaire_Modif);

        label = new QLabel(cardFrame);
        label->setObjectName("label");

        formLayout_Modif->setWidget(1, QFormLayout::LabelRole, label);

        txtEmailModif = new QLineEdit(cardFrame);
        txtEmailModif->setObjectName("txtEmailModif");

        formLayout_Modif->setWidget(1, QFormLayout::FieldRole, txtEmailModif);


        verticalLayout_FormRight->addLayout(formLayout_Modif);

        verticalSpacer_Form = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_FormRight->addItem(verticalSpacer_Form);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName("horizontalLayout_Buttons");
        btnDelete = new QPushButton(cardFrame);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_Buttons->addWidget(btnDelete);

        horizontalSpacer_Buttons = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_Buttons);

        btnAnnuler = new QPushButton(cardFrame);
        btnAnnuler->setObjectName("btnAnnuler");

        horizontalLayout_Buttons->addWidget(btnAnnuler);

        btnSave = new QPushButton(cardFrame);
        btnSave->setObjectName("btnSave");

        horizontalLayout_Buttons->addWidget(btnSave);


        verticalLayout_FormRight->addLayout(horizontalLayout_Buttons);


        horizontalLayout_ModifFrame->addLayout(verticalLayout_FormRight);


        gridLayout_Modif->addWidget(cardFrame, 1, 0, 1, 1);

        stackedWidget->addWidget(modification);
        ajout = new QWidget();
        ajout->setObjectName("ajout");
        gridLayout_Ajout = new QGridLayout(ajout);
        gridLayout_Ajout->setObjectName("gridLayout_Ajout");
        headerLayout_Ajout = new QHBoxLayout();
        headerLayout_Ajout->setObjectName("headerLayout_Ajout");
        horizontalSpacer_HeaderAjout = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        headerLayout_Ajout->addItem(horizontalSpacer_HeaderAjout);

        frameUser_Ajout = new QFrame(ajout);
        frameUser_Ajout->setObjectName("frameUser_Ajout");
        frameUser_Ajout->setFrameShape(QFrame::Shape::NoFrame);
        verticalLayout_User_Ajout = new QVBoxLayout(frameUser_Ajout);
        verticalLayout_User_Ajout->setSpacing(2);
        verticalLayout_User_Ajout->setObjectName("verticalLayout_User_Ajout");
        verticalLayout_User_Ajout->setContentsMargins(0, 0, 5, 0);
        lblUserName_Ajout = new QLabel(frameUser_Ajout);
        lblUserName_Ajout->setObjectName("lblUserName_Ajout");
        lblUserName_Ajout->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_User_Ajout->addWidget(lblUserName_Ajout);

        lblUserRole_Ajout = new QLabel(frameUser_Ajout);
        lblUserRole_Ajout->setObjectName("lblUserRole_Ajout");
        lblUserRole_Ajout->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_User_Ajout->addWidget(lblUserRole_Ajout);


        headerLayout_Ajout->addWidget(frameUser_Ajout);


        gridLayout_Ajout->addLayout(headerLayout_Ajout, 0, 0, 1, 2);

        cardFrame_2 = new QFrame(ajout);
        cardFrame_2->setObjectName("cardFrame_2");
        cardFrame_2->setFrameShape(QFrame::Shape::StyledPanel);
        horizontalLayout_AjoutFrame = new QHBoxLayout(cardFrame_2);
        horizontalLayout_AjoutFrame->setObjectName("horizontalLayout_AjoutFrame");
        verticalLayout_Photo_Ajout = new QVBoxLayout();
        verticalLayout_Photo_Ajout->setSpacing(10);
        verticalLayout_Photo_Ajout->setObjectName("verticalLayout_Photo_Ajout");
        imageLabel_2 = new QLabel(cardFrame_2);
        imageLabel_2->setObjectName("imageLabel_2");
        imageLabel_2->setMinimumSize(QSize(200, 300));
        imageLabel_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_Photo_Ajout->addWidget(imageLabel_2);

        btnUploadPhoto_Ajout = new QPushButton(cardFrame_2);
        btnUploadPhoto_Ajout->setObjectName("btnUploadPhoto_Ajout");
        btnUploadPhoto_Ajout->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Photo_Ajout->addWidget(btnUploadPhoto_Ajout);

        verticalSpacer_Photo_Ajout = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_Photo_Ajout->addItem(verticalSpacer_Photo_Ajout);


        horizontalLayout_AjoutFrame->addLayout(verticalLayout_Photo_Ajout);

        verticalLayout_FormRight_2 = new QVBoxLayout();
        verticalLayout_FormRight_2->setObjectName("verticalLayout_FormRight_2");
        formLayout_Ajout = new QFormLayout();
        formLayout_Ajout->setObjectName("formLayout_Ajout");
        formLayout_Ajout->setVerticalSpacing(65);
        label_7 = new QLabel(cardFrame_2);
        label_7->setObjectName("label_7");

        formLayout_Ajout->setWidget(0, QFormLayout::LabelRole, label_7);

        txtNom_Ajout = new QLineEdit(cardFrame_2);
        txtNom_Ajout->setObjectName("txtNom_Ajout");

        formLayout_Ajout->setWidget(0, QFormLayout::FieldRole, txtNom_Ajout);

        label_8 = new QLabel(cardFrame_2);
        label_8->setObjectName("label_8");

        formLayout_Ajout->setWidget(2, QFormLayout::LabelRole, label_8);

        cbSpecialite_Ajout = new QComboBox(cardFrame_2);
        cbSpecialite_Ajout->addItem(QString());
        cbSpecialite_Ajout->addItem(QString());
        cbSpecialite_Ajout->setObjectName("cbSpecialite_Ajout");

        formLayout_Ajout->setWidget(2, QFormLayout::FieldRole, cbSpecialite_Ajout);

        label_9 = new QLabel(cardFrame_2);
        label_9->setObjectName("label_9");

        formLayout_Ajout->setWidget(3, QFormLayout::LabelRole, label_9);

        cbStatut_Ajout = new QComboBox(cardFrame_2);
        cbStatut_Ajout->addItem(QString());
        cbStatut_Ajout->addItem(QString());
        cbStatut_Ajout->setObjectName("cbStatut_Ajout");

        formLayout_Ajout->setWidget(3, QFormLayout::FieldRole, cbStatut_Ajout);

        lblSalaire_Ajout = new QLabel(cardFrame_2);
        lblSalaire_Ajout->setObjectName("lblSalaire_Ajout");

        formLayout_Ajout->setWidget(4, QFormLayout::LabelRole, lblSalaire_Ajout);

        verticalLayout_Salaire_Ajout = new QVBoxLayout();
        verticalLayout_Salaire_Ajout->setObjectName("verticalLayout_Salaire_Ajout");
        sliderSalaire_Ajout = new QSlider(cardFrame_2);
        sliderSalaire_Ajout->setObjectName("sliderSalaire_Ajout");
        sliderSalaire_Ajout->setMinimum(600);
        sliderSalaire_Ajout->setMaximum(5000);
        sliderSalaire_Ajout->setValue(1200);
        sliderSalaire_Ajout->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_Salaire_Ajout->addWidget(sliderSalaire_Ajout);

        lblValSalaire_Ajout = new QLabel(cardFrame_2);
        lblValSalaire_Ajout->setObjectName("lblValSalaire_Ajout");
        lblValSalaire_Ajout->setMinimumSize(QSize(70, 0));
        lblValSalaire_Ajout->setFont(font3);
        lblValSalaire_Ajout->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_Salaire_Ajout->addWidget(lblValSalaire_Ajout);


        formLayout_Ajout->setLayout(4, QFormLayout::FieldRole, verticalLayout_Salaire_Ajout);

        txtEmailAjout = new QLineEdit(cardFrame_2);
        txtEmailAjout->setObjectName("txtEmailAjout");

        formLayout_Ajout->setWidget(1, QFormLayout::FieldRole, txtEmailAjout);

        label_2 = new QLabel(cardFrame_2);
        label_2->setObjectName("label_2");

        formLayout_Ajout->setWidget(1, QFormLayout::LabelRole, label_2);


        verticalLayout_FormRight_2->addLayout(formLayout_Ajout);

        verticalSpacer_Form_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_FormRight_2->addItem(verticalSpacer_Form_2);

        horizontalLayout_Buttons_2 = new QHBoxLayout();
        horizontalLayout_Buttons_2->setObjectName("horizontalLayout_Buttons_2");
        horizontalSpacer_Buttons_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_Buttons_2->addItem(horizontalSpacer_Buttons_2);

        btnAnnuler_Ajout = new QPushButton(cardFrame_2);
        btnAnnuler_Ajout->setObjectName("btnAnnuler_Ajout");

        horizontalLayout_Buttons_2->addWidget(btnAnnuler_Ajout);

        btnAjouter = new QPushButton(cardFrame_2);
        btnAjouter->setObjectName("btnAjouter");

        horizontalLayout_Buttons_2->addWidget(btnAjouter);


        verticalLayout_FormRight_2->addLayout(horizontalLayout_Buttons_2);


        horizontalLayout_AjoutFrame->addLayout(verticalLayout_FormRight_2);


        gridLayout_Ajout->addWidget(cardFrame_2, 1, 0, 1, 1);

        stackedWidget->addWidget(ajout);
        mission = new QWidget();
        mission->setObjectName("mission");
        verticalLayout_Mission = new QVBoxLayout(mission);
        verticalLayout_Mission->setObjectName("verticalLayout_Mission");
        lblTitreMission = new QLabel(mission);
        lblTitreMission->setObjectName("lblTitreMission");

        verticalLayout_Mission->addWidget(lblTitreMission);

        txtMission = new QLineEdit(mission);
        txtMission->setObjectName("txtMission");

        verticalLayout_Mission->addWidget(txtMission);

        btnAnalyser = new QPushButton(mission);
        btnAnalyser->setObjectName("btnAnalyser");
        btnAnalyser->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Mission->addWidget(btnAnalyser);

        lblResultat = new QLabel(mission);
        lblResultat->setObjectName("lblResultat");

        verticalLayout_Mission->addWidget(lblResultat);

        tableResultat = new QTableWidget(mission);
        if (tableResultat->columnCount() < 4)
            tableResultat->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableResultat->setHorizontalHeaderItem(0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableResultat->setHorizontalHeaderItem(1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableResultat->setHorizontalHeaderItem(2, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableResultat->setHorizontalHeaderItem(3, __qtablewidgetitem32);
        tableResultat->setObjectName("tableResultat");
        tableResultat->setStyleSheet(QString::fromUtf8("background-color: white; gridline-color: #eee;"));
        tableResultat->horizontalHeader()->setStretchLastSection(true);
        tableResultat->verticalHeader()->setVisible(false);

        verticalLayout_Mission->addWidget(tableResultat);

        verticalSpacer_Mission = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_Mission->addItem(verticalSpacer_Mission);

        btnAnnulerMission = new QPushButton(mission);
        btnAnnulerMission->setObjectName("btnAnnulerMission");

        verticalLayout_Mission->addWidget(btnAnnulerMission);

        stackedWidget->addWidget(mission);
        pointage = new QWidget();
        pointage->setObjectName("pointage");
        verticalLayout_Pointage = new QVBoxLayout(pointage);
        verticalLayout_Pointage->setObjectName("verticalLayout_Pointage");
        lblTitrePointage = new QLabel(pointage);
        lblTitrePointage->setObjectName("lblTitrePointage");

        verticalLayout_Pointage->addWidget(lblTitrePointage);

        lblStatutRFID = new QLabel(pointage);
        lblStatutRFID->setObjectName("lblStatutRFID");
        lblStatutRFID->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_Pointage->addWidget(lblStatutRFID);

        btnSimulerBadge = new QPushButton(pointage);
        btnSimulerBadge->setObjectName("btnSimulerBadge");
        btnSimulerBadge->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Pointage->addWidget(btnSimulerBadge);

        lblLog = new QLabel(pointage);
        lblLog->setObjectName("lblLog");

        verticalLayout_Pointage->addWidget(lblLog);

        tablePointage = new QTableWidget(pointage);
        if (tablePointage->columnCount() < 4)
            tablePointage->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tablePointage->setHorizontalHeaderItem(0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tablePointage->setHorizontalHeaderItem(1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tablePointage->setHorizontalHeaderItem(2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tablePointage->setHorizontalHeaderItem(3, __qtablewidgetitem36);
        tablePointage->setObjectName("tablePointage");
        tablePointage->setStyleSheet(QString::fromUtf8("background-color: white; gridline-color: #eee;"));
        tablePointage->horizontalHeader()->setStretchLastSection(true);
        tablePointage->verticalHeader()->setVisible(false);

        verticalLayout_Pointage->addWidget(tablePointage);

        verticalSpacer_Pointage = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_Pointage->addItem(verticalSpacer_Pointage);

        btnAnnulerPointage = new QPushButton(pointage);
        btnAnnulerPointage->setObjectName("btnAnnulerPointage");

        verticalLayout_Pointage->addWidget(btnAnnulerPointage);

        stackedWidget->addWidget(pointage);
        statistiques = new QWidget();
        statistiques->setObjectName("statistiques");
        verticalLayout_StatsPage = new QVBoxLayout(statistiques);
        verticalLayout_StatsPage->setObjectName("verticalLayout_StatsPage");
        horizontalLayout_Stats = new QHBoxLayout();
        horizontalLayout_Stats->setSpacing(20);
        horizontalLayout_Stats->setObjectName("horizontalLayout_Stats");
        chartViewAbsence = new QChartView(statistiques);
        chartViewAbsence->setObjectName("chartViewAbsence");
        chartViewAbsence->setMinimumSize(QSize(0, 350));

        horizontalLayout_Stats->addWidget(chartViewAbsence);

        chartViewWorkload = new QChartView(statistiques);
        chartViewWorkload->setObjectName("chartViewWorkload");
        chartViewWorkload->setMinimumSize(QSize(0, 350));

        horizontalLayout_Stats->addWidget(chartViewWorkload);


        verticalLayout_StatsPage->addLayout(horizontalLayout_Stats);

        chartViewTasks = new QChartView(statistiques);
        chartViewTasks->setObjectName("chartViewTasks");
        chartViewTasks->setMinimumSize(QSize(0, 300));

        verticalLayout_StatsPage->addWidget(chartViewTasks);

        cbProjetStats = new QComboBox(statistiques);
        cbProjetStats->addItem(QString());
        cbProjetStats->addItem(QString());
        cbProjetStats->addItem(QString());
        cbProjetStats->setObjectName("cbProjetStats");

        verticalLayout_StatsPage->addWidget(cbProjetStats);

        verticalSpacer_Stats = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_StatsPage->addItem(verticalSpacer_Stats);

        btnAnnulerStats = new QPushButton(statistiques);
        btnAnnulerStats->setObjectName("btnAnnulerStats");

        verticalLayout_StatsPage->addWidget(btnAnnulerStats);

        stackedWidget->addWidget(statistiques);

        verticalLayout_Main->addWidget(stackedWidget);


        horizontalLayout_Main->addWidget(contentArea);

        SWSmartMarket->addWidget(PModule1);
        PModule2 = new QWidget();
        PModule2->setObjectName("PModule2");
        prod_rootLayout = new QHBoxLayout(PModule2);
        prod_rootLayout->setSpacing(0);
        prod_rootLayout->setObjectName("prod_rootLayout");
        prod_rootLayout->setContentsMargins(0, 0, 0, 0);
        prod_leftSidebar = new QFrame(PModule2);
        prod_leftSidebar->setObjectName("prod_leftSidebar");
        prod_leftSidebar->setFrameShape(QFrame::Shape::NoFrame);
        prod_leftSidebar->setFrameShadow(QFrame::Shadow::Plain);
        prod_verticalLayout_1 = new QVBoxLayout(prod_leftSidebar);
        prod_verticalLayout_1->setSpacing(5);
        prod_verticalLayout_1->setObjectName("prod_verticalLayout_1");
        prod_verticalLayout_1->setContentsMargins(-1, -1, -1, 20);
        prod_label_1 = new QLabel(prod_leftSidebar);
        prod_label_1->setObjectName("prod_label_1");
        prod_label_1->setPixmap(QPixmap(QString::fromUtf8(":/WASTEGUARD (1).png")));
        prod_label_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        prod_verticalLayout_1->addWidget(prod_label_1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        prod_verticalLayout_1->addItem(spacerItem);

        prod_btnhome_1 = new QPushButton(prod_leftSidebar);
        prod_btnhome_1->setObjectName("prod_btnhome_1");

        prod_verticalLayout_1->addWidget(prod_btnhome_1);

        prod_btnstock_1 = new QPushButton(prod_leftSidebar);
        prod_btnstock_1->setObjectName("prod_btnstock_1");

        prod_verticalLayout_1->addWidget(prod_btnstock_1);

        prod_btnproduit_1 = new QPushButton(prod_leftSidebar);
        prod_btnproduit_1->setObjectName("prod_btnproduit_1");

        prod_verticalLayout_1->addWidget(prod_btnproduit_1);

        prod_btnclient_1 = new QPushButton(prod_leftSidebar);
        prod_btnclient_1->setObjectName("prod_btnclient_1");

        prod_verticalLayout_1->addWidget(prod_btnclient_1);

        prod_btnemploye_1 = new QPushButton(prod_leftSidebar);
        prod_btnemploye_1->setObjectName("prod_btnemploye_1");

        prod_verticalLayout_1->addWidget(prod_btnemploye_1);

        prod_btnmaintenance_1 = new QPushButton(prod_leftSidebar);
        prod_btnmaintenance_1->setObjectName("prod_btnmaintenance_1");

        prod_verticalLayout_1->addWidget(prod_btnmaintenance_1);

        prod_btncmd_1 = new QPushButton(prod_leftSidebar);
        prod_btncmd_1->setObjectName("prod_btncmd_1");

        prod_verticalLayout_1->addWidget(prod_btncmd_1);

        spacerItem1 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        prod_verticalLayout_1->addItem(spacerItem1);


        prod_rootLayout->addWidget(prod_leftSidebar);

        prod_mainAreaLayout = new QVBoxLayout();
        prod_mainAreaLayout->setObjectName("prod_mainAreaLayout");
        prod_horizontalLayoutWidget_1 = new QFrame(PModule2);
        prod_horizontalLayoutWidget_1->setObjectName("prod_horizontalLayoutWidget_1");
        prod_horizontalLayoutWidget_1->setFrameShape(QFrame::Shape::NoFrame);
        prod_horizontalLayoutWidget_1->setFrameShadow(QFrame::Shadow::Plain);
        prod_horizontalLayout_1 = new QHBoxLayout(prod_horizontalLayoutWidget_1);
        prod_horizontalLayout_1->setObjectName("prod_horizontalLayout_1");
        prod_horizontalLayout_1->setContentsMargins(20, -1, 20, -1);
        prod_lb_1 = new QLabel(prod_horizontalLayoutWidget_1);
        prod_lb_1->setObjectName("prod_lb_1");

        prod_horizontalLayout_1->addWidget(prod_lb_1);

        spacerItem2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        prod_horizontalLayout_1->addItem(spacerItem2);

        prod_user_1 = new QLabel(prod_horizontalLayoutWidget_1);
        prod_user_1->setObjectName("prod_user_1");

        prod_horizontalLayout_1->addWidget(prod_user_1);

        spacerItem3 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        prod_horizontalLayout_1->addItem(spacerItem3);

        prod_btnnotif_1 = new QPushButton(prod_horizontalLayoutWidget_1);
        prod_btnnotif_1->setObjectName("prod_btnnotif_1");

        prod_horizontalLayout_1->addWidget(prod_btnnotif_1);

        prod_btnprofil_1 = new QPushButton(prod_horizontalLayoutWidget_1);
        prod_btnprofil_1->setObjectName("prod_btnprofil_1");

        prod_horizontalLayout_1->addWidget(prod_btnprofil_1);


        prod_mainAreaLayout->addWidget(prod_horizontalLayoutWidget_1);

        prod_dashboard_hLayout = new QHBoxLayout();
        prod_dashboard_hLayout->setSpacing(0);
        prod_dashboard_hLayout->setObjectName("prod_dashboard_hLayout");
        prod_dashboard_hLayout->setContentsMargins(0, 0, 0, 0);
        prod_dashboardRightLayout = new QVBoxLayout();
        prod_dashboardRightLayout->setSpacing(0);
        prod_dashboardRightLayout->setObjectName("prod_dashboardRightLayout");
        prod_dashboardRightLayout->setContentsMargins(0, 0, 0, 0);
        prod_contentLayout = new QHBoxLayout();
        prod_contentLayout->setSpacing(20);
        prod_contentLayout->setObjectName("prod_contentLayout");
        prod_stackedWidget = new QStackedWidget(PModule2);
        prod_stackedWidget->setObjectName("prod_stackedWidget");
        sizePolicy1.setHeightForWidth(prod_stackedWidget->sizePolicy().hasHeightForWidth());
        prod_stackedWidget->setSizePolicy(sizePolicy1);
        prod_affichage = new QWidget();
        prod_affichage->setObjectName("prod_affichage");
        sizePolicy1.setHeightForWidth(prod_affichage->sizePolicy().hasHeightForWidth());
        prod_affichage->setSizePolicy(sizePolicy1);
        prod_affichageLayout = new QHBoxLayout(prod_affichage);
        prod_affichageLayout->setSpacing(12);
        prod_affichageLayout->setObjectName("prod_affichageLayout");
        prod_affichageLayout->setContentsMargins(0, 0, 0, 0);
        prod_tableLayout = new QVBoxLayout();
        prod_tableLayout->setObjectName("prod_tableLayout");
        prod_searchRow = new QHBoxLayout();
        prod_searchRow->setObjectName("prod_searchRow");
        spacerItem4 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        prod_searchRow->addItem(spacerItem4);

        prod_lblSort = new QLabel(prod_affichage);
        prod_lblSort->setObjectName("prod_lblSort");

        prod_searchRow->addWidget(prod_lblSort);

        prod_cbSort = new QComboBox(prod_affichage);
        prod_cbSort->addItem(QString());
        prod_cbSort->addItem(QString());
        prod_cbSort->addItem(QString());
        prod_cbSort->addItem(QString());
        prod_cbSort->setObjectName("prod_cbSort");

        prod_searchRow->addWidget(prod_cbSort);

        prod_searchInput = new QLineEdit(prod_affichage);
        prod_searchInput->setObjectName("prod_searchInput");

        prod_searchRow->addWidget(prod_searchInput);

        prod_btnAddProduct = new QPushButton(prod_affichage);
        prod_btnAddProduct->setObjectName("prod_btnAddProduct");

        prod_searchRow->addWidget(prod_btnAddProduct);


        prod_tableLayout->addLayout(prod_searchRow);

        prod_tableProduits = new QTableWidget(prod_affichage);
        if (prod_tableProduits->columnCount() < 8)
            prod_tableProduits->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        prod_tableProduits->setHorizontalHeaderItem(0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        prod_tableProduits->setHorizontalHeaderItem(1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        prod_tableProduits->setHorizontalHeaderItem(2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        prod_tableProduits->setHorizontalHeaderItem(3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        prod_tableProduits->setHorizontalHeaderItem(4, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        prod_tableProduits->setHorizontalHeaderItem(5, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        prod_tableProduits->setHorizontalHeaderItem(6, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        prod_tableProduits->setHorizontalHeaderItem(7, __qtablewidgetitem44);
        prod_tableProduits->setObjectName("prod_tableProduits");
        sizePolicy1.setHeightForWidth(prod_tableProduits->sizePolicy().hasHeightForWidth());
        prod_tableProduits->setSizePolicy(sizePolicy1);
        prod_tableProduits->setRowCount(0);
        prod_tableProduits->setColumnCount(8);
        prod_tableProduits->verticalHeader()->setVisible(false);

        prod_tableLayout->addWidget(prod_tableProduits);


        prod_affichageLayout->addLayout(prod_tableLayout);

        prod_rightSidebar = new QFrame(prod_affichage);
        prod_rightSidebar->setObjectName("prod_rightSidebar");
        sizePolicy.setHeightForWidth(prod_rightSidebar->sizePolicy().hasHeightForWidth());
        prod_rightSidebar->setSizePolicy(sizePolicy);
        prod_rightSidebar->setMinimumSize(QSize(202, 0));
        prod_rightSidebar->setMaximumSize(QSize(222, 16777215));
        prod_rightSidebar->setFrameShape(QFrame::Shape::StyledPanel);
        prod_rightLayout = new QVBoxLayout(prod_rightSidebar);
        prod_rightLayout->setObjectName("prod_rightLayout");
        prod_lblFunc = new QLabel(prod_rightSidebar);
        prod_lblFunc->setObjectName("prod_lblFunc");

        prod_rightLayout->addWidget(prod_lblFunc);

        prod_stat1 = new QFrame(prod_rightSidebar);
        prod_stat1->setObjectName("prod_stat1");
        vboxLayout = new QVBoxLayout(prod_stat1);
        vboxLayout->setObjectName("vboxLayout");
        prod_st_val1 = new QLabel(prod_stat1);
        prod_st_val1->setObjectName("prod_st_val1");

        vboxLayout->addWidget(prod_st_val1);

        prod_st_lbl1 = new QLabel(prod_stat1);
        prod_st_lbl1->setObjectName("prod_st_lbl1");

        vboxLayout->addWidget(prod_st_lbl1);


        prod_rightLayout->addWidget(prod_stat1);

        prod_stat2 = new QFrame(prod_rightSidebar);
        prod_stat2->setObjectName("prod_stat2");
        vboxLayout1 = new QVBoxLayout(prod_stat2);
        vboxLayout1->setObjectName("vboxLayout1");
        prod_st_val2 = new QLabel(prod_stat2);
        prod_st_val2->setObjectName("prod_st_val2");

        vboxLayout1->addWidget(prod_st_val2);

        prod_st_lbl2 = new QLabel(prod_stat2);
        prod_st_lbl2->setObjectName("prod_st_lbl2");

        vboxLayout1->addWidget(prod_st_lbl2);


        prod_rightLayout->addWidget(prod_stat2);

        prod_stat3 = new QFrame(prod_rightSidebar);
        prod_stat3->setObjectName("prod_stat3");
        vboxLayout2 = new QVBoxLayout(prod_stat3);
        vboxLayout2->setObjectName("vboxLayout2");
        prod_st_val3 = new QLabel(prod_stat3);
        prod_st_val3->setObjectName("prod_st_val3");

        vboxLayout2->addWidget(prod_st_val3);

        prod_st_lbl3 = new QLabel(prod_stat3);
        prod_st_lbl3->setObjectName("prod_st_lbl3");

        vboxLayout2->addWidget(prod_st_lbl3);


        prod_rightLayout->addWidget(prod_stat3);

        prod_statsPreview = new QFrame(prod_rightSidebar);
        prod_statsPreview->setObjectName("prod_statsPreview");
        prod_statsPreviewLayout = new QVBoxLayout(prod_statsPreview);
        prod_statsPreviewLayout->setObjectName("prod_statsPreviewLayout");
        prod_lblStatsTitle = new QLabel(prod_statsPreview);
        prod_lblStatsTitle->setObjectName("prod_lblStatsTitle");

        prod_statsPreviewLayout->addWidget(prod_lblStatsTitle);

        prod_miniStatsFrame = new QFrame(prod_statsPreview);
        prod_miniStatsFrame->setObjectName("prod_miniStatsFrame");
        prod_miniStatsFrame->setMinimumSize(QSize(0, 70));
        prod_miniStatsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        prod_miniStatsFrame->setFrameShadow(QFrame::Shadow::Sunken);
        prod_miniStatsLayout = new QVBoxLayout(prod_miniStatsFrame);
        prod_miniStatsLayout->setSpacing(6);
        prod_miniStatsLayout->setObjectName("prod_miniStatsLayout");
        prod_miniStatsLayout->setContentsMargins(8, 8, 8, 8);
        prod_rowMiniLayout1 = new QHBoxLayout();
        prod_rowMiniLayout1->setSpacing(8);
        prod_rowMiniLayout1->setObjectName("prod_rowMiniLayout1");
        prod_rowMiniLayout1->setContentsMargins(0, 0, 0, 0);
        prod_lblMini1 = new QLabel(prod_miniStatsFrame);
        prod_lblMini1->setObjectName("prod_lblMini1");

        prod_rowMiniLayout1->addWidget(prod_lblMini1);

        prod_pbTrend = new QProgressBar(prod_miniStatsFrame);
        prod_pbTrend->setObjectName("prod_pbTrend");
        prod_pbTrend->setValue(68);
        prod_pbTrend->setTextVisible(false);

        prod_rowMiniLayout1->addWidget(prod_pbTrend);


        prod_miniStatsLayout->addLayout(prod_rowMiniLayout1);

        prod_rowMiniLayout2 = new QHBoxLayout();
        prod_rowMiniLayout2->setSpacing(8);
        prod_rowMiniLayout2->setObjectName("prod_rowMiniLayout2");
        prod_rowMiniLayout2->setContentsMargins(0, 0, 0, 0);
        prod_lblMini2 = new QLabel(prod_miniStatsFrame);
        prod_lblMini2->setObjectName("prod_lblMini2");

        prod_rowMiniLayout2->addWidget(prod_lblMini2);

        prod_pbStock = new QProgressBar(prod_miniStatsFrame);
        prod_pbStock->setObjectName("prod_pbStock");
        prod_pbStock->setValue(42);
        prod_pbStock->setTextVisible(false);

        prod_rowMiniLayout2->addWidget(prod_pbStock);


        prod_miniStatsLayout->addLayout(prod_rowMiniLayout2);


        prod_statsPreviewLayout->addWidget(prod_miniStatsFrame);

        prod_btnOpenStats = new QPushButton(prod_statsPreview);
        prod_btnOpenStats->setObjectName("prod_btnOpenStats");
        prod_btnOpenStats->setFlat(true);

        prod_statsPreviewLayout->addWidget(prod_btnOpenStats);


        prod_rightLayout->addWidget(prod_statsPreview);

        prod_btnMap3D = new QPushButton(prod_rightSidebar);
        prod_btnMap3D->setObjectName("prod_btnMap3D");
        prod_btnMap3D->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        prod_rightLayout->addWidget(prod_btnMap3D);

        prod_btnVideo3D = new QPushButton(prod_rightSidebar);
        prod_btnVideo3D->setObjectName("prod_btnVideo3D");
        prod_btnVideo3D->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        prod_rightLayout->addWidget(prod_btnVideo3D);

        spacerItem5 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        prod_rightLayout->addItem(spacerItem5);

        prod_lblExport = new QLabel(prod_rightSidebar);
        prod_lblExport->setObjectName("prod_lblExport");

        prod_rightLayout->addWidget(prod_lblExport);

        prod_btnPdf = new QPushButton(prod_rightSidebar);
        prod_btnPdf->setObjectName("prod_btnPdf");

        prod_rightLayout->addWidget(prod_btnPdf);

        prod_btnCsv = new QPushButton(prod_rightSidebar);
        prod_btnCsv->setObjectName("prod_btnCsv");

        prod_rightLayout->addWidget(prod_btnCsv);

        spacerItem6 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        prod_rightLayout->addItem(spacerItem6);


        prod_affichageLayout->addWidget(prod_rightSidebar);

        prod_stackedWidget->addWidget(prod_affichage);
        prod_ajout = new QWidget();
        prod_ajout->setObjectName("prod_ajout");
        prod_ajout->setAutoFillBackground(false);
        prod_ajout_hLayout = new QHBoxLayout(prod_ajout);
        prod_ajout_hLayout->setSpacing(0);
        prod_ajout_hLayout->setObjectName("prod_ajout_hLayout");
        prod_ajout_hLayout->setContentsMargins(0, 0, 0, 0);
        prod_addRightLayout = new QVBoxLayout();
        prod_addRightLayout->setSpacing(0);
        prod_addRightLayout->setObjectName("prod_addRightLayout");
        prod_addRightLayout->setContentsMargins(0, 0, 0, 0);
        prod_hl_add_split = new QHBoxLayout();
        prod_hl_add_split->setSpacing(20);
        prod_hl_add_split->setObjectName("prod_hl_add_split");
        prod_vl_img_add = new QVBoxLayout();
        prod_vl_img_add->setObjectName("prod_vl_img_add");
        prod_lblImgPreview_Add = new QLabel(prod_ajout);
        prod_lblImgPreview_Add->setObjectName("prod_lblImgPreview_Add");
        prod_lblImgPreview_Add->setMinimumSize(QSize(0, 250));
        prod_lblImgPreview_Add->setAlignment(Qt::AlignmentFlag::AlignCenter);

        prod_vl_img_add->addWidget(prod_lblImgPreview_Add);

        prod_btnUpload_Add = new QPushButton(prod_ajout);
        prod_btnUpload_Add->setObjectName("prod_btnUpload_Add");

        prod_vl_img_add->addWidget(prod_btnUpload_Add);

        spacerItem7 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        prod_vl_img_add->addItem(spacerItem7);


        prod_hl_add_split->addLayout(prod_vl_img_add);

        prod_cardAdd = new QFrame(prod_ajout);
        prod_cardAdd->setObjectName("prod_cardAdd");
        prod_cardAdd->setFrameShape(QFrame::Shape::StyledPanel);
        prod_verticalLayout_Add = new QVBoxLayout(prod_cardAdd);
        prod_verticalLayout_Add->setSpacing(10);
        prod_verticalLayout_Add->setObjectName("prod_verticalLayout_Add");
        prod_verticalLayout_Add->setContentsMargins(30, 20, 30, 20);
        prod_lblTitleAdd = new QLabel(prod_cardAdd);
        prod_lblTitleAdd->setObjectName("prod_lblTitleAdd");

        prod_verticalLayout_Add->addWidget(prod_lblTitleAdd);

        prod_gl_inputs = new QGridLayout();
        prod_gl_inputs->setObjectName("prod_gl_inputs");
        prod_l1 = new QLabel(prod_cardAdd);
        prod_l1->setObjectName("prod_l1");

        prod_gl_inputs->addWidget(prod_l1, 0, 0, 1, 1);

        prod_ln_ref_add = new QLineEdit(prod_cardAdd);
        prod_ln_ref_add->setObjectName("prod_ln_ref_add");

        prod_gl_inputs->addWidget(prod_ln_ref_add, 0, 1, 1, 1);

        prod_l2 = new QLabel(prod_cardAdd);
        prod_l2->setObjectName("prod_l2");

        prod_gl_inputs->addWidget(prod_l2, 0, 2, 1, 1);

        prod_cb_model_add = new QComboBox(prod_cardAdd);
        prod_cb_model_add->addItem(QString());
        prod_cb_model_add->setObjectName("prod_cb_model_add");

        prod_gl_inputs->addWidget(prod_cb_model_add, 0, 3, 1, 1);

        prod_l_px = new QLabel(prod_cardAdd);
        prod_l_px->setObjectName("prod_l_px");

        prod_gl_inputs->addWidget(prod_l_px, 1, 0, 1, 1);

        prod_dsb_price_add = new QDoubleSpinBox(prod_cardAdd);
        prod_dsb_price_add->setObjectName("prod_dsb_price_add");
        prod_dsb_price_add->setMaximum(99999.000000000000000);

        prod_gl_inputs->addWidget(prod_dsb_price_add, 1, 1, 1, 1);

        prod_l_qty = new QLabel(prod_cardAdd);
        prod_l_qty->setObjectName("prod_l_qty");

        prod_gl_inputs->addWidget(prod_l_qty, 1, 2, 1, 1);

        prod_sb_qty_add = new QSpinBox(prod_cardAdd);
        prod_sb_qty_add->setObjectName("prod_sb_qty_add");

        prod_gl_inputs->addWidget(prod_sb_qty_add, 1, 3, 1, 1);

        prod_l_stat = new QLabel(prod_cardAdd);
        prod_l_stat->setObjectName("prod_l_stat");

        prod_gl_inputs->addWidget(prod_l_stat, 2, 0, 1, 1);

        prod_cb_status_add = new QComboBox(prod_cardAdd);
        prod_cb_status_add->addItem(QString());
        prod_cb_status_add->setObjectName("prod_cb_status_add");

        prod_gl_inputs->addWidget(prod_cb_status_add, 2, 1, 1, 1);


        prod_verticalLayout_Add->addLayout(prod_gl_inputs);

        prod_hl_sliders = new QHBoxLayout();
        prod_hl_sliders->setObjectName("prod_hl_sliders");
        prod_vl_bat = new QVBoxLayout();
        prod_vl_bat->setObjectName("prod_vl_bat");
        prod_horizontalLayout = new QHBoxLayout();
        prod_horizontalLayout->setObjectName("prod_horizontalLayout");
        prod_l_bat = new QLabel(prod_cardAdd);
        prod_l_bat->setObjectName("prod_l_bat");

        prod_horizontalLayout->addWidget(prod_l_bat);

        prod_label = new QLabel(prod_cardAdd);
        prod_label->setObjectName("prod_label");

        prod_horizontalLayout->addWidget(prod_label);


        prod_vl_bat->addLayout(prod_horizontalLayout);

        prod_slider_bat_add = new QSlider(prod_cardAdd);
        prod_slider_bat_add->setObjectName("prod_slider_bat_add");
        prod_slider_bat_add->setMinimum(2000);
        prod_slider_bat_add->setMaximum(20000);
        prod_slider_bat_add->setOrientation(Qt::Orientation::Horizontal);

        prod_vl_bat->addWidget(prod_slider_bat_add);


        prod_hl_sliders->addLayout(prod_vl_bat);

        prod_vl_cap = new QVBoxLayout();
        prod_vl_cap->setObjectName("prod_vl_cap");
        prod_horizontalLayout_4 = new QHBoxLayout();
        prod_horizontalLayout_4->setObjectName("prod_horizontalLayout_4");
        prod_l_cap = new QLabel(prod_cardAdd);
        prod_l_cap->setObjectName("prod_l_cap");

        prod_horizontalLayout_4->addWidget(prod_l_cap);

        prod_label_4 = new QLabel(prod_cardAdd);
        prod_label_4->setObjectName("prod_label_4");

        prod_horizontalLayout_4->addWidget(prod_label_4);


        prod_vl_cap->addLayout(prod_horizontalLayout_4);

        prod_slider_cap_add = new QSlider(prod_cardAdd);
        prod_slider_cap_add->setObjectName("prod_slider_cap_add");
        prod_slider_cap_add->setMinimum(50);
        prod_slider_cap_add->setMaximum(1000);
        prod_slider_cap_add->setOrientation(Qt::Orientation::Horizontal);

        prod_vl_cap->addWidget(prod_slider_cap_add);


        prod_hl_sliders->addLayout(prod_vl_cap);


        prod_verticalLayout_Add->addLayout(prod_hl_sliders);

        prod_gb_characteristics = new QGroupBox(prod_cardAdd);
        prod_gb_characteristics->setObjectName("prod_gb_characteristics");
        prod_vl_characteristics = new QVBoxLayout(prod_gb_characteristics);
        prod_vl_characteristics->setObjectName("prod_vl_characteristics");
        prod_lstCharacteristics = new QListWidget(prod_gb_characteristics);
        new QListWidgetItem(prod_lstCharacteristics);
        new QListWidgetItem(prod_lstCharacteristics);
        new QListWidgetItem(prod_lstCharacteristics);
        new QListWidgetItem(prod_lstCharacteristics);
        new QListWidgetItem(prod_lstCharacteristics);
        new QListWidgetItem(prod_lstCharacteristics);
        new QListWidgetItem(prod_lstCharacteristics);
        prod_lstCharacteristics->setObjectName("prod_lstCharacteristics");
        prod_lstCharacteristics->setAlternatingRowColors(true);
        prod_lstCharacteristics->setSelectionMode(QAbstractItemView::SelectionMode::MultiSelection);

        prod_vl_characteristics->addWidget(prod_lstCharacteristics);


        prod_verticalLayout_Add->addWidget(prod_gb_characteristics);

        prod_l5 = new QLabel(prod_cardAdd);
        prod_l5->setObjectName("prod_l5");

        prod_verticalLayout_Add->addWidget(prod_l5);

        prod_mapFrame = new QFrame(prod_cardAdd);
        prod_mapFrame->setObjectName("prod_mapFrame");
        prod_mapFrame->setFrameShape(QFrame::Shape::StyledPanel);
        prod_gl_map_add = new QGridLayout(prod_mapFrame);
        prod_gl_map_add->setObjectName("prod_gl_map_add");
        prod_zoneA = new QLabel(prod_mapFrame);
        prod_zoneA->setObjectName("prod_zoneA");
        prod_zoneA->setAlignment(Qt::AlignmentFlag::AlignCenter);

        prod_gl_map_add->addWidget(prod_zoneA, 0, 0, 1, 3);

        prod_btn_a1 = new QPushButton(prod_mapFrame);
        prod_btn_a1->setObjectName("prod_btn_a1");
        prod_btn_a1->setCheckable(true);
        prod_btn_a1->setAutoExclusive(true);

        prod_gl_map_add->addWidget(prod_btn_a1, 1, 0, 1, 1);

        prod_btn_a2 = new QPushButton(prod_mapFrame);
        prod_btn_a2->setObjectName("prod_btn_a2");
        prod_btn_a2->setEnabled(false);

        prod_gl_map_add->addWidget(prod_btn_a2, 1, 1, 1, 1);

        prod_btn_a3 = new QPushButton(prod_mapFrame);
        prod_btn_a3->setObjectName("prod_btn_a3");
        prod_btn_a3->setCheckable(true);
        prod_btn_a3->setAutoExclusive(true);

        prod_gl_map_add->addWidget(prod_btn_a3, 1, 2, 1, 1);

        prod_zoneB = new QLabel(prod_mapFrame);
        prod_zoneB->setObjectName("prod_zoneB");
        prod_zoneB->setAlignment(Qt::AlignmentFlag::AlignCenter);

        prod_gl_map_add->addWidget(prod_zoneB, 2, 0, 1, 3);

        prod_btn_b1 = new QPushButton(prod_mapFrame);
        prod_btn_b1->setObjectName("prod_btn_b1");
        prod_btn_b1->setCheckable(true);
        prod_btn_b1->setAutoExclusive(true);

        prod_gl_map_add->addWidget(prod_btn_b1, 3, 0, 1, 1);

        prod_btn_b2 = new QPushButton(prod_mapFrame);
        prod_btn_b2->setObjectName("prod_btn_b2");
        prod_btn_b2->setCheckable(true);
        prod_btn_b2->setAutoExclusive(true);

        prod_gl_map_add->addWidget(prod_btn_b2, 3, 1, 1, 1);

        prod_btn_b3 = new QPushButton(prod_mapFrame);
        prod_btn_b3->setObjectName("prod_btn_b3");
        prod_btn_b3->setCheckable(true);
        prod_btn_b3->setAutoExclusive(true);

        prod_gl_map_add->addWidget(prod_btn_b3, 3, 2, 1, 1);

        prod_zoneC = new QLabel(prod_mapFrame);
        prod_zoneC->setObjectName("prod_zoneC");
        prod_zoneC->setAlignment(Qt::AlignmentFlag::AlignCenter);

        prod_gl_map_add->addWidget(prod_zoneC, 4, 0, 1, 3);

        prod_btn_c2 = new QPushButton(prod_mapFrame);
        prod_btn_c2->setObjectName("prod_btn_c2");
        prod_btn_c2->setCheckable(true);
        prod_btn_c2->setAutoExclusive(true);

        prod_gl_map_add->addWidget(prod_btn_c2, 5, 1, 1, 1);

        prod_btn_c3 = new QPushButton(prod_mapFrame);
        prod_btn_c3->setObjectName("prod_btn_c3");
        prod_btn_c3->setCheckable(true);
        prod_btn_c3->setAutoExclusive(true);

        prod_gl_map_add->addWidget(prod_btn_c3, 5, 2, 1, 1);

        prod_btn_a2_2 = new QPushButton(prod_mapFrame);
        prod_btn_a2_2->setObjectName("prod_btn_a2_2");
        prod_btn_a2_2->setEnabled(false);

        prod_gl_map_add->addWidget(prod_btn_a2_2, 5, 0, 1, 1);


        prod_verticalLayout_Add->addWidget(prod_mapFrame);

        prod_btns_add = new QHBoxLayout();
        prod_btns_add->setObjectName("prod_btns_add");
        prod_btnSave_Add = new QPushButton(prod_cardAdd);
        prod_btnSave_Add->setObjectName("prod_btnSave_Add");

        prod_btns_add->addWidget(prod_btnSave_Add);

        prod_btnCancel_Add = new QPushButton(prod_cardAdd);
        prod_btnCancel_Add->setObjectName("prod_btnCancel_Add");

        prod_btns_add->addWidget(prod_btnCancel_Add);


        prod_verticalLayout_Add->addLayout(prod_btns_add);


        prod_hl_add_split->addWidget(prod_cardAdd);


        prod_addRightLayout->addLayout(prod_hl_add_split);


        prod_ajout_hLayout->addLayout(prod_addRightLayout);

        prod_stackedWidget->addWidget(prod_ajout);
        prod_modification = new QWidget();
        prod_modification->setObjectName("prod_modification");
        prod_modification->setAutoFillBackground(false);
        prod_modifier_hLayout = new QHBoxLayout(prod_modification);
        prod_modifier_hLayout->setSpacing(0);
        prod_modifier_hLayout->setObjectName("prod_modifier_hLayout");
        prod_modifier_hLayout->setContentsMargins(0, 0, 0, 0);
        prod_modRightLayout = new QVBoxLayout();
        prod_modRightLayout->setSpacing(0);
        prod_modRightLayout->setObjectName("prod_modRightLayout");
        prod_modRightLayout->setContentsMargins(0, 0, 0, 0);
        prod_hl_mod_split = new QHBoxLayout();
        prod_hl_mod_split->setSpacing(20);
        prod_hl_mod_split->setObjectName("prod_hl_mod_split");
        prod_imgBin = new QLabel(prod_modification);
        prod_imgBin->setObjectName("prod_imgBin");
        prod_imgBin->setMaximumSize(QSize(16777215, 250));
        prod_imgBin->setAlignment(Qt::AlignmentFlag::AlignCenter);

        prod_hl_mod_split->addWidget(prod_imgBin);

        prod_cardMod = new QFrame(prod_modification);
        prod_cardMod->setObjectName("prod_cardMod");
        prod_cardMod->setFrameShape(QFrame::Shape::StyledPanel);
        prod_verticalLayout_Mod = new QVBoxLayout(prod_cardMod);
        prod_verticalLayout_Mod->setSpacing(10);
        prod_verticalLayout_Mod->setObjectName("prod_verticalLayout_Mod");
        prod_verticalLayout_Mod->setContentsMargins(30, 20, 30, 20);
        prod_lblTitleMod = new QLabel(prod_cardMod);
        prod_lblTitleMod->setObjectName("prod_lblTitleMod");

        prod_verticalLayout_Mod->addWidget(prod_lblTitleMod);

        prod_gl_inputs_mod = new QGridLayout();
        prod_gl_inputs_mod->setObjectName("prod_gl_inputs_mod");
        prod_sb_qty_mod = new QSpinBox(prod_cardMod);
        prod_sb_qty_mod->setObjectName("prod_sb_qty_mod");
        prod_sb_qty_mod->setValue(45);

        prod_gl_inputs_mod->addWidget(prod_sb_qty_mod, 1, 3, 1, 1);

        prod_l_stat_m = new QLabel(prod_cardMod);
        prod_l_stat_m->setObjectName("prod_l_stat_m");

        prod_gl_inputs_mod->addWidget(prod_l_stat_m, 2, 0, 1, 1);

        prod_l_qty_m = new QLabel(prod_cardMod);
        prod_l_qty_m->setObjectName("prod_l_qty_m");

        prod_gl_inputs_mod->addWidget(prod_l_qty_m, 1, 2, 1, 1);

        prod_cb_model_mod = new QComboBox(prod_cardMod);
        prod_cb_model_mod->addItem(QString());
        prod_cb_model_mod->setObjectName("prod_cb_model_mod");

        prod_gl_inputs_mod->addWidget(prod_cb_model_mod, 0, 3, 1, 1);

        prod_cb_status_mod = new QComboBox(prod_cardMod);
        prod_cb_status_mod->addItem(QString());
        prod_cb_status_mod->setObjectName("prod_cb_status_mod");

        prod_gl_inputs_mod->addWidget(prod_cb_status_mod, 2, 1, 1, 1);

        prod_dsb_price_mod = new QDoubleSpinBox(prod_cardMod);
        prod_dsb_price_mod->setObjectName("prod_dsb_price_mod");
        prod_dsb_price_mod->setValue(0.000000000000000);

        prod_gl_inputs_mod->addWidget(prod_dsb_price_mod, 1, 1, 1, 1);

        prod_ln_ref_mod = new QLineEdit(prod_cardMod);
        prod_ln_ref_mod->setObjectName("prod_ln_ref_mod");
        prod_ln_ref_mod->setReadOnly(true);

        prod_gl_inputs_mod->addWidget(prod_ln_ref_mod, 0, 1, 1, 1);

        prod_l2_m = new QLabel(prod_cardMod);
        prod_l2_m->setObjectName("prod_l2_m");

        prod_gl_inputs_mod->addWidget(prod_l2_m, 0, 2, 1, 1);

        prod_l_px_m = new QLabel(prod_cardMod);
        prod_l_px_m->setObjectName("prod_l_px_m");

        prod_gl_inputs_mod->addWidget(prod_l_px_m, 1, 0, 1, 1);

        prod_l1_m = new QLabel(prod_cardMod);
        prod_l1_m->setObjectName("prod_l1_m");

        prod_gl_inputs_mod->addWidget(prod_l1_m, 0, 0, 1, 1);


        prod_verticalLayout_Mod->addLayout(prod_gl_inputs_mod);

        prod_hl_sliders_mod = new QHBoxLayout();
        prod_hl_sliders_mod->setObjectName("prod_hl_sliders_mod");
        prod_vl_bat_mod = new QVBoxLayout();
        prod_vl_bat_mod->setObjectName("prod_vl_bat_mod");
        prod_l_bat_m = new QLabel(prod_cardMod);
        prod_l_bat_m->setObjectName("prod_l_bat_m");

        prod_vl_bat_mod->addWidget(prod_l_bat_m);

        prod_slider_bat_mod = new QSlider(prod_cardMod);
        prod_slider_bat_mod->setObjectName("prod_slider_bat_mod");
        prod_slider_bat_mod->setMaximum(20000);
        prod_slider_bat_mod->setValue(12000);
        prod_slider_bat_mod->setOrientation(Qt::Orientation::Horizontal);

        prod_vl_bat_mod->addWidget(prod_slider_bat_mod);


        prod_hl_sliders_mod->addLayout(prod_vl_bat_mod);

        prod_vl_cap_mod = new QVBoxLayout();
        prod_vl_cap_mod->setObjectName("prod_vl_cap_mod");
        prod_l_cap_m = new QLabel(prod_cardMod);
        prod_l_cap_m->setObjectName("prod_l_cap_m");

        prod_vl_cap_mod->addWidget(prod_l_cap_m);

        prod_slider_cap_mod = new QSlider(prod_cardMod);
        prod_slider_cap_mod->setObjectName("prod_slider_cap_mod");
        prod_slider_cap_mod->setMaximum(1000);
        prod_slider_cap_mod->setOrientation(Qt::Orientation::Horizontal);

        prod_vl_cap_mod->addWidget(prod_slider_cap_mod);


        prod_hl_sliders_mod->addLayout(prod_vl_cap_mod);


        prod_verticalLayout_Mod->addLayout(prod_hl_sliders_mod);

        prod_gb_characteristics_mod = new QGroupBox(prod_cardMod);
        prod_gb_characteristics_mod->setObjectName("prod_gb_characteristics_mod");
        prod_vl_characteristics_mod = new QVBoxLayout(prod_gb_characteristics_mod);
        prod_vl_characteristics_mod->setObjectName("prod_vl_characteristics_mod");
        prod_lstCharacteristics_mod = new QListWidget(prod_gb_characteristics_mod);
        new QListWidgetItem(prod_lstCharacteristics_mod);
        new QListWidgetItem(prod_lstCharacteristics_mod);
        new QListWidgetItem(prod_lstCharacteristics_mod);
        new QListWidgetItem(prod_lstCharacteristics_mod);
        new QListWidgetItem(prod_lstCharacteristics_mod);
        new QListWidgetItem(prod_lstCharacteristics_mod);
        new QListWidgetItem(prod_lstCharacteristics_mod);
        prod_lstCharacteristics_mod->setObjectName("prod_lstCharacteristics_mod");
        prod_lstCharacteristics_mod->setAlternatingRowColors(true);
        prod_lstCharacteristics_mod->setSelectionMode(QAbstractItemView::SelectionMode::MultiSelection);

        prod_vl_characteristics_mod->addWidget(prod_lstCharacteristics_mod);


        prod_verticalLayout_Mod->addWidget(prod_gb_characteristics_mod);

        prod_l5_m = new QLabel(prod_cardMod);
        prod_l5_m->setObjectName("prod_l5_m");

        prod_verticalLayout_Mod->addWidget(prod_l5_m);

        prod_depotMapFrame_mod = new QFrame(prod_cardMod);
        prod_depotMapFrame_mod->setObjectName("prod_depotMapFrame_mod");
        prod_depotMapFrame_mod->setFrameShape(QFrame::Shape::StyledPanel);
        prod_gl_map_mod = new QGridLayout(prod_depotMapFrame_mod);
        prod_gl_map_mod->setObjectName("prod_gl_map_mod");
        prod_zoneAm = new QLabel(prod_depotMapFrame_mod);
        prod_zoneAm->setObjectName("prod_zoneAm");
        prod_zoneAm->setAlignment(Qt::AlignmentFlag::AlignCenter);

        prod_gl_map_mod->addWidget(prod_zoneAm, 0, 0, 1, 3);

        prod_btn_a1_m = new QPushButton(prod_depotMapFrame_mod);
        prod_btn_a1_m->setObjectName("prod_btn_a1_m");
        prod_btn_a1_m->setCheckable(true);
        prod_btn_a1_m->setChecked(true);
        prod_btn_a1_m->setAutoExclusive(true);

        prod_gl_map_mod->addWidget(prod_btn_a1_m, 1, 0, 1, 1);

        prod_btn_a3_m = new QPushButton(prod_depotMapFrame_mod);
        prod_btn_a3_m->setObjectName("prod_btn_a3_m");
        prod_btn_a3_m->setCheckable(true);
        prod_btn_a3_m->setAutoExclusive(true);

        prod_gl_map_mod->addWidget(prod_btn_a3_m, 1, 2, 1, 1);

        prod_zoneBm = new QLabel(prod_depotMapFrame_mod);
        prod_zoneBm->setObjectName("prod_zoneBm");
        prod_zoneBm->setAlignment(Qt::AlignmentFlag::AlignCenter);

        prod_gl_map_mod->addWidget(prod_zoneBm, 2, 0, 1, 3);

        prod_btn_b1_m = new QPushButton(prod_depotMapFrame_mod);
        prod_btn_b1_m->setObjectName("prod_btn_b1_m");
        prod_btn_b1_m->setCheckable(true);
        prod_btn_b1_m->setAutoExclusive(true);

        prod_gl_map_mod->addWidget(prod_btn_b1_m, 3, 0, 1, 1);

        prod_btn_b2_m = new QPushButton(prod_depotMapFrame_mod);
        prod_btn_b2_m->setObjectName("prod_btn_b2_m");
        prod_btn_b2_m->setCheckable(true);
        prod_btn_b2_m->setAutoExclusive(true);

        prod_gl_map_mod->addWidget(prod_btn_b2_m, 3, 1, 1, 1);

        prod_btn_b3_m = new QPushButton(prod_depotMapFrame_mod);
        prod_btn_b3_m->setObjectName("prod_btn_b3_m");
        prod_btn_b3_m->setCheckable(true);
        prod_btn_b3_m->setAutoExclusive(true);

        prod_gl_map_mod->addWidget(prod_btn_b3_m, 3, 2, 1, 1);

        prod_zoneCm = new QLabel(prod_depotMapFrame_mod);
        prod_zoneCm->setObjectName("prod_zoneCm");
        prod_zoneCm->setAlignment(Qt::AlignmentFlag::AlignCenter);

        prod_gl_map_mod->addWidget(prod_zoneCm, 4, 0, 1, 3);

        prod_btn_c1_m = new QPushButton(prod_depotMapFrame_mod);
        prod_btn_c1_m->setObjectName("prod_btn_c1_m");
        prod_btn_c1_m->setCheckable(true);
        prod_btn_c1_m->setAutoExclusive(true);

        prod_gl_map_mod->addWidget(prod_btn_c1_m, 5, 0, 1, 1);

        prod_btn_c2_m = new QPushButton(prod_depotMapFrame_mod);
        prod_btn_c2_m->setObjectName("prod_btn_c2_m");
        prod_btn_c2_m->setCheckable(true);
        prod_btn_c2_m->setAutoExclusive(true);

        prod_gl_map_mod->addWidget(prod_btn_c2_m, 5, 1, 1, 1);

        prod_btn_c3_m = new QPushButton(prod_depotMapFrame_mod);
        prod_btn_c3_m->setObjectName("prod_btn_c3_m");
        prod_btn_c3_m->setCheckable(true);
        prod_btn_c3_m->setAutoExclusive(true);

        prod_gl_map_mod->addWidget(prod_btn_c3_m, 5, 2, 1, 1);

        prod_btn_a2_3 = new QPushButton(prod_depotMapFrame_mod);
        prod_btn_a2_3->setObjectName("prod_btn_a2_3");
        prod_btn_a2_3->setEnabled(false);

        prod_gl_map_mod->addWidget(prod_btn_a2_3, 1, 1, 1, 1);


        prod_verticalLayout_Mod->addWidget(prod_depotMapFrame_mod);

        prod_btns_mod = new QHBoxLayout();
        prod_btns_mod->setObjectName("prod_btns_mod");
        prod_btnSave_Mod = new QPushButton(prod_cardMod);
        prod_btnSave_Mod->setObjectName("prod_btnSave_Mod");

        prod_btns_mod->addWidget(prod_btnSave_Mod);

        prod_btnCancel_Mod = new QPushButton(prod_cardMod);
        prod_btnCancel_Mod->setObjectName("prod_btnCancel_Mod");

        prod_btns_mod->addWidget(prod_btnCancel_Mod);


        prod_verticalLayout_Mod->addLayout(prod_btns_mod);


        prod_hl_mod_split->addWidget(prod_cardMod);


        prod_modRightLayout->addLayout(prod_hl_mod_split);


        prod_modifier_hLayout->addLayout(prod_modRightLayout);

        prod_stackedWidget->addWidget(prod_modification);
        prod_statistiques = new QWidget();
        prod_statistiques->setObjectName("prod_statistiques");
        prod_statsPopupLayout = new QVBoxLayout(prod_statistiques);
        prod_statsPopupLayout->setSpacing(14);
        prod_statsPopupLayout->setObjectName("prod_statsPopupLayout");
        prod_statsPopupLayout->setContentsMargins(20, 20, 20, 20);
        prod_statsHeaderLayout = new QHBoxLayout();
        prod_statsHeaderLayout->setObjectName("prod_statsHeaderLayout");
        prod_btnReturnStats = new QPushButton(prod_statistiques);
        prod_btnReturnStats->setObjectName("prod_btnReturnStats");
        prod_btnReturnStats->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        prod_statsHeaderLayout->addWidget(prod_btnReturnStats);

        prod_horizontalSpacer_Stats = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        prod_statsHeaderLayout->addItem(prod_horizontalSpacer_Stats);


        prod_statsPopupLayout->addLayout(prod_statsHeaderLayout);

        prod_lblStatsHeader = new QLabel(prod_statistiques);
        prod_lblStatsHeader->setObjectName("prod_lblStatsHeader");

        prod_statsPopupLayout->addWidget(prod_lblStatsHeader);

        prod_lblStatsSub = new QLabel(prod_statistiques);
        prod_lblStatsSub->setObjectName("prod_lblStatsSub");

        prod_statsPopupLayout->addWidget(prod_lblStatsSub);

        prod_graphsLayout = new QHBoxLayout();
        prod_graphsLayout->setSpacing(16);
        prod_graphsLayout->setObjectName("prod_graphsLayout");
        prod_graphsLayout->setContentsMargins(0, 0, 0, 0);
        prod_graphFrame1 = new QFrame(prod_statistiques);
        prod_graphFrame1->setObjectName("prod_graphFrame1");
        prod_graphFrame1->setFrameShape(QFrame::Shape::StyledPanel);
        prod_graphFrame1->setFrameShadow(QFrame::Shadow::Raised);
        prod_graphFrame1Layout = new QVBoxLayout(prod_graphFrame1);
        prod_graphFrame1Layout->setSpacing(8);
        prod_graphFrame1Layout->setObjectName("prod_graphFrame1Layout");
        prod_graphFrame1Layout->setContentsMargins(12, 12, 12, 12);
        prod_graphFrame1Title = new QLabel(prod_graphFrame1);
        prod_graphFrame1Title->setObjectName("prod_graphFrame1Title");

        prod_graphFrame1Layout->addWidget(prod_graphFrame1Title);

        prod_graphFrame1Plot = new QFrame(prod_graphFrame1);
        prod_graphFrame1Plot->setObjectName("prod_graphFrame1Plot");
        prod_graphFrame1Plot->setMinimumSize(QSize(0, 0));
        prod_graphFrame1Plot->setFrameShape(QFrame::Shape::StyledPanel);
        prod_graphFrame1Plot->setFrameShadow(QFrame::Shadow::Sunken);
        prod_graphFrame1PlotLayout = new QVBoxLayout(prod_graphFrame1Plot);
        prod_graphFrame1PlotLayout->setObjectName("prod_graphFrame1PlotLayout");
        prod_graphFrame1PlotLayout->setContentsMargins(8, 8, 8, 8);
        prod_graphFrame1Hint = new QLabel(prod_graphFrame1Plot);
        prod_graphFrame1Hint->setObjectName("prod_graphFrame1Hint");
        prod_graphFrame1Hint->setAlignment(Qt::AlignmentFlag::AlignCenter);

        prod_graphFrame1PlotLayout->addWidget(prod_graphFrame1Hint);


        prod_graphFrame1Layout->addWidget(prod_graphFrame1Plot);


        prod_graphsLayout->addWidget(prod_graphFrame1);

        prod_graphFrame2 = new QFrame(prod_statistiques);
        prod_graphFrame2->setObjectName("prod_graphFrame2");
        prod_graphFrame2->setFrameShape(QFrame::Shape::StyledPanel);
        prod_graphFrame2->setFrameShadow(QFrame::Shadow::Raised);
        prod_graphFrame2Layout = new QVBoxLayout(prod_graphFrame2);
        prod_graphFrame2Layout->setSpacing(8);
        prod_graphFrame2Layout->setObjectName("prod_graphFrame2Layout");
        prod_graphFrame2Layout->setContentsMargins(12, 12, 12, 12);
        prod_graphFrame2Title = new QLabel(prod_graphFrame2);
        prod_graphFrame2Title->setObjectName("prod_graphFrame2Title");

        prod_graphFrame2Layout->addWidget(prod_graphFrame2Title);

        prod_graphFrame2Plot = new QFrame(prod_graphFrame2);
        prod_graphFrame2Plot->setObjectName("prod_graphFrame2Plot");
        prod_graphFrame2Plot->setMinimumSize(QSize(0, 0));
        prod_graphFrame2Plot->setFrameShape(QFrame::Shape::StyledPanel);
        prod_graphFrame2Plot->setFrameShadow(QFrame::Shadow::Sunken);
        prod_graphFrame2PlotLayout = new QVBoxLayout(prod_graphFrame2Plot);
        prod_graphFrame2PlotLayout->setObjectName("prod_graphFrame2PlotLayout");
        prod_graphFrame2PlotLayout->setContentsMargins(8, 8, 8, 8);
        prod_graphFrame2Hint = new QLabel(prod_graphFrame2Plot);
        prod_graphFrame2Hint->setObjectName("prod_graphFrame2Hint");
        prod_graphFrame2Hint->setAlignment(Qt::AlignmentFlag::AlignCenter);

        prod_graphFrame2PlotLayout->addWidget(prod_graphFrame2Hint);


        prod_graphFrame2Layout->addWidget(prod_graphFrame2Plot);


        prod_graphsLayout->addWidget(prod_graphFrame2);


        prod_statsPopupLayout->addLayout(prod_graphsLayout);

        prod_lblStatsNote = new QLabel(prod_statistiques);
        prod_lblStatsNote->setObjectName("prod_lblStatsNote");

        prod_statsPopupLayout->addWidget(prod_lblStatsNote);

        spacerItem8 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        prod_statsPopupLayout->addItem(spacerItem8);

        prod_stackedWidget->addWidget(prod_statistiques);

        prod_contentLayout->addWidget(prod_stackedWidget);


        prod_dashboardRightLayout->addLayout(prod_contentLayout);


        prod_dashboard_hLayout->addLayout(prod_dashboardRightLayout);


        prod_mainAreaLayout->addLayout(prod_dashboard_hLayout);


        prod_rootLayout->addLayout(prod_mainAreaLayout);

        SWSmartMarket->addWidget(PModule2);

        verticalLayout_root->addWidget(SWSmartMarket);

        SmartMarket->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SmartMarket);
        menubar->setObjectName("menubar");
        SmartMarket->setMenuBar(menubar);
        statusbar = new QStatusBar(SmartMarket);
        statusbar->setObjectName("statusbar");
        SmartMarket->setStatusBar(statusbar);

        retranslateUi(SmartMarket);

        SWSmartMarket->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);
        prod_stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SmartMarket);
    } // setupUi

    void retranslateUi(QMainWindow *SmartMarket)
    {
        SmartMarket->setWindowTitle(QCoreApplication::translate("SmartMarket", "SmartMarket", nullptr));
        label_logo->setText(QString());
        btnAccueil->setText(QCoreApplication::translate("SmartMarket", "Accueil", nullptr));
        btnStock->setText(QCoreApplication::translate("SmartMarket", "Stock", nullptr));
        btnProduits->setText(QCoreApplication::translate("SmartMarket", "Produits", nullptr));
        btnEmployes->setText(QCoreApplication::translate("SmartMarket", "Employ\303\251s", nullptr));
        btnStatistiques->setText(QCoreApplication::translate("SmartMarket", "Statistiques", nullptr));
        btnMaintenance->setText(QCoreApplication::translate("SmartMarket", "Maintenance", nullptr));
        label_Title->setText(QCoreApplication::translate("SmartMarket", "Tableau de Bord", nullptr));
        btnNouveau->setText(QCoreApplication::translate("SmartMarket", "+ Nouvel Employ\303\251", nullptr));
        lblUserName->setText(QCoreApplication::translate("SmartMarket", "Admin System", nullptr));
        lblUserRole->setText(QCoreApplication::translate("SmartMarket", "Chef d'Atelier", nullptr));
        txtSearch->setPlaceholderText(QCoreApplication::translate("SmartMarket", "\360\237\224\215 Rechercher un employ\303\251...", nullptr));
        cbSort->setItemText(0, QCoreApplication::translate("SmartMarket", "Trier par: Sp\303\251cialit\303\251", nullptr));
        cbSort->setItemText(1, QCoreApplication::translate("SmartMarket", "Trier par: note de fin d annes", nullptr));
        cbSort->setItemText(2, QCoreApplication::translate("SmartMarket", "Trier par: salaire", nullptr));
        cbSort->setItemText(3, QCoreApplication::translate("SmartMarket", "Trier par: Nom", nullptr));

        QTableWidgetItem *___qtablewidgetitem = tableEmployes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SmartMarket", "MATRICULE", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableEmployes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SmartMarket", "NOM COMPLET", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableEmployes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SmartMarket", "SP\303\211CIALIT\303\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableEmployes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SmartMarket", "DISPONIBILIT\303\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableEmployes->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SmartMarket", "ACTIONS", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableEmployes->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("SmartMarket", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableEmployes->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("SmartMarket", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableEmployes->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("SmartMarket", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableEmployes->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("SmartMarket", "4", nullptr));

        const bool __sortingEnabled = tableEmployes->isSortingEnabled();
        tableEmployes->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem9 = tableEmployes->item(0, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("SmartMarket", "EMP-001", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableEmployes->item(0, 1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("SmartMarket", "Ali Ben Salah", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableEmployes->item(0, 2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("SmartMarket", "M\303\251canicien", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableEmployes->item(0, 3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("SmartMarket", "Disponible", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableEmployes->item(0, 4);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("SmartMarket", "\342\234\217\357\270\217 | \360\237\227\221\357\270\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableEmployes->item(1, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("SmartMarket", "EMP-002", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableEmployes->item(1, 1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("SmartMarket", "Sara Tounsi", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableEmployes->item(1, 2);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("SmartMarket", "Chauffeur", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableEmployes->item(1, 3);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("SmartMarket", "En Mission", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableEmployes->item(1, 4);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("SmartMarket", "\342\234\217\357\270\217 | \360\237\227\221\357\270\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableEmployes->item(2, 0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("SmartMarket", "EMP-003", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableEmployes->item(2, 1);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("SmartMarket", "Mohamed Amine", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableEmployes->item(2, 2);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("SmartMarket", "\303\211lectronicien", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableEmployes->item(2, 3);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("SmartMarket", "Cong\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableEmployes->item(2, 4);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("SmartMarket", "\342\234\217\357\270\217 | \360\237\227\221\357\270\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableEmployes->item(3, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("SmartMarket", "EMP-004", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableEmployes->item(3, 1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("SmartMarket", "Rania Kallel", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableEmployes->item(3, 2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("SmartMarket", "Responsable", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableEmployes->item(3, 3);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("SmartMarket", "Disponible", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableEmployes->item(3, 4);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("SmartMarket", "\342\234\217\357\270\217 | \360\237\227\221\357\270\217", nullptr));
        tableEmployes->setSortingEnabled(__sortingEnabled);

        label_StatTitle->setText(QCoreApplication::translate("SmartMarket", "Aper\303\247u", nullptr));
        label_10->setText(QCoreApplication::translate("SmartMarket", "Total Employ\303\251s", nullptr));
        lblStatNumber->setText(QCoreApplication::translate("SmartMarket", "12", nullptr));
        label_12->setText(QCoreApplication::translate("SmartMarket", "Charge de Travail de l'equipe", nullptr));
        lblStatWorkload->setText(QCoreApplication::translate("SmartMarket", "75%", nullptr));
        label_14->setText(QCoreApplication::translate("SmartMarket", "Disponibilit\303\251", nullptr));
        lblStatAvailability->setText(QCoreApplication::translate("SmartMarket", "4 Dispo", nullptr));
        label_Actions->setText(QCoreApplication::translate("SmartMarket", "Actions Rapides", nullptr));
        btnFichePaie->setText(QCoreApplication::translate("SmartMarket", "\360\237\222\260  G\303\251n\303\251rer Fiche de Paie", nullptr));
        btnGoMission->setText(QCoreApplication::translate("SmartMarket", "\360\237\244\226  Affectation IA", nullptr));
        btnGoPointage->setText(QCoreApplication::translate("SmartMarket", "\342\217\261\357\270\217  Pointage", nullptr));
        btnGoStats->setText(QCoreApplication::translate("SmartMarket", "\360\237\223\212  Statistiques", nullptr));
        lblUserName_Modif->setText(QCoreApplication::translate("SmartMarket", "Admin System", nullptr));
        lblUserRole_Modif->setText(QCoreApplication::translate("SmartMarket", "Chef d'Atelier", nullptr));
        imageLabel->setText(QCoreApplication::translate("SmartMarket", "Photo", nullptr));
        btnUploadPhoto->setText(QCoreApplication::translate("SmartMarket", "\360\237\223\267 Charger une photo", nullptr));
        lblMatricule->setText(QCoreApplication::translate("SmartMarket", "Matricule", nullptr));
        txtMatricule->setPlaceholderText(QCoreApplication::translate("SmartMarket", "Auto", nullptr));
        lblNom->setText(QCoreApplication::translate("SmartMarket", "Nom Complet", nullptr));
        lblSpecialite->setText(QCoreApplication::translate("SmartMarket", "Sp\303\251cialit\303\251", nullptr));
        cbSpecialite->setItemText(0, QCoreApplication::translate("SmartMarket", "M\303\251canicien", nullptr));
        cbSpecialite->setItemText(1, QCoreApplication::translate("SmartMarket", "Chauffeur", nullptr));
        cbSpecialite->setItemText(2, QCoreApplication::translate("SmartMarket", "\303\211lectronicien", nullptr));

        lblStatut->setText(QCoreApplication::translate("SmartMarket", "Statut", nullptr));
        cbStatut->setItemText(0, QCoreApplication::translate("SmartMarket", "Disponible", nullptr));
        cbStatut->setItemText(1, QCoreApplication::translate("SmartMarket", "En intervention", nullptr));
        cbStatut->setItemText(2, QCoreApplication::translate("SmartMarket", "Cong\303\251", nullptr));

        lblSalaire_Modif->setText(QCoreApplication::translate("SmartMarket", "Salaire", nullptr));
        lblValSalaire_Modif->setText(QCoreApplication::translate("SmartMarket", "1200 DT", nullptr));
        label->setText(QCoreApplication::translate("SmartMarket", "EMAIL", nullptr));
        txtEmailModif->setPlaceholderText(QCoreApplication::translate("SmartMarket", "xyz@emeple.com", nullptr));
        btnDelete->setText(QCoreApplication::translate("SmartMarket", "Supprimer", nullptr));
        btnAnnuler->setText(QCoreApplication::translate("SmartMarket", "Annuler", nullptr));
        btnSave->setText(QCoreApplication::translate("SmartMarket", "Sauvegarder", nullptr));
        lblUserName_Ajout->setText(QCoreApplication::translate("SmartMarket", "Admin System", nullptr));
        lblUserRole_Ajout->setText(QCoreApplication::translate("SmartMarket", "Chef d'Atelier", nullptr));
        imageLabel_2->setText(QCoreApplication::translate("SmartMarket", "Photo", nullptr));
        btnUploadPhoto_Ajout->setText(QCoreApplication::translate("SmartMarket", "\360\237\223\267 Charger une photo", nullptr));
        label_7->setText(QCoreApplication::translate("SmartMarket", "Nom Complet", nullptr));
        label_8->setText(QCoreApplication::translate("SmartMarket", "Sp\303\251cialit\303\251", nullptr));
        cbSpecialite_Ajout->setItemText(0, QCoreApplication::translate("SmartMarket", "M\303\251canicien", nullptr));
        cbSpecialite_Ajout->setItemText(1, QCoreApplication::translate("SmartMarket", "Chauffeur", nullptr));

        label_9->setText(QCoreApplication::translate("SmartMarket", "Statut", nullptr));
        cbStatut_Ajout->setItemText(0, QCoreApplication::translate("SmartMarket", "Disponible", nullptr));
        cbStatut_Ajout->setItemText(1, QCoreApplication::translate("SmartMarket", "En intervention", nullptr));

        lblSalaire_Ajout->setText(QCoreApplication::translate("SmartMarket", "Salaire", nullptr));
        lblValSalaire_Ajout->setText(QCoreApplication::translate("SmartMarket", "1200 DT", nullptr));
        txtEmailAjout->setPlaceholderText(QCoreApplication::translate("SmartMarket", "xyz@emeple.com", nullptr));
        label_2->setText(QCoreApplication::translate("SmartMarket", "EMAIL", nullptr));
        btnAnnuler_Ajout->setText(QCoreApplication::translate("SmartMarket", "Annuler", nullptr));
        btnAjouter->setText(QCoreApplication::translate("SmartMarket", "Ajouter", nullptr));
        lblTitreMission->setText(QCoreApplication::translate("SmartMarket", "\360\237\223\242 D\303\251finition de la Mission", nullptr));
        txtMission->setText(QCoreApplication::translate("SmartMarket", "R\303\251paration Moteur bac Zone Nord - Urgent", nullptr));
        txtMission->setPlaceholderText(QCoreApplication::translate("SmartMarket", "Ex: R\303\251paration Moteur bac Urgent...", nullptr));
        btnAnalyser->setText(QCoreApplication::translate("SmartMarket", "\360\237\244\226 Lancer l'Analyse IA & Trouver l'\303\211quipe", nullptr));
        lblResultat->setText(QCoreApplication::translate("SmartMarket", "\342\234\205 \303\211quipe Optimale Recommand\303\251e (Score: 98%)", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableResultat->horizontalHeaderItem(0);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("SmartMarket", "Matricule", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableResultat->horizontalHeaderItem(1);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("SmartMarket", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableResultat->horizontalHeaderItem(2);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("SmartMarket", "Comp\303\251tence Cl\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableResultat->horizontalHeaderItem(3);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("SmartMarket", "Score Match", nullptr));
        btnAnnulerMission->setText(QCoreApplication::translate("SmartMarket", "Retour / Annuler", nullptr));
        lblTitrePointage->setText(QCoreApplication::translate("SmartMarket", "\303\211tat du Lecteur RFID :", nullptr));
        lblStatutRFID->setText(QCoreApplication::translate("SmartMarket", "\360\237\225\222 EN ATTENTE DE BADGE...", nullptr));
        btnSimulerBadge->setText(QCoreApplication::translate("SmartMarket", "\360\237\224\256 Simuler un passage de badge (D\303\251mo)", nullptr));
        lblLog->setText(QCoreApplication::translate("SmartMarket", "\360\237\223\213 Historique des Entr\303\251es / Sorties (Aujourd'hui)", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tablePointage->horizontalHeaderItem(0);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("SmartMarket", "Heure", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tablePointage->horizontalHeaderItem(1);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("SmartMarket", "ID Badge", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tablePointage->horizontalHeaderItem(2);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("SmartMarket", "Employ\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tablePointage->horizontalHeaderItem(3);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("SmartMarket", "Statut", nullptr));
        btnAnnulerPointage->setText(QCoreApplication::translate("SmartMarket", "Retour / Annuler", nullptr));
        cbProjetStats->setItemText(0, QCoreApplication::translate("SmartMarket", "Projet A", nullptr));
        cbProjetStats->setItemText(1, QCoreApplication::translate("SmartMarket", "Projet B", nullptr));
        cbProjetStats->setItemText(2, QCoreApplication::translate("SmartMarket", "Projet C", nullptr));

        cbProjetStats->setPlaceholderText(QCoreApplication::translate("SmartMarket", "S\303\251lectionnez un projet...", nullptr));
        btnAnnulerStats->setText(QCoreApplication::translate("SmartMarket", "Retour / Annuler", nullptr));
        prod_label_1->setText(QString());
        prod_btnhome_1->setText(QCoreApplication::translate("SmartMarket", "  Accueil", nullptr));
        prod_btnstock_1->setText(QCoreApplication::translate("SmartMarket", "  Stock", nullptr));
        prod_btnproduit_1->setText(QCoreApplication::translate("SmartMarket", "  Produits", nullptr));
        prod_btnclient_1->setText(QCoreApplication::translate("SmartMarket", "  Clients", nullptr));
        prod_btnemploye_1->setText(QCoreApplication::translate("SmartMarket", "  Employ\303\251s", nullptr));
        prod_btnmaintenance_1->setText(QCoreApplication::translate("SmartMarket", "  Maintenance", nullptr));
        prod_btncmd_1->setText(QCoreApplication::translate("SmartMarket", "  Commandes", nullptr));
        prod_lb_1->setText(QCoreApplication::translate("SmartMarket", "TABLEAU DE BORD", nullptr));
        prod_user_1->setText(QCoreApplication::translate("SmartMarket", "Chef d'Atelier", nullptr));
        prod_btnnotif_1->setText(QCoreApplication::translate("SmartMarket", "\360\237\224\224", nullptr));
        prod_btnprofil_1->setText(QCoreApplication::translate("SmartMarket", "\360\237\221\244", nullptr));
        prod_lblSort->setText(QCoreApplication::translate("SmartMarket", "Trier par :", nullptr));
        prod_cbSort->setItemText(0, QCoreApplication::translate("SmartMarket", "R\303\251f\303\251rence", nullptr));
        prod_cbSort->setItemText(1, QCoreApplication::translate("SmartMarket", "Prix (Croissant)", nullptr));
        prod_cbSort->setItemText(2, QCoreApplication::translate("SmartMarket", "Prix (D\303\251croissant)", nullptr));
        prod_cbSort->setItemText(3, QCoreApplication::translate("SmartMarket", "Quantit\303\251", nullptr));

        prod_searchInput->setPlaceholderText(QCoreApplication::translate("SmartMarket", "Rechercher...", nullptr));
        prod_btnAddProduct->setText(QCoreApplication::translate("SmartMarket", "+ Ajouter", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = prod_tableProduits->horizontalHeaderItem(0);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("SmartMarket", "R\303\251f\303\251rence", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = prod_tableProduits->horizontalHeaderItem(1);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("SmartMarket", "Mod\303\250le", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = prod_tableProduits->horizontalHeaderItem(2);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("SmartMarket", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = prod_tableProduits->horizontalHeaderItem(3);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("SmartMarket", "Capacit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = prod_tableProduits->horizontalHeaderItem(4);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("SmartMarket", "Prix (TND)", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = prod_tableProduits->horizontalHeaderItem(5);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("SmartMarket", "Stock", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = prod_tableProduits->horizontalHeaderItem(6);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("SmartMarket", "\303\211tat", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = prod_tableProduits->horizontalHeaderItem(7);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("SmartMarket", "Actions", nullptr));
        prod_lblFunc->setText(QCoreApplication::translate("SmartMarket", "INFOS GLOBALES", nullptr));
        prod_stat1->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "statCard", nullptr)));
        prod_st_val1->setText(QCoreApplication::translate("SmartMarket", "1,245", nullptr));
        prod_st_val1->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "statValue", nullptr)));
        prod_st_lbl1->setText(QCoreApplication::translate("SmartMarket", "Total Produits", nullptr));
        prod_st_lbl1->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "statLabel", nullptr)));
        prod_stat2->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "statCard", nullptr)));
        prod_st_val2->setText(QCoreApplication::translate("SmartMarket", "85,400 TND", nullptr));
        prod_st_val2->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "statValue", nullptr)));
        prod_st_lbl2->setText(QCoreApplication::translate("SmartMarket", "Valeur Stock", nullptr));
        prod_st_lbl2->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "statLabel", nullptr)));
        prod_stat3->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "alertCard", nullptr)));
        prod_st_val3->setText(QCoreApplication::translate("SmartMarket", "\342\232\240 5", nullptr));
        prod_st_val3->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "alertValue", nullptr)));
        prod_st_lbl3->setText(QCoreApplication::translate("SmartMarket", "Rupture de Stock", nullptr));
        prod_st_lbl3->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "statLabel", nullptr)));
        prod_statsPreview->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "statCard", nullptr)));
        prod_lblStatsTitle->setText(QCoreApplication::translate("SmartMarket", "STATISTIQUES", nullptr));
        prod_lblMini1->setStyleSheet(QCoreApplication::translate("SmartMarket", "color: white;", nullptr));
        prod_lblMini1->setText(QCoreApplication::translate("SmartMarket", "Produits", nullptr));
        prod_lblMini2->setStyleSheet(QCoreApplication::translate("SmartMarket", "color: white;", nullptr));
        prod_lblMini2->setText(QCoreApplication::translate("SmartMarket", "Stock", nullptr));
        prod_btnOpenStats->setStyleSheet(QCoreApplication::translate("SmartMarket", "color: #000000; background: transparent; border: none;", nullptr));
        prod_btnOpenStats->setText(QCoreApplication::translate("SmartMarket", "Voir d\303\251tails  \342\237\266", nullptr));
        prod_btnMap3D->setStyleSheet(QCoreApplication::translate("SmartMarket", "\n"
"                        QPushButton {\n"
"                         background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #8E2DE2, stop:1 #4A00E0);\n"
"                         color: white;\n"
"                         border-radius: 8px;\n"
"                         padding: 10px;\n"
"                         font-weight: bold;\n"
"                         font-size: 13px;\n"
"                         border: none;\n"
"                        }\n"
"                        QPushButton:hover {\n"
"                         background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #a044ff, stop:1 #6a3093);\n"
"                        }\n"
"                       ", nullptr));
        prod_btnMap3D->setText(QCoreApplication::translate("SmartMarket", "Visualisation Map 3D \360\237\247\212", nullptr));
        prod_btnVideo3D->setStyleSheet(QCoreApplication::translate("SmartMarket", "\n"
"                        QPushButton {\n"
"                         background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #11998e, stop:1 #38ef7d);\n"
"                         color: white;\n"
"                         border-radius: 8px;\n"
"                         padding: 10px;\n"
"                         font-weight: bold;\n"
"                         font-size: 13px;\n"
"                         border: none;\n"
"                        }\n"
"                        QPushButton:hover {\n"
"                         background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #1fab89, stop:1 #62d2a2);\n"
"                        }\n"
"                       ", nullptr));
        prod_btnVideo3D->setText(QCoreApplication::translate("SmartMarket", "G\303\251n\303\251rer Vid\303\251o 3D \360\237\216\245", nullptr));
        prod_lblExport->setText(QCoreApplication::translate("SmartMarket", "EXPORTER", nullptr));
        prod_btnPdf->setText(QCoreApplication::translate("SmartMarket", "Rapport PDF", nullptr));
        prod_btnCsv->setText(QCoreApplication::translate("SmartMarket", "Export CSV", nullptr));
        prod_lblImgPreview_Add->setText(QCoreApplication::translate("SmartMarket", "Glisser Image Ici", nullptr));
        prod_btnUpload_Add->setText(QCoreApplication::translate("SmartMarket", "\360\237\223\244 Importer Image", nullptr));
        prod_lblTitleAdd->setText(QCoreApplication::translate("SmartMarket", "Nouveau Stock", nullptr));
        prod_l1->setText(QCoreApplication::translate("SmartMarket", "R\303\251f\303\251rence", nullptr));
        prod_ln_ref_add->setPlaceholderText(QCoreApplication::translate("SmartMarket", "REF-2024", nullptr));
        prod_l2->setText(QCoreApplication::translate("SmartMarket", "Mod\303\250le", nullptr));
        prod_cb_model_add->setItemText(0, QCoreApplication::translate("SmartMarket", "ProBin 240L", nullptr));

        prod_l_px->setText(QCoreApplication::translate("SmartMarket", "Prix (TND)", nullptr));
        prod_l_qty->setText(QCoreApplication::translate("SmartMarket", "Quantit\303\251", nullptr));
        prod_l_stat->setText(QCoreApplication::translate("SmartMarket", "Statut", nullptr));
        prod_cb_status_add->setItemText(0, QCoreApplication::translate("SmartMarket", "En Stock", nullptr));

        prod_l_bat->setText(QCoreApplication::translate("SmartMarket", "Batterie (mAh)", nullptr));
        prod_label->setText(QCoreApplication::translate("SmartMarket", "10000 mah", nullptr));
        prod_l_cap->setText(QCoreApplication::translate("SmartMarket", "Capacit\303\251", nullptr));
        prod_label_4->setText(QCoreApplication::translate("SmartMarket", "750 L", nullptr));
        prod_gb_characteristics->setStyleSheet(QCoreApplication::translate("SmartMarket", "\n"
"                            QGroupBox {\n"
"                             font-weight: bold;\n"
"                             border: 1px solid #bdc3c7;\n"
"                             border-radius: 6px;\n"
"                             margin-top: 10px;\n"
"                             padding-top: 10px;\n"
"                            }\n"
"                            QGroupBox::title {\n"
"                             subcontrol-origin: margin;\n"
"                             left: 10px;\n"
"                             padding: 0 5px;\n"
"                             color: black;\n"
"                            }\n"
"                           ", nullptr));
        prod_gb_characteristics->setTitle(QCoreApplication::translate("SmartMarket", "Caract\303\251ristiques Techniques", nullptr));

        const bool __sortingEnabled1 = prod_lstCharacteristics->isSortingEnabled();
        prod_lstCharacteristics->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = prod_lstCharacteristics->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("SmartMarket", "\360\237\223\215 GPS Tracking", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = prod_lstCharacteristics->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("SmartMarket", "\360\237\223\241 Capteur Ultrason", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = prod_lstCharacteristics->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("SmartMarket", "\342\230\200\357\270\217 Compacteur Solaire", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = prod_lstCharacteristics->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("SmartMarket", "\360\237\224\245 D\303\251tecteur de Flamme", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = prod_lstCharacteristics->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("SmartMarket", "\360\237\224\222 Verrouillage Auto", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = prod_lstCharacteristics->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("SmartMarket", "\342\230\201\357\270\217 Int\303\251gration IoT", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = prod_lstCharacteristics->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("SmartMarket", "\360\237\214\254\357\270\217 Anti-Odeur", nullptr));
        prod_lstCharacteristics->setSortingEnabled(__sortingEnabled1);

        prod_lstCharacteristics->setStyleSheet(QCoreApplication::translate("SmartMarket", "\n"
"                               QListWidget {\n"
"                                 border: 2px solid #bdc3c7;\n"
"                                 background-color: white;\n"
"                                 border-radius: 6px;\n"
"                                 padding: 8px;\n"
"                                 font-size: 13px;\n"
"                                }\n"
"                                QListWidget::item {\n"
"                                 padding: 10px;\n"
"                                 margin: 2px;\n"
"                                 border: 1px solid #e0e0e0;\n"
"                                 border-radius: 5px;\n"
"                                 background-color: #f8f9fa;\n"
"                                 color: #2c3e50;\n"
"                                }\n"
"                                QListWidget::item:selected {\n"
"                                 background-color: #3498db;\n"
"                                 color: white;\n"
"                               "
                        "  border: 2px solid #2980b9;\n"
"                                 font-weight: bold;\n"
"                                }\n"
"                                QListWidget::item:hover:!selected {\n"
"                                 background-color: #e3f2fd;\n"
"                                 border: 1px solid #90caf9;\n"
"                                }\n"
"                              ", nullptr));
        prod_l5->setText(QCoreApplication::translate("SmartMarket", "Plan du D\303\251p\303\264t (S\303\251lectionnez un emplacement)", nullptr));
        prod_zoneA->setText(QCoreApplication::translate("SmartMarket", "ZONE A", nullptr));
        prod_zoneA->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "zoneLabel", nullptr)));
        prod_btn_a1->setText(QCoreApplication::translate("SmartMarket", "A-01", nullptr));
        prod_btn_a1->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_btn_a2->setText(QCoreApplication::translate("SmartMarket", "A-02", nullptr));
        prod_btn_a2->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_btn_a3->setText(QCoreApplication::translate("SmartMarket", "A-03", nullptr));
        prod_btn_a3->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_zoneB->setText(QCoreApplication::translate("SmartMarket", "ZONE B", nullptr));
        prod_zoneB->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "zoneLabel", nullptr)));
        prod_btn_b1->setText(QCoreApplication::translate("SmartMarket", "B-01", nullptr));
        prod_btn_b1->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_btn_b2->setText(QCoreApplication::translate("SmartMarket", "B-02", nullptr));
        prod_btn_b2->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_btn_b3->setText(QCoreApplication::translate("SmartMarket", "B-03", nullptr));
        prod_btn_b3->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_zoneC->setText(QCoreApplication::translate("SmartMarket", "ZONE C", nullptr));
        prod_zoneC->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "zoneLabel", nullptr)));
        prod_btn_c2->setText(QCoreApplication::translate("SmartMarket", "C-02", nullptr));
        prod_btn_c2->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_btn_c3->setText(QCoreApplication::translate("SmartMarket", "C-03", nullptr));
        prod_btn_c3->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_btn_a2_2->setText(QCoreApplication::translate("SmartMarket", "C-01", nullptr));
        prod_btn_a2_2->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_btnSave_Add->setText(QCoreApplication::translate("SmartMarket", "Ajouter", nullptr));
        prod_btnCancel_Add->setText(QCoreApplication::translate("SmartMarket", "Annuler", nullptr));
        prod_imgBin->setText(QCoreApplication::translate("SmartMarket", "[ Image Actuelle ]", nullptr));
        prod_lblTitleMod->setText(QCoreApplication::translate("SmartMarket", "Modifier Stock", nullptr));
        prod_l_stat_m->setText(QCoreApplication::translate("SmartMarket", "Statut", nullptr));
        prod_l_qty_m->setText(QCoreApplication::translate("SmartMarket", "Quantit\303\251", nullptr));
        prod_cb_model_mod->setItemText(0, QCoreApplication::translate("SmartMarket", "ProBin 240L", nullptr));

        prod_cb_status_mod->setItemText(0, QCoreApplication::translate("SmartMarket", "En Stock", nullptr));

        prod_ln_ref_mod->setText(QCoreApplication::translate("SmartMarket", "REF-2023", nullptr));
        prod_l2_m->setText(QCoreApplication::translate("SmartMarket", "Mod\303\250le", nullptr));
        prod_l_px_m->setText(QCoreApplication::translate("SmartMarket", "Prix (TND)", nullptr));
        prod_l1_m->setText(QCoreApplication::translate("SmartMarket", "R\303\251f\303\251rence", nullptr));
        prod_l_bat_m->setText(QCoreApplication::translate("SmartMarket", "Batterie", nullptr));
        prod_l_cap_m->setText(QCoreApplication::translate("SmartMarket", "Capacit\303\251", nullptr));
        prod_gb_characteristics_mod->setStyleSheet(QCoreApplication::translate("SmartMarket", "\n"
"                            QGroupBox {\n"
"                             font-weight: bold;\n"
"                             border: 1px solid #bdc3c7;\n"
"                             border-radius: 6px;\n"
"                             margin-top: 10px;\n"
"                             padding-top: 10px;\n"
"                            }\n"
"                            QGroupBox::title {\n"
"                             subcontrol-origin: margin;\n"
"                             left: 10px;\n"
"                             padding: 0 5px;\n"
"                             color: black;\n"
"                             color: black;\n"
"                            }\n"
"                           ", nullptr));
        prod_gb_characteristics_mod->setTitle(QCoreApplication::translate("SmartMarket", "Caract\303\251ristiques Techniques", nullptr));

        const bool __sortingEnabled2 = prod_lstCharacteristics_mod->isSortingEnabled();
        prod_lstCharacteristics_mod->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem7 = prod_lstCharacteristics_mod->item(0);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("SmartMarket", "\360\237\223\215 GPS Tracking", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = prod_lstCharacteristics_mod->item(1);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("SmartMarket", "\360\237\223\241 Capteur Ultrason", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = prod_lstCharacteristics_mod->item(2);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("SmartMarket", "\342\230\200\357\270\217 Compacteur Solaire", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = prod_lstCharacteristics_mod->item(3);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("SmartMarket", "\360\237\224\245 D\303\251tecteur de Flamme", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = prod_lstCharacteristics_mod->item(4);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("SmartMarket", "\360\237\224\222 Verrouillage Auto", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = prod_lstCharacteristics_mod->item(5);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("SmartMarket", "\342\230\201\357\270\217 Int\303\251gration IoT", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = prod_lstCharacteristics_mod->item(6);
        ___qlistwidgetitem13->setText(QCoreApplication::translate("SmartMarket", "\360\237\214\254\357\270\217 Anti-Odeur", nullptr));
        prod_lstCharacteristics_mod->setSortingEnabled(__sortingEnabled2);

        prod_lstCharacteristics_mod->setStyleSheet(QCoreApplication::translate("SmartMarket", "QListWidget {\n"
"                                 border: 2px solid #bdc3c7;\n"
"                                 background-color: white;\n"
"                                 border-radius: 6px;\n"
"                                 padding: 8px;\n"
"                                 font-size: 13px;\n"
"                                }\n"
"                                QListWidget::item {\n"
"                                 padding: 10px;\n"
"                                 margin: 2px;\n"
"                                 border: 1px solid #e0e0e0;\n"
"                                 border-radius: 5px;\n"
"                                 background-color: #f8f9fa;\n"
"                                 color: #2c3e50;\n"
"                                }\n"
"                                QListWidget::item:selected {\n"
"                                 background-color: #3498db;\n"
"                                 color: white;\n"
"                                 border: 2px solid #2980b9;\n"
"   "
                        "                              font-weight: bold;\n"
"                                }\n"
"                                QListWidget::item:hover:!selected {\n"
"                                 background-color: #e3f2fd;\n"
"                                 border: 1px solid #90caf9;\n"
"                                }\n"
"                               ", nullptr));
        prod_l5_m->setText(QCoreApplication::translate("SmartMarket", "Changer Emplacement", nullptr));
        prod_zoneAm->setText(QCoreApplication::translate("SmartMarket", "ZONE A", nullptr));
        prod_zoneAm->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "zoneLabel", nullptr)));
        prod_btn_a1_m->setText(QCoreApplication::translate("SmartMarket", "A-01", nullptr));
        prod_btn_a1_m->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_btn_a3_m->setText(QCoreApplication::translate("SmartMarket", "A-03", nullptr));
        prod_btn_a3_m->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_zoneBm->setText(QCoreApplication::translate("SmartMarket", "ZONE B", nullptr));
        prod_zoneBm->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "zoneLabel", nullptr)));
        prod_btn_b1_m->setText(QCoreApplication::translate("SmartMarket", "B-01", nullptr));
        prod_btn_b1_m->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_btn_b2_m->setText(QCoreApplication::translate("SmartMarket", "B-02", nullptr));
        prod_btn_b2_m->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_btn_b3_m->setText(QCoreApplication::translate("SmartMarket", "B-03", nullptr));
        prod_btn_b3_m->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_zoneCm->setText(QCoreApplication::translate("SmartMarket", "ZONE C", nullptr));
        prod_zoneCm->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "zoneLabel", nullptr)));
        prod_btn_c1_m->setText(QCoreApplication::translate("SmartMarket", "C-01", nullptr));
        prod_btn_c1_m->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_btn_c2_m->setText(QCoreApplication::translate("SmartMarket", "C-02", nullptr));
        prod_btn_c2_m->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_btn_c3_m->setText(QCoreApplication::translate("SmartMarket", "C-03", nullptr));
        prod_btn_c3_m->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_btn_a2_3->setText(QCoreApplication::translate("SmartMarket", "A-02", nullptr));
        prod_btn_a2_3->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "slotBtn", nullptr)));
        prod_btnSave_Mod->setText(QCoreApplication::translate("SmartMarket", "Sauvegarder", nullptr));
        prod_btnCancel_Mod->setText(QCoreApplication::translate("SmartMarket", "Annuler", nullptr));
        prod_btnReturnStats->setStyleSheet(QCoreApplication::translate("SmartMarket", "\n"
"                      background-color: #546e7a; color: white; padding: 6px 12px; border-radius: 4px; font-weight: bold;\n"
"                     ", nullptr));
        prod_btnReturnStats->setText(QCoreApplication::translate("SmartMarket", "\342\206\220 Retour", nullptr));
        prod_lblStatsHeader->setText(QCoreApplication::translate("SmartMarket", "Aper\303\247u Statistique", nullptr));
        prod_lblStatsSub->setText(QCoreApplication::translate("SmartMarket", "(Donn\303\251es exemple \342\200\224 graphiques g\303\251n\303\251raux)", nullptr));
        prod_graphFrame1->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "statCard", nullptr)));
        prod_graphFrame1Title->setText(QCoreApplication::translate("SmartMarket", "Graphique 1 \342\200\224 R\303\251partition (exemple)", nullptr));
        prod_graphFrame1Hint->setText(QCoreApplication::translate("SmartMarket", "[Graph placeholder]", nullptr));
        prod_graphFrame2->setProperty("class", QVariant(QCoreApplication::translate("SmartMarket", "statCard", nullptr)));
        prod_graphFrame2Title->setText(QCoreApplication::translate("SmartMarket", "Graphique 2 \342\200\224 \303\211volution (exemple)", nullptr));
        prod_graphFrame2Hint->setText(QCoreApplication::translate("SmartMarket", "[Graph placeholder]", nullptr));
        prod_lblStatsNote->setText(QCoreApplication::translate("SmartMarket", "Astuce: vous pouvez remplacer ces placeholders par QtCharts plus tard.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartMarket: public Ui_SmartMarket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
