#include <iostream>
using namespace std;
double divide(double numerator, double denominator)
{
    try
    {
        if (denominator == 0)
        {
            throw runtime_error("Division by zero");
        }
        return numerator / denominator;
    }
    catch (const runtime_error &e)
    {

        cerr << "Error in divide function: " << e.what() << endl;
        throw;
    }
}

int main()
{
    double num, den;
    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> den;

    try
    {
        double result = divide(num, den);
        cout << "Result: " << result << endl;
    }
    catch (const runtime_error e)
    {
        cerr << "Caught in main: " << e.what() << endl;
    }

    return 0;
}
