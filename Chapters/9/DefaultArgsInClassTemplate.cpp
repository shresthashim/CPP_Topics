#include <iostream>

using namespace std;

template <class T = int, int size = 3> // Default arguments for class template

class Array
{
    T arr[size];

public:
    Array(T a[size])
    {
        for (int i = 0; i < size; ++i)
        {
            arr[i] = a[i];
        }
    }

    void show()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int a[] = {1, 2, 3};
    Array<> arr1(a);
    arr1.show();

    double b[] = {1.1, 2.2, 3.3};
    Array<double> arr2(b);
    arr2.show();

    return 0;
}