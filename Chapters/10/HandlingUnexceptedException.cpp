#include <iostream>
#include <exception>

using namespace std;

void customUnexpected()
{
    cerr << "Unexpected exception caught." << endl;
}



void divide(int a, int b) throw(int)
{
    if (b == 0)
    {
        throw 'A';
    }
    if (a == 0)
    {
        throw 1;
    }
    cout << "Result: " << a / b << endl;
}

int main()
{

    set_unexpected(customUnexpected);
    try
    {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        divide(a, b);
    }
    catch (int e)
    {
        cerr << "Caught an integer: " << e << endl;
    }
    cout << "Program continues after exception handling." << endl;
    return 0;
}