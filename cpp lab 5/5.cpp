// write a c++ program that opens "welcome.txt" for both reading and writing

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream file("welcome.txt", ios::in | ios::out | ios::app);

    if (!file.is_open())
    {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    file << "Welcome File Handling!" << endl;

    file.seekg(0);

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
    return 0;
}
