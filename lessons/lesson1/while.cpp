#include <iostream>
#include <time.h> 

using namespace std;

int main() {

    srand (time(NULL));

    int random = rand() % 100 + 1;
    // int age1 = 18;
    // int age2;
    int number;

    // if(age1 < age2){

    // }   

 
    while(true){
        cout << "Enter number 1-100: " << endl;
        cin >> number;
        if(number > random){
            cout << "Number less than your" << endl;
        } else if(number < random){
            cout << "Number more than your" << endl;
        } else {
            cout << "Number is " << number << endl;
            cout << "You win!" << endl;
            break;
        }
    }


}