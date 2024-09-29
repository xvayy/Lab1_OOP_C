#include "pch.h"
#include "ZavdClass.h"
#include <cmath> // Use standard cmath for math functions
#include <string> // Use for strings
#include <sstream> // Use for string stream
#include <iomanip>

using namespace std;

// Calculate function b[x,y,z]
double ZavdClass::Fn_b(double x, double y, double z)
{
    b = ((2*z+cos(pow(abs(y-3*x), 1.0/3.0)))/(2.1 + pow(sin(pow(abs(pow(z, 3) - y), 0.2)), 2))) + pow(log(abs((z-x)/(z+y))), 2);
    return b;
}

// Calculate function a[x,y,z,b]
double ZavdClass::Fn_a(double x, double y, double z)
{   
    a = pow(abs(x), 0.43) + ((exp(y-x) + sqrt(pow(abs(pow(y,2) + b), 0.22)))/(1 + pow(x, 2) * abs(y - (pow(tan(z), 2)))));
    return a;
}   

// Tabulate function a[x,y,z,b]
string ZavdClass::Tab_a(double x_start, double x_end, double step, double y, double z)
{
    stringstream ss1;
    for (double x = x_start; x <= x_end; x += step)
    {
        double b = Fn_b(x, y, z); // Recalculate b
        double a = Fn_a(x, y, z); // Recalculate a using the new b
        //ss1 << fixed << setprecision(1);
        //ss1 << "x = " << x << ", a = " << a << "\r\n";
        ss1 << "x = " << setw(6) << fixed << setprecision(1) << x << ", "
            << "a = " << setw(8) << fixed << setprecision(4) << a << "\r\n";
    }
    return ss1.str();
}

// Tabulate function b[x,y,z]
string ZavdClass::Tab_b(double x_start, double x_end, double step, double y, double z)
{
    stringstream ss2;
    for (double x = x_start; x <= x_end; x += step)
    {
        double b = Fn_b(x, y, z); // Recalculate b

        //ss2 << "x = " << x << ", b = " << b << "\r\n";
        ss2 << "x = " << setw(6) << fixed << setprecision(1) << x << ", "
            << "b = " << setw(8) << fixed << setprecision(4) << b << "\r\n";
    }
    return ss2.str();
}
