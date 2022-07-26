#include <iostream>
#include <string>
#include "../lib/Square.h"

using namespace std;

Square::Square(double xcoord, double ycoord, double width, double height) : Point(xcoord, ycoord), w(width), h(height) {
}

void Square::input(const char* prompt)
{
	cout << prompt;
	Point::input("\n Center of the square.");
	cout << "\n Enter the width of the square: ";
	cin >> w;
	cout << "\n Enter the heigth of the square: ";
	cin >> h;
}

void Square::output() const
{
	Point::output();
	cout << " Width: " << w << " Heigth: " << h << endl;
}

double Square::area() const
{
	return w * h;
}