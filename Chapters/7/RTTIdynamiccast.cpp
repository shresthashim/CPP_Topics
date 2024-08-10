#include <iostream>
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
    MyClass my, *myptr;

    Base *bptr = &my;

    if (myptr = dynamic_cast<MyClass *>(bptr))
    {
        cout << "Cast from Base to MyClass successful" << endl;
    }
    else
    {
        cout << "Cast from Base to MyClass unsuccessful" << endl;
    }

    YourClass your, *yourptr;

    bptr = &your;

    // if(yourptr = dynamic_cast<YourClass *>(bptr))
    // {
    //     cout << "Cast from Base to YourClass successful" << endl;
    // }
    // else
    // {
    //     cout << "Cast from Base to YourClass unsuccessful" << endl;
    // }

    if (myptr = dynamic_cast<MyClass *>(bptr))
    {
        cout << "Cast from Base to YourClass successful" << endl;
    }
    else
    {
        cout << "Cast from Base to YourClass unsuccessful" << endl;
    }

    return 0;
}
