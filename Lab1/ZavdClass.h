#pragma once
#include <cmath> // For mathematical functions
#include <string> // For string operations

class ZavdClass
{
    double a, b;
public:
    ZavdClass() {} // Default constructor
    double Fn_b(double x, double y, double z); // Calculate function b[x,y,z]
    double Fn_a(double x, double y, double z); // Calculate function a[x,y,z,b]
    double getA() { return a; } // Getter for a
    double getB() { return b; } // Getter for b
    std::string Tab_a(double x_start, double x_end, double step, double y, double z); // Tabulate function a
    std::string Tab_b(double x_start, double x_end, double step, double y, double z); // Tabulate function b
};
