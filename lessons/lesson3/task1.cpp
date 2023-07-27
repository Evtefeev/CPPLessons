#include <iostream>


using namespace std;

int main() {

// Напишите программу, которая запрашивает у 
// пользователя два числа и выводит на экран 
// результат их суммы, разности, произведения и частного.
   
   float a,b;

   cout << "Enter a: ";
   cin >> a;

   cout << "Enter b: ";
   cin >> b;


   float sum = a+b;
   float diff = a-b;
   float mult = a*b;
   float intersect = a/b;

   cout << "a+b=" << sum << endl;
   cout << "a-b=" << diff << endl;
   cout << "a*b=" << mult << endl;
   cout << "a/b=" << intersect << endl;

}