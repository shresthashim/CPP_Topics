#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    float marks;

public:
    void readData()
    {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void displayData() const
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }

    void addStudent()
    {
        fstream fin;
        fin.open("students.txt", ios::out | ios::app);
        Student s;
        s.readData();
        fin.write((char *)&s, sizeof(s));
        fin.close();
    }
    void displayStudent()
    {
        fstream fout;
        fout.open("students.txt", ios::in);
        Student s;
        while (fout.read((char *)&s, sizeof(s)))
        {
            s.displayData();
        }
        fout.close();
    }
};

int main()
{
    Student s;
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        s.addStudent();
    }
    cout << "\nDisplaying details for all students:" << endl;
    s.displayStudent();
    return 0;
}