#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

string con(string s1, string s2)
{
    return s1 + s2;
}

string test(int a)
{
    if (a < 10)
    {
        return "A less than 10";
    }
    else if (a == 10)
    {
        return "A equals 10";
    }
    else
    {
        return "A more than 10";
    }
}

int main()
{
    int a;
    cin >> a;
    string result = test(a);

    cout << result << endl;
    // int n = 10;
    // string str = "Text";

    // int a = 100;

    // int c = sum(n, 10);

    // string s = con("Hello ", "World!");

    // string s1 = "Test";
    // string s2 = "2";

    // cout << con(s1, s2) << endl;

    // cout << c << endl;
    // cout << s << endl;
}