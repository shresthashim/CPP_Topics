
#include <iostream>
using namespace std;

void test(int x){
    if(x == 1){
        throw 100;
    } else if(x == 2){
        throw 'A';
    } else if(x == 3){
        throw 3.14;
    } else {
        cout << "No exception triggered." << endl;
    }
}


int main(){
    try {
        int choice;
        cout << "Enter a number (1 for int, 2 for char, 3 for double): ";
        cin >> choice;
        test(choice);
    }
    catch (int e) {
        cerr << "Caught an integer: " << e << endl;
    }
    catch (char e) {
        cerr << "Caught a character: " << e << endl;
    }
    catch (double e) {
        cerr << "Caught a double: " << e << endl;
    }

    cout << "Program continues after exception handling." << endl;

    return 0;
}   