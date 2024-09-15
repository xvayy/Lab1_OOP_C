#include "pch.h"
#include "ZavdClass.h"
#include <cmath> // Use standard cmath for math functions

using namespace std;

// Calculate function b[x,y,z]
void ZavdClass::Fn_b(double x, double y, double z)
{
    double b1 = x * x + tan(pow(y + z, 2));
    double b2 = 0.345 * y + pow(sin(x * x), 2);
    double b3 = exp(-(x + y) / z);
    b = y * (b1 / b2 + b3);
}

// Calculate function a[x,y,z,b]
void ZavdClass::Fn_a(double x, double y, double z)
{
    double a1 = pow(x + y, 2);
    double a2 = (x + y * y) * pow(b * b + z, 0.3);
    double a3 = x / Faktr(2) + exp(z - 2) + y * y / Faktr(3);
    a = a1 * a2 / a3;
}

// Calculate factorial
double ZavdClass::Faktr(int n)
{
    double f = 1;
    if (n > 1)
        for (int i = 2; i <= n; i++)
            f *= i;
    return f;
}
