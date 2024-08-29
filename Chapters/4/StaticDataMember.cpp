// Program  to count the number of objects created manually(Note:the numbers mustn't provided by users)
#include <iostream>
using namespace std;

class ObjectCounter
{
private:
    static int count; // This is a static data member

public:
    ObjectCounter()
    {
        count++;
    }

    // This is a static member function and it can only access static data members
    static int getCount()
    {
        return count;
    }
};

int ObjectCounter::count = 0; // This is how you initialize a static data member... we cannot initialize it inside the class

int main()
{
    ObjectCounter obj1;
    ObjectCounter obj2;
    ObjectCounter obj3;

    cout << "Number of objects created: " << ObjectCounter::getCount() << endl; // This is how you invoke a static member function of a class by using classname::function_name ....we cannot use obj1.getCount() or blablabla here i.e cannot use object to access static member function

    return 0;
}
