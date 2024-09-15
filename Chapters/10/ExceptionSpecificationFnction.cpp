#include <iostream>
#include <stdexcept>
using namespace std;

// This function can only throw a runtime_error as it is specified in the throw() clause
// If it throws any other exception, the program will call terminate() function

void mayThrow() throw(runtime_error)
{
    throw runtime_error("This function may throw a runtime_error");
}

int main()
{
    try
    {
        mayThrow();
    }
    catch (const runtime_error &e)
    {
        cerr << "Caught an exception: " << e.what() << endl;
    }

    return 0;
}
