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

template <class T, class T1>

class Derived : public Base<T>
{
    T1 value;

public:
    Derived(T a, T1 b) : Base<T>(a), value(b) {}

    void display()
    {
        Base<T>::display();
        cout << "Value in Derived: " << value << endl;
    }
};

int main()
{
    Derived<int, string> d(10, "AsHim");
    d.display();
    return 0;
}