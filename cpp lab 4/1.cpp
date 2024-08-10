#include <iostream>
using namespace std;

class Cricketer
{
protected:
    string name;
    int age;
    int matches;

public:
    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter number of matches played: ";
        cin >> matches;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Number of matches played: " << matches << endl;
    }
};

class Bowler : public Cricketer
{
protected:
    int wickets;

public:
    void getWickets()
    {
        cout << "Enter number of wickets: ";
        cin >> wickets;
    }
    void displayWickets()
    {
        cout << "Number of wickets: " << wickets << endl;
    }
};

class Batsman : public Cricketer
{
private:
    int runs;
    int centuries;

public:
    void getRunsCenturies()
    {
        cout << "Enter number of runs: ";
        cin >> runs;
        cout << "Enter number of centuries: ";
        cin >> centuries;
    }
    void displayRunsCenturies()
    {
        cout << "Number of runs: " << runs << endl;
        cout << "Number of centuries: " << centuries << endl;
    }
};

int main()
{
    Bowler b;
    Batsman bt;
    cout << "Enter bowler details: " << endl;
    b.getdata();
    b.getWickets();

    cout << "Enter batsman details: " << endl;
    bt.getdata();
    bt.getRunsCenturies();

    cout << "Displaying Bowler details: " << endl;
    b.display();
    b.displayWickets();

    cout << "Displaying Batsman details: " << endl;
    bt.display();
    bt.displayRunsCenturies();
    return 0;
}