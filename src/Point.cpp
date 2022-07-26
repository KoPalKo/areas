#include <iostream>
#include <string>
#include "../lib/Point.h"

using namespace std;

Point::Point(double xcoord, double ycoord)
{
    x = xcoord;
    y = ycoord;
}

void Point::input(const char* prompt)
{
    cout << prompt;
    cout << "\n Enter the X coordinate of the point: ";
    cin >> x;
    cout << "\n Enter the Y coordinate of the point: ";
    cin >> y;
}

void Point::output() const
{
    cout << "\n Coordinates: (" << x << "," << y << ")";
}

double Point::area() const
{
    return 0.0;
}

void Point::move(double deltax, double deltay)
{
}
