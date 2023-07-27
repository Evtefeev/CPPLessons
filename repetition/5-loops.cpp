#include <iostream>

using namespace std;

int main()
{

    int n = 0;
    while (n < 10)
    {
        cout << n << " ";
        n++;
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }

    cout << endl;
    int k = 0;

    do
    {
        cout << k << " ";
        k++;
    } while (k < 10);
}