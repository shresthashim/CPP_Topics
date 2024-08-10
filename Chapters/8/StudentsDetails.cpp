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
    // Function to read student details from the user
    void readData()
    {
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
        cin.ignore(); // To ignore the newline character after entering marks
    }

    // Function to display student details
    void displayData() const
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    cin.ignore(); // To ignore the newline character after entering the number

    Student students[n];

    // Create and open a file to write student information
    ofstream outFile("students.txt");

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        students[i].readData();

        // Write student details to the file
        outFile << "Student " << i + 1 << " Details:" << endl;
        outFile << "Name: " << students[i].name << endl;
        outFile << "Roll Number: " << students[i].rollNo << endl;
        outFile << "Marks: " << students[i].marks << endl;
        outFile << endl;

        // Display student details on the console
        cout << "\nDisplaying details for student " << i + 1 << ":" << endl;
        students[i].displayData();
    }

    // Close the file
    outFile.close();

    cout << "\nStudent details have been written to 'students.txt' file." << endl;

    return 0;
}
