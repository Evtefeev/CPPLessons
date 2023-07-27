#include <iostream>
#include <string>
#include <time.h> 

using namespace std;

int main() {
    // int i = 5;
    // while(i>-3){
    //     cout << i << endl;
    //     i--;
    // }

    // cout << i << endl;


    // for(int n = 20; n > 10; n--){
    //      cout << n << endl;
    // }

    srand (time(NULL));

    int random = rand() % 10 + 1;
    // int random1 = rand() % 10 + 1;
    cout << "Random: " << random << endl;
}