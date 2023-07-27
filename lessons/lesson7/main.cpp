#include <iostream>
// Подключкение библотеки для ввода-вывода

using namespace std;
// Подключаем пространство имен std

// Основная функция программы

// Как создавать переменные:
//  тип название = значение;

int n = 0;

string str = "Text";

float f = 1.5;

bool b = true;

// if(условие или переменная типа bool){
//     какой-то код
// }

// == равно
// > больше
// < меньше
// != не равно
//<= меньше или равно
//>= больше или равно

// && и

// || или

int main()
{
    // cout << "Hello"; // Вывод текста на экран
    // string input;    // Создание переменной input
    // cin >> input;    // Ввод текста с клавиатуры

    // int n;

    // cin >> n;

    // if(n>10 && n<17){
    //     cout << "Hello!";
    // } else if(n<21){
    //     cout << "Hey!";
    // } else {
    //     cout << "End";
    // }

    // int a = 1;

    // switch (a)
    // {
    // case 1:
    //     cout << "a=1";
    //     break;
    // case 2:
    //     cout << "a=2";
    //     break;
    // case 3:
    //     cout << "a=3";
    //     break;
    // case 4:
    //     cout << "a=4";
    //     break;
    // case 5:
    //     cout << "a=5";
    //     break;

    // default:
    //     break;
    // }

    int a, b;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;

    cout << "Введите команду:";

    char command;

    cin >> command;

    switch (command)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
    cout << "invalid command";
        break;
    }
}