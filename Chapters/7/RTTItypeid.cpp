#include <iostream>
#include <typeinfo> // Include the <typeinfo> header

using namespace std;

class Base
{
public:
    virtual void fun() {}
};

class MyClass : public Base
{
};

class YourClass : public Base
{
};

int main()
{
    MyClass my;
    Base *bptr = &my;

    // typeid(*bptr): Gets the type of the object bptr is pointing to. Here, it points to MyClass.
    // typeid(my): Gets the type of the object my, which is MyClass.

    if (typeid(*bptr) == typeid(my))
    {
        cout << "bptr is pointing to an object of type MyClass" << endl;
    }
    else
    {
        cout << "bptr is not pointing to an object of type MyClass" << endl;
    }

    cout << typeid(*bptr).name() << endl;
    cout << typeid(my).name() << endl;
    cout << typeid(45).name() << endl;
    cout << typeid(45.5).name() << endl;
    cout << typeid('4').name() << endl;

    return 0;
}