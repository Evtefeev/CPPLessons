#include <iostream>
#include <string>

using namespace std;

void hello()
{
    string a = "Hello!";
    cout << a;
}

void hello2()
{
    int a = 2;
    cout << a;
}

int getint(){
    return 3;
}

string getstring(){
    return "Test";
}


string makePen(string plastic){
    string str = "Ручка из " + plastic;
    return str;
}

void my_printf(string str){
    cout << str << endl;
}

float sum(float a, float b){
    return a/b;

}

string conc(string str1, string str2){
    return str1 + "|" + str2;
}


int main()
{

    string myPen = makePen("Black");

    cout << myPen << endl;;

    my_printf("лес");

    cout << sum(3, 5) << endl;

    cout << conc("Heloo", "World");

    // hello();
    // hello2();

    // int test = getint();

    // string str = getstring();

    // cout << test;
}