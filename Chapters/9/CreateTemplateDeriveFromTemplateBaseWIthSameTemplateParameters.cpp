#include <iostream>
using namespace std;

template <class T>

class Base
{
    T a;

public:
    Base(T x) : a(x) {}

    void display()
    {
        cout << "Value in Base: " << a << endl;
    }
};
template <class T>

class Derived : public Base<T>
{

public:
    Derived(T x) : Base<T>(x) {}
};

int main()
{
    Derived<int> d(10);
    d.display();
    return 0;
}