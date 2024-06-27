//using friend function

#include <iostream>
using namespace std;

class ObjectCounter {
private:
    static int count;

public:
    ObjectCounter() {
        count++;
    }
    friend int getCount();
};


int ObjectCounter::count = 0;

// Friend function definition to access private static member count
int getCount() {
    return ObjectCounter::count; 
}

int main() {
    ObjectCounter obj1;
    ObjectCounter obj2;
    ObjectCounter obj3;

    cout << "Number of objects created: " << getCount() << endl;

    return 0;
}
