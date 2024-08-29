
#include <iostream>
using namespace std;

class Box
{
    int length;

public:
    // Constructor to initialize length
    Box(int length)
    {
        // Using 'this' pointer to differentiate between the parameter and the class member
        this->length = length;
    }

    // Function to display length
    void display()
    {
        cout << "Length: " << this->length << endl;
    }
};

int main()
{
    Box box(10);
    box.display(); // Output: Length: 10

    return 0;
}
