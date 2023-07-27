#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("new.txt");

    if (file.is_open())
    {
        string info;
        int num;
        int n = 0;

        while (file >> info >> num)
        {
            

            cout << info << " " << num <<endl;
            
        }

        // while (n < 10)
        // {
        //     getline(file, info);
        //     cout << info  << endl;

        //     n++;
        // }
    }
    else
    {
        cout << "Error!" << endl;
    }
}