#include <iostream>
#include <cmath>     // For sqrt function
#include <stdexcept> // For standard exceptions

using namespace std;

double calculateSquareRoot(double number)
{
    if (number < 0)
    {
        throw invalid_argument("Cannot calculate square root of a negative number."); // Throw exception
    }
    return sqrt(number); 
}

int main()
{
    double num;
    cout << "Enter a number: ";
    cin >> num;

    try
    {
        double result = calculateSquareRoot(num); // Call function that might throw an exception
        cout << "Square root: " << result << endl;
    }
    catch (const invalid_argument &e)
    {
        cerr << "Error: " << e.what() << endl; // Catch and display exception with argument

    }

    return 0;
}
