#include <iostream>
using namespace std;

int main() {

    cout << int('A') << endl; //65
    cout << int('a') << endl; //97
    



    bool  a = true, b = false;
    cout << (a && b) << endl; // AND false
    cout << (a || b) << endl; //  OR true
    cout << (a ^ b ) << endl; // XOR true
    cout << (!a) << endl; // NOT false
    cout << (true ^ true) << endl; // false 
    cout << (false ^ false) << endl; // false
    

    return 0;
}
