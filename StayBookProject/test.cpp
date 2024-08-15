#include <iostream>
#include <iomanip> // For std::setprecision and std::fixed
using namespace std;

int main() {
    float x = 5.5005, y = 66.769;
    
    cout << setprecision(3); // Sets precision to 3 digits after the decimal point
    cout << "Fixed precision 3: " << x << " " << y << endl;
    
    return 0;
}
