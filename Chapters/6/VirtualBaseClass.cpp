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

class B : virtual public A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
    public:
    void showD()
    {
        show();
    }
};

int main()
{
    D obj;
    // obj.show(); // Error: Ambiguity ... we can resolve this by using virtual base class
    obj.showD();



    return 0;
}