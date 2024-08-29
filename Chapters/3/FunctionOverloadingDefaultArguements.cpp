#include <iostream>
using namespace std;

int simple_interest(int p = 100, int r = 10, int t = 2)
{
    return (p * r * t) / 100;
}

int main()
{
    cout << "Default Simple Interest: " << simple_interest() << endl;
    cout << "One arguement Simple Interest: " << simple_interest(2000) << endl;
    cout << "Two arguement Simple Interest: " << simple_interest(2000, 5) << endl;
    cout << "Three Arguement Simple Interest: " << simple_interest(2000, 5, 3) << endl;
    return 0;
}