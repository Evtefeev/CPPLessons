#include <iostream>
#include <cmath>


using namespace std;

// Напишите программу, которая запрашивает у 
// пользователя 5 чисел типа float и выводит на экран их среднее арифметическое.

int main()
{
    float sum = 0;
    int numbers[6] = {10,20,3,4444444, 1, -90};

    int n1 = numbers[0]; //10
    int i = 1; // Переходим ко второму єлементу

    cout << INFINITY << "∞";

    while (i<6)
    {
        if(numbers[i] < n1){//проверяем меньше ли чем следующий єлемент
            n1 = numbers[i];
        }
        i++;
    }

    cout << n1 << endl;


    int n2 = numbers[0]; //10
    i = 1; // Переходим ко второму єлементу


    while (i<6) //Перебр єлементов массив
    {
        if(numbers[i] > n2){//проверяем больше ли чем следующий єлемент
            n2 = numbers[i];
        }
        i++;
    }

    cout << n2;
    


    // cout << numbers[0];
    // while (i < 5)
    // {
    //     cout << "Enter number: ";
    //     float n;
    //     cin >> n;
    //     numbers[i] = n;
    //     i++;
    // }

    // for(int j = 0; j<5; j++){
    //     sum += numbers[j];
    // }

    // float a = sum/5;

    // cout << "среднее арифметическое: " << a;
}