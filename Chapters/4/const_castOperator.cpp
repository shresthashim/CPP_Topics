#include <iostream>
using namespace std;

class MyClass
{
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    // Const member function
    int getValue() const
    {
        return value;
    }

    // Function to modify value using const_cast
    void modifyValue() const
    {
        int *modifiableValue = const_cast<int *>(&value);
        *modifiableValue = 20; // Modify the value
    }
};

int main()
{
    MyClass obj(10);

    cout << "Before modification: " << obj.getValue() << endl;

    obj.modifyValue(); // Modify the value

    cout << "After modification: " << obj.getValue() << endl; // Shows modification

    return 0;
}
