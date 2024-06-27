// Define a class named Distance with meter and centimeter as private members. Use appropriate member functions to read and display data members. Use class Distance to read two objects of distance class and add them by passing this object to the function and display the result.

#include <iostream>

using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

public:
    Distance() : meters(0), centimeters(0) {}

    void readInMeters() {
        cout << "Enter first distance in meters: ";
        cin >> meters;

    }

    void readInCentimeters() {
        cout << "Enter Second distance in centimeters: ";
        cin >> centimeters;
        
    }

    void displayDistance() {
        cout << meters << " meters and " << centimeters << " centimeters" << endl;
    }

    void addDistance( Distance d1,  Distance d2) {
        centimeters = d1.centimeters + d2.centimeters;
        meters = d1.meters + d2.meters + centimeters / 100;
        centimeters %= 100;
    }
};

int main() {
    Distance d1, d2, d3;

    d1.readInMeters();
    d2.readInCentimeters();

    d3.addDistance(d1, d2);

    cout << "First distance: ";
    d1.displayDistance();
    cout << "Second distance: ";
    d2.displayDistance();
    cout << "Sum of distances: ";
    d3.displayDistance();

    return 0;
}
