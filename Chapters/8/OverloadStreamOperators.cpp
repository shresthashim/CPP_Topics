#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    friend istream &operator>>(istream &in, Complex &c);
    friend ostream &operator<<(ostream &out, const Complex &c);
};

istream &operator>>(istream &in, Complex &c)
{
    cout << "Enter Real Part: ";
    in >> c.real;
    cout << "Enter Imaginary Part: ";
    in >> c.imag;
    return in;
}

ostream &operator<<(ostream &out, const Complex &c)
{
    out << c.real;
    out << "+i" << c.imag << endl;
    return out;
}

int main()
{
    Complex c1;
    cin >> c1;
    cout << "The complex object is: ";
    cout << c1;
    return 0;
}