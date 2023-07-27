#include <iostream>
#include <string>
using namespace std;

struct ExamResult {
    char surname[20];
    char id[10];
    int grade;
};

int main() {
    const int SIZE = 7; // кількість елементів в масиві
    ExamResult results[SIZE]; // оголошення масиву структур

    // заповнення масиву значеннями
    results[0] = {"Smith", "001", 4};
    results[1] = {"Johnson", "002", 3};
    results[2] = {"Williams", "003", 5};
    results[3] = {"Brown", "004", 2};
    results[4] = {"Jones", "005", 3};
    results[5] = {"Miller", "006", 4};
    results[6] = {"Davis", "007", 5};


    // обчислення середнього балу
    int totalGrade = 0;
    for (int i = 0; i < SIZE; i++) {
        totalGrade += results[i].grade;
    }
    double avgGrade = (double)totalGrade / SIZE;

    // виведення середнього балу на екран
    cout << "Average grade: " << avgGrade << endl;

    return 0;
}
