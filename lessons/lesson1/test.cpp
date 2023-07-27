#include <iostream>
#include <string>

using namespace std;

int main() {
    // cout << "Enter your name";

    int myInt = 5;
    float myFloat = 5.7;
    double myDouble = 4454555454.45;
    bool myBool = true;
    string myString = "My string";

    cout << myString  << endl;

    int a, b;
    a = 5;
    b = 10;
    // a = b;

    bool res = a = b;

    res = -80;

    cout << a << endl;

    cout << res << endl;

    if (a>b) {
        cout << "a>b" << endl;;
    } else if(a==b){
        cout << "a==b" << endl;;
    } else {
        cout << "a<b" << endl;;
    }

}