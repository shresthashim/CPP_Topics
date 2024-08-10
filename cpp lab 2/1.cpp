// Program to calculate distance between two points (Each point is represented in m, km) using OOP concept

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Staff
{

public:
    int code;
    string name;

public:
    void getdata()
    {
        cout << "Enter code: ";
        cin >> code;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
    }

    void putdata()
    {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
    }
};

class Teacher : public Staff
{
private:
    string subject;

public:
    void getdata()
    {
        cout << "Enter subject: ";
        getline(cin, subject);
    }

    void putdata()
    {
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Staff s[3];
    Teacher t[3];

    for (int i = 1; i <= 3; ++i) // Corrected indices
    {

        t[i].getdata();
    }
    int code;

    cout << "Enter code to search: ";
    cin >> code;

    for (int i = 1; i <= 3; ++i) // Corrected indices
    {
        if (s[i].code == code)
        {
            t[i].putdata(); // Assuming there's a logical correction for linking Staff and Teacher
        }
    }
    return 0;
}