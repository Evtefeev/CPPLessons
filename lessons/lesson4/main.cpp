#include <iostream>
#include <cstdlib>



using namespace std;
int main()
{
    int a, b;
    // system("chcp 1251>nul");
    // 1printf ("Ввелите числа \n");

    cout << "Введи число :" << endl;
    cin >> a;

    cout << " Введи число :" << endl;
    cin >> b;

    string s;

    if (b > a) {
        s = to_string(b) + ">" + to_string(a);
    
    }
    else {
        s = to_string(b) + "<" + to_string(a);
    }
    cout << s << endl;

}