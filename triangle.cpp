#include "triangle.h"
#include <iostream>
#include <cmath>
#include <algorithm>

void inputSides(double& a, double& b, double& c) {
    std::cout << "Введите три стороны треугольника: ";
    std::cin >> a >> b >> c;
}

bool isTriangleValid(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double getPerimeter(double a, double b, double c) {
    return a + b + c;
}

double getArea(double a, double b, double c) {
    double p = getPerimeter(a, b, c) / 2.0;
    return std::sqrt(p * (p - a) * (p - b) * (p - c));
}

std::string getTriangleTypeByAngles(double a, double b, double c) {
    double sides[3] = {a, b, c};
    std::sort(sides, sides + 3);
    double x = sides[0], y = sides[1], z = sides[2];
    double z2 = z * z;
    double sum2 = x * x + y * y;

    if (std::abs(z2 - sum2) < 1e-9) return "прямоугольный";
    if (z2 < sum2) return "остроугольный";
    return "тупоугольный";
}