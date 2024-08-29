#include <iostream>
using namespace std;

class Unary
{

private:
    int a;

public:
    Unary(int x)
    {
        a = x;
    }
    void operator++(int) // Postfix notation
    {
        a++;
    }

    void operator++() // Prefix notation
    {
        ++a;
    }

    int getA()
    {
        return a;
    }
};

int main()
{
    Unary u(5);
    u++;
    ++u;
    cout << "Value of a: " << u.getA() << endl;
    return 0;
}