#ifndef DRAW_H
#define DRAW_H

#include <QWidget>
#include <vector>
#include <ctime>

#include "edge.h"
#include "qpoint3d.h"
#include "triangle.h"

class Draw : public QWidget
{
    Q_OBJECT
    private:
        std::vector<QPoint3D> points;     //List of points
        std::vector<Edge> dt;             //List of Delaunay edges
        std::vector<Edge> contours;       //List of contours
        std::vector<Edge> mcontours;       //List of main contours
        std::vector<Triangle> aspect;
        std::vector<Triangle> slope;

    public:
        explicit Draw(QWidget *parent = nullptr);
        void paintEvent(QPaintEvent *e);
        void mousePressEvent(QMouseEvent *e);
        void clearPoints() {points.clear();}
        void clearDT() {dt.clear();}
        void clearContours() {contours.clear();}
        void clearMainContours() {mcontours.clear();}
        void clearAspect() {aspect.clear();}
        void clearSlope() {slope.clear();}
        void clearAll();
        std::vector<QPoint3D> & getPoints(){return points;}
        std::vector<Edge> & getDT(){return dt;}
        void setPoints(std::vector<QPoint3D> _points){points = _points;}
        void setDT(std::vector<Edge> &dt_){dt = dt_;}
        void setContours(std::vector<Edge> &contours_){contours = contours_;}
        void setMainContours(std::vector<Edge> &mcontours_){mcontours = mcontours_;}
        void setSlope(std::vector<Triangle> &slope_){slope = slope_;}
        void setAspect(std::vector<Triangle> &aspect_){aspect = aspect_;}

    signals:

    public slots:

};

#endif // DRAW_H
