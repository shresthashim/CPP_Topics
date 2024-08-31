#include <iostream>

using namespace std;

template <class T>

class Base
{
    T data;

public:
    Base(T a) : data(a) {}

    void display()
    {
        cout << "Value in Base: " << data << endl;
    }
};

class Derived : public Base<int>
{

public:
    Derived(int a) : Base<int>(a) {}
};

int main()
{
    Derived d(10);
    d.display();
    return 0;
}