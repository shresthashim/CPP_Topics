#include <iostream>
using namespace std;

class MyClass
{
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    // Constant member function
    int getValue() const
    {
        // int value = value + 10; // Error as this is a constant member function and it cannot modify the data members of the class
        return value;
    }

    int getValue1()
    {
        return value;
    }
};

int main()
{
    MyClass obj(10);
    obj.getValue(); // Allowed because getValue() is const

    MyClass const constObj(20); // Constant object
    constObj.getValue();        // Allowed because getValue() is const

    // constObj.getValue1(); // Error as getValue1() is not a constant member function

    return 0;
}
