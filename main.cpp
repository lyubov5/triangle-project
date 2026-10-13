#include <iostream>
#include <clocale>
#include "triangle.h"

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    inputSides(a, b, c);
    std::cout << "Стороны: " << a << ", " << b << ", " << c << std::endl;
    return 0;
}