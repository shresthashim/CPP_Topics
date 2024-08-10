#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base
{
    ~Derived()
    {
        cout << "Derived class destructor" << endl;
    }
};

int main()
{
    Base *b = new Derived();
    delete b;
    return 0;
}
