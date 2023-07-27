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

    int m = 0;
    do
    {
        cout << m << " ";
        m++;
    } while (m < 10);

    cout << endl;

    for (int l = 0; l < 10; l++)
    {
        cout << l << " ";
    }
}