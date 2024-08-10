#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    // Using width() to set field width
    int num = 42;
    cout << "Width Example:" << endl;
    cout << "Default width: " << num << endl;
    cout << "Width 10: " << setw(10) << num << endl;

    // Using precision() to set the number of decimal places
    double pi = 3.14159265358979323846;
    cout << "\nPrecision Example:" << endl;
    cout << "Default precision: " << pi << endl;
    cout << "Precision 3: " << setprecision(3) << pi << endl;
    cout << "Precision 5: " << setprecision(5) << pi << endl;

    // Using fill() to fill spaces with characters
    cout << "\nFill Example:" << endl;
    cout << "Default fill: " << setw(10) << num << endl;
    cout << "Fill with '*': " << setfill('*') << setw(10) << num << endl;

    // Reset fill character to default
    cout << setfill(' ');

    // Using setf() to set flags
    cout << "\nFlags Example:" << endl;
    cout << "Default: " << setw(10) << num << endl;
    
    cout.setf(ios::left, ios::adjustfield); // Set left alignment
    cout << "Left aligned: " << setw(10) << num << endl;
    cout.unsetf(ios::adjustfield); // Unset alignment

    cout.setf(ios::right, ios::adjustfield); // Set right alignment
    cout << "Right aligned: " << setw(10) << num << endl;
    cout.unsetf(ios::adjustfield); // Unset alignment

    cout.setf(ios::showpoint); // Force display of decimal point
    cout << "Showpoint: " << pi << endl;
    cout.unsetf(ios::showpoint); // Unset showpoint
    return 0;
}