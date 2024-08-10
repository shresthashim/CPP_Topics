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
    int value;

public:
    Derived(int a, int b) : Base<int>(a), value(b) {}

    void display()
    {
        Base<int>::display();
        cout << "Value in Derived: " << value << endl;
    }
};

int main()
{
    Derived d(10, 20);
    d.display();
    return 0;
}