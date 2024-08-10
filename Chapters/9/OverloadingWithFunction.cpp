#include <iostream>
#include <cstring> // Add this line

using namespace std;

template <class T>

T max(T a, T b)
{
    return a > b ? a : b;
}

char* max(char* a, char* b)
{
 char *result;
    if (strcmp(a, b) > 0)
    {
    result = a;
    }
    else
    {
    result = b;
    }
    return result;
}

int main()
{
    int a = 10, b = 20;
    // cout << "Max of " << a << " and " << b << " is " << max<int>(a, b) << endl;
    float c = 10.5, d = 20.5;
    // cout << "Max of " << c << " and " << d << " is " << max<float>(c, d) << endl;
    char s1[] = "apple", s2[] = "orange";
    cout << "Max of " << s1 << " and " << s2 << " is " << max(s1, s2) << endl;

    return 0;
}
