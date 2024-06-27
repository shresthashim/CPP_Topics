//Program to check a number is prime or not using OOP concept.

#include <iostream>

using namespace std;

class Prime {
private:
    int number;

public:
    void setNumber(int n) {
        number = n;
    }

    bool isPrime() {
        for (int i = 2; i < number; ++i) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    Prime checker;
    checker.setNumber(n);

    if (checker.isPrime()) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
