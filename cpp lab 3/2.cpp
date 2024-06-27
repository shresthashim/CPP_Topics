//Program to show Constructor Overloading

#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }
    

    Rectangle(int l) {
        length = l;
        breadth = l;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int getArea() {
        return length * breadth;
    }

    void display() {
        cout << "Length: " << length << ", breadth: " << breadth << ", Area: " << getArea() << endl;
    }
};

int main() {
    Rectangle rect1;
    Rectangle rect2(5);
    Rectangle rect3(4, 6);

    rect1.display();  
    rect2.display();  
    rect3.display();  

    return 0;
}
