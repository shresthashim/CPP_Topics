#include <iostream>
using namespace std;

class GrandParent

{

public:
    GrandParent()
    {
        cout << "Constructor of Base class" << endl;
    }
};

class Parent1 : virtual public GrandParent
{
public:
    Parent1()
    {
        cout << "Constructor of Parent1 class" << endl;
    }
};

class Parent2 : virtual public GrandParent
{
public:
    Parent2()
    {
        cout << "Constructor of Parent2 class" << endl;
    }
};

class Child : public Parent1, public Parent2
{
public:
    Child()
    {
        cout << "Constructor of Child class" << endl;
    }
};

int main()
{
    Child c;
    return 0;
}

// Output:
// Constructor of Base class
// Constructor of Parent1 class
// Constructor of Parent2 class
// Constructor of Child class
// In the above code, the constructor of the virtual base class GrandParent is called only once. This is because the virtual keyword is used while inheriting the base class GrandParent in the derived classes Parent1 and Parent2. This is known as constructor invocation in virtual base class inheritance

// If no virtual base class, then Output:
// Constructor of Base class
// Constructor of Parent1 class
// Constructor of Base class
// Constructor of Parent2 class
// Constructor of Child class