#include <iostream>
using namespace std;

// Function template for adding two numbers
template <class T>
T add(T a, T b)
{
    return a + b;
}

// Function template for concatenating two strings
template <class T>
T concatenate(T a, T b)
{
    return a + b;
}

int main()
{
    int num1 = 5, num2 = 10;
    cout << "Sum: " << add(num1, num2) << std::endl;

    string str1 = "Hello, ";
    string str2 = "world!";
    cout << "Concatenated string: " << concatenate(str1, str2) << std::endl;

    return 0;
}
