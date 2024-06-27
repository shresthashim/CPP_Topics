//Program to show Dynamic Initialization of an object of class

#include <iostream>

using namespace std;

class Sample {
private:
    int value;

public:
    Sample(int v) {
        value = v;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    // Dynamic initialization of an object
    Sample* obj = new Sample(42);

    obj->display();

    delete obj;

    return 0;
}
