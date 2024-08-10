#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Library
{
    char name[20];
    int id;
    int numBooks;
    int day, month, year;

public:
    void readData()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Number of Books: ";
        cin >> numBooks;
        cout << "Enter Date of Issue: ";
        cin >> day >> month >> year;
    }

    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Number of Books: " << numBooks << endl;
        cout << "Date of Issue: " << day << "/" << month << "/" << year << endl;
    }

    void addBook()
    {
        fstream fin;
        fin.open("library.txt", ios::out | ios::app);
        fin << "Name: " << name << endl;
        fin << "ID: " << id << endl;
        fin << "Number of Books: " << numBooks << endl;
        fin << "Date of Issue: " << day << "/" << month << "/" << year << endl;
        fin << endl;
        fin.close();
    }
    void displayBook()
    {
        fstream fout;
        fout.open("library.txt", ios::in);
        string line;
        while (getline(fout, line))
        {
            cout << line << endl;
        }
        fout.close();
    }
};

int main()
{
    Library l;
    cout << "Enter the details of the book : " << endl;
    l.readData();
    l.addBook();
    cout << "The details of the books are : " << endl;
    l.displayBook();
    return 0;
}