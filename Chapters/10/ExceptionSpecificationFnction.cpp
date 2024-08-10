#include <iostream>
#include <stdexcept>
using namespace std;

void mayThrow() throw(runtime_error) {
    throw runtime_error("This function may throw a runtime_error");
}

int main() {
    try {
        mayThrow();  // Call function that might throw an exception
    }
    catch (const runtime_error& e) {
        cerr << "Caught an exception: " << e.what() << endl;
    }

    return 0;
}
