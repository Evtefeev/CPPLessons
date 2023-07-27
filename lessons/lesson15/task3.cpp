// Реализуйте структуру Triangle, которая содержит поля side1,
// side2 и side3. Напишите функцию, которая определяет, является ли треугольник прямоугольным.

#include <iostream>

using namespace std;

struct Triangle
{
    int a;
    int b;
    int c;

    bool is_rectangular()
    {
        int a1 = a;
        int b1 = b;
        int c1 = c;
        if (b > a1)
        {
            a1 = b;
            b1 = a;
            c1 = c;
        }
        if (c > a1)
        {
            a1 = c;
            b1 = a;
            c1 = b;
        }

        bool result;
        if (b1 * b1 + c1 * c1 == a1 * a1)
        {
            result = true;
        }
        else
        {
            result = false;
        }

        return result;
    }
};

int main()
{
    Triangle t1 = {1, 2, 3};
    Triangle t2 = {3, 4, 5};
    Triangle t3 = {6, 7, 8};

    if(t1.is_rectangular()){
        cout << "t1 - прямоугольный" << endl;
    } else {
        cout << "t1 - обычный" << endl;
    }

    if(t2.is_rectangular()){
        cout << "t2 - прямоугольный" << endl;
    } else {
        cout << "t2 - обычный" << endl;
    }

    if(t3.is_rectangular()){
        cout << "t3 - прямоугольный" << endl;
    } else {
        cout << "t3 - обычный" << endl;
    }
    

    return 0;
}