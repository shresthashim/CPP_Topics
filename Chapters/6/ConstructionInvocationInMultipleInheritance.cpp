#include <iostream>

using namespace std;

class Base1
{
public:
    Base1()
    {
        cout << "Constructor of Base1 class" << endl;
    }
};

class Base2
{
public:
    Base2()
    {
        cout << "Constructor of Base2 class" << endl;
    }
};

class Derived : public Base1, public Base2 // The base constructor invocation order is decided by the order of inheritance
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
// Constructor of Base1 class
// Constructor of Base2 class
// Constructor of Derived class