#include <iostream>
#include <string>

struct Student {
    std::string name;
    int age;

    void enter(){
        std::cout << "Enter name for student " << ": ";
        std::cin >> name;

        std::cout << "Enter age for student " << ": ";
        std::cin >> age;
    }

    void cout(){
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
    
};

int main() {
    const int numStudents = 3;
    Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        students[i].enter();
    }

    std::cout << "\nStudent Information:\n";
    for (int i = 0; i < numStudents; i++) {
        students[i].cout();
    }

    return 0;
}
