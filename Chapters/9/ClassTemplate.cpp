#include <iostream>
#include <string> // For std::string

using namespace std;

// Class template definition
template <class T>
class Container {
private:
    T value;  // Stores the value of type T
public:
    // Constructor to initialize the value
    Container(T v) : value(v) {}

    // Method to get the value
    T getValue() const {
        return value;
    }
};

int main() {
    Container<int> intContainer(42);            // Template argument specified as int
    Container<double> doubleContainer(3.14);    // Template argument deduced as double
    Container<string> stringContainer("Hello, World!");  // Template argument deduced as string

    cout << "Value in intContainer: " << intContainer.getValue() << endl;
    cout << "Value in doubleContainer: " << doubleContainer.getValue() << endl;
    cout << "Value in stringContainer: " << stringContainer.getValue() << endl;

    return 0;
}
