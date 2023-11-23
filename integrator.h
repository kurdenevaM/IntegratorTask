#ifndef INTEGRATOR_H
#define INTEGRATOR_H

#include "iintegratedmethod.h"

class Integrator
{
private:
    IIntegratedMethod* integratedMethod;
public:
    void setIntegratedMethod(IIntegratedMethod* method);
    double integrate(QVector<QPointF*> data);
};

#endif // INTEGRATOR_H
