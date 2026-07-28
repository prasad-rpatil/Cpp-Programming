#include <iostream>
using namespace std;

int main(){
    int a = 4,  b = 8;

    cout << (a & b) << endl; // Bitwise AND operator
    cout << (a | b) << endl; // Bitwise OR operator
    cout << (a ^ b) << endl; // Bitwise XOR operator
    cout << (10 << 2) << endl; //Bitwise leftShift
    cout << (10 >> 2) << endl; //Bitwise rightShift
    return 0;
}