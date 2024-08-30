#include <iostream>
using namespace std;

class Base1
{
public:
    Base1()
    {
        cout << "Constructor of Base1 class" << endl;
    }
    ~Base1()
    {
        cout << "Destructor of Base1 class" << endl;
    }
};

class Base2
{
public:
    Base2()
    {
        cout << "Constructor of Base2 class" << endl;
    }
    ~Base2()
    {
        cout << "Destructor of Base2 class" << endl;
    }
};

class Derived : public Base1, public Base2 // The base constructor invocation order is decided by the order of inheritance ... Destructor is called in reverse order of constructor
{
public:
    Derived()
    {
        cout << "Constructor of Derived class" << endl;
    }
    ~Derived()
    {
        cout << "Destructor of Derived class" << endl;
    }
};

int main()
{
    Derived d;
    return 0;
}