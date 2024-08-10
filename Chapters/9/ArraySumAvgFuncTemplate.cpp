#include <iostream>
using namespace std;

template <class T>
T sum(T arr[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

template <class T>
T avg(T arr[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

int main()
{
    int arr[10], n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum: " << sum(arr, n) << endl;
    cout << "Average: " << avg(arr, n) << endl;

    return 0;
}