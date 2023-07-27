#include <iostream>

using namespace std;
// Напишите программу, которая запрашивает у пользователя число и выводит на
// экран сообщение "Число четное", если оно
//  четное, и "Число нечетное", если оно нечетное.

// <> ==
//     !=

//     <=

//         >=


int b = 10;
int c = 5;


int a = b<c ? 2:3;


int main()
{
    int a;

    cout << "Enter a: ";
    cin >> a;

    if(7<a && a<10){
        cout <<"test";
    }else{
        cout << "test5";
    }
    if(a==8 || a==9){
        cout <<"test2";

    }

    if(a>7 && a<10){
        cout <<"test2";

    }

    string answer = a % 2 == 0 ? "Число четное" : "Число не четное";
    cout << answer;
  
}