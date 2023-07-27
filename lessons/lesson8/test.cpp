#include <iostream>
using namespace std;

int main()
{
    int n = 11;
    char a = 'a';

    int m[5] = {1, 5, 10, 11, 11};
    int pass = 66613666;
    // char pass[4] = {'B', 'B', 'C', 'D'};

    int c;
    cout << "enter n: ";
    cin >> c;
    if (c >= 0 && c < 5)
    {
        cout << m[c];
    } else {
        cout << "invalid index";
    }

    int b = 8;

    // int x1 = -100, x2 = 100;
    // int g = 6;
    // // int c = 8;
    // for (int x = x1; x <= x2; x++)
    // {
    //     // cout << m[x] << endl;
    //     if(m[x]==pass){
    //         cout << x;
    //     }
    // }
}