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
    return 0;
}