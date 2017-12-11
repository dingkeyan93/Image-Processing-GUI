/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *open_image;
    QAction *save_image;
    QAction *togray;
    QAction *exit_image;
    QAction *print_image;
    QAction *dilate_image;
    QAction *erode_image;
    QAction *opening_image;
    QAction *closing_image;
    QAction *gradient_image;
    QAction *tophat_image;
    QAction *blackhat_image;
    QAction *repeal_image;
    QAction *init_image;
    QAction *hole_fill;
    QAction *contrast_image;
    QAction *histogram_equalization;
    QAction *OK_image;
    QAction *print_image_action;
    QAction *open_action;
    QAction *save_action;
    QAction *tobinary_before;
    QAction *camera_action;
    QAction *camera_image;
    QAction *contours_describe;
    QAction *zoom_in;
    QAction *zoom_out;
    QAction *information_action;
    QAction *deduct_small_area;
    QAction *seed_action;
    QAction *ROI_action;
    QAction *action_ROI;
    QAction *Reconstruct_action;
    QAction *actionCanny;
    QAction *actionSobel;
    QAction *actionLaplacian;
    QAction *region_grow;
    QAction *spilt_combine;
    QAction *BoxFilter;
    QAction *MeanBlur;
    QAction *GaussianBlur;
    QAction *MedianBlur;
    QAction *BilateralFilter;
    QAction *GrabCut;
    QAction *OTSU_2;
    QAction *watershed_2;
    QAction *actionLever_set;
    QAction *action_FCM;
    QAction *action_K_Means;
    QAction *actionSnake;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *tip1;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLabel *tip2;
    QLabel *label_1;
    QVBoxLayout *verticalLayout_3;
    QLabel *tip3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_thresh;
    QSlider *thresh_Slider;
    QSpinBox *spinBox;
    QLabel *label_thresh_1;
    QSlider *thresh_Slider_1;
    QComboBox *comboBox1;
    QComboBox *comboBox2;
    QSpacerItem *verticalSpacer;
    QLabel *label_time;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_6;
    QMenu *menu_8;
    QMenu *menu_9;
    QMenu *menu_10;
    QMenu *menu_11;
    QMenu *menu_12;
    QMenu *menu_7;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        MainWindow->setFont(font);
        MainWindow->setToolTipDuration(1);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"\n"
