//WAP to overload increment operator (++) using member function.

#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    // Overload ++ operator as member function (prefix increment)
    Counter& operator++() {
        count++;
        return *this;
    //current object lai access garna
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1;

    cout << "Initially, ";
    c1.display();

    ++c1; 

    cout << "After incrementing once, ";
    c1.display();

    ++c1; 

    cout << "After incrementing twice, ";
    c1.display();

    return 0;
}
