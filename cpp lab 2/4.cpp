//Program  to count the number of objects created manually(Note:the numbers mustn't provided by users)
#include <iostream>
using namespace std;

class ObjectCounter {
private:
    static int count; 

public:
    ObjectCounter() {
        count++; 
    }

   
    static int getCount() {
        return count;
    }
};


int ObjectCounter::count = 0;

int main() {
    ObjectCounter obj1;
    ObjectCounter obj2;
    ObjectCounter obj3;

    cout << "Number of objects created: " << ObjectCounter::getCount() << endl;

    return 0;
}
