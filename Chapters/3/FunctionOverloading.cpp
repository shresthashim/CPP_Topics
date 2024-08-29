#include <iostream>
using namespace std;

int area(int a, int b)
{
    return 0.5 * a * b;
}

float area(int r)
{
    return 3.14 * r * r;
}

float area(float a, float b)
{
    return a * b;
}

int main()
{
    int b, h, r;
    float l, br;
    cout << "Enter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of triangle: " << area(b, h) << endl;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle: " << area(r) << endl;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> br;
    cout << "Area of rectangle: " << area(l, br) << endl;

    return 0;
}