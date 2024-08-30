#include <iostream>
using namespace std;

const int MAX = 3;

class Array
{

    int arr[MAX];

public:
    int &operator[](int i)
    {
        if (i < 0 || i >= MAX)
        {
            cout << "Array index out of bound, exiting";
            exit(0);
        }
        return arr[i];
    }
};

int main()
{

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    Array a;
    cout << "Enter the elements: ";
    for (int i = 0; i < MAX; i++)
    {
        cin >> a[i]; // Overloaded [] operator
    }
    for (int i = 0; i < MAX; i++)
    {
        cout << a[i] << " ";  // Overloaded [] operator
    }
    return 0;
}
