#include <string>
#include <iostream>
using namespace std;

int main(){
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    string myText = "Hello";     // String
    
    int nums[100] = {1,2,3,4,5};
    string aaa[50] = {"Nikita", "Vlad", "Sasha", "5555", "888"};

    int len = sizeof(aaa) / sizeof(string); //Получаем количество элементов в массиве

    // Выводим все элементы массива
    for (int i = 0; i < len; i++)
    {
        cout << aaa[i] << endl;
    }
    
}

