#include <iostream>
using namespace std;

template <class T1, class T2>

class Base
{
    T1 data1;
    T2 data2;

public:
    Base(T1 a, T2 b) : data1(a), data2(b) {}
    void display()
    {
        cout << "Value in Base: " << data1 << " " << data2 << endl;
    }
};

template <class T1, class T2, class T3>
class Derived : public Base<T1, T2>
{
    T1 data3;
    T2 data4;
    T3 data5;

public:
    Derived(T1 a, T2 b, T1 c, T2 d, T3 e) : Base<T1, T2>(a, b), data3(c), data4(d), data5(e) {}
    void display()
    {
        Base<T1, T2>::display();
        cout << "Value in Derived: " << data3 << " " << data4 << " " << data5 << endl;
    }
};

int main()
{
    Derived<int, float, string> d(10, 1.1, 20, 2.2, "AsHim");
    d.display();
    return 0;
}