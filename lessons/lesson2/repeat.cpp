// #include <string>
#include <iostream>
using namespace std;

int main(){
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    string myText = "Hello";     // String
    string a;


    a = "test";

    int time = 22;
    if (time < 10) {
        cout << "Good morning.\n";
    } else if (time < 20) {
        cout << "Good day.\n";
    } else {
        cout << "Good evening." << endl;
    }
    // Outputs "Good evening."

    printf("hi");

    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }

    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }
}

