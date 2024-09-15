#pragma once
#include <cmath> // For mathematical functions

class ZavdClass
{
    double a, b;
public:
    ZavdClass() { a = 1; b = 1; } // Default constructor
    void Fn_b(double x, double y, double z); // Calculate function b[x,y,z]
    void Fn_a(double x, double y, double z); // Calculate function a[x,y,z,b]
    double Faktr(int n); // Calculate factorial
    double geta() const { return a; } // Getter for a
    double getb() const { return b; } // Getter for b
};
