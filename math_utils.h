#ifndef MATH_UTILS_H
#define MATH_UTILS_H

#include <iostream>
using namespace std;

// Для Begin38: структура для лінійного рівняння A*x + B = 0
struct LinearEquation
{
    double A;   // коефіцієнт A (не дорівнює 0)
    double B;   // коефіцієнт B
};

// Функція розв'язання лінійного рівняння A*x + B = 0
double solveLinear(const LinearEquation& eq);

// Для Boolean33: структура для трьох сторін
struct Triangle
{
    int a, b, c;   // довжини сторін
};

// Перевірка, чи існує трикутник зі сторонами a, b, c
bool isTriangle(const Triangle& t);

#endif
