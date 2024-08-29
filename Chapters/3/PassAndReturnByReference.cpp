// Function to return reference of smaller of two numbers using reference return type  (float &smaller(float &a, float &b)) and assign the average of two numbers to the smaller number.

#include <iostream>
using namespace std;

float &smaller(float &a, float &b)
{
    return a < b ? a : b;
}

int main()
{

    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Value of a and b before assigning : " << a << " " << b << endl;

    float avg = (a + b) / 2;

    smaller(a, b) = avg;

    cout << "Value of a and b after assigning : " << a << " " << b << endl;

    return 0;
}