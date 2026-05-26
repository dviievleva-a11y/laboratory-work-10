#include "math_utils.h"

// Begin38: A*x + B = 0 => x = -B / A
double solveLinear(const LinearEquation& eq)
{
    return -eq.B / eq.A;
}

// Boolean33: трикутник існує, якщо кожна сторона менша за суму двох інших
bool isTriangle(const Triangle& t)
{
    return (t.a + t.b > t.c) &&
           (t.a + t.c > t.b) &&
           (t.b + t.c > t.a);
}
