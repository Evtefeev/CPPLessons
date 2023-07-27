// Задача "Таблица умножения": Выведите на экран таблицу
// умножения от 1 до 10.

#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    while (n <= 10)
    {
        int k = 1;
        while (k <= 10)
        {

            int res = n * k;
            string space;
            if (res < 10)
            {
                space = "    ";
            }
            else
            {
                if (n == 10)
                {
                    space = "  ";
                }
                else
                {
                    space = "   ";
                }
            }
            cout << k << "*" << n << " = " << res << space;
            k++;
        }
        cout << endl;
        n++;
    }
}
