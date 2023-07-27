#include <iostream>
#include <string>
#include <math.h>


using namespace std;

struct Rectangle {
    int v;
    int h;
    int S () {
        return v*h;
    }
};


struct Circle{
    int d;
    string color;
    float S() {
        return 3.14 * pow(d/2, 2);
    }
};

struct Person {
    string name;
    string lasname;
    int age;

};

int main() {

    Rectangle r1 = {301, 10};
    cout << r1.S() << endl;
    Rectangle r2 = {310, 10};
    cout << r2.S() << endl;
    Rectangle r3 = {30, 110};
    cout << r3.S() << endl;

    Rectangle r4 = {3110, 10};
    cout << r4.S() << endl;

    Person person = {"Nikita", "Evtefeev", 24};
    


    // int v1 = 30;
    // int h1 = 10;
    // int S1 = v1*h1;


    // int v2 = 30;
    // int h2 = 10;
    // int S2 = v2*h2;


    // int v3 = 30;
    // int h3 = 10;
    // int S3 = v3*h3;

    // int v4 = 30;
    // int h4 = 10;
    // int S4 = v4*h4;


}
