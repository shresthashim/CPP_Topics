#include <iostream>
using namespace std;

class GrandParent
{
public:
    GrandParent()
    {
        cout << "Constructor of Base class" << endl;
    }
    ~GrandParent()
    {
        cout << "Destructor of Base class" << endl;
    }
};

class Parent1 : virtual public GrandParent
{
public:
    Parent1()
    {
        cout << "Constructor of Parent1 class" << endl;
    }
    ~Parent1()
    {
        cout << "Destructor of Parent1 class" << endl;
    }
};

class Parent2 : virtual public GrandParent
{

public:
    Parent2()
    {
        cout << "Constructor of Parent2 class" << endl;
    }
    ~Parent2()
    {
        cout << "Destructor of Parent2 class" << endl;
    }
};

class Child : public Parent1, public Parent2
{

public:
    Child()
    {
        cout << "Constructor of Child class" << endl;
    }
    ~Child()
    {
        cout << "Destructor of Child class" << endl;
    }
};

int main()
{
    Child c;
    return 0;
}
