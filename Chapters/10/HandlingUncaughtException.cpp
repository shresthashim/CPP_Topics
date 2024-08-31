#include <iostream>

using namespace std;

void test_handler()
{
    cout << "INSIDE TEST HANDLER" << endl;
}

int main()
{
    set_terminate(test_handler);

    try
    {
        throw 10;
    }
    catch (char c)
    {
        cerr << "Caught a character: " << c << endl;
    }
    return 0;
}

// #include <iostream>
// #include <cmath>     // For sqrt function
// #include <stdexcept> // For standard exceptions

// using namespace std;

// double calculateSquareRoot(double number)
// {
//     if (number < 0)
//     {
//         throw invalid_argument("Cannot calculate square root of a negative number."); // Throw exception
//     }
//     return sqrt(number); // Calculate square root
// }

// void terminateAlternative()
// {
//     cerr << "Uncaught exception. Program will terminate." << endl;
// }

// int main()
// {

//     set_terminate(terminateAlternative);

//     double num;
//     cout << "Enter a number: ";
//     cin >> num;

//     try
//     {
//         double result = calculateSquareRoot(num); // Call function that might throw an exception
//         cout << "Square root: " << result << endl;
//     }
//     catch (const invalid_argument &e)
//     {
//         cerr << "Error: " << e.what() << endl; // Catch and display exception with argument
//         throw;
//     }

//     return 0;
// }
