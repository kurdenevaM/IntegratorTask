#include "trapeziumintegratedmethod.h"

double TrapeziumIntegratedMethod::integrate(QVector<QPointF*> data)
{
    double integral = 0.0;

    for (int i = 1; i < data.length(); i++)
    {
        integral = integral + (data[i]->x() - data[i-1]->x())*(data[i-1]->y() + data[i]->y())/2;
    }

    return integral;
}
