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

    virtual int area() // Virtual function to be overridden by derived classes... If not virtual, the base class function will be called instead of the derived class function when a pointer to the base class is used to call the function of the derived class object through the pointer to the base class object (ppoly1 and ppoly2 in this case)
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
    Polygon *ppoly1 = &rect;
    Polygon *ppoly2 = &trgl;
    Polygon *ppoly3 = &pply;
    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);
    cout << ppoly1->area() << '\n';
    cout << ppoly2->area() << '\n';
    cout << ppoly3->area() << '\n';
    return 0;
}
