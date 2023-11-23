#ifndef PARABOLAINTEGRATEDMETHOD_H
#define PARABOLAINTEGRATEDMETHOD_H

#include "iintegratedmethod.h"

class ParabolaIntegratedMethod : public IIntegratedMethod
{
public:
    double integrate(QVector<QPointF*> data);
};

#endif // PARABOLAINTEGRATEDMETHOD_H
