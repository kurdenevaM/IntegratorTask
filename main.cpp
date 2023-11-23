#include <QCoreApplication>
#include <QDebug>
#include <QVector>
#include <QPointF>
#include "math.h"
#include "integrator.h"
#include "rectangleintegratedmethod.h"
#include "trapeziumintegratedmethod.h"
#include "parabolaintegratedmethod.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double x0 = 0;
    double xn = 1.57;
    double dx = 0.01;
    int n = int((xn-x0)/dx) + 1;
    double x;
    double y;

    QVector<QPointF*> data;

    for (int i = 0; i < n; i++)
    {
        x = x0 + i*dx;
        y = sin(x);
        data.append(new QPointF(x, y));
    }

    Integrator integrator;

    integrator.setIntegratedMethod(new RectangleIntegratedMethod());
    double rectangleMethodIntegral = integrator.integrate(data);
    qDebug() << "Integral by rectangles method: " << rectangleMethodIntegral;

    integrator.setIntegratedMethod(new TrapeziumIntegratedMethod());
    double trapeziumMethodIntegral = integrator.integrate(data);
    qDebug() << "Integral by trapeziums method: " << trapeziumMethodIntegral;

    integrator.setIntegratedMethod(new ParabolaIntegratedMethod());
    double parabolaMethodIntegral = integrator.integrate(data);
    qDebug() << "Integral by parabols method: " << parabolaMethodIntegral;

    return a.exec();
}
