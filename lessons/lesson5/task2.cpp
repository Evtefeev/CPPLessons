#include <iostream>

using namespace std;

// Напишите программу, которая запрашивает у
// пользователя 10 целых чисел и выводит на экран их сумму.

int main()
{
    int sum = 0;
    int i = 0;
    while (i < 3)
    {
        cout << "Enter number: ";
        int n;
        cin >> n;

        // sum = sum + n;
        sum += n;

        // i = i+1;
        i++;
    }

    cout << "Sum: " << sum;
}