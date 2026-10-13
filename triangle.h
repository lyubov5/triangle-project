#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>

void inputSides(double& a, double& b, double& c);
bool isTriangleValid(double a, double b, double c);
std::string getTriangleTypeByAngles(double a, double b, double c);
double getPerimeter(double a, double b, double c);
double getArea(double a, double b, double c);

#endif