#include <iostream>
using namespace std;

void calculate(int a, int b, int &sum, int &diff, int &mult)
{
    sum = a + b;
    diff = a - b;
    mult = a * b;
}

int main()
{
    int a, b;
    int sum, diff, mult;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    calculate(a, b, sum, diff, mult);
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Multiplication: " << mult << endl;
    return 0;
}
