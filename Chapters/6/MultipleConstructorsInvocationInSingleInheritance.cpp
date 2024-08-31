#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Constructor of Base class" << endl;
    }
    Base(int x)
    {
        cout << "Constructor of Base class with value " << x << endl;
    }
};

class Derived : public Base
{
public:
    Derived(int x) 
    {
        cout << "Constructor of Derived class with value " << x << endl;
    }
};

int main()
{
    Derived d(5);

    return 0;
}
// Output:
// Constructor of Base class
// Constructor of Derived class with value 5