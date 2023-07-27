#include <iostream>
#include <fstream>

using namespace std;

struct entry
{
    string name;
    int value;
};

int main()
{

    ofstream file("out.txt");
    entry entryes[3];

    entryes[0].name = "Test";
    entryes[0].value = 67;

    entryes[1].name = "Gift";
    entryes[1].value = 100;

    entryes[2].name = "User";
    entryes[2].value = 999;

    if (file.is_open())
    {
        for (entry en : entryes)
        {
            file << en.name << " " << en.value << endl;
        }
    }
    else
    {
        cout << "error";
    }

    cout << "Succsess";

    return 0;
}