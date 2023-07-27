#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    char a = 'a';

    int m[5] = {1, 5, 10, 11, 11};
    int q = 666;

    char s[4] = {'m', 'e', 'x', 't'};

    string s2 = "Text";

    cout << m << endl;
    cout << s << endl;
    cout << s2 << endl;

    cout << m[-1] << endl;
    cout << s[0] << endl;
    cout << s2[0] << endl;
}