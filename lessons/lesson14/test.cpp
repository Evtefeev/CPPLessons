#include <iostream>
#include <string>
using namespace std;
// Определение структуры
struct Book {

    string title;
    string author;
    int year;

    void enter() {
        cout << " title: "  << endl;
        cin >> title;
        cout << " author: " << endl;
        cin >> author;
        cout << " Year: " << endl;
        cin >> year;
    }
    void info() {
        cout << "Title: " << title << ", Author:" << author << ", Year" << year << endl;
    }
};

int main() {
    // Создание переменной типа Person
    Book book1;


    // Обращение к членам структуры



    // Вывод информации о персоне

   /* cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.year << endl;*/

    return 0;
}