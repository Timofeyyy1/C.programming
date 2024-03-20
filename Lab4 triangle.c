#include <math.h>
#include <stdbool.h>

// Вычисляем периметр треугольника
int Perimeter(int side1, int side2, int side3)
{
    return side1 + side2 + side3;
}

// Вычисляем площадь треугольника по формуле Герона
double Area(int side1, int side2, int side3)
{
    double p = Perimeter(side1, side2, side3) / 2;
    return sqrt(p * (p - side1) * (p - side2) * (p - side3));
}

// Через функцию bool проверяем неравенство
bool istriangle(int a, int b, int c)
{
    if (a+b>c && a+c>b && b+c>a)
        return true;
    else
        return false;
}
