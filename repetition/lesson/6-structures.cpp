#include <iostream>

using namespace std;

struct user
{
    string name;
    string pas;
    int id;
    float range;
};

int main()
{
    user user1 = {"Name", "Passord", 1, 4.7};
    user user2;
    user2.name = "Nmae";
    user2.pas = "XXXXX";
    user2.id = 2;
    user2.range = 71.0;

    cout << user1.name << endl;
}