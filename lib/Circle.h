#pragma once
#define CIRCLE_H
#include <iostream>
#include "Point.h"

class Circle : public Point {
public:
    Circle(double xcoord = 0.0, double ycoord = 0.0, double radius = 0.0);
    void input(const char* prompt);
    virtual void output() const;
    virtual double area() const;
private:
    double rad;
};