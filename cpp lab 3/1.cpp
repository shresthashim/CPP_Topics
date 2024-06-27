//3.1 Program to count number of objects created automatically
#include <iostream>

using namespace std;

class Counter {
   private:
    static int count;

   public:
    Counter() { 
        count++; 
        }
    static int getdata() { 
        return count; 
        }
};

int Counter::count = 0;

int main() {
    Counter obj1;
    Counter obj2;
    Counter obj3;
    Counter obj4;
    Counter obj5;

    cout << "Number of objects created automatically: " << Counter::getdata()
         << endl;
    return 0;
}