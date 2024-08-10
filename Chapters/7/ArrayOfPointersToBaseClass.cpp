#include <iostream>
using namespace std;

class Polygon
{
protected:
    int width, height;

public:
    void set_values(int a, int b)
    {
        width = a;
        height = b;
    }

    virtual int area()
    {

        return 0;
    }
};

class Rectangle : public Polygon
{
public:
    int area() override
    {
        return width * height;
    }
};

class Triangle : public Polygon
{
public:
    int area() override
    {
        return width * height / 2;
    }
};

int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon pply;
    Polygon *ppoly[3] = {&rect, &trgl, &pply};

    for (int i = 0; i < 3; i++)
    {
        ppoly[i]->set_values(4, 5);
        cout << ppoly[i]->area() << '\n';
    }

    return 0;
}

//With virtual function in base class when accessing same member function through elements of base class pointer pointing to different objects, different functions related to those objects are called. This is called runtime polymorphism