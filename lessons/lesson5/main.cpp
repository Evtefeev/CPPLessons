#include <iostream>

using namespace std;


void say_hello(){
    cout << "Hello" << endl;
}


string say_hello_to_my(string name){
    return "Hello " + name + "!\n";
}



int main(){
    cout << "Hello" << endl;
    say_hello();
    string hello = say_hello_to_my("Nikita");
    cout << hello;
}