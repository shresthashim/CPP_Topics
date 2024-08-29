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
    void print()
    {
        cout << real << " + i" << imag << endl;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp; // Returning an object
    }

    void sub(Complex c1, Complex c2)
    {
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
    } // This function is not returning object
};

int main()
{
    Complex c1(3, 4), c2(5, 10), c3, c4;
    c3 = c1.add(c2);
    c3.print();
    c4.sub(c1, c2);
    c4.print();

    return 0;
}