#include "integrator.h"

void Integrator::setIntegratedMethod(IIntegratedMethod* method)
{
    integratedMethod = method;
}

double Integrator::integrate(QVector<QPointF *> data)
{
    return integratedMethod->integrate(data);
}
