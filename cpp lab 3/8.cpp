//WAP to add and swap private data of two different classes. Use separate function for add and swap


#include <iostream>

using namespace std;

class B; // Forward declaration of class B

class A {
private:
    int valueA;

public:
    A(int value) {
        valueA = value;
    }

    friend int addValues(A& a, B& b);//for using same function name  in different classes
    friend void swapValues(A& a, B& b);

    void display() {
        cout << "A: " << valueA << endl;
    }
};

class B {
private:
    int valueB;

public:
    B(int value){
        valueB = value;
    }

    friend int addValues(A& a, B& b);
    friend void swapValues(A& a, B& b);

    void display() {
        cout << "B: " << valueB << endl;
    }
};

int addValues(A& a, B& b) {
    return a.valueA + b.valueB;
}

void swapValues(A& a, B& b) {
    int temp = a.valueA;
    a.valueA = b.valueB;
    b.valueB = temp;
}

int main() {
    A objA(10);
    B objB(20);

    cout << "Before swap:" << endl;
    objA.display();
    objB.display();

    swapValues(objA, objB);

    cout << "After swap:" << endl;
    objA.display();
    objB.display();

    int sum = addValues(objA, objB);
    cout << "Sum: " << sum << endl;

    return 0;
}
