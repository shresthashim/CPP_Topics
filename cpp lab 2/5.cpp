//Program to store the records of 5 students, where all students are of "2080" batch from "WRC".

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    static string batch;
    static string department;

public:
    // Constructor to initialize student details
    Student(string n, int r) : name(n), rollNumber(r) {}

    void display() const {
        cout << "Name: " << name << ", Roll Number: " << rollNumber 
             << ", Batch: " << batch << ", Department: " << department << endl;
    }
};

// Initialize static member variables
string Student::batch = "2080";
string Student::department = "WRC";

int main() {
    
    Student students[5] = {
        Student("Ram", 1),
        Student("Hari", 2),
        Student("John", 3),
        Student("David", 4),
        Student("Pasupati", 5)
    };

    for (int i = 0; i < 5; i++) {
        students[i].display();
    }

    return 0;
}
