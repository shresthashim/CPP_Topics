#include <iostream>
#include <string.h>

using namespace std;

class String
{

private:
    char s[20];

public:
    void get()
    {
        cout << "Enter string:";
        cin >> s;
    }

    String operator+(String x)
    {
        String temp;
        strcpy(temp.s, s);
        strcat(temp.s, x.s);
        return temp;
    }
    void display()
    {
        cout << s << endl;
    }
};

int main()
{
    String s1, s2, s3;
    s1.get();
    s2.get();
    s3 = s1 + s2;
    s3.display();

    return 0;
}