"font: 9.5pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
""));
        MainWindow->setIconSize(QSize(22, 22));
        MainWindow->setTabShape(QTabWidget::Triangular);
        open_image = new QAction(MainWindow);
        open_image->setObjectName(QStringLiteral("open_image"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        open_image->setIcon(icon);
        save_image = new QAction(MainWindow);
        save_image->setObjectName(QStringLiteral("save_image"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        save_image->setIcon(icon1);
        togray = new QAction(MainWindow);
        togray->setObjectName(QStringLiteral("togray"));
        exit_image = new QAction(MainWindow);
        exit_image->setObjectName(QStringLiteral("exit_image"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit_image->setIcon(icon2);
        print_image = new QAction(MainWindow);
        print_image->setObjectName(QStringLiteral("print_image"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/printImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        print_image->setIcon(icon3);
        dilate_image = new QAction(MainWindow);
        dilate_image->setObjectName(QStringLiteral("dilate_image"));
        erode_image = new QAction(MainWindow);
        erode_image->setObjectName(QStringLiteral("erode_image"));
        opening_image = new QAction(MainWindow);
        opening_image->setObjectName(QStringLiteral("opening_image"));
        closing_image = new QAction(MainWindow);
        closing_image->setObjectName(QStringLiteral("closing_image"));
        gradient_image = new QAction(MainWindow);
        gradient_image->setObjectName(QStringLiteral("gradient_image"));
        tophat_image = new QAction(MainWindow);
        tophat_image->setObjectName(QStringLiteral("tophat_image"));
        blackhat_image = new QAction(MainWindow);
        blackhat_image->setObjectName(QStringLiteral("blackhat_image"));
        repeal_image = new QAction(MainWindow);
        repeal_image->setObjectName(QStringLiteral("repeal_image"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/repeal.png"), QSize(), QIcon::Normal, QIcon::Off);
        repeal_image->setIcon(icon4);
        init_image = new QAction(MainWindow);
        init_image->setObjectName(QStringLiteral("init_image"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        init_image->setIcon(icon5);
        hole_fill = new QAction(MainWindow);
        hole_fill->setObjectName(QStringLiteral("hole_fill"));
        contrast_image = new QAction(MainWindow);
        contrast_image->setObjectName(QStringLiteral("contrast_image"));
        histogram_equalization = new QAction(MainWindow);
        histogram_equalization->setObjectName(QStringLiteral("histogram_equalization"));
        OK_image = new QAction(MainWindow);
        OK_image->setObjectName(QStringLiteral("OK_image"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        OK_image->setIcon(icon6);
        print_image_action = new QAction(MainWindow);
        print_image_action->setObjectName(QStringLiteral("print_image_action"));
        print_image_action->setIcon(icon3);
        open_action = new QAction(MainWindow);
        open_action->setObjectName(QStringLiteral("open_action"));
        open_action->setIcon(icon);
        save_action = new QAction(MainWindow);
        save_action->setObjectName(QStringLiteral("save_action"));
        save_action->setIcon(icon1);
        tobinary_before = new QAction(MainWindow);
        tobinary_before->setObjectName(QStringLiteral("tobinary_before"));
        camera_action = new QAction(MainWindow);
        camera_action->setObjectName(QStringLiteral("camera_action"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/video_camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        camera_action->setIcon(icon7);
        camera_image = new QAction(MainWindow);
        camera_image->setObjectName(QStringLiteral("camera_image"));
        camera_image->setIcon(icon7);
        contours_describe = new QAction(MainWindow);
        contours_describe->setObjectName(QStringLiteral("contours_describe"));
        zoom_in = new QAction(MainWindow);
        zoom_in->setObjectName(QStringLiteral("zoom_in"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/Zoom_in.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoom_in->setIcon(icon8);
        zoom_out = new QAction(MainWindow);
        zoom_out->setObjectName(QStringLiteral("zoom_out"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/Zoom_out_.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoom_out->setIcon(icon9);
        information_action = new QAction(MainWindow);
        information_action->setObjectName(QStringLiteral("information_action"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        information_action->setIcon(icon10);
        deduct_small_area = new QAction(MainWindow);
        deduct_small_area->setObjectName(QStringLiteral("deduct_small_area"));
        seed_action = new QAction(MainWindow);
        seed_action->setObjectName(QStringLiteral("seed_action"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/seed.png"), QSize(), QIcon::Normal, QIcon::Off);
        seed_action->setIcon(icon11);
        ROI_action = new QAction(MainWindow);
        ROI_action->setObjectName(QStringLiteral("ROI_action"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/ROI.png"), QSize(), QIcon::Normal, QIcon::Off);
        ROI_action->setIcon(icon12);
        action_ROI = new QAction(MainWindow);
        action_ROI->setObjectName(QStringLiteral("action_ROI"));
        Reconstruct_action = new QAction(MainWindow);
        Reconstruct_action->setObjectName(QStringLiteral("Reconstruct_action"));
        actionCanny = new QAction(MainWindow);
        actionCanny->setObjectName(QStringLiteral("actionCanny"));
        actionSobel = new QAction(MainWindow);
        actionSobel->setObjectName(QStringLiteral("actionSobel"));
        actionLaplacian = new QAction(MainWindow);
        actionLaplacian->setObjectName(QStringLiteral("actionLaplacian"));
        region_grow = new QAction(MainWindow);
        region_grow->setObjectName(QStringLiteral("region_grow"));
        spilt_combine = new QAction(MainWindow);
        spilt_combine->setObjectName(QStringLiteral("spilt_combine"));
        BoxFilter = new QAction(MainWindow);
        BoxFilter->setObjectName(QStringLiteral("BoxFilter"));
        MeanBlur = new QAction(MainWindow);
        MeanBlur->setObjectName(QStringLiteral("MeanBlur"));
        GaussianBlur = new QAction(MainWindow);
        GaussianBlur->setObjectName(QStringLiteral("GaussianBlur"));
        MedianBlur = new QAction(MainWindow);
        MedianBlur->setObjectName(QStringLiteral("MedianBlur"));
        BilateralFilter = new QAction(MainWindow);
        BilateralFilter->setObjectName(QStringLiteral("BilateralFilter"));
        GrabCut = new QAction(MainWindow);
        GrabCut->setObjectName(QStringLiteral("GrabCut"));
        OTSU_2 = new QAction(MainWindow);
        OTSU_2->setObjectName(QStringLiteral("OTSU_2"));
        watershed_2 = new QAction(MainWindow);
        watershed_2->setObjectName(QStringLiteral("watershed_2"));
        actionLever_set = new QAction(MainWindow);
        actionLever_set->setObjectName(QStringLiteral("actionLever_set"));
        action_FCM = new QAction(MainWindow);
        action_FCM->setObjectName(QStringLiteral("action_FCM"));
        action_K_Means = new QAction(MainWindow);
        action_K_Means->setObjectName(QStringLiteral("action_K_Means"));
        actionSnake = new QAction(MainWindow);
        actionSnake->setObjectName(QStringLiteral("actionSnake"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tip1 = new QLabel(centralWidget);
        tip1->setObjectName(QStringLiteral("tip1"));
        tip1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(tip1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 0));
        label->setFont(font);
        label->setMouseTracking(true);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QStringLiteral(""));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tip2 = new QLabel(centralWidget);
        tip2->setObjectName(QStringLiteral("tip2"));
        tip2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(tip2);

        label_1 = new QLabel(centralWidget);
        label_1->setObjectName(QStringLiteral("label_1"));

        verticalLayout_2->addWidget(label_1);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tip3 = new QLabel(centralWidget);
        tip3->setObjectName(QStringLiteral("tip3"));
        tip3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(tip3);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_thresh = new QLabel(centralWidget);
        label_thresh->setObjectName(QStringLiteral("label_thresh"));
        label_thresh->setFont(font);

        verticalLayout_4->addWidget(label_thresh);

        thresh_Slider = new QSlider(centralWidget);
        thresh_Slider->setObjectName(QStringLiteral("thresh_Slider"));
        thresh_Slider->setEnabled(true);
        thresh_Slider->setMinimumSize(QSize(254, 22));
        thresh_Slider->setMaximum(255);
        thresh_Slider->setValue(128);
        thresh_Slider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(thresh_Slider);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(10000);
        spinBox->setSingleStep(10);
        spinBox->setValue(100);

        verticalLayout_4->addWidget(spinBox);

        label_thresh_1 = new QLabel(centralWidget);
        label_thresh_1->setObjectName(QStringLiteral("label_thresh_1"));

        verticalLayout_4->addWidget(label_thresh_1);

        thresh_Slider_1 = new QSlider(centralWidget);
        thresh_Slider_1->setObjectName(QStringLiteral("thresh_Slider_1"));
        thresh_Slider_1->setMaximum(255);
        thresh_Slider_1->setValue(128);
        thresh_Slider_1->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(thresh_Slider_1);

        comboBox1 = new QComboBox(centralWidget);
        comboBox1->setObjectName(QStringLiteral("comboBox1"));
        comboBox1->setEditable(false);

        verticalLayout_4->addWidget(comboBox1);

        comboBox2 = new QComboBox(centralWidget);
        comboBox2->setObjectName(QStringLiteral("comboBox2"));

        verticalLayout_4->addWidget(comboBox2);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        label_time = new QLabel(centralWidget);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setLayoutDirection(Qt::LeftToRight);
        label_time->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_time);


        horizontalLayout_2->addLayout(verticalLayout_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 506, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 31));
        menuBar->setStyleSheet(QStringLiteral(""));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_5 = new QMenu(menu_4);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        menu_6 = new QMenu(menu_4);
        menu_6->setObjectName(QStringLiteral("menu_6"));
        menu_8 = new QMenu(menu_4);
        menu_8->setObjectName(QStringLiteral("menu_8"));
        menu_9 = new QMenu(menu_4);
        menu_9->setObjectName(QStringLiteral("menu_9"));
        menu_10 = new QMenu(menu_4);
        menu_10->setObjectName(QStringLiteral("menu_10"));
        menu_11 = new QMenu(menu_4);
        menu_11->setObjectName(QStringLiteral("menu_11"));
        menu_12 = new QMenu(menu_4);
        menu_12->setObjectName(QStringLiteral("menu_12"));
        menu_7 = new QMenu(menuBar);
        menu_7->setObjectName(QStringLiteral("menu_7"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setIconSize(QSize(18, 18));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_7->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menu->addAction(open_image);
        menu->addAction(save_image);
        menu->addAction(print_image);
        menu->addAction(camera_image);
        menu->addAction(exit_image);
        menu_2->addAction(togray);
        menu_2->addAction(tobinary_before);
        menu_2->addAction(contrast_image);
        menu_2->addAction(histogram_equalization);
        menu_2->addAction(action_ROI);
        menu_3->addAction(dilate_image);
        menu_3->addAction(erode_image);
        menu_3->addAction(opening_image);
        menu_3->addAction(closing_image);
        menu_3->addAction(gradient_image);
        menu_3->addAction(tophat_image);
        menu_3->addAction(blackhat_image);
        menu_3->addAction(hole_fill);
        menu_3->addAction(deduct_small_area);
        menu_3->addAction(Reconstruct_action);
        menu_3->addAction(contours_describe);
        menu_4->addAction(menu_9->menuAction());
        menu_4->addAction(menu_10->menuAction());
        menu_4->addAction(menu_5->menuAction());
        menu_4->addAction(menu_6->menuAction());
        menu_4->addAction(menu_8->menuAction());
        menu_4->addAction(menu_12->menuAction());
        menu_4->addAction(menu_11->menuAction());
        menu_5->addAction(actionCanny);
        menu_5->addAction(actionSobel);
        menu_5->addAction(actionLaplacian);
        menu_6->addAction(region_grow);
        menu_8->addAction(GrabCut);
        menu_9->addAction(OTSU_2);
        menu_10->addAction(watershed_2);
        menu_11->addAction(actionSnake);
        menu_11->addAction(actionLever_set);
        menu_12->addAction(action_K_Means);
        menu_12->addAction(action_FCM);
        menu_7->addAction(BoxFilter);
        menu_7->addAction(MeanBlur);
        menu_7->addAction(GaussianBlur);
        menu_7->addAction(MedianBlur);
        menu_7->addAction(BilateralFilter);
        toolBar->addAction(open_action);
        toolBar->addAction(save_action);
        toolBar->addAction(print_image_action);
        toolBar->addAction(camera_action);
        toolBar->addAction(ROI_action);
        toolBar->addAction(seed_action);
        toolBar->addAction(zoom_in);
        toolBar->addAction(zoom_out);
        toolBar->addAction(init_image);
        toolBar->addAction(repeal_image);
        toolBar->addAction(OK_image);
        toolBar->addAction(information_action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\345\244\204\347\220\206GUI--Based on Qt5 and Opencv3", Q_NULLPTR));
        open_image->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\345\233\276\347\211\207", Q_NULLPTR));
        open_image->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
        save_image->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\345\233\276\347\211\207", Q_NULLPTR));
        save_image->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
        togray->setText(QApplication::translate("MainWindow", "\347\201\260\345\272\246\345\214\226 ", Q_NULLPTR));
        exit_image->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", Q_NULLPTR));
        exit_image->setShortcut(QApplication::translate("MainWindow", "Shift+Esc", Q_NULLPTR));
        print_image->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260\345\233\276\347\211\207", Q_NULLPTR));
        print_image->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", Q_NULLPTR));
        dilate_image->setText(QApplication::translate("MainWindow", "\350\206\250\350\203\200", Q_NULLPTR));
        erode_image->setText(QApplication::translate("MainWindow", "\350\205\220\350\232\200", Q_NULLPTR));
        opening_image->setText(QApplication::translate("MainWindow", "\345\274\200\350\277\220\347\256\227", Q_NULLPTR));
        closing_image->setText(QApplication::translate("MainWindow", "\351\227\255\350\277\220\347\256\227", Q_NULLPTR));
        gradient_image->setText(QApplication::translate("MainWindow", "\346\242\257\345\272\246\350\277\220\347\256\227", Q_NULLPTR));
        tophat_image->setText(QApplication::translate("MainWindow", "\351\241\266\345\270\275\350\277\220\347\256\227", Q_NULLPTR));
        blackhat_image->setText(QApplication::translate("MainWindow", "\351\273\221\345\270\275\350\277\220\347\256\227", Q_NULLPTR));
        repeal_image->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", Q_NULLPTR));
        repeal_image->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", Q_NULLPTR));
        init_image->setText(QApplication::translate("MainWindow", "\351\207\215\345\201\232", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        init_image->setToolTip(QApplication::translate("MainWindow", "\351\207\215\345\201\232", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        init_image->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
        hole_fill->setText(QApplication::translate("MainWindow", "\345\255\224\346\264\236\345\241\253\345\205\205", Q_NULLPTR));
        contrast_image->setText(QApplication::translate("MainWindow", "\345\257\271\346\257\224\345\272\246\345\222\214\344\272\256\345\272\246", Q_NULLPTR));
        histogram_equalization->setText(QApplication::translate("MainWindow", "\347\233\264\346\226\271\345\233\276\345\235\207\350\241\241\345\214\226", Q_NULLPTR));
        OK_image->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        OK_image->setToolTip(QApplication::translate("MainWindow", "\347\241\256\345\256\232", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        OK_image->setShortcut(QApplication::translate("MainWindow", "Space", Q_NULLPTR));
        print_image_action->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        print_image_action->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\215\260", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        open_action->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        open_action->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        save_action->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        save_action->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tobinary_before->setText(QApplication::translate("MainWindow", "\344\272\214\345\200\274\345\214\226", Q_NULLPTR));
        camera_action->setText(QApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        camera_action->setToolTip(QApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        camera_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
        camera_image->setText(QApplication::translate("MainWindow", "\350\260\203\347\224\250\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
        camera_image->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
        contours_describe->setText(QApplication::translate("MainWindow", "\350\275\256\345\273\223\346\217\220\345\217\226\344\270\216\346\217\217\350\277\260", Q_NULLPTR));
        zoom_in->setText(QApplication::translate("MainWindow", "\346\224\276\345\244\247", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        zoom_in->setToolTip(QApplication::translate("MainWindow", "\346\224\276\345\244\247", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        zoom_out->setText(QApplication::translate("MainWindow", "\347\274\251\345\260\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        zoom_out->setToolTip(QApplication::translate("MainWindow", "\347\274\251\345\260\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        information_action->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        information_action->setToolTip(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        information_action->setShortcut(QApplication::translate("MainWindow", "F1", Q_NULLPTR));
        deduct_small_area->setText(QApplication::translate("MainWindow", "\345\216\273\351\231\244\345\260\217\345\214\272\345\237\237", Q_NULLPTR));
        seed_action->setText(QApplication::translate("MainWindow", "\347\247\215\345\255\220", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        seed_action->setToolTip(QApplication::translate("MainWindow", "\350\256\276\345\275\223\345\211\215\345\233\276\345\203\217\344\270\272\347\247\215\345\255\220\345\233\276\345\203\217\346\210\226\346\240\207\350\256\260\345\233\276\345\203\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ROI_action->setText(QApplication::translate("MainWindow", "ROI", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ROI_action->setToolTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256ROI\345\214\272\345\237\237", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_ROI->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256ROI\345\214\272\345\237\237", Q_NULLPTR));
        Reconstruct_action->setText(QApplication::translate("MainWindow", "\345\275\242\346\200\201\345\255\246\351\207\215\346\236\204", Q_NULLPTR));
        actionCanny->setText(QApplication::translate("MainWindow", "Canny\347\256\227\345\255\220", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCanny->setToolTip(QApplication::translate("MainWindow", "Canny\347\256\227\345\255\220", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSobel->setText(QApplication::translate("MainWindow", "Sobel\347\256\227\345\255\220", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSobel->setToolTip(QApplication::translate("MainWindow", "Sobel\347\256\227\345\255\220", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLaplacian->setText(QApplication::translate("MainWindow", "Laplacian\347\256\227\345\255\220", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLaplacian->setToolTip(QApplication::translate("MainWindow", "Laplacian\347\256\227\345\255\220", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        region_grow->setText(QApplication::translate("MainWindow", "\345\214\272\345\237\237\347\224\237\351\225\277\346\263\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        region_grow->setToolTip(QApplication::translate("MainWindow", "\345\214\272\345\237\237\347\224\237\351\225\277\346\263\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        spilt_combine->setText(QApplication::translate("MainWindow", "\345\210\206\350\243\202\345\220\210\345\271\266\346\263\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spilt_combine->setToolTip(QApplication::translate("MainWindow", "\345\210\206\350\243\202\345\220\210\345\271\266\346\263\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BoxFilter->setText(QApplication::translate("MainWindow", "\346\226\271\346\241\206\346\273\244\346\263\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BoxFilter->setToolTip(QApplication::translate("MainWindow", "\344\275\277\347\224\250\346\226\271\346\241\206\346\273\244\346\263\242\345\231\250\346\235\245\346\250\241\347\263\212\344\270\200\345\274\240\345\233\276\347\211\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MeanBlur->setText(QApplication::translate("MainWindow", "\345\235\207\345\200\274\346\273\244\346\263\242", Q_NULLPTR));
        GaussianBlur->setText(QApplication::translate("MainWindow", "\351\253\230\346\226\257\346\273\244\346\263\242", Q_NULLPTR));
        MedianBlur->setText(QApplication::translate("MainWindow", "\344\270\255\345\200\274\346\273\244\346\263\242", Q_NULLPTR));
        BilateralFilter->setText(QApplication::translate("MainWindow", "\345\217\214\350\276\271\346\273\244\346\263\242", Q_NULLPTR));
        GrabCut->setText(QApplication::translate("MainWindow", "GrabCut", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GrabCut->setToolTip(QApplication::translate("MainWindow", "GrabCut", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        OTSU_2->setText(QApplication::translate("MainWindow", "\345\244\247\346\264\245\346\263\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        OTSU_2->setToolTip(QApplication::translate("MainWindow", "\345\244\247\346\264\245\346\263\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        watershed_2->setText(QApplication::translate("MainWindow", "\345\210\206\346\260\264\345\262\255\347\256\227\346\263\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        watershed_2->setToolTip(QApplication::translate("MainWindow", "\345\210\206\346\260\264\345\262\255\347\256\227\346\263\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLever_set->setText(QApplication::translate("MainWindow", "Lever set--DRLSE", Q_NULLPTR));
        action_FCM->setText(QApplication::translate("MainWindow", "FCM", Q_NULLPTR));
        action_K_Means->setText(QApplication::translate("MainWindow", "K-Means", Q_NULLPTR));
        actionSnake->setText(QApplication::translate("MainWindow", "Snake", Q_NULLPTR));
        tip1->setText(QString());
        label->setText(QString());
        tip2->setText(QString());
        label_1->setText(QString());
        tip3->setText(QString());
        label_2->setText(QString());
        label_thresh->setText(QString());
        label_thresh_1->setText(QString());
        comboBox1->clear();
        comboBox1->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\347\237\251\345\275\242\357\274\210\351\273\230\350\256\244\345\206\205\346\240\270\345\275\242\347\212\266\357\274\211", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\272\244\345\217\211\345\275\242", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\244\255\345\234\206\345\275\242", Q_NULLPTR)
        );
        comboBox2->clear();
        comboBox2->insertItems(0, QStringList()
         << QString()
         << QString()
         << QString()
         << QString()
         << QString()
        );
        label_time->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\351\242\204\345\244\204\347\220\206", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\275\242\346\200\201\345\255\246\346\223\215\344\275\234", Q_NULLPTR));
        menu_4->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\345\210\206\345\211\262", Q_NULLPTR));
        menu_5->setTitle(QApplication::translate("MainWindow", "\345\237\272\344\272\216\350\276\271\347\274\230\346\243\200\346\265\213\347\232\204\345\210\206\345\211\262", Q_NULLPTR));
        menu_6->setTitle(QApplication::translate("MainWindow", "\345\237\272\344\272\216\345\214\272\345\237\237\347\232\204\345\210\206\345\211\262", Q_NULLPTR));
        menu_8->setTitle(QApplication::translate("MainWindow", "\345\237\272\344\272\216\345\233\276\350\256\272\347\232\204\345\210\206\345\211\262", Q_NULLPTR));
        menu_9->setTitle(QApplication::translate("MainWindow", "\345\237\272\344\272\216\351\230\210\345\200\274\347\232\204\345\210\206\345\211\262", Q_NULLPTR));
        menu_10->setTitle(QApplication::translate("MainWindow", "\345\237\272\344\272\216\345\275\242\346\200\201\345\255\246\347\232\204\345\210\206\345\211\262", Q_NULLPTR));
        menu_11->setTitle(QApplication::translate("MainWindow", "\345\237\272\344\272\216\346\264\273\345\212\250\350\275\256\345\273\223\346\250\241\345\236\213\347\232\204\345\210\206\345\211\262", Q_NULLPTR));
        menu_12->setTitle(QApplication::translate("MainWindow", "\345\237\272\344\272\216\350\201\232\347\261\273\347\232\204\345\210\206\345\211\262", Q_NULLPTR));
        menu_7->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\346\273\244\346\263\242", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
        toolBar->setStyleSheet(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
