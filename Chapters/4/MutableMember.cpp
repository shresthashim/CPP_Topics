#include <iostream>
using namespace std;

class MyClass
{

private:
    int value;
    mutable int value1; // This is a mutable data member
public:
    MyClass(int v, int v1) : value(v), value1(v1) {}

    void getvalue() const
    {
        // int value = value + 10; // Error as this is a constant member function and it cannot modify the data members of the class
        cout << value << endl;
        value1 = value1 + 10; // Allowed as value1 is a mutable data member
        cout << value1 << endl;
    }
};

int main()
{
    MyClass obj(10, 10);
    obj.getvalue();
    return 0;
}