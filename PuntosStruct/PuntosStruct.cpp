#include <iostream>
#include <cassert>
#include <cmath>

// Punto2 = R² / (x, y) є R²
struct Punto2
{
    double x, y;

    // calcularDistancia : Punto2 -> R / calcularDistancia(punto) = √((punto.x - x)² + (punto.y - y)²)
    double calcularDistancia(Punto2 punto)
    {
        return sqrt(pow((punto.x - x), 2) + pow((punto.y - y), 2));
    }
};

// Punto3 = R³ / (x, y) є R³
struct Punto3
{
    double x, y, z;

    // calcularDistancia : Punto3 -> R / calcularDistancia(punto) = √((punto.x - x)² + (punto.y - y)² + (punto.z - z)²)
    double calcularDistancia(Punto3 punto)
    {
        return sqrt(pow(punto.x - x, 2) + pow(punto.y - y, 2) + pow(punto.z - z, 2));
    }
};

// AreNear : R^3 -> B / AreNear(a,b,t)= | a - b | <= | t |
bool AreNear(double, double, double = 0.001);

int main()
{
    Punto2 p1{4.0, 5.0};
    Punto2 p2{10.0, 12.0};

    assert(AreNear(p1.calcularDistancia(p2), 9.21954));

    Punto3 p3{4.0, 5.0, 6.0};
    Punto3 p4{10.0, 12.0, 14.0};

    assert(AreNear(p3.calcularDistancia(p4), 12.2066));
}

bool AreNear(double a, double b, double t)
{
    return abs(a - b) <= abs(t);
}