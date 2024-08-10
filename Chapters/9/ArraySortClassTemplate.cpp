#include <iostream>
using namespace std;

template <class T, int size>
class Array
{
    T arr[size]; // Fixed-size array

public:
    void input()
    {
        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    void sort()
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (arr[i] < arr[j])
                {
                    T temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    void show()
    {
        cout << "Sorted array:" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    T max()
    {
        T max = arr[0];
        for (int i = 1; i < size; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }
};

int main()
{
    Array<int, 5> arr; // Fixed size of 5
    arr.input();
    arr.sort();
    arr.show();
    cout << "Max: " << arr.max() << endl;

    return 0;
}
