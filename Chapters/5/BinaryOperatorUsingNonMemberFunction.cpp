#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    friend Complex operator+(Complex obj1, Complex obj2);
    void print()
    {
        cout << real << " + i" << imag << endl;
    }
};

Complex operator+(Complex obj1, Complex obj2)
{
    Complex res;
    res.real = obj1.real + obj2.real;
    res.imag = obj1.imag + obj2.imag;
    return res;
}

int main()
{
    Complex c1(3, 4), c2(5, 6);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}