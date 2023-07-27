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

    ifstream file("test.txt");
    entry entryes[100];
    int i = 0;
    string name;

    int value;

    if (file.is_open())
    {
        while (file >> name >> value)
        {
            entryes[i].name = name;
            entryes[i].value = value;
            i++;
        }
    }
    else
    {
        cout << "error";
    }

    int k = 0;
    for (entry en : entryes)
    {
        if (k == i)
            break;
        cout << "Name: " << en.name << endl;
        cout << "Value: " << en.value << endl;
        k++;
    }

    return 0;
}