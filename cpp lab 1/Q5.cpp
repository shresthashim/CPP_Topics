#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    double *arr = new double[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    double average = sum / n;

    cout << "The average of the array elements is: " << average << endl;

    delete[] arr; 

    return 0;
}
