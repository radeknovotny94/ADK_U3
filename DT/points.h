#ifndef POINTS_H
#define POINTS_H

#include <vector>
#include <QSize>

#include "qpoint3d.h"

class Points
{
public:
    Points();
    static std::vector<QPoint3D> generateRandom(int &n,QSize &size);
    static std::vector<QPoint3D> generateGrid(int &n,QSize &size);
    static std::vector<QPoint3D> generateMound(int &n, QSize &size);
//    static std::vector<QPoint3D> generateEllipse(int &n, QSize &size);
//    static std::vector<QPoint3D> generateRectangle(int &n, QSize &size);
//    static std::vector<QPoint3D> generateSquare(int &n, QSize &size);
};

#endif // POINTS_H
