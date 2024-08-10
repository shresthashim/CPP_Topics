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

    if (typeid(*bptr) == typeid(my))
    {
        cout << "Cast from Base to MyClass successful" << endl;
    }
    else
    {
        cout << "Cast from Base to MyClass unsuccessful" << endl;
    }

    cout << typeid(*bptr).name() << endl;
    cout << typeid(my).name() << endl;
    cout << typeid(45).name() << endl;
    cout << typeid(45.5).name() << endl;
    cout << typeid('4').name() << endl;
    return 0;
}