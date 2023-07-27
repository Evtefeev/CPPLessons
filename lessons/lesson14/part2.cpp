#include <iostream>
#include <string>

// Определение структуры
struct Rectangle {
    double width;
    double height;

    // Функция-член для вычисления площади прямоугольника
    double calculateArea() {
        return width * height;
    }

    // Функция-член для изменения размеров прямоугольника
    void resize(double newWidth, double newHeight) {
        width = newWidth;
        height = newHeight;
    }
};

int main() {
    // Создание переменной типа Rectangle
    Rectangle rect;

    // Инициализация прямоугольника
    rect.width = 5.0;
    rect.height = 3.0;

    // Вычисление и вывод площади
    double area = rect.calculateArea();
    std::cout << "Area: " << area << std::endl;

    // Изменение размеров прямоугольника
    rect.resize(8.0, 4.0);

    // Вычисление и вывод обновленной площади
    area = rect.calculateArea();
    std::cout << "Updated Area: " << area << std::endl;

    return 0;
}
