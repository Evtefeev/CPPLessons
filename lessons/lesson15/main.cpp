// Реализуйте структуру Point, представляющую точку в трехмерном пространстве.
// Напишите функцию, которая вычисляет расстояние между двумя точками.

#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
    int x;
    int y;
    int z;
};

float line(Point p1, Point p2)
{
    float s;
    s = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
    return s;
}

int main()
{
    Point a;
    a.x = 1;
    a.y = 10;
    a.z = 50;

    Point b;
    b.x = 70;
    b.y = 79;
    b.z = -67;

    cout << line(a, b) << endl;

    return 0;
}