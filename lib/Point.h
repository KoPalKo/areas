#pragma once
#define POINT_H
#include <iostream>

class Point {
public:
    //constructor
    Point(double xcoord = 0.0, double ycoord = 0.0);
    // destructor
    virtual ~Point() = default;
    virtual void input(const char* prompt);
    virtual void output() const;
    virtual double area() const;
    void move(double deltax, double deltay);
private:
    double x;
    double y;
};