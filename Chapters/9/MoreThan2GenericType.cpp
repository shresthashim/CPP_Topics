#include <iostream>
using namespace std;

template <class T1, class T2, class T3>

class Record
{

private:
    T1 a;
    T2 b;
    T3 c;

public:
    Record(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }

    void show();
};

template <class T1, class T2, class T3>
void Record<T1, T2, T3>::show()
{
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
}

int main()
{

    // Record<int> r1(1, 2.2, 3); // Error: 2.2 is not an integer if I use only one generic type

    Record<int, double, int> r1(1, 2.2, 3); // In more than one generic type, I can use different types

    r1.show();
}