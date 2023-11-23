#ifndef TRAPEZIUMINTEGRATEDMETHOD_H
#define TRAPEZIUMINTEGRATEDMETHOD_H

#include "iintegratedmethod.h"

class TrapeziumIntegratedMethod : public IIntegratedMethod
{
public:
    double integrate(QVector<QPointF*> data);
};

#endif // TRAPEZIUMINTEGRATEDMETHOD_H
