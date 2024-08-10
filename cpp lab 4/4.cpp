
#include <iostream>
using namespace std;

class SHAPE
{
protected:
    int value;

public:
    SHAPE(int v)
    {
        value = v;
    }
    virtual void FindPerimeter() = 0;
};

class SQUARE : public SHAPE
{
public:
    SQUARE(int v) : SHAPE(v)
    {
    }
    void FindPerimeter() override
    {
        cout << "Perimeter of square: " << 4 * value << endl;
    }
};

class CIRCLE : public SHAPE
{
public:
    CIRCLE(int v) : SHAPE(v)
    {
    }
    void FindPerimeter() override
    {
        cout << "Circumference of circle: " << 2 * 3.14 * value << endl;
    }
};

int main()
{
    SHAPE *shape1 = new SQUARE(5);
    SHAPE *shape2 = new CIRCLE(5);
    shape1->FindPerimeter();
    shape2->FindPerimeter();
    delete shape1;
    delete shape2;

    return 0;
}
