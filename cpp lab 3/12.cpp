//Define a class Distance with data members meters and centimeters and appropriate function members. Overload binary plus operator to use for addition of two objects of the class using member function.

#include <iostream>

using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

public:
    Distance(int m, int cm) : meters(m), centimeters(cm) {}

  
    Distance operator+( Distance& d) {
        Distance temp(0, 0);
        temp.meters = this->meters + d.meters;
        temp.centimeters = this->centimeters + d.centimeters;
        
        if (temp.centimeters >= 100) {
            temp.meters += temp.centimeters / 100;
            temp.centimeters %= 100;
        }
        
        return temp;
    }

    void display() {
        cout << "Meters: " << meters << " Centimeters: " << centimeters << endl;
    }
};

int main() {
    Distance d1(5, 60); 
    Distance d2(3, 40);

    Distance d3 = d1 + d2;

    cout << "Distance d1: ";
    d1.display();
    cout << "Distance d2: ";
    d2.display();
    cout << "Distance d3 (d1 + d2): ";
    d3.display();

    return 0;
}
