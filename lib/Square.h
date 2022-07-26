#pragma once
#define SQUARE_H
#include <iostream>
#include "Point.h"

class Square : public Point {
public:
    Square(double xcoord = 0.0, double ycoord = 0.0, double width = 0.0, double height = 0.0);
    void input(const char* prompt);
    virtual void output() const;
    virtual double area() const;
private:
    double w;
    double h;
};