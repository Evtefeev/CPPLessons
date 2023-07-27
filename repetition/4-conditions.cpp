#include <iostream>

using namespace std;

int main()
{

    int age = 17;

    if (age > 18)
    {
        cout << "Welcome";
    }
    else
    {
        cout << "Please wait " << 18 - age << " years" << endl;
    }
}