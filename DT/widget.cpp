#include "widget.h"
#include "ui_widget.h"

#include <vector>
#include <fstream>
#include <QtGui>


//#include "edge.h"
#include "algorithms.h"
#include "triangle.h"
#include "points.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    std::vector<QPoint3D> points = ui->Canvas->getPoints();
    /*
    std::ofstream f ("test.fxt");
    for(QPoint3D p: points)
    {
        f << p.x() << "  " << p.y() <<'\n';
    }
    f.close();
    */
    std::vector<Edge> dt = Algorithms::DT(points);
    ui->Canvas->setDT(dt);
    repaint();
}

void Widget::on_pushButton_3_clicked()
{
    //Clear and repaint
    ui->Canvas->clearAll();
    repaint();
}

void Widget::on_pushButton_2_clicked()
{
    //Create contour lines
    ui->Canvas->clearContours();
    std::vector<Edge> dt = ui->Canvas->getDT();
    int cont = ui->contours->text().toDouble();
    int mcont = ui->main_contours->text().toDouble();
    std::vector<Edge> contours = Algorithms::createContours(dt, 0, 8848, cont);
    std::vector<Edge> mcontours = Algorithms::createContours(dt, 0, 8848, mcont);
    ui->Canvas->setContours(contours);
    ui->Canvas->setMainContours(mcontours);
    repaint();
}

void Widget::on_pushButton_4_clicked()
{
    //Analyze aspect
    std::vector<Edge> dt = ui->Canvas->getDT();
    std::vector<Triangle> aspect = Algorithms::analyzeDTM(dt);
    ui->Canvas->setAspect(aspect);
    repaint();
}

void Widget::on_create_points_clicked()
{
    ui->Canvas->clearPoints();
    QSize s = ui->Canvas->size();
    int input_num=ui->num_points->text().toInt();
    if(input_num<=0)
    {
        error_flag = true;
        QMessageBox *msg = new QMessageBox();
        msgSettings(msg);
        msg->show();
        return;
    }
    else
    {
        error_flag = false;
        if (ui->type_of_layout->currentIndex()==0)
        {
            std::vector<QPoint3D> points = Points::generateRandom(input_num,s);
            ui->Canvas->setPoints(points);
            ui->Canvas->repaint();
        }
        else if (ui->type_of_layout->currentIndex()==1)
        {
             std::vector<QPoint3D> points = Points::generateGrid(input_num,s);
             ui->Canvas->setPoints(points);
             ui->Canvas->repaint();
        }
        else if (ui->type_of_layout->currentIndex()==2)
        {
             std::vector<QPoint3D> points = Points::generateMound(input_num,s);
             ui->Canvas->setPoints(points);
             ui->Canvas->repaint();
        }
//        else if (ui->style->currentIndex()==3)
//        {
//             std::vector<QPoint> points = Points::generateEllipse(input_num,s);
//             ui->Canvas->setPoints(points);
//             ui->Canvas->repaint();
//        }
//        else if (ui->style->currentIndex()==4)
//        {
//             std::vector<QPoint> points = Points::generateRectangle(input_num,s);
//             ui->Canvas->setPoints(points);
//             ui->Canvas->repaint();
//        }
//        else
//        {
//             std::vector<QPoint> points = Points::generateSquare(input_num,s);
//             ui->Canvas->setPoints(points);
//             ui->Canvas->repaint();
//        }
//        ui->label_info->setText("Select method of CH computation.");
    }
}

void Widget::on_pushButton_5_clicked()
{
    //Analyze slope
    std::vector<Edge> dt = ui->Canvas->getDT();
    std::vector<Triangle> slope = Algorithms::analyzeDTM(dt);
    ui->Canvas->setSlope(slope);
    repaint();
}
