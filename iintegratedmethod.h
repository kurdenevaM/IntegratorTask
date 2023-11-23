#ifndef IINTEGRATEDMETHOD_H
#define IINTEGRATEDMETHOD_H

#include <QVector>
#include <QPointF>

class IIntegratedMethod
{
public:
    virtual double integrate(QVector<QPointF*> data) = 0;
};

#endif // IINTEGRATEDMETHOD_H
