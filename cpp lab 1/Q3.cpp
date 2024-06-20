#include <iostream>
using namespace std;

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    int x = 10, y = 20;
    int minimum = min(x, y);
    cout << "Minimum of " << x << " and " << y << " is " << minimum << endl;

    minimum = min(minimum, -100);
    cout << "Minimum of previous minimum and -100 is " << minimum << endl;

    return 0;
}
