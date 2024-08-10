#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create a vector of integers
    vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    // Access and display elements using the index
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers[1] << endl;

    // Modify an element
    numbers[2] = 100;

    // Display all elements using a range-based for loop
    cout << "All elements:" << endl;
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Display all elements using an iterator
    cout << "Elements using iterator:" << endl;
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Remove the last element
    numbers.pop_back();

    // Display the size of the vector
    cout << "Size of vector: " << numbers.size() << endl;

    return 0;
}










// Array Sorting using Vector and Sort from algorithm

#include <iostream>
#include <vector>
#include <algorithm> // For sort

using namespace std;

int main()
{
    vector<int> numbers = {5, 3, 8, 1, 4};

    // Sorting using an STL algorithm
    sort(numbers.begin(), numbers.end());

    // Displaying the sorted vector
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}










// Array Sorting using Vector and NOT USING Sort from algorithm
#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] < v[j])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

int main()
{

    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(8);
    v.push_back(1);

    cout << "Before Sorting: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v);

    cout << "After Sorting: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}