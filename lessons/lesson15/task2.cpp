#include <iostream>
#include <cmath>
using namespace std;
struct Employee{
    string name;
    string position;
    int salary;
};
void input(Employee e[], int num){
    for(int i=0;i<num;i++){
        cout << "Enter name " << i+1 << endl;
        cin >> e[i].name;
        cout << "Enter position " <<i+1 << endl;
        cin >> e[i].position;
        cout << "Enter salary " << i+1 << endl;
        cin >> e[i].salary;
    }
}
void output(Employee e[], int num){
    for(int i=0;i<num;i++){
        cout << "Name: " << e[i].name << endl;
        cout << "Position " << e[i].position << endl;
        cout << "Salary " << e[i].salary << endl;
    }
}
int salary(Employee e[], int num){
    int result = 0;
    for(int i=0;i<num;i++){
        result += e[i].salary;
    }
    return result/num;
}
int main()
{
    const int n = 3;
    Employee es[n];
    es[0].name = "NAme";
    es[0].position = "Position";
    es[0].salary = 10000;

    es[1].name = "NAme";
    es[1].position = "Position";
    es[1].salary = 10000;


    input(es, n);
    output(es, n);
    cout << "Salary: " << salary(es, n);
    return 0;
}