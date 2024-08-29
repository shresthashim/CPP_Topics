#include <iostream>
using namespace std;

class Complex
{

private:
    int real, imag;

public:
    Complex() {}
    Complex(int r, int i) : real(r), imag(i) {}

    void display()
    {
        cout << real << " + i" << imag << endl;
    }

    friend Complex add(Complex c1, Complex c2);
};

Complex add(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp; 
}

int main()
{
    Complex c1(3, 4), c2(5, 10), c3;
    c3 = add(c1, c2);
    c3.display();

    return 0;
}