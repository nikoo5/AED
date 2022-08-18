#include <iostream>
#include <cmath>
#include <cassert>

// distance: RxR -> R / distance(A, B, 1) = | Bx - Ax |
// distance: R^2xR^2 -> R / distance(A, B, 2) = sqrt((Bx-Ax)^2+(By-Ay)^2)
// distance: R^3xR^3 -> R / distance(A, B, 3) = sqrt((Bx-Ax)^2+(By-Ay)^2+(Bz-Az)^2)
double distance(double *, double *, int);

// areNear : R^3 -> B / areNear(a,b,t)= | a - b | <= | t |
bool areNear(double, double, double);

// ----------------------------------------

double distance(double *A, double *B, int spaceSize)
{
    if (spaceSize == 1)
    {
        return abs(B[0] * 1.0 - A[0] * 1.0);
    }
    else if (spaceSize == 2)
    {
        return sqrt(pow(B[0] - A[0], 2) + pow(B[1] - A[1], 2));
    }
    else if (spaceSize == 3)
    {
        return sqrt(pow(B[0] - A[0], 2) + pow(B[1] - A[1], 2) + pow(B[2] - A[2], 2));
    }

    return -1.0;
}

bool areNear(double a, double b, double t = 0.001)
{
    return abs(a - b) <= abs(t);
}

int main(void)
{
    double A1[1] = {4.0};
    double B1[1] = {10.52};
    double dist1 = distance(A1, B1, 1);
    assert(areNear(dist1, 6.52));

    double A2[2] = {4.0, 5.0};
    double B2[2] = {10.0, 12.0};
    double dist2 = distance(A2, B2, 2);
    assert(areNear(dist2, 9.219));

    double A3[3] = {4.0, 5.0, 6.0};
    double B3[3] = {10.0, 12.0, 14.0};
    double dist3 = distance(A3, B3, 3);
    assert(areNear(dist3, 12.2066));

    std::cout << "Finish!";
}