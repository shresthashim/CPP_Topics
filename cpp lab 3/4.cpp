//The program should have conversion function to convert 12 hr to 24 hr system

#include <iostream>
#include <iomanip>
#include <string>

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
        } else {
            hours = 12; 
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

    void display24HourFormat() {
        int h24;
        if (period == "AM") {
            if (hours == 12) {
                h24 = 0; // midnight
            } else {
                h24 = hours;
            }
        } else { // PM
            if (hours == 12) {
                h24 = 12; // noon
            } else {
                h24 = hours + 12;
            }
        }

        cout  << h24 << ":" << setw(2) << setfill('0') << minutes << endl;
    }
};

int main() {
    int hours, minutes;
    string period;

    cout << "Enter hours (1-12): ";
    cin >> hours;
    cout << "Enter minutes (0-59): ";
    cin >> minutes;
    cout << "Enter period (AM/PM): ";
    cin >> period;

    Time time(hours, minutes, period);

    cout << "24-hour format: ";
    time.display24HourFormat();  

    return 0;
}
