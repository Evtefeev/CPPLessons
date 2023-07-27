#include <iostream>

using namespace std;

struct user
{
    string name;
    string pas;
    int id;
};

int main()
{
    user user1 = {"Nikita", "12345", 45};

    user user2;

    user2.name = "Max";
    user2.pas = "qazwsx";
    user2.id = 46;
}