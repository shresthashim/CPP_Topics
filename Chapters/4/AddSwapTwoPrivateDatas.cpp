#include <iostream>
using namespace std;

class B;

class A
{
private:
    int valueA;

public:
    A(int v) : valueA(v) {}

    friend int add(A a, B b);

    friend void swap(A &a, B &b);

    int getValueA()
    {
        return valueA;
    }
};

class B
{
private:
    int valueB;

public:
    B(int v) : valueB(v) {}
    friend int add(A a, B b);

    friend void swap(A &a, B &b);

    int getValueB()
    {
        return valueB;
    }
};

int add(A a, B b)
{
    return a.valueA + b.valueB;
}

void swap(A &a, B &b)
{
    int temp;
    temp = a.valueA;
    a.valueA = b.valueB;
    b.valueB = temp;
}

int main()
{
    A a(2);
    B b(3);
    cout << "SUM : " << add(a, b) << endl;
    swap(a, b);
    cout << "After swap: " << endl;
    cout << "A's value: " << a.getValueA() << endl;
    cout << "B's value: " << b.getValueB() << endl;

    return 0;
}