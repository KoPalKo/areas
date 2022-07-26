#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <ctime>
#include <memory>
#include "lib/Point.h"
#include "lib/Circle.h"
#include "lib/Square.h"

using namespace std;

void print(const vector<shared_ptr<Point>>& vector);

int main() {
    vector<shared_ptr<Point> > vector;

    shared_ptr<Point> point = make_shared<Point>();
    shared_ptr<Circle> circle = make_shared<Circle>();
    shared_ptr<Square> square = make_shared<Square>();

    vector.push_back(make_shared<Point>(1.0, 1.0));
    vector.push_back(make_shared<Circle>(2.0, 2.0, 2.0));
    vector.push_back(make_shared<Square>(5.0, 5.0, 2.0, 2.0));

    point->input("\n Please input the point coordinates.");
    vector.push_back(point);

    circle->input("\n Please input the circle values.");
    vector.push_back(circle);

    square->input("\n Please input the square values.");
    vector.push_back(square);
    
    print(vector);

    sort(vector.begin(), vector.end(),
        [](const shared_ptr<Point>& a, const shared_ptr<Point>& b) -> bool
        {return a->area() < b->area(); });

    cout << "Sorted by area:\n";
    print(vector);

    srand(time(nullptr));
    int num;
    for (int i = 0; i < 5; i++) {
        num = rand() % 3 + 1;
        if (num == 1) {
            shared_ptr<Point> point2 = make_shared<Point>();
            point2->input("Please enter a point coordinates:");
            vector.push_back(point2);
        }
        if (num == 2) {
            shared_ptr<Circle> circle2 = make_shared<Circle>();
            circle2->input("Please enter a circle values:");
            vector.push_back(circle2);
        }
        if (num == 3) {
            shared_ptr<Square> square2 = make_shared<Square>();
            square2->input("Please enter a square values:");
            vector.push_back(square2);
        }

    }
    cout << "\n Vector after adding five new objects: " << endl;
    print(vector);
}


void print(const vector<shared_ptr<Point>>& vector)
{
    for (auto const& v : vector) {
        v->output();
    }
}