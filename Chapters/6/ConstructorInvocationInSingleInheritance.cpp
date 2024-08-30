#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Constructor of Base class" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Constructor of Derived class" << endl;
    }
};

int main()
{
    Derived d;
    return 0;
}

// Output:
// Constructor of Base class
// Constructor of Derived class