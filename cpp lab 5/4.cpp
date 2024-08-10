// write a c++ program that prompts the user to enter an integer, a character, and a line of text, displaying each entered value, and then outputs a predefined message using get, put, getline and write

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    int num;
    char ch;
    string text;

    cout << "Enter an integer: ";
    cin >> num;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter a line of text: ";
    cin.ignore();
    getline(cin, text);

    ofstream outputFile("output.txt");

    outputFile.put(ch);

    outputFile.write(text.c_str(), text.length());

    ifstream inputFile("output.txt");

    inputFile.get(ch);
    getline(inputFile, text);

    cout << "Integer: " << num << endl;
    cout << "Character: " << ch << endl;
    cout << "Text: " << text << endl;

    cout << "Hello I am a predefined message!" << endl;

    return 0;
}