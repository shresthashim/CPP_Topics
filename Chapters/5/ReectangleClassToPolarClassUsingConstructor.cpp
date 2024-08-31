// Program to convert one user defined type to another user defined type

// Use one arguement constructor to convert class Rectangle coordinates into Class Polar Form

// So, Conversion Function will be in Destination Class i.e Polar in this case

#include <iostream>
#include <cmath>
using namespace std;

class Rectangle
{

    float x;
    float y;

public:
    Rectangle(float x1, float y1) : x(x1), y(y1) {}

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

class Polar
{
    float radius;
    float theta;

public:
    Polar() {}

    Polar(Rectangle rect)
    {
        radius = sqrt(rect.getX() * rect.getX() + rect.getY() * rect.getY());
        theta = atan2(rect.getY(), rect.getX());
    }

    void display()
    {
        cout << "Radius : " << radius << endl;
        cout << "Theta : " << theta << "degree";
    }
};

int main()
{
    Rectangle rect(4, 3);
    Polar pol;

    pol = rect; // Convert Rectangle Class object into Polar Class object

    pol.display();
    return 0;
}
