// Program to convert one user defined type to another user defined type

// Use cast operator to convert class Rectangle coordinates into Class Polar Form

// So, Conversion Function will be in Source Class i.e Rectangle in this case

#include <iostream>
#include <cmath>
using namespace std;

class Polar
{

    float radius;
    float theta;

public:
    Polar() {}
    Polar(float r, float th) : radius(r), theta(th) {}

    void display()
    {
        cout << "Radius : " << radius << endl;
        cout << "Theta : " << theta << "degree";
    }
};

class Rectangle
{

    float x;
    float y;

public:
    Rectangle(float x1, float y1) : x(x1), y(y1) {}

    operator Polar()
    {
        float r = sqrt(x * x + y * y);
        float th = atan2(y, x);
        return Polar(r, th);
    }
};

int main()
{

    Rectangle rect(4, 3);
    Polar pol;

    pol = rect; // Convert Rectangle Class to Polar Class

    pol.display();

    return 0;
}
