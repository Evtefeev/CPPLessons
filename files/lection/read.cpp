#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("file.txt");
    if (file.is_open())
    {
        string res;
        while (getline(file, res))
        {
            cout << res << endl;
        }
    }
    else
    {
        cout << "Error";
    }

    return 0;
}
