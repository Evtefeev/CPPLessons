#include <string>
#include <iostream>
using namespace std;

int main(){
    int i = 3;
    // Выводим строку в зависимости от числа i
    // Через if - else
    if(i==1){
        cout << "Good morning 1\n";
    }else if (i==2){
        cout << "Good morning 2\n";
    }else if(i==3){
        cout << "Good morning 3\n";
    }else {
        cout << "Good morning \n";
    }
    // Тоже-самое через switch - case
    switch(i){
        case 1:
            cout << "Good morning 1\n";
            break; // Прерывает выполнение цикла
        case 2:
            cout << "Good morning 2\n";
            break;
        case 3:
            cout << "Good morning 3\n";
            break;
        default:
            cout << "Good morning \n";
            break;
    }
    int n = 0;
    cout << "start of while\n";
    //Выводим все числа от 1 до 10, кроме 5
    while (n<10)// цикл
    {
        n++;// добовляем к n 1
        if(n==5){
           continue;//возвращает к началу цикла
        }
        cout << n << endl;
    }
    cout << "end of while\n";
}

