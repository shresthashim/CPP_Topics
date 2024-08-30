#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Class A" << endl;
    }
};

class B
{
public:
    void show()
    {
        cout << "Class B" << endl;
    }
};

class C : public A, public B
{
public:
    void show()
    {

        cout << "Class C" << endl;
    }
};

int main()
{
    C obj;
    obj.show(); // Output: Class C ... it overrides the show() function of both base classes A and class B

    obj.A::show(); // Output: Class A ... it calls the show() function of class A

    return 0;
}