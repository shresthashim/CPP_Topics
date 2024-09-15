#include <iostream>
using namespace std;

// Non-template function for int
void display(int value)
{
    cout << "Non-template int display: " << value << endl;
}

// Function template for other types
template <typename T>
void display(T value)
{
    cout << "Template display: " << value << endl;
}

int main()
{
    int intValue = 42;
    double doubleValue = 3.14;
    string stringValue = "Hello";

    // Calls non-template function for int because void display(int value) is more specific
    display(intValue);

    // Calls template function for double
    display
    (doubleValue);

    // Calls template function for string
    display(stringValue);

    return 0;
}

// When we are defining both function template and normal function with exactly the same name, then compiler will call the more specific function.