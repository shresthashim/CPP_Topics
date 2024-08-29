#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width, height;

public:
    // Default constructor
    Rectangle()
    {
        width = 0;
        height = 0;
    }

    // Parameterized constructor with one parameter
    Rectangle(int w)
    {
        width = w;
        height = w;
    }

    // Parameterized constructor with two parameters
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }

    // Method to display the dimensions
    void display()
    {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main()
{
    Rectangle rect1;         // Calls the default constructor
    Rectangle rect2(10);     // Calls the constructor with one parameter
    Rectangle rect3(10, 20); // Calls the constructor with two parameters

    rect1.display();
    rect2.display();
    rect3.display();

    return 0;
}
