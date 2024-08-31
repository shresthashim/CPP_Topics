#include <iostream>
using namespace std;

class Rupee
{

    int rupee;

public:
    Rupee(int r) : rupee(r) {}

    bool operator>(Rupee rup)
    {

        return (rupee > rup.rupee);
    }
};

int main()
{

    int r1, r2;

    cout << "Enter two amount in Rupee : " << endl;
    cin >> r1 >> r2;

    Rupee rup1(r1);
    Rupee rup2(r2);

    if (rup1 > rup2)
    {

        cout << "Rupee 1 is GREATER then Rupee 2.";
    }
    else
    {
        cout << "Rupee 1 is SMALLER than Rupee 2.";
    }
    return 0;
}