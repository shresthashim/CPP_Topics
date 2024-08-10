

#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class show function" << endl;
    }
};

int main()
{
    Base b;
    Derived d;
    b.show(); // Base class show function
    d.show(); // Derived class show function
    d.Base::show(); // Base class show function
    return 0;
}