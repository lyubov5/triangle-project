#include "triangle.h"
#include <iostream>

void inputSides(double& a, double& b, double& c) {
    std::cout << "¬ведите три стороны треугольника: ";
    std::cin >> a >> b >> c;
}

bool isTriangleValid(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}