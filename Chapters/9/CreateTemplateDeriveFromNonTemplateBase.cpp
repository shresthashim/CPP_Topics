#include <iostream>
using namespace std;

class Base
{

    int value;

public:
    Base(int v) : value(v) {}
    void display()
    {
        cout << "Value in Base: " << value << endl;
    }
};

template <class T>
class Derived : public Base
{
    T data;

public:
    Derived(int a, T d) : Base(a), data(d) {}
    void display()
    {
        Base::display();
        cout << "Value in Derived: " << data << endl;
    }
};

int main()
{
    Derived<float> d(10, 1.1);
    d.display();
    return 0;
}
