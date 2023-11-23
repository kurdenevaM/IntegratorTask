#ifndef RECTANGLEINTEGRATEDMETHOD_H
#define RECTANGLEINTEGRATEDMETHOD_H

#include "iintegratedmethod.h"

class RectangleIntegratedMethod : public IIntegratedMethod
{
public:
    double integrate(QVector<QPointF*> data);
};

#endif // RECTANGLEINTEGRATEDMETHOD_H
