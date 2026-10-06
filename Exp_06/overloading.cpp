#include <iostream>
using namespace std;

// Area of square
int area(int side) {
    return side * side;
}

// Area of rectangle
int area(int length, int breadth) {
    return length * breadth;
}

// Area of circle
float area(float radius) {
    return 3.14f * radius * radius;
}

// Area of triangle
float area(float base, float height) {
    return (base * height) / 2;
}

int main() {
    int side, length, breadth;
    float radius, base, height;

    cout << "Enter side of square: ";
    cin >> side;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;

    cout << "\nArea of square: "
         << area(side);

    cout << "\nArea of rectangle: "
         << area(length, breadth);

    cout << "\nArea of circle: "
         << area(radius);

    cout << "\nArea of triangle: "
         << area(base, height);

    cout << endl;

    return 0;
}