#include <iostream>


using namespace std;

int main() {
    system("chcp 1251>nul");
    // Напишите программу, которая запрашивает у 
    // пользователя два числа и выводит на экран 

    float a, b;
    string comand;
    bool work = true;

    //Приветствие






    while (work)
    {
        cout << "Enter a: ";
        cin >> a;

        cout << "Enter b: ";
        cin >> b;



        while (true)
        {
            cout << "Введите команду" << endl;
            cin >> comand;
            if (comand == "+") {
                cout << a + b << endl;
                break;
            }
            else if (comand == "-") {
                cout << a - b << endl;
                break;
            }
            else if (comand == "*") {
                cout << a * b << endl;
                break;
            }
            else if (comand == "/") {
                cout << a / b << endl;
                break;
            }

            //Добавить еще функцию


            // else if (comand == "/") {
            //     cout << a / b << endl;
            //     break;
            // }


            else if (comand == "exit") {
                work = false;
                break;
            }
            else {
                cout << "Неверная команда" << endl;
            }
        }



    }
    cout << "Програма завешена" << endl;





}