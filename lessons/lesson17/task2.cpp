#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("new.txt");

    file << "Hello";

    file.close();
}