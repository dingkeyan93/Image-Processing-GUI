#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv2/opencv.hpp>
#include <QMainWindow>
#include <list>
#include <opencv2/opencv.hpp>
#include <QPainter>
#include <QLabel>

using namespace cv;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void img_display(Mat image);
    void img_display_1(Mat image);
    void img_display_2(Mat image);
    void ui_hide();
    void ui_show();
    void setSlider(int Slider_Min,int Slider_Max,int Slider_Val);
    void setSlider_1(int Slider_Min,int Slider_Max,int Slider_Val);
    void mousePressEvent(QMouseEvent*event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void RemoveSmallRegion(Mat& Src, Mat& Dst, int AreaLimit, int CheckMode, int NeihborMode);
    Mat morphReconstruct(Mat src,Mat seed1);

private slots:

    void on_open_image_triggered();

    void on_save_image_triggered();

    void on_togray_triggered();

    void on_print_image_triggered();

    void on_exit_image_triggered();

    void on_dilate_image_triggered();

    void on_erode_image_triggered();

    void on_closing_image_triggered();

    void on_gradient_image_triggered();

    void on_tophat_image_triggered();

    void on_blackhat_image_triggered();

    void on_opening_image_triggered();

    void on_repeal_image_triggered();

    void on_init_image_triggered();

    void on_thresh_Slider_valueChanged(int value);

    void on_hole_fill_triggered();

    void on_contrast_image_triggered();

    void on_histogram_equalization_triggered();

    void on_OK_image_triggered();

    void on_print_image_action_triggered();

    void on_open_action_triggered();

    void on_save_action_triggered();

    void on_tobinary_before_triggered();

    void on_thresh_Slider_1_valueChanged(int value);

    void on_comboBox1_currentIndexChanged(int index);

    void on_camera_action_triggered();

    void on_camera_image_triggered();

    void on_contours_describe_triggered();

    void on_comboBox2_currentIndexChanged(const QString &arg1);

    void on_zoom_in_triggered();

    void on_zoom_out_triggered();

    void timerUpdate();

    void on_information_action_triggered();

    void on_deduct_small_area_triggered();

    void on_seed_action_triggered();

    void on_ROI_action_triggered();

    void on_action_ROI_triggered();

    void on_Reconstruct_action_triggered();

    void on_actionCanny_triggered();

    void on_actionSobel_triggered();

    void on_actionLaplacian_triggered();

    void on_region_grow_triggered();

    void on_BoxFilter_triggered();

    void on_MeanBlur_triggered();

    void on_GaussianBlur_triggered();

    void on_MedianBlur_triggered();

    void on_BilateralFilter_triggered();

    void on_OTSU_2_triggered();

    void on_watershed_2_triggered();

    void on_GrabCut_triggered();

    void on_actionLever_set_triggered();

    void on_spinBox_editingFinished();

    void on_action_FCM_triggered();

    void on_action_K_Means_triggered();

private:
    Ui::MainWindow *ui;
    cv::Mat image,rep_img,init_img,dst_image,seed1,image1;
    QImage dispimg;//显示图
    float thresh=1;//滑块值
    int thresh_1=1;//滑块_1值
    int x,y,x1,y1;//鼠标点
    int flag;//用于判断哪个图像处理操作使用到了滑块
    int MORPH=0;//形态学内核：MORPH_RECT (0) 矩形、 MORPH_CROSS (1)十字交叉型 、 MORPH_ELLIPSE (2)椭圆型

};


//水平集 类
class leverset{

public:
    void EVolution(IplImage *u, IplImage *g, double lambda, double mu, double alf, double epsilon, double delt, int numIter);

    void NeumannBoundCond(IplImage *img);

    void CurvatureCentral(IplImage *nx, IplImage *ny, IplImage* dst);

    void Dirac(IplImage *src, IplImage *dst, double sigma);

    void ImgDraw(IplImage *src, IplImage *u, IplImage *dst);

    IplImage* getGray(IplImage *img);

    void Sobel(IplImage *src, IplImage *dx, IplImage *dy);
};

#endif // MAINWINDOW_H
