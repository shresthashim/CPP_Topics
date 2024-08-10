#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student
{

    char name[30];

public:
    int marks;

    void readData()
    {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData() const
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student std[3];
    fstream f;
    f.open("studentsmarks.txt", ios::out | ios::app | ios::in);
    for (int i = 0; i < 3; i++)
    {
        std[i].readData();
        f.write((char *)&std[i], sizeof(std[i]));
    }
    f.seekg(0);
    int i = 0;
    while (!f.eof())
    {
        Student s;
        f.read((char *)&s, sizeof(s));
        i++;
    }
    Student temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (std[i].marks > std[j].marks)
            {
                temp = std[i];
                std[i] = std[j];
                std[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        std[i].displayData();
    }
    f.close();

    return 0;
}