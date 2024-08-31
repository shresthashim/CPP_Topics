#include <iostream>
#include <cstring> 
using namespace std;

class Book
{
    int price;
    char *author;
    char *name;

public:
    Book(const char *n, const char *a, int p) : price(p)
    {
        int lengthOfAuthor = strlen(a);
        int lengthOfName = strlen(n);

        name = new char[lengthOfName + 1];
        strcpy(name, n);

        author = new char[lengthOfAuthor + 1];
        strcpy(author, a);
    }

    void display()
    {
        cout << "Name of Book : " << name << endl;
        cout << "Name of Author : " << author << endl;
        cout << "Price : Rs. " << price << endl;
    }

    ~Book()
    {
        delete[] name;
        delete[] author;
    }
};

int main()
{
    Book b("Jhola", "Krishna", 200);
    b.display();
    return 0;
}
