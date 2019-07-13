/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabMain;
    QWidget *tab_1;
    QGroupBox *gBx_imu;
    QWidget *form_3;
    QFormLayout *formLayout_3;
    QLabel *lbl_9;
    QLabel *lbl_10;
    QLabel *lbl_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_acc;
    QLabel *lbl_gyr;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lbl_acc_x;
    QLabel *lbl_gyr_x;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lbl_acc_y;
    QLabel *lbl_gyr_y;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lbl_acc_z;
    QLabel *lbl_gyr_z;
    QGroupBox *gBx_control;
    QPushButton *pBtn_key_control_open;
    QWidget *form;
    QFormLayout *formLayout;
    QLabel *lbl_1;
    QLabel *lbl_2;
    QLabel *lbl_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_velocity;
    QLabel *lbl_omega;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl_vel_max;
    QLabel *lbl_ome_max;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbl_vel_exp;
    QLabel *lbl_ome_exp;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbl_vel_ret;
    QLabel *lbl_ome_ret;
    QPushButton *pBtn_key_Init_IMU;
    QGroupBox *gBx_Pose;
    QWidget *form_5;
    QFormLayout *formLayout_5;
    QLabel *lbl_15;
    QLabel *lbl_pose_r;
    QLabel *lbl_16;
    QLabel *lbl_pose_p;
    QLabel *lbl_17;
    QLabel *lbl_pose_h;
    QLabel *lbl_euler;
    QWidget *form_6;
    QFormLayout *formLayout_7;
    QLabel *lbl_21;
    QLabel *lbl_pose_x;
    QLabel *lbl_22;
    QLabel *lbl_23;
    QLabel *lbl_pose_z;
    QLabel *lbl_pose;
    QLabel *lbl_pose_y;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget3;
    QVBoxLayout *verticalLayout;
    QPushButton *pBtn_start2connect;
    QLabel *lbl_7;
    QLineEdit *lEdit_ip;
    QLabel *lbl_8;
    QLineEdit *lEdit_port;
    QGroupBox *groupBox_2;
    QWidget *tab_2;
    QLabel *lbl_map;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pBtn_open_submap;
    QPushButton *pBtn_open_map;
    QPushButton *pBtn_binarization;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_11;
    QSpinBox *Spin_Filter_Count;
    QSpinBox *Spin_Sample_Count;
    QSlider *horizontalSlider;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_6;
    QLabel *lbl_map_info_size;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_7;
    QLabel *lbl_map_info_res;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_8;
    QPushButton *pBtn_save_pose;
    QPushButton *pBtn_clear_pose;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_9;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_17;
    QLineEdit *let_pose_pid_P;
    QLineEdit *let_angle_pid_P;
    QHBoxLayout *horizontalLayout_18;
    QLineEdit *let_pose_pid_I;
    QLineEdit *let_angle_pid_I;
    QHBoxLayout *horizontalLayout_19;
    QLineEdit *let_pose_pid_D;
    QLineEdit *let_angle_pid_D;
    QPushButton *pBtn_PID_confirm;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_20;
    QLabel *lbl_robot_pose_x;
    QLabel *lbl_robot_pose_y;
    QLabel *lbl_robot_pose_h;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_4;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_14;
    QLineEdit *lbl_robot_epose_x;
    QLineEdit *lbl_robot_epose_err_x;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_15;
    QLineEdit *lbl_robot_epose_y;
    QLineEdit *lbl_robot_epose_err_y;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_16;
    QLineEdit *lbl_robot_epose_h;
    QLineEdit *lbl_robot_epose_err_h;
    QVBoxLayout *verticalLayout_12;
    QPushButton *pBtn_start_navigation;
    QPushButton *pBtn_emergency_stop;
    QPushButton *pBtn_nav_err_conf;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_25;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_27;
    QPushButton *pBtn_open_inspection_file;
    QPushButton *pBtn_save_inspection_file;
    QHBoxLayout *horizontalLayout_28;
    QLineEdit *let_delete_vertex_index;
    QPushButton *pBtn_delete_vertex;
    QPushButton *pBtn_add_vertex;
    QHBoxLayout *horizontalLayout_30;
    QHBoxLayout *horizontalLayout_29;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_12;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_20;
    QLineEdit *let_vertex_start_index;
    QLineEdit *let_vertex_end_index;
    QVBoxLayout *verticalLayout_21;
    QPushButton *pBtn_delete_edge;
    QPushButton *pBtn_add_edge;
    QPushButton *pBtn_g_navi;
    QHBoxLayout *horizontalLayout_26;
    QLabel *lbl_vertex_number;
    QLabel *lbl_edge_number;
    QWidget *tab_3;
    QLabel *label_main;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rb_all;
    QRadioButton *rb_2m;
    QRadioButton *rb_1m;
    QWidget *tab_4;
    QLabel *label_Ultra;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_14;
    QCheckBox *ultra1;
    QCheckBox *ultra2;
    QCheckBox *ultra3;
    QCheckBox *ultra4;
    QCheckBox *ultra5;
    QCheckBox *ultra6;
    QCheckBox *ultra7;
    QCheckBox *ultra8;
    QCheckBox *ultraAll;
    QVBoxLayout *verticalLayout_15;
    QLabel *lb_ultra1;
    QLabel *lb_ultra2;
    QLabel *lb_ultra3;
    QLabel *lb_ultra4;
    QLabel *lb_ultra5;
    QLabel *lb_ultra6;
    QLabel *lb_ultra7;
    QLabel *lb_ultra8;
    QLabel *lb_ultra8_2;
    QGroupBox *groupBox_6;
    QCheckBox *Ultra_Area;
    QCheckBox *Obsta_OutLine;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1264, 721);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777209, 16777215));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabMain = new QTabWidget(centralWidget);
        tabMain->setObjectName(QStringLiteral("tabMain"));
        tabMain->setGeometry(QRect(0, 0, 1261, 931));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        gBx_imu = new QGroupBox(tab_1);
        gBx_imu->setObjectName(QStringLiteral("gBx_imu"));
        gBx_imu->setGeometry(QRect(350, 250, 311, 171));
        form_3 = new QWidget(gBx_imu);
        form_3->setObjectName(QStringLiteral("form_3"));
        form_3->setGeometry(QRect(11, 31, 291, 134));
        formLayout_3 = new QFormLayout(form_3);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        lbl_9 = new QLabel(form_3);
        lbl_9->setObjectName(QStringLiteral("lbl_9"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, lbl_9);

        lbl_10 = new QLabel(form_3);
        lbl_10->setObjectName(QStringLiteral("lbl_10"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, lbl_10);

        lbl_11 = new QLabel(form_3);
        lbl_11->setObjectName(QStringLiteral("lbl_11"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, lbl_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lbl_acc = new QLabel(form_3);
        lbl_acc->setObjectName(QStringLiteral("lbl_acc"));
        lbl_acc->setLayoutDirection(Qt::RightToLeft);
        lbl_acc->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lbl_acc);

        lbl_gyr = new QLabel(form_3);
        lbl_gyr->setObjectName(QStringLiteral("lbl_gyr"));
        lbl_gyr->setStyleSheet(QStringLiteral(""));
        lbl_gyr->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lbl_gyr);


        formLayout_3->setLayout(1, QFormLayout::FieldRole, horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lbl_acc_x = new QLabel(form_3);
        lbl_acc_x->setObjectName(QStringLiteral("lbl_acc_x"));
        lbl_acc_x->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_acc_x->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(lbl_acc_x);

        lbl_gyr_x = new QLabel(form_3);
        lbl_gyr_x->setObjectName(QStringLiteral("lbl_gyr_x"));
        lbl_gyr_x->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_gyr_x->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(lbl_gyr_x);


        formLayout_3->setLayout(2, QFormLayout::FieldRole, horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        lbl_acc_y = new QLabel(form_3);
        lbl_acc_y->setObjectName(QStringLiteral("lbl_acc_y"));
        lbl_acc_y->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_acc_y->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(lbl_acc_y);

        lbl_gyr_y = new QLabel(form_3);
        lbl_gyr_y->setObjectName(QStringLiteral("lbl_gyr_y"));
        lbl_gyr_y->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_gyr_y->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(lbl_gyr_y);


        formLayout_3->setLayout(3, QFormLayout::FieldRole, horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        lbl_acc_z = new QLabel(form_3);
        lbl_acc_z->setObjectName(QStringLiteral("lbl_acc_z"));
        lbl_acc_z->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_acc_z->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(lbl_acc_z);

        lbl_gyr_z = new QLabel(form_3);
        lbl_gyr_z->setObjectName(QStringLiteral("lbl_gyr_z"));
        lbl_gyr_z->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_gyr_z->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(lbl_gyr_z);


        formLayout_3->setLayout(4, QFormLayout::FieldRole, horizontalLayout_10);

        gBx_control = new QGroupBox(tab_1);
        gBx_control->setObjectName(QStringLiteral("gBx_control"));
        gBx_control->setGeometry(QRect(670, 20, 311, 221));
        pBtn_key_control_open = new QPushButton(gBx_control);
        pBtn_key_control_open->setObjectName(QStringLiteral("pBtn_key_control_open"));
        pBtn_key_control_open->setGeometry(QRect(20, 30, 96, 27));
        pBtn_key_control_open->setCheckable(true);
        form = new QWidget(gBx_control);
        form->setObjectName(QStringLiteral("form"));
        form->setGeometry(QRect(20, 70, 281, 134));
        formLayout = new QFormLayout(form);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lbl_1 = new QLabel(form);
        lbl_1->setObjectName(QStringLiteral("lbl_1"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lbl_1);

        lbl_2 = new QLabel(form);
        lbl_2->setObjectName(QStringLiteral("lbl_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lbl_2);

        lbl_3 = new QLabel(form);
        lbl_3->setObjectName(QStringLiteral("lbl_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lbl_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lbl_velocity = new QLabel(form);
        lbl_velocity->setObjectName(QStringLiteral("lbl_velocity"));
        lbl_velocity->setStyleSheet(QStringLiteral(""));
        lbl_velocity->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lbl_velocity);

        lbl_omega = new QLabel(form);
        lbl_omega->setObjectName(QStringLiteral("lbl_omega"));
        lbl_omega->setLayoutDirection(Qt::RightToLeft);
        lbl_omega->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lbl_omega);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lbl_vel_max = new QLabel(form);
        lbl_vel_max->setObjectName(QStringLiteral("lbl_vel_max"));
        lbl_vel_max->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_vel_max->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_vel_max);

        lbl_ome_max = new QLabel(form);
        lbl_ome_max->setObjectName(QStringLiteral("lbl_ome_max"));
        lbl_ome_max->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_ome_max->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_ome_max);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lbl_vel_exp = new QLabel(form);
        lbl_vel_exp->setObjectName(QStringLiteral("lbl_vel_exp"));
        lbl_vel_exp->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_vel_exp->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lbl_vel_exp);

        lbl_ome_exp = new QLabel(form);
        lbl_ome_exp->setObjectName(QStringLiteral("lbl_ome_exp"));
        lbl_ome_exp->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_ome_exp->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lbl_ome_exp);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lbl_vel_ret = new QLabel(form);
        lbl_vel_ret->setObjectName(QStringLiteral("lbl_vel_ret"));
        lbl_vel_ret->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_vel_ret->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lbl_vel_ret);

        lbl_ome_ret = new QLabel(form);
        lbl_ome_ret->setObjectName(QStringLiteral("lbl_ome_ret"));
        lbl_ome_ret->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_ome_ret->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lbl_ome_ret);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_6);

        pBtn_key_Init_IMU = new QPushButton(gBx_control);
        pBtn_key_Init_IMU->setObjectName(QStringLiteral("pBtn_key_Init_IMU"));
        pBtn_key_Init_IMU->setGeometry(QRect(200, 30, 96, 27));
        pBtn_key_Init_IMU->setCheckable(true);
        gBx_Pose = new QGroupBox(tab_1);
        gBx_Pose->setObjectName(QStringLiteral("gBx_Pose"));
        gBx_Pose->setGeometry(QRect(670, 250, 311, 171));
        form_5 = new QWidget(gBx_Pose);
        form_5->setObjectName(QStringLiteral("form_5"));
        form_5->setGeometry(QRect(180, 40, 119, 126));
        formLayout_5 = new QFormLayout(form_5);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        lbl_15 = new QLabel(form_5);
        lbl_15->setObjectName(QStringLiteral("lbl_15"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, lbl_15);

        lbl_pose_r = new QLabel(form_5);
        lbl_pose_r->setObjectName(QStringLiteral("lbl_pose_r"));
        lbl_pose_r->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_pose_r->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, lbl_pose_r);

        lbl_16 = new QLabel(form_5);
        lbl_16->setObjectName(QStringLiteral("lbl_16"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, lbl_16);

        lbl_pose_p = new QLabel(form_5);
        lbl_pose_p->setObjectName(QStringLiteral("lbl_pose_p"));
        lbl_pose_p->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_pose_p->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(3, QFormLayout::FieldRole, lbl_pose_p);

        lbl_17 = new QLabel(form_5);
        lbl_17->setObjectName(QStringLiteral("lbl_17"));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, lbl_17);

        lbl_pose_h = new QLabel(form_5);
        lbl_pose_h->setObjectName(QStringLiteral("lbl_pose_h"));
        lbl_pose_h->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_pose_h->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(4, QFormLayout::FieldRole, lbl_pose_h);

        lbl_euler = new QLabel(form_5);
        lbl_euler->setObjectName(QStringLiteral("lbl_euler"));
        lbl_euler->setLayoutDirection(Qt::RightToLeft);
        lbl_euler->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, lbl_euler);

        form_6 = new QWidget(gBx_Pose);
        form_6->setObjectName(QStringLiteral("form_6"));
        form_6->setGeometry(QRect(20, 40, 103, 126));
        formLayout_7 = new QFormLayout(form_6);
        formLayout_7->setSpacing(6);
        formLayout_7->setContentsMargins(11, 11, 11, 11);
        formLayout_7->setObjectName(QStringLiteral("formLayout_7"));
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        lbl_21 = new QLabel(form_6);
        lbl_21->setObjectName(QStringLiteral("lbl_21"));

        formLayout_7->setWidget(2, QFormLayout::LabelRole, lbl_21);

        lbl_pose_x = new QLabel(form_6);
        lbl_pose_x->setObjectName(QStringLiteral("lbl_pose_x"));
        lbl_pose_x->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_pose_x->setAlignment(Qt::AlignCenter);

        formLayout_7->setWidget(2, QFormLayout::FieldRole, lbl_pose_x);

        lbl_22 = new QLabel(form_6);
        lbl_22->setObjectName(QStringLiteral("lbl_22"));

        formLayout_7->setWidget(3, QFormLayout::LabelRole, lbl_22);

        lbl_23 = new QLabel(form_6);
        lbl_23->setObjectName(QStringLiteral("lbl_23"));

        formLayout_7->setWidget(4, QFormLayout::LabelRole, lbl_23);

        lbl_pose_z = new QLabel(form_6);
        lbl_pose_z->setObjectName(QStringLiteral("lbl_pose_z"));
        lbl_pose_z->setStyleSheet(QStringLiteral("rgb:(255, 0, 0);"));
        lbl_pose_z->setAlignment(Qt::AlignCenter);

        formLayout_7->setWidget(4, QFormLayout::FieldRole, lbl_pose_z);

        lbl_pose = new QLabel(form_6);
        lbl_pose->setObjectName(QStringLiteral("lbl_pose"));
        lbl_pose->setLayoutDirection(Qt::RightToLeft);
        lbl_pose->setAlignment(Qt::AlignCenter);

        formLayout_7->setWidget(1, QFormLayout::FieldRole, lbl_pose);

        lbl_pose_y = new QLabel(form_6);
        lbl_pose_y->setObjectName(QStringLiteral("lbl_pose_y"));
        lbl_pose_y->setStyleSheet(QStringLiteral("rgb:(255, 85, 0)"));
        lbl_pose_y->setAlignment(Qt::AlignCenter);

        formLayout_7->setWidget(3, QFormLayout::FieldRole, lbl_pose_y);

        groupBox = new QGroupBox(tab_1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(350, 20, 311, 221));
        verticalLayoutWidget3 = new QWidget(groupBox);
        verticalLayoutWidget3->setObjectName(QStringLiteral("verticalLayoutWidget3"));
        verticalLayoutWidget3->setGeometry(QRect(10, 30, 291, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pBtn_start2connect = new QPushButton(verticalLayoutWidget3);
        pBtn_start2connect->setObjectName(QStringLiteral("pBtn_start2connect"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pBtn_start2connect->sizePolicy().hasHeightForWidth());
        pBtn_start2connect->setSizePolicy(sizePolicy1);
        pBtn_start2connect->setCheckable(true);

        verticalLayout->addWidget(pBtn_start2connect);

        lbl_7 = new QLabel(verticalLayoutWidget3);
        lbl_7->setObjectName(QStringLiteral("lbl_7"));
        lbl_7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_7);

        lEdit_ip = new QLineEdit(verticalLayoutWidget3);
        lEdit_ip->setObjectName(QStringLiteral("lEdit_ip"));
        lEdit_ip->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lEdit_ip);

        lbl_8 = new QLabel(verticalLayoutWidget3);
        lbl_8->setObjectName(QStringLiteral("lbl_8"));
        lbl_8->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_8);

        lEdit_port = new QLineEdit(verticalLayoutWidget3);
        lEdit_port->setObjectName(QStringLiteral("lEdit_port"));
        lEdit_port->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lEdit_port);

        groupBox_2 = new QGroupBox(tab_1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 20, 311, 401));
        tabMain->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lbl_map = new QLabel(tab_2);
        lbl_map->setObjectName(QStringLiteral("lbl_map"));
        lbl_map->setGeometry(QRect(600, 20, 521, 581));
        layoutWidget4 = new QWidget(tab_2);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(11, 21, 231, 201));
        verticalLayout_4 = new QVBoxLayout(layoutWidget4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pBtn_open_submap = new QPushButton(layoutWidget4);
        pBtn_open_submap->setObjectName(QStringLiteral("pBtn_open_submap"));

        horizontalLayout_2->addWidget(pBtn_open_submap);

        pBtn_open_map = new QPushButton(layoutWidget4);
        pBtn_open_map->setObjectName(QStringLiteral("pBtn_open_map"));

        horizontalLayout_2->addWidget(pBtn_open_map);


        verticalLayout_4->addLayout(horizontalLayout_2);

        pBtn_binarization = new QPushButton(layoutWidget4);
        pBtn_binarization->setObjectName(QStringLiteral("pBtn_binarization"));
        pBtn_binarization->setCheckable(true);
        pBtn_binarization->setChecked(false);

        verticalLayout_4->addWidget(pBtn_binarization);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget4);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget4);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        Spin_Filter_Count = new QSpinBox(layoutWidget4);
        Spin_Filter_Count->setObjectName(QStringLiteral("Spin_Filter_Count"));

        horizontalLayout_11->addWidget(Spin_Filter_Count);

        Spin_Sample_Count = new QSpinBox(layoutWidget4);
        Spin_Sample_Count->setObjectName(QStringLiteral("Spin_Sample_Count"));

        horizontalLayout_11->addWidget(Spin_Sample_Count);


        verticalLayout_3->addLayout(horizontalLayout_11);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalSlider = new QSlider(layoutWidget4);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setValue(127);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider);

        layoutWidget5 = new QWidget(tab_2);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 240, 231, 96));
        verticalLayout_6 = new QVBoxLayout(layoutWidget5);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_6 = new QLabel(layoutWidget5);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_14->addWidget(label_6);

        lbl_map_info_size = new QLabel(layoutWidget5);
        lbl_map_info_size->setObjectName(QStringLiteral("lbl_map_info_size"));
        lbl_map_info_size->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(lbl_map_info_size);


        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_7 = new QLabel(layoutWidget5);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_15->addWidget(label_7);

        lbl_map_info_res = new QLabel(layoutWidget5);
        lbl_map_info_res->setObjectName(QStringLiteral("lbl_map_info_res"));
        lbl_map_info_res->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(lbl_map_info_res);


        verticalLayout_6->addLayout(horizontalLayout_15);

        layoutWidget6 = new QWidget(tab_2);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(260, 460, 191, 101));
        verticalLayout_7 = new QVBoxLayout(layoutWidget6);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_8);

        pBtn_save_pose = new QPushButton(layoutWidget6);
        pBtn_save_pose->setObjectName(QStringLiteral("pBtn_save_pose"));
        pBtn_save_pose->setCheckable(true);
        pBtn_save_pose->setChecked(false);

        verticalLayout_7->addWidget(pBtn_save_pose);

        pBtn_clear_pose = new QPushButton(layoutWidget6);
        pBtn_clear_pose->setObjectName(QStringLiteral("pBtn_clear_pose"));
        pBtn_clear_pose->setCheckable(true);
        pBtn_clear_pose->setChecked(false);

        verticalLayout_7->addWidget(pBtn_clear_pose);

        layoutWidget7 = new QWidget(tab_2);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 370, 191, 197));
        verticalLayout_11 = new QVBoxLayout(layoutWidget7);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_9 = new QLabel(layoutWidget7);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(label_9);

        label_10 = new QLabel(layoutWidget7);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(label_10);


        verticalLayout_8->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        let_pose_pid_P = new QLineEdit(layoutWidget7);
        let_pose_pid_P->setObjectName(QStringLiteral("let_pose_pid_P"));
        let_pose_pid_P->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(let_pose_pid_P);

        let_angle_pid_P = new QLineEdit(layoutWidget7);
        let_angle_pid_P->setObjectName(QStringLiteral("let_angle_pid_P"));
        let_angle_pid_P->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(let_angle_pid_P);


        verticalLayout_8->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        let_pose_pid_I = new QLineEdit(layoutWidget7);
        let_pose_pid_I->setObjectName(QStringLiteral("let_pose_pid_I"));
        let_pose_pid_I->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(let_pose_pid_I);

        let_angle_pid_I = new QLineEdit(layoutWidget7);
        let_angle_pid_I->setObjectName(QStringLiteral("let_angle_pid_I"));
        let_angle_pid_I->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(let_angle_pid_I);


        verticalLayout_8->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        let_pose_pid_D = new QLineEdit(layoutWidget7);
        let_pose_pid_D->setObjectName(QStringLiteral("let_pose_pid_D"));
        let_pose_pid_D->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(let_pose_pid_D);

        let_angle_pid_D = new QLineEdit(layoutWidget7);
        let_angle_pid_D->setObjectName(QStringLiteral("let_angle_pid_D"));
        let_angle_pid_D->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(let_angle_pid_D);


        verticalLayout_8->addLayout(horizontalLayout_19);


        verticalLayout_11->addLayout(verticalLayout_8);

        pBtn_PID_confirm = new QPushButton(layoutWidget7);
        pBtn_PID_confirm->setObjectName(QStringLiteral("pBtn_PID_confirm"));
        pBtn_PID_confirm->setCheckable(true);
        pBtn_PID_confirm->setChecked(false);

        verticalLayout_11->addWidget(pBtn_PID_confirm);

        layoutWidget8 = new QWidget(tab_2);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(260, 20, 301, 225));
        verticalLayout_10 = new QVBoxLayout(layoutWidget8);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_3 = new QLabel(layoutWidget8);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        lbl_robot_pose_x = new QLabel(layoutWidget8);
        lbl_robot_pose_x->setObjectName(QStringLiteral("lbl_robot_pose_x"));
        lbl_robot_pose_x->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(lbl_robot_pose_x);

        lbl_robot_pose_y = new QLabel(layoutWidget8);
        lbl_robot_pose_y->setObjectName(QStringLiteral("lbl_robot_pose_y"));
        lbl_robot_pose_y->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(lbl_robot_pose_y);

        lbl_robot_pose_h = new QLabel(layoutWidget8);
        lbl_robot_pose_h->setObjectName(QStringLiteral("lbl_robot_pose_h"));
        lbl_robot_pose_h->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(lbl_robot_pose_h);


        verticalLayout_5->addLayout(horizontalLayout_20);


        verticalLayout_10->addLayout(verticalLayout_5);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));

        horizontalLayout_12->addLayout(verticalLayout_9);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        label_4 = new QLabel(layoutWidget8);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_24->addWidget(label_4);

        label_11 = new QLabel(layoutWidget8);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_24->addWidget(label_11);


        verticalLayout_16->addLayout(horizontalLayout_24);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_14 = new QLabel(layoutWidget8);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(label_14);

        lbl_robot_epose_x = new QLineEdit(layoutWidget8);
        lbl_robot_epose_x->setObjectName(QStringLiteral("lbl_robot_epose_x"));
        lbl_robot_epose_x->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(lbl_robot_epose_x);

        lbl_robot_epose_err_x = new QLineEdit(layoutWidget8);
        lbl_robot_epose_err_x->setObjectName(QStringLiteral("lbl_robot_epose_err_x"));
        lbl_robot_epose_err_x->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(lbl_robot_epose_err_x);


        verticalLayout_16->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_15 = new QLabel(layoutWidget8);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_22->addWidget(label_15);

        lbl_robot_epose_y = new QLineEdit(layoutWidget8);
        lbl_robot_epose_y->setObjectName(QStringLiteral("lbl_robot_epose_y"));
        lbl_robot_epose_y->setAlignment(Qt::AlignCenter);

        horizontalLayout_22->addWidget(lbl_robot_epose_y);

        lbl_robot_epose_err_y = new QLineEdit(layoutWidget8);
        lbl_robot_epose_err_y->setObjectName(QStringLiteral("lbl_robot_epose_err_y"));
        lbl_robot_epose_err_y->setAlignment(Qt::AlignCenter);

        horizontalLayout_22->addWidget(lbl_robot_epose_err_y);


        verticalLayout_16->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_16 = new QLabel(layoutWidget8);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(label_16);

        lbl_robot_epose_h = new QLineEdit(layoutWidget8);
        lbl_robot_epose_h->setObjectName(QStringLiteral("lbl_robot_epose_h"));
        lbl_robot_epose_h->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(lbl_robot_epose_h);

        lbl_robot_epose_err_h = new QLineEdit(layoutWidget8);
        lbl_robot_epose_err_h->setObjectName(QStringLiteral("lbl_robot_epose_err_h"));
        lbl_robot_epose_err_h->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(lbl_robot_epose_err_h);


        verticalLayout_16->addLayout(horizontalLayout_23);


        horizontalLayout_12->addLayout(verticalLayout_16);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        pBtn_start_navigation = new QPushButton(layoutWidget8);
        pBtn_start_navigation->setObjectName(QStringLiteral("pBtn_start_navigation"));
        pBtn_start_navigation->setCheckable(true);
        pBtn_start_navigation->setChecked(false);

        verticalLayout_12->addWidget(pBtn_start_navigation);

        pBtn_emergency_stop = new QPushButton(layoutWidget8);
        pBtn_emergency_stop->setObjectName(QStringLiteral("pBtn_emergency_stop"));
        pBtn_emergency_stop->setCheckable(true);
        pBtn_emergency_stop->setChecked(false);

        verticalLayout_12->addWidget(pBtn_emergency_stop);

        pBtn_nav_err_conf = new QPushButton(layoutWidget8);
        pBtn_nav_err_conf->setObjectName(QStringLiteral("pBtn_nav_err_conf"));
        pBtn_nav_err_conf->setCheckable(true);
        pBtn_nav_err_conf->setChecked(false);

        verticalLayout_12->addWidget(pBtn_nav_err_conf);


        horizontalLayout_12->addLayout(verticalLayout_12);


        verticalLayout_13->addLayout(horizontalLayout_12);


        verticalLayout_10->addLayout(verticalLayout_13);

        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 260, 301, 182));
        verticalLayout_19 = new QVBoxLayout(layoutWidget);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        pBtn_open_inspection_file = new QPushButton(layoutWidget);
        pBtn_open_inspection_file->setObjectName(QStringLiteral("pBtn_open_inspection_file"));

        horizontalLayout_27->addWidget(pBtn_open_inspection_file);

        pBtn_save_inspection_file = new QPushButton(layoutWidget);
        pBtn_save_inspection_file->setObjectName(QStringLiteral("pBtn_save_inspection_file"));

        horizontalLayout_27->addWidget(pBtn_save_inspection_file);


        verticalLayout_17->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        let_delete_vertex_index = new QLineEdit(layoutWidget);
        let_delete_vertex_index->setObjectName(QStringLiteral("let_delete_vertex_index"));
        let_delete_vertex_index->setAlignment(Qt::AlignCenter);

        horizontalLayout_28->addWidget(let_delete_vertex_index);

        pBtn_delete_vertex = new QPushButton(layoutWidget);
        pBtn_delete_vertex->setObjectName(QStringLiteral("pBtn_delete_vertex"));

        horizontalLayout_28->addWidget(pBtn_delete_vertex);

        pBtn_add_vertex = new QPushButton(layoutWidget);
        pBtn_add_vertex->setObjectName(QStringLiteral("pBtn_add_vertex"));

        horizontalLayout_28->addWidget(pBtn_add_vertex);


        verticalLayout_17->addLayout(horizontalLayout_28);


        horizontalLayout_25->addLayout(verticalLayout_17);


        verticalLayout_19->addLayout(horizontalLayout_25);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_18->addWidget(label_12);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_18->addWidget(label_13);


        horizontalLayout_29->addLayout(verticalLayout_18);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        let_vertex_start_index = new QLineEdit(layoutWidget);
        let_vertex_start_index->setObjectName(QStringLiteral("let_vertex_start_index"));
        let_vertex_start_index->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(let_vertex_start_index);

        let_vertex_end_index = new QLineEdit(layoutWidget);
        let_vertex_end_index->setObjectName(QStringLiteral("let_vertex_end_index"));
        let_vertex_end_index->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(let_vertex_end_index);


        horizontalLayout_29->addLayout(verticalLayout_20);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        pBtn_delete_edge = new QPushButton(layoutWidget);
        pBtn_delete_edge->setObjectName(QStringLiteral("pBtn_delete_edge"));

        verticalLayout_21->addWidget(pBtn_delete_edge);

        pBtn_add_edge = new QPushButton(layoutWidget);
        pBtn_add_edge->setObjectName(QStringLiteral("pBtn_add_edge"));

        verticalLayout_21->addWidget(pBtn_add_edge);


        horizontalLayout_29->addLayout(verticalLayout_21);


        horizontalLayout_30->addLayout(horizontalLayout_29);

        pBtn_g_navi = new QPushButton(layoutWidget);
        pBtn_g_navi->setObjectName(QStringLiteral("pBtn_g_navi"));
        pBtn_g_navi->setMaximumSize(QSize(16777215, 29));

        horizontalLayout_30->addWidget(pBtn_g_navi);


        verticalLayout_19->addLayout(horizontalLayout_30);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        lbl_vertex_number = new QLabel(layoutWidget);
        lbl_vertex_number->setObjectName(QStringLiteral("lbl_vertex_number"));
        lbl_vertex_number->setAlignment(Qt::AlignCenter);

        horizontalLayout_26->addWidget(lbl_vertex_number);

        lbl_edge_number = new QLabel(layoutWidget);
        lbl_edge_number->setObjectName(QStringLiteral("lbl_edge_number"));
        lbl_edge_number->setAlignment(Qt::AlignCenter);

        horizontalLayout_26->addWidget(lbl_edge_number);


        verticalLayout_19->addLayout(horizontalLayout_26);

        tabMain->addTab(tab_2, QString());
        layoutWidget->raise();
        layoutWidget4->raise();
        layoutWidget5->raise();
        layoutWidget6->raise();
        layoutWidget7->raise();
        layoutWidget8->raise();
        lbl_map->raise();
        let_vertex_start_index->raise();
        let_vertex_end_index->raise();
        pBtn_add_edge->raise();
        pBtn_delete_edge->raise();
        pBtn_g_navi->raise();
        label_12->raise();
        label_13->raise();
        pBtn_g_navi->raise();
        pBtn_g_navi->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_main = new QLabel(tab_3);
        label_main->setObjectName(QStringLiteral("label_main"));
        label_main->setGeometry(QRect(10, 4, 821, 841));
        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(850, 30, 151, 281));
        layoutWidget1 = new QWidget(groupBox_4);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 60, 109, 181));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        rb_all = new QRadioButton(layoutWidget1);
        rb_all->setObjectName(QStringLiteral("rb_all"));

        verticalLayout_2->addWidget(rb_all);

        rb_2m = new QRadioButton(layoutWidget1);
        rb_2m->setObjectName(QStringLiteral("rb_2m"));

        verticalLayout_2->addWidget(rb_2m);

        rb_1m = new QRadioButton(layoutWidget1);
        rb_1m->setObjectName(QStringLiteral("rb_1m"));

        verticalLayout_2->addWidget(rb_1m);

        tabMain->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_Ultra = new QLabel(tab_4);
        label_Ultra->setObjectName(QStringLiteral("label_Ultra"));
        label_Ultra->setGeometry(QRect(20, 24, 751, 831));
        groupBox_5 = new QGroupBox(tab_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(789, 19, 211, 391));
        layoutWidget2 = new QWidget(groupBox_5);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 30, 201, 346));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        ultra1 = new QCheckBox(layoutWidget2);
        ultra1->setObjectName(QStringLiteral("ultra1"));

        verticalLayout_14->addWidget(ultra1);

        ultra2 = new QCheckBox(layoutWidget2);
        ultra2->setObjectName(QStringLiteral("ultra2"));

        verticalLayout_14->addWidget(ultra2);

        ultra3 = new QCheckBox(layoutWidget2);
        ultra3->setObjectName(QStringLiteral("ultra3"));

        verticalLayout_14->addWidget(ultra3);

        ultra4 = new QCheckBox(layoutWidget2);
        ultra4->setObjectName(QStringLiteral("ultra4"));

        verticalLayout_14->addWidget(ultra4);

        ultra5 = new QCheckBox(layoutWidget2);
        ultra5->setObjectName(QStringLiteral("ultra5"));

        verticalLayout_14->addWidget(ultra5);

        ultra6 = new QCheckBox(layoutWidget2);
        ultra6->setObjectName(QStringLiteral("ultra6"));

        verticalLayout_14->addWidget(ultra6);

        ultra7 = new QCheckBox(layoutWidget2);
        ultra7->setObjectName(QStringLiteral("ultra7"));

        verticalLayout_14->addWidget(ultra7);

        ultra8 = new QCheckBox(layoutWidget2);
        ultra8->setObjectName(QStringLiteral("ultra8"));

        verticalLayout_14->addWidget(ultra8);

        ultraAll = new QCheckBox(layoutWidget2);
        ultraAll->setObjectName(QStringLiteral("ultraAll"));

        verticalLayout_14->addWidget(ultraAll);


        horizontalLayout_13->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        lb_ultra1 = new QLabel(layoutWidget2);
        lb_ultra1->setObjectName(QStringLiteral("lb_ultra1"));
        lb_ultra1->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(lb_ultra1);

        lb_ultra2 = new QLabel(layoutWidget2);
        lb_ultra2->setObjectName(QStringLiteral("lb_ultra2"));
        lb_ultra2->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(lb_ultra2);

        lb_ultra3 = new QLabel(layoutWidget2);
        lb_ultra3->setObjectName(QStringLiteral("lb_ultra3"));
        lb_ultra3->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(lb_ultra3);

        lb_ultra4 = new QLabel(layoutWidget2);
        lb_ultra4->setObjectName(QStringLiteral("lb_ultra4"));
        lb_ultra4->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(lb_ultra4);

        lb_ultra5 = new QLabel(layoutWidget2);
        lb_ultra5->setObjectName(QStringLiteral("lb_ultra5"));
        lb_ultra5->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(lb_ultra5);

        lb_ultra6 = new QLabel(layoutWidget2);
        lb_ultra6->setObjectName(QStringLiteral("lb_ultra6"));
        lb_ultra6->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(lb_ultra6);

        lb_ultra7 = new QLabel(layoutWidget2);
        lb_ultra7->setObjectName(QStringLiteral("lb_ultra7"));
        lb_ultra7->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(lb_ultra7);

        lb_ultra8 = new QLabel(layoutWidget2);
        lb_ultra8->setObjectName(QStringLiteral("lb_ultra8"));
        lb_ultra8->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(lb_ultra8);

        lb_ultra8_2 = new QLabel(layoutWidget2);
        lb_ultra8_2->setObjectName(QStringLiteral("lb_ultra8_2"));

        verticalLayout_15->addWidget(lb_ultra8_2);


        horizontalLayout_13->addLayout(verticalLayout_15);

        groupBox_6 = new QGroupBox(tab_4);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(790, 440, 211, 121));
        Ultra_Area = new QCheckBox(groupBox_6);
        Ultra_Area->setObjectName(QStringLiteral("Ultra_Area"));
        Ultra_Area->setGeometry(QRect(10, 30, 141, 21));
        Obsta_OutLine = new QCheckBox(groupBox_6);
        Obsta_OutLine->setObjectName(QStringLiteral("Obsta_OutLine"));
        Obsta_OutLine->setGeometry(QRect(10, 80, 151, 31));
        tabMain->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1264, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabMain->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        gBx_imu->setTitle(QApplication::translate("MainWindow", "IMU", 0));
        lbl_9->setText(QApplication::translate("MainWindow", "x", 0));
        lbl_10->setText(QApplication::translate("MainWindow", "y", 0));
        lbl_11->setText(QApplication::translate("MainWindow", "z", 0));
        lbl_acc->setText(QApplication::translate("MainWindow", "acc (m/s^2)", 0));
        lbl_gyr->setText(QApplication::translate("MainWindow", "gyr (rad/s)", 0));
        lbl_acc_x->setText(QApplication::translate("MainWindow", "0", 0));
        lbl_gyr_x->setText(QApplication::translate("MainWindow", "0", 0));
        lbl_acc_y->setText(QApplication::translate("MainWindow", "0", 0));
        lbl_gyr_y->setText(QApplication::translate("MainWindow", "0", 0));
        lbl_acc_z->setText(QApplication::translate("MainWindow", "0", 0));
        lbl_gyr_z->setText(QApplication::translate("MainWindow", "0", 0));
        gBx_control->setTitle(QApplication::translate("MainWindow", "control", 0));
        pBtn_key_control_open->setText(QApplication::translate("MainWindow", "stoped", 0));
        lbl_1->setText(QApplication::translate("MainWindow", "max", 0));
        lbl_2->setText(QApplication::translate("MainWindow", "expect", 0));
        lbl_3->setText(QApplication::translate("MainWindow", "return", 0));
        lbl_velocity->setText(QApplication::translate("MainWindow", "vel (m/s)", 0));
        lbl_omega->setText(QApplication::translate("MainWindow", "ome (rad/s)", 0));
        lbl_vel_max->setText(QApplication::translate("MainWindow", "0.00", 0));
        lbl_ome_max->setText(QApplication::translate("MainWindow", "0.00", 0));
        lbl_vel_exp->setText(QApplication::translate("MainWindow", "0.00", 0));
        lbl_ome_exp->setText(QApplication::translate("MainWindow", "0.00", 0));
        lbl_vel_ret->setText(QApplication::translate("MainWindow", "0.00", 0));
        lbl_ome_ret->setText(QApplication::translate("MainWindow", "0.00", 0));
        pBtn_key_Init_IMU->setText(QApplication::translate("MainWindow", "reset mcu", 0));
        gBx_Pose->setTitle(QApplication::translate("MainWindow", "Pose", 0));
        lbl_15->setText(QApplication::translate("MainWindow", "r", 0));
        lbl_pose_r->setText(QApplication::translate("MainWindow", "0.000", 0));
        lbl_16->setText(QApplication::translate("MainWindow", "p", 0));
        lbl_pose_p->setText(QApplication::translate("MainWindow", "0.000", 0));
        lbl_17->setText(QApplication::translate("MainWindow", "y", 0));
        lbl_pose_h->setText(QApplication::translate("MainWindow", "0.000", 0));
        lbl_euler->setText(QApplication::translate("MainWindow", "eular (rad)", 0));
        lbl_21->setText(QApplication::translate("MainWindow", "x", 0));
        lbl_pose_x->setText(QApplication::translate("MainWindow", "0.000", 0));
        lbl_22->setText(QApplication::translate("MainWindow", "y", 0));
        lbl_23->setText(QApplication::translate("MainWindow", "z", 0));
        lbl_pose_z->setText(QApplication::translate("MainWindow", "0.000", 0));
        lbl_pose->setText(QApplication::translate("MainWindow", "pose (m)", 0));
        lbl_pose_y->setText(QApplication::translate("MainWindow", "0.000", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "NetWork", 0));
        pBtn_start2connect->setText(QApplication::translate("MainWindow", "connect", 0));
        lbl_7->setText(QApplication::translate("MainWindow", "IP", 0));
        lEdit_ip->setText(QApplication::translate("MainWindow", "192.168.1.101", 0));
        lbl_8->setText(QApplication::translate("MainWindow", "port", 0));
        lEdit_port->setText(QApplication::translate("MainWindow", "9527", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "UART", 0));
        tabMain->setTabText(tabMain->indexOf(tab_1), QApplication::translate("MainWindow", "\350\256\276\347\275\256", 0));
        lbl_map->setText(QApplication::translate("MainWindow", "map", 0));
        pBtn_open_submap->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\345\255\220\345\233\276", 0));
        pBtn_open_map->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\345\234\260\345\233\276", 0));
        pBtn_binarization->setText(QApplication::translate("MainWindow", "\344\272\214\345\200\274\345\214\226:127", 0));
        label->setText(QApplication::translate("MainWindow", " \346\273\244\346\263\242\346\254\241\346\225\260 ", 0));
        label_2->setText(QApplication::translate("MainWindow", "\351\231\215\351\207\207\346\240\267\346\254\241\346\225\260", 0));
        label_5->setText(QApplication::translate("MainWindow", "\345\234\260\345\233\276\344\277\241\346\201\257", 0));
        label_6->setText(QApplication::translate("MainWindow", "\345\244\247\345\260\217/pixel", 0));
        lbl_map_info_size->setText(QApplication::translate("MainWindow", "0 x 0", 0));
        label_7->setText(QApplication::translate("MainWindow", "\345\210\206\350\276\250\347\216\207/m", 0));
        lbl_map_info_res->setText(QApplication::translate("MainWindow", "0.000", 0));
        label_8->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\345\247\277\346\200\201\345\210\260\346\226\207\344\273\266", 0));
        pBtn_save_pose->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0));
        pBtn_clear_pose->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", 0));
        label_9->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256PID", 0));
        label_10->setText(QApplication::translate("MainWindow", "\350\210\252\345\220\221PID", 0));
        let_pose_pid_P->setText(QApplication::translate("MainWindow", "0", 0));
        let_angle_pid_P->setText(QApplication::translate("MainWindow", "0", 0));
        let_pose_pid_I->setText(QApplication::translate("MainWindow", "0", 0));
        let_angle_pid_I->setText(QApplication::translate("MainWindow", "0", 0));
        let_pose_pid_D->setText(QApplication::translate("MainWindow", "0", 0));
        let_angle_pid_D->setText(QApplication::translate("MainWindow", "0", 0));
        pBtn_PID_confirm->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\256\236\346\227\266\344\275\215\345\247\277", 0));
        lbl_robot_pose_x->setText(QApplication::translate("MainWindow", "0.000", 0));
        lbl_robot_pose_y->setText(QApplication::translate("MainWindow", "0.000", 0));
        lbl_robot_pose_h->setText(QApplication::translate("MainWindow", "0.000", 0));
        label_4->setText(QApplication::translate("MainWindow", "\347\233\256\346\240\207\344\275\215\345\247\277", 0));
        label_11->setText(QApplication::translate("MainWindow", "\350\256\276\345\256\232\350\257\257\345\267\256", 0));
        label_14->setText(QApplication::translate("MainWindow", "x", 0));
        lbl_robot_epose_x->setText(QApplication::translate("MainWindow", "0.000", 0));
        lbl_robot_epose_err_x->setText(QApplication::translate("MainWindow", "0.000", 0));
        label_15->setText(QApplication::translate("MainWindow", "y", 0));
        lbl_robot_epose_y->setText(QApplication::translate("MainWindow", "0.000", 0));
        lbl_robot_epose_err_y->setText(QApplication::translate("MainWindow", "0.000", 0));
        label_16->setText(QApplication::translate("MainWindow", "h", 0));
        lbl_robot_epose_h->setText(QApplication::translate("MainWindow", "0.000", 0));
        lbl_robot_epose_err_h->setText(QApplication::translate("MainWindow", "0.000", 0));
        pBtn_start_navigation->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\257\274\350\210\252", 0));
        pBtn_emergency_stop->setText(QApplication::translate("MainWindow", "\347\264\247\346\200\245\345\201\234\346\255\242", 0));
        pBtn_nav_err_conf->setText(QApplication::translate("MainWindow", "\350\257\257\345\267\256\347\241\256\350\256\244", 0));
        pBtn_open_inspection_file->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\345\257\274\350\210\252\346\226\207\344\273\266", 0));
        pBtn_save_inspection_file->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0));
        let_delete_vertex_index->setText(QApplication::translate("MainWindow", "0", 0));
        pBtn_delete_vertex->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\351\241\266\347\202\271", 0));
        pBtn_add_vertex->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\266\347\202\271", 0));
        label_12->setText(QApplication::translate("MainWindow", "\350\265\267\347\202\271\347\274\226\345\217\267", 0));
        label_13->setText(QApplication::translate("MainWindow", "\347\273\210\347\202\271\347\274\226\345\217\267", 0));
        let_vertex_start_index->setText(QApplication::translate("MainWindow", "0", 0));
        let_vertex_end_index->setText(QApplication::translate("MainWindow", "0", 0));
        pBtn_delete_edge->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\350\276\271", 0));
        pBtn_add_edge->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\276\271", 0));
        pBtn_g_navi->setText(QApplication::translate("MainWindow", "\345\257\274\350\210\252", 0));
        lbl_vertex_number->setText(QApplication::translate("MainWindow", "\351\241\266\347\202\271\346\200\273\346\225\260\357\274\23200", 0));
        lbl_edge_number->setText(QApplication::translate("MainWindow", "\350\276\271\346\200\273\346\225\260\357\274\23200", 0));
        tabMain->setTabText(tabMain->indexOf(tab_2), QApplication::translate("MainWindow", "\345\234\260\345\233\276", 0));
        label_main->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\256\276\347\275\256", 0));
        rb_all->setText(QApplication::translate("MainWindow", "\345\216\237\345\247\213\345\233\276\345\203\217", 0));
        rb_2m->setText(QApplication::translate("MainWindow", "2m\344\273\245\345\206\205", 0));
        rb_1m->setText(QApplication::translate("MainWindow", "1m\344\273\245\345\206\205", 0));
        tabMain->setTabText(tabMain->indexOf(tab_3), QApplication::translate("MainWindow", "\346\277\200\345\205\211\346\216\242\346\265\213\345\233\276", 0));
        label_Ultra->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\350\266\205\345\243\260\345\274\200\345\205\263", 0));
        ultra1->setText(QApplication::translate("MainWindow", "1#\350\266\205\345\243\260\346\263\242", 0));
        ultra2->setText(QApplication::translate("MainWindow", "2#\350\266\205\345\243\260\346\263\242", 0));
        ultra3->setText(QApplication::translate("MainWindow", "3#\350\266\205\345\243\260\346\263\242", 0));
        ultra4->setText(QApplication::translate("MainWindow", "4#\350\266\205\345\243\260\346\263\242", 0));
        ultra5->setText(QApplication::translate("MainWindow", "5#\350\266\205\345\243\260\346\263\242", 0));
        ultra6->setText(QApplication::translate("MainWindow", "6#\350\266\205\345\243\260\346\263\242", 0));
        ultra7->setText(QApplication::translate("MainWindow", "7#\350\266\205\345\243\260\346\263\242", 0));
        ultra8->setText(QApplication::translate("MainWindow", "8#\350\266\205\345\243\260\346\263\242", 0));
        ultraAll->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211", 0));
        lb_ultra1->setText(QApplication::translate("MainWindow", "0000", 0));
        lb_ultra2->setText(QApplication::translate("MainWindow", "0000", 0));
        lb_ultra3->setText(QApplication::translate("MainWindow", "0000", 0));
        lb_ultra4->setText(QApplication::translate("MainWindow", "0000", 0));
        lb_ultra5->setText(QApplication::translate("MainWindow", "0000", 0));
        lb_ultra6->setText(QApplication::translate("MainWindow", "0000", 0));
        lb_ultra7->setText(QApplication::translate("MainWindow", "0000", 0));
        lb_ultra8->setText(QApplication::translate("MainWindow", "0000", 0));
        lb_ultra8_2->setText(QString());
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\256\276\347\275\256", 0));
        Ultra_Area->setText(QApplication::translate("MainWindow", "\350\266\205\345\243\260\350\214\203\345\233\264\346\230\276\347\244\272", 0));
        Obsta_OutLine->setText(QApplication::translate("MainWindow", "\351\232\234\347\242\215\350\275\256\345\273\223\346\230\276\347\244\272", 0));
        tabMain->setTabText(tabMain->indexOf(tab_4), QApplication::translate("MainWindow", "\350\266\205\345\243\260\346\263\242\346\216\242\346\265\213\345\233\276", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
