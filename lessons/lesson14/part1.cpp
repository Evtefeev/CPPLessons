#include <iostream>
#include <string>

// Определение структуры
struct Person
{
    std::string name;
    int age;

    bool is18()
    {
        if (age >= 18)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int life()
    {
        return 100 - age;
    }
};

int main()
{
    // Создание переменной типа Person
    Person person1;
    Person person2 = {"Andrey", 34};
    Person person3;

    std::string n;

    n = "test";

    // Обращение к членам структуры
    person1.name = "John";
    person1.age = 25;

    std::cout << person2.life();


    if (person1.is18())
    {
        std::cout << "Jon is 18" << std::endl;
    }

    std::cout << " Enter Name: " << std::endl;
    std::cin >> person3.name;
    std::cout << " Enter Age: " << std::endl;
    std::cin >> person3.age;

    // Вывод информации о персоне
    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << std::endl;

    std::cout << "Name: " << person2.name << std::endl;
    std::cout << "Age: " << person2.age << std::endl;

    std::cout << "Name: " << person3.name << std::endl;
    std::cout << "Age: " << person3.age << std::endl;
}
