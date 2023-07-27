#include <iostream>

using namespace std;


// Задание:  Сделать функцию, которая принимает массив строк и выводит только слова на букву А.
// Подсказка: нужно сделать перебор массива, через цикл(for или while), а внутри цикла проверять 
// что первый элемент строки это буква а (if (mas[i][0] == 'A'){cout << mas[i] }) 



void test(string mmm[]){


    int i = 0;

    while (i<5)
    {

        string q = mmm[i];
        if(q[0] == 'a' || q[1] == 'p'){
                cout << q << endl;
        }
        i++;
    }
}


int main(){

   int n = 5;
   cout << to_string(n);
   
}