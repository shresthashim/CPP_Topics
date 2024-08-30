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
};

int main()
{
    C obj;
    // obj.show(); // Error: Ambiguity

    obj.A::show();
    obj.B::show();

    return 0;
}