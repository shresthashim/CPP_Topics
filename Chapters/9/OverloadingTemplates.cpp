#include <iostream>

// Function template for adding two numbers
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Function template for concatenating two strings
template <typename T>
T concatenate(T a, T b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10;
    std::cout << "Sum: " << add(num1, num2) << std::endl;

    std::string str1 = "Hello, ";
    std::string str2 = "world!";
    std::cout << "Concatenated string: " << concatenate(str1, str2) << std::endl;

    return 0;
}



