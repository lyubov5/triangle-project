#include <iostream>
#include <clocale>
#include "triangle.h"

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    inputSides(a, b, c);

    if (!isTriangleValid(a, b, c)) {
        std::cout << "Треугольник не существует" << std::endl;
        return 0;
    }
    std::cout << "Треугольник существует" << std::endl;
    std::cout << "Периметр равен " << getPerimeter(a, b, c) << std::endl;
    std::cout << "Площадь равна " << getArea(a, b, c) << std::endl;
std::cout << "Тип по углам: " << getTriangleTypeByAngles(a, b, c) << std::endl;
    return 0;
}

