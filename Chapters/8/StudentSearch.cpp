#include <iostream>
#include <fstream>

using namespace std;

class Student
{
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
        fin.open("studentsearch.txt", ios::out | ios::app);
        Student s;
        s.readData();
        fin.write((char *)&s, sizeof(s));
        fin.close();
    }

    void searchStudent(int rollNo)
    {
        fstream fout;
        fout.open("studentsearch.txt", ios::in);
        Student s;
        while (fout.read((char *)&s, sizeof(s)))
        {
            if (s.rollNo == rollNo)
            {
                s.displayData();
                return;
            }
        }
        cout << "Student not found" << endl;
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
            s.addStudent();
        }
       
        cout << "Enter the roll number to search: ";
        int rollNo;
        cin >> rollNo;
        s.searchStudent(rollNo);

        return 0;
    }
