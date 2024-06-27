//WAP as your choice to use this pointer to return an object of class from a member function of class.

#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number(int n) : num(n) {}

    // Member function to add a number to the current object and return the updated object
    Number addNumber(int x) {
        this->num += x; // Increment num by x using this pointer
        return *this;   // Return the current object
    }

    void display()  {
        cout << "Current value: " << num << endl;
    }
};

int main() {
    Number num1(5);

    num1.addNumber(3);
    num1.display();

    return 0;
}
