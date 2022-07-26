#include <iostream>
#include <string>
#include "../lib/Circle.h"

using namespace std;

Circle::Circle(double xcoord, double ycoord, double radius) : Point(xcoord, ycoord), rad(radius) {
}

void Circle::input(const char* prompt)
{
    cout << prompt;
    Point::input("\n Center of the circle.");
    cout << "\n Enter the radius of a circle: ";
    cin >> rad;
}

void Circle::output() const
{
    Point::output();
    cout << " Radius: " << rad;
}


double Circle::area() const
{
    double a = 3.14 * rad * rad;
    return a;
}