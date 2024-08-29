#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Average: " << (double)sum / n << endl;  // Typecasting sum to double ... we can also do double(sum) / n
    delete[] arr;
    return 0;
}