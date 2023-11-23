#include "parabolaintegratedmethod.h"
#include <QDebug>

double ParabolaIntegratedMethod::integrate(QVector<QPointF*> data)
{
    double a;
    double b;
    double c;

    double integral = 0.0;

    for (int i = 0; i < data.length() - 2; i += 2)
    {
        a = data[i+2]->y() - ((data[i+2]->x())*(data[i+1]->y() - data[i]->y()) + (data[i+1]->x())*(data[i]->y()) - (data[i]->x())*(data[i+1]->y()))/(data[i+1]->x() - data[i]->x());
        a /= (data[i+2]->x())*(data[i+2]->x() - data[i+1]->x() - data[i]->x())+(data[i]->x())*(data[i+1]->x());
        b = (data[i+1]->y() - data[i]->y())/(data[i+1]->x() - data[i]->x()) - a*(data[i]->x() + data[i+1]->x());
        c = ((data[i+1]->x())*(data[i]->y()) - (data[i]->x())*(data[i+1]->y()))/(data[i+1]->x() - data[i]->x()) + a*(data[i]->x())*(data[i+1]->x());

        integral += a/3*((data[i+2]->x())*(data[i+2]->x())*(data[i+2]->x()) - (data[i]->x())*(data[i]->x())*(data[i]->x()));
        integral += b/2*((data[i+2]->x())*(data[i+2]->x()) - (data[i]->x())*(data[i]->x()));
        integral += c*((data[i+2]->x()) - (data[i]->x()));

        if (i + 4 == data.length())
        {
            integral = integral + (data[i]->x() - data[i-1]->x())*(data[i]->y() + data[i-1]->y())/2;
        }
    }

    return integral;
}
