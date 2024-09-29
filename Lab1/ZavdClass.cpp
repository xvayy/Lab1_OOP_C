#include "pch.h"
#include "ZavdClass.h"
#include <cmath> // Use standard cmath for math functions
#include <string> // Use for strings
#include <sstream> // Use for string stream

using namespace std;

// Calculate function b[x,y,z]
void ZavdClass::Fn_b(double x, double y, double z)
{
    double b = ((2*z+cos(pow(abs(y-3*x), 1/3)))/(2.1 + pow(sin(pow(abs(pow(z, 3) - y), 0.2)), 2))) + pow(log(abs((z-x)/(z+y))), 2);
}

// Calculate function a[x,y,z,b]
void ZavdClass::Fn_a(double x, double y, double z)
{   
    double a = pow(abs(x), 0.43) + ((exp(y-x) + sqrt(pow(abs(pow(y,2) + b), 0.22)))/(1 + pow(x, 2) * abs(y - (pow(tan(z), 2)))));
}   

// Tabulate function a[x,y,z,b]
string ZavdClass::Tab_a(double x_start, double x_end, double step, double y, double z)
{
    stringstream ss;
    for (double x = x_start; x <= x_end; x += step)
    {
        Fn_b(x, y, z); // Recalculate b
        Fn_a(x, y, z); // Recalculate a using the new b
        ss << "x: " << x << ", a: " << a << "\n";
    }
    return ss.str();
}

// Tabulate function b[x,y,z]
string ZavdClass::Tab_b(double x_start, double x_end, double step, double y, double z)
{
    stringstream ss;
    for (double x = x_start; x <= x_end; x += step)
    {
        Fn_b(x, y, z); // Recalculate b
        ss << "x: " << x << ", b: " << b << "\n";
    }
    return ss.str();
}
