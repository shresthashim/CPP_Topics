#include <iostream>
using namespace std;

double area(double length, double width)
{
    return length * width;
}
double area(double side)
{
    return 6 * side * side;
}

float area(float radius)
{
    const float pi = 3.149;
    return pi * radius * radius;
}

int main()
{
    double length, width, side;
    float radius;

    cout << "Surface area of cube: " << area(6) << endl;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << area(radius) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << area(length, width) << endl;

    return 0;
}