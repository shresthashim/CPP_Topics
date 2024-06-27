//Program that creates a class which represent time measurement in 12 hr system.

#include <iostream>
#include <iomanip>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    string period;

public:
    Time(int h, int m, string p) {
        if (h >= 1 && h <= 12) {
            hours = h;
        } else if(h>12 && h<=24) {
            hours = h-12; 
        }else{
            hours = 0;
        }

        if (m >= 0 && m < 60) {
            minutes = m;
        } else {
            minutes = 0;
        }

        if (p == "AM" || p == "PM") {
            period = p;
        } else {
            period = "AM"; 
        }
    }

    void displayTime() {
        cout << hours << ":" << setw(2) << setfill('0')<< minutes << " " << period << endl;
    }
};

int main() {

    Time time(13, 00, "PM");

    time.displayTime(); 

    return 0;
}